/* AnimJoint data for relocData file 1866 (FTYoshiAnimDownBackD) */
/* 3184 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDownBackD_joint1[18];
extern u16 dFTYoshiAnimDownBackD_joint2[30];
extern u16 dFTYoshiAnimDownBackD_joint3[92];
extern u16 dFTYoshiAnimDownBackD_joint4[22];
extern u16 dFTYoshiAnimDownBackD_joint5[24];
extern u16 dFTYoshiAnimDownBackD_joint7[10];
extern u16 dFTYoshiAnimDownBackD_joint8[102];
extern u16 dFTYoshiAnimDownBackD_joint9[44];
extern u16 dFTYoshiAnimDownBackD_joint11[10];
extern u16 dFTYoshiAnimDownBackD_joint12[104];
extern u16 dFTYoshiAnimDownBackD_joint13[44];
extern u16 dFTYoshiAnimDownBackD_joint14[58];
extern u16 dFTYoshiAnimDownBackD_joint15[8];
extern u16 dFTYoshiAnimDownBackD_joint16[20];
extern u16 dFTYoshiAnimDownBackD_joint18[20];
extern u16 dFTYoshiAnimDownBackD_joint19[186];
extern u16 dFTYoshiAnimDownBackD_joint21[104];
extern u16 dFTYoshiAnimDownBackD_joint23[150];
extern u16 dFTYoshiAnimDownBackD_joint24[202];
extern u16 dFTYoshiAnimDownBackD_joint26[110];
extern u16 dFTYoshiAnimDownBackD_joint27[180];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTYoshiAnimDownBackD_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTYoshiAnimDownBackD_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTYoshiAnimDownBackD_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -47, -211,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 26), -4200, -1179,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 5), -4200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimDownBackD_joint2[30] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX), -242, -2,
	ftAnimSetValBlock(FT_ANIM_TRAY), 265,
	ftAnimSetValT(FT_ANIM_TRAY, 36), 672,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -754, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -3034, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -3216, 129,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimDownBackD_joint3[92] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 144, -153, -190, 21,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 121, 250,
	ftAnimSetValT(FT_ANIM_ROTY, 31), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -169, 98,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 121, 992,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 136, -519,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), -119, 315,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 3, -1576,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 55, 1236,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 167, 386,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 560, 866,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -56, 243,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), 171, -622,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 333, -1541,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 20, 162,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 30, 206,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -89, -26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimDownBackD_joint4[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 934, -142,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 753, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 1503, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 16, -141,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimDownBackD_joint5[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -607, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -141, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 433, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 208, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 78, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimDownBackD_joint7[10] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 36), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTYoshiAnimDownBackD_joint8[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1537, -296, -1040, -64, 682, 361,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1363, 88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1420, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1967, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2013, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1929, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1425, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 895, -111,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1422, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1112, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1880, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1459, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 788, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 764, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1113, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1443, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1474, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1717, -13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 784, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1174, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1725, -8, -1483, -39, 1254, 79,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimDownBackD_joint9[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -140,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -748, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -682, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -842, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -680, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -686, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -810, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -807, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimDownBackD_joint11[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -263, -454, -220,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDownBackD_joint12[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 14, 252, 548, -73, 2338, 324,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 92, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 3025, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 399, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 356, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 89, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 377, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2929, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2318, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -55, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 28, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 384, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 200, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2323, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 2660, 60,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 136, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -43, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 6, -41, 2739, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -55, -78, 2868, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -150, -94, -94, -51, 2995, 126,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimDownBackD_joint13[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -710, -159,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -951, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -884, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1007, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -973, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -808, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -820, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1050, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1061, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 58,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimDownBackD_joint14[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 284, 33, 225, -64, 28, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 156, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 219, 63, -14, -132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -274, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 295, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 88, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -1, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 0, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 125, -3,
	ftAnimBlock(0, 25),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 0, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, -282,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimDownBackD_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTYoshiAnimDownBackD_joint16[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 39, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 351, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -343, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), -190, 63,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimDownBackD_joint18[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 107, 48,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 205, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -376, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -153, 71,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTYoshiAnimDownBackD_joint19[186] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1260, -51, -1295, -88, -539, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -412, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1243, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1497, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1503, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1391, 94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -395, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -755, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1311, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1487, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1314, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1220, 85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -821, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1152, -90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1500, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1215, -168, -1127, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1162, -131, -1102, -6, -1217, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 952, -100, -1234, -222, -1064, 124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -962, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 960, 51, -1547, -159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1392, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1475, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1089, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -973, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1427, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1485, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1499, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1492, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -910, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -803, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -970, -131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1119, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1482, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1615, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1290, -125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1544, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1525, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1577, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1602, 24, -1613, 1, -1612, -67,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimDownBackD_joint21[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 382, -187,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 568, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 592, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 710, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 606, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 745, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 504, -369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 211, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 566, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 596, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 609, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 543, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 454, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 385, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 469, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 332, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -70,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimDownBackD_joint23[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 500, -11, 1624, -16, -1161, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1547, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 111, -73, -1493, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 51, -29, -1724, -143,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1402, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 186, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 372, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 309, -2, 1605, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1346, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 366, 112, -1469, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1510, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 535, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 336, -162, 1416, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1370, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 45, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1432, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1801, -40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1459, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1520, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1, -28, -1789, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -22, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1645, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1686, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1949, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -39, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 0, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1555, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1640, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1924, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1888, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, 6, 1692, 51, -1872, 16,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimDownBackD_joint24[202] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, 77, 435, -54, 468, 167,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 395, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 298, -125, 812, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 131, -88, 1039, 131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1161, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 102, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 388, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 364, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 108, 85, 1254, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 265, -63, 274, 87, 1036, -147,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 91, -68, 655, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 283, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 370, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 55, 116, 384, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 325, 148, 464, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 352, 60, 440, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 546, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 337, -151, 487, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 67, -136, 663, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 540, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 63, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 426, -138, 243, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 184, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 251, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 164, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 648, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 688, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 546, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 164, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 58, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 576, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 520, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 152, -41, 322, -146,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 7, -14, -73, -86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 42, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 22, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -7, 0, -22, -154, -81,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimDownBackD_joint26[110] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 675, -118,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 370, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -181,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 449, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 506, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 780, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 857, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 598, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 608, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 389, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 510, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 565, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 586, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 450, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 546, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 266, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 385, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 468, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -89,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTYoshiAnimDownBackD_joint27[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -607, 38, 1665, 24, -996, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -121, 104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1763, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1017, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -950, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1608, -197,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -19, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -135, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1784, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1393, -28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -325, 158, 1724, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 181, 61, 1591, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -201, -192, 1721, 109, -1525, -118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1606, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1850, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -203, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -188, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -114, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1510, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1731, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1932, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1767, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -74, 28, -1724, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1613, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 35, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1748, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1729, -34,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1654, -89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1960, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 48, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 20, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1701, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1685, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1934, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1888, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -19, 1697, 12, -1837, 51,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
