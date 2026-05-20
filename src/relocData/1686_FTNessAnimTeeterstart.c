/* AnimJoint data for relocData file 1686 (FTNessAnimTeeterstart) */
/* 1264 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimTeeterstart_joint1[20];
extern u16 dFTNessAnimTeeterstart_joint2[22];
extern u16 dFTNessAnimTeeterstart_joint4[20];
extern u16 dFTNessAnimTeeterstart_joint5[60];
extern u16 dFTNessAnimTeeterstart_joint6[30];
extern u16 dFTNessAnimTeeterstart_joint7[8];
extern u16 dFTNessAnimTeeterstart_joint8[20];
extern u16 dFTNessAnimTeeterstart_joint10[20];
extern u16 dFTNessAnimTeeterstart_joint11[56];
extern u16 dFTNessAnimTeeterstart_joint12[20];
extern u16 dFTNessAnimTeeterstart_joint13[12];
extern u16 dFTNessAnimTeeterstart_joint15[10];
extern u16 dFTNessAnimTeeterstart_joint16[54];
extern u16 dFTNessAnimTeeterstart_joint18[28];
extern u16 dFTNessAnimTeeterstart_joint19[46];
extern u16 dFTNessAnimTeeterstart_joint21[14];
extern u16 dFTNessAnimTeeterstart_joint22[42];
extern u16 dFTNessAnimTeeterstart_joint24[32];
extern u16 dFTNessAnimTeeterstart_joint25[42];
extern u16 dFTNessAnimTeeterstart_joint26[24];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimTeeterstart_joints[] = {
	(AObjEvent32 *)dFTNessAnimTeeterstart_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimTeeterstart_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimTeeterstart_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimTeeterstart_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimTeeterstart_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimTeeterstart_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimTeeterstart_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimTeeterstart_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimTeeterstart_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimTeeterstart_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimTeeterstart_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimTeeterstart_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimTeeterstart_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimTeeterstart_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimTeeterstart_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimTeeterstart_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimTeeterstart_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimTeeterstart_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimTeeterstart_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimTeeterstart_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimTeeterstart_joint1[20] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 636, -1, 0, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -20, -2, 590, -28, 112, 47,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimTeeterstart_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY), -222, -58,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -72, 1, 17, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 13), -200, 2, -57, 1, 9, -1, 0, 2,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimTeeterstart_joint4[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 225, 1, 135, -3, 75, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 294, -11, -9, -3, -36, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimTeeterstart_joint5[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1893, -13, -1399, 2, 2049, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1281, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1921, 40, 1842, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1868, 79, 1730, -147,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1673, 57, 1400, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1236, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1239, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1647, 25, 1348, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1621, 18, 1298, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1611, 10, -1246, -6, 1271, -26,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimTeeterstart_joint6[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -191, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -392, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -314, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 57,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimTeeterstart_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, 0, 0,
	ftAnimBlock(0, 13),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimTeeterstart_joint8[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, 1, -68, 0, -32, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 213, 0, -70, 0, -89, 2,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimTeeterstart_joint10[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -181, 4, 4, 0, 39, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -71, 2, 59, 0, 75, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimTeeterstart_joint11[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1466, -46, 1328, 25, 1312, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1424, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1281, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1216, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1216, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1261, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1426, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1427, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1273, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1266, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1425, -2, 1261, -5, 1265, 4,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimTeeterstart_joint12[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -170, 170,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimTeeterstart_joint13[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 89, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), 89, -3, 0, 9,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimTeeterstart_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 13),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimTeeterstart_joint16[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 220, -129, -78, 23, -133, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 6, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 6, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 33, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -58, 6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 20, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 50, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 59, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 121, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -48, 10, 67, 17, 209, 88,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimTeeterstart_joint18[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 155,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 314, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 351, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 253, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 184, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 60, -123,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimTeeterstart_joint19[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 19, -6, -423, 136, 20, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -121, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 45, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -229, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -201, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -199, -10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -142, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 61, 16, -210, -11, -112, 29,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimTeeterstart_joint21[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -66,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 143, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimTeeterstart_joint22[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -42, -5, 90, -11, 628, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 28, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 244, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 258, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 251, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 293, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 288, 44, -5, -4, 259, -34,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimTeeterstart_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 91, 154,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 246, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 314, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 264, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 204, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimTeeterstart_joint25[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -58, -8, 100, -1, -91, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 8, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -67, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -195, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -186, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -99, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 44, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 71, 27, -103, -36, -108, -8,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimTeeterstart_joint26[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 573, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 133, -2, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
