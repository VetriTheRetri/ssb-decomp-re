/* AnimJoint data for relocData file 507 (FTMarioAnimTurn) */
/* 1760 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimTurn_joint1[50];
extern u16 dFTMarioAnimTurn_joint2[20];
extern u16 dFTMarioAnimTurn_joint4[38];
extern u16 dFTMarioAnimTurn_joint5[78];
extern u16 dFTMarioAnimTurn_joint6[40];
extern u16 dFTMarioAnimTurn_joint7[14];
extern u16 dFTMarioAnimTurn_joint8[36];
extern u16 dFTMarioAnimTurn_joint10[20];
extern u16 dFTMarioAnimTurn_joint11[84];
extern u16 dFTMarioAnimTurn_joint12[42];
extern u16 dFTMarioAnimTurn_joint13[10];
extern u16 dFTMarioAnimTurn_joint15[10];
extern u16 dFTMarioAnimTurn_joint16[74];
extern u16 dFTMarioAnimTurn_joint18[40];
extern u16 dFTMarioAnimTurn_joint20[82];
extern u16 dFTMarioAnimTurn_joint21[76];
extern u16 dFTMarioAnimTurn_joint23[44];
extern u16 dFTMarioAnimTurn_joint24[74];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimTurn_joints[] = {
	(AObjEvent32 *)dFTMarioAnimTurn_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimTurn_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimTurn_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimTurn_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimTurn_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimTurn_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimTurn_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimTurn_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimTurn_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimTurn_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimTurn_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimTurn_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimTurn_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimTurn_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimTurn_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimTurn_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimTurn_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimTurn_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimTurn_joint1[50] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 223, 0, 0, 52, 540, -15, 0, -24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -19, -134,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 118, 0, 536, -47, -6, -7,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -118, 493, 4, -7, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1385, -25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 2, 540, 131, 0, 38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimTurn_joint2[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, 1, -790, -3, -95, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -71, -1, -790, 5, -95, 1,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimTurn_joint4[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 1, 258, 3, 110, 2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 267, 1, 115, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 211,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 208, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 268, -1, 116, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 258, -5, 110, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimTurn_joint5[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, -14, -300, 7, -272, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -274, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -111, -142, 174, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -275, -94, 450, 203,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -151, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -157, -17, 581, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, -88, 249, -415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 162, 44, -334, 1, -248, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -290, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -62, -111, 88, 158,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -115, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -59, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 38, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 95, -300, -10, -272, -156,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimTurn_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -56,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -624, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -645, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -402, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -215, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -482, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -449, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 266,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimTurn_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -625, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimTurn_joint8[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -1, -4, 0, 176, 4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 198, 37, -4, -21, 186, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 462, 0, -157, 0, 4, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 201, -12, -4, 8, 176, 3,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimTurn_joint10[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 3, 139, -2, -209, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -221, -4, 139, 3, -209, 2,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimTurn_joint11[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2052, 70, 1056, 38, 1674, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2187, -17, 1144, -25, 1812, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2087, -41, 1043, -19, 1694, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2027, -131, 1132, 24, 1669, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1840, -184, 1156, 56, 1495, -179,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1334, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1659, -77, 1311, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1686, 46, 1449, 182,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1775, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1753, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2010, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2163, 20, 1136, -138, 1793, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2052, -111, 1056, -79, 1674, -118,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimTurn_joint12[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 57,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -528, 377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 264,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -989, -362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1160, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -966, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 154,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimTurn_joint13[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 625, -27,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimTurn_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimTurn_joint16[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1473, 6, -1377, -7, -1563, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1438, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1538, -18, -1665, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1476, -181, -1860, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1001, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1838, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1344, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1378, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1077, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1428, 243, -1867, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1647, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1564, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1523, -45, -1368, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1473, -50, -1377, -9, -1563, 84,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimTurn_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 501, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 906, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1102, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 835, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 493, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 474, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 464, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -63,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimTurn_joint20[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, 8, -11, -13, -156, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -180, 62, -138, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -137, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -234, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 41, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -57, 216, -402, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 399, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 107, 41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 124, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 288, -217, 293, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -35, -236, 45, -169, 14, -91,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -20, 17, -152, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -184, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -210, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, -1, -11, 9, -156, -3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimTurn_joint21[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, -21, 187, 16, 35, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 167, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 98, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 75, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 167, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -353, -75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 219, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 279, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 146, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 400, 41, 441, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 256, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 228, -122, -431, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 154, -14, -201, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 45, 187, -69, 35, 237,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimTurn_joint23[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 128,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 658, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 536, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 367, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 394, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 522, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 872, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1112, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 846, -337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -407,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimTurn_joint24[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -20, -1514, 31, 1395, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1773, 28, 1273, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1551, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1678, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1443, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1798, -85, -1285, 244, 1317, 142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1671, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1602, -276, -954, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1245, -57, -1237, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1486, 206, -1507, -147, 1371, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1657, 105, -1532, -3, 1300, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1697, 39, -1514, 17, 1395, 94,
	ftAnimEnd(),
};
