/* AnimJoint data for relocData file 635 (FTMarioAnimFireballGround) */
/* 2288 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimFireballGround_joint1[36];
extern u16 dFTMarioAnimFireballGround_joint2[10];
extern u16 dFTMarioAnimFireballGround_joint4[66];
extern u16 dFTMarioAnimFireballGround_joint5[106];
extern u16 dFTMarioAnimFireballGround_joint6[54];
extern u16 dFTMarioAnimFireballGround_joint7[10];
extern u16 dFTMarioAnimFireballGround_joint8[10];
extern u16 dFTMarioAnimFireballGround_joint10[36];
extern u16 dFTMarioAnimFireballGround_joint11[188];
extern u16 dFTMarioAnimFireballGround_joint12[72];
extern u16 dFTMarioAnimFireballGround_joint13[10];
extern u16 dFTMarioAnimFireballGround_joint15[10];
extern u16 dFTMarioAnimFireballGround_joint16[126];
extern u16 dFTMarioAnimFireballGround_joint18[54];
extern u16 dFTMarioAnimFireballGround_joint20[94];
extern u16 dFTMarioAnimFireballGround_joint21[102];
extern u16 dFTMarioAnimFireballGround_joint23[40];
extern u16 dFTMarioAnimFireballGround_joint24[72];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimFireballGround_joints[] = {
	(AObjEvent32 *)dFTMarioAnimFireballGround_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimFireballGround_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimFireballGround_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimFireballGround_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimFireballGround_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimFireballGround_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimFireballGround_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimFireballGround_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimFireballGround_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimFireballGround_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimFireballGround_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimFireballGround_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimFireballGround_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimFireballGround_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimFireballGround_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimFireballGround_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimFireballGround_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimFireballGround_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimFireballGround_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 223,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 540,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 0, -7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -180, 95,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 13), 191, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 14), 0, 7, 191, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 16), 223, 7, 0, -51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimFireballGround_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -71, -790, -95, 0, 0, 0,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimFireballGround_joint4[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 208, 110,
	ftAnimSetValRate(FT_ANIM_ROTY), 258, -249,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 33, -25, -33, 33, -75, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 173, 160, 628, 99, -43, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1156, 242, 663, -38, 1023, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1385, 14, 437, -14, 1284, 16,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 1385, 0, 437, 0, 1284, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -39, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 208, -39, 258, -5, 110, -39,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimFireballGround_joint5[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, -29, -1308, 13, -1880, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1272, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 1383, 17, -1283, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1405, -3, -1322, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1169, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1285, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1284, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -1276, 9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1157, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1308, -39,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1287, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 1396, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1422, -13, -1267, -14, -1348, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1532, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1288, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1266, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1304, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1792, -88,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1588, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1693, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, 48, -1308, -19, -1880, -88,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimFireballGround_joint6[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -68,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -191, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -33, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -315, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -508, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -482, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -288, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 105,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimFireballGround_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimFireballGround_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 201, -4, 176, 0, 288, 0,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimFireballGround_joint10[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 0, 139, -5, -209, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -188, 1, -196, -11, -180, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -188, -1, -196, 11, -180, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -221, -1, 139, 11, -209, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimFireballGround_joint11[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, 29, 551, -128, 65, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 472, -77, 423, -43, 139, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 287, -72, 464, 0, -52, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 342, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 530, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 8, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -76, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 344, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 318, 103, 621, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 778, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 552, 232, 146, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 783, 49, 361, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 651, -90, 1035, 174, 238, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 922, 8, 470, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1213, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1212, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1168, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 927, 2, 474, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 909, 34, 461, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 958, 68, 502, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1496, 82, 1074, 102,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1162, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1099, -57,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1600, 166, 1203, 184,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2327, 96, 1916, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1032, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1020, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2349, -3, 1934, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2169, -114, 1792, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1048, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1148, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1099, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2052, -117, 1056, -43, 1674, -118,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimFireballGround_joint12[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 112,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -698, 401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -308, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -186, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -628, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -777, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimFireballGround_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimFireballGround_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 72, 0, 36,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimFireballGround_joint16[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1473, 45, -1377, 21, -1563, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1516, -81, -1317, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1556, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1424, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1388, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1419, -94, -1343, -2, -1361, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 693, -48, -1412, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1352, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1285, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1175, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 656, -31, -1471, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1686, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 577, 8,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1180, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1383, -44,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1677, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1375, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 588, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 1100, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1186, 80, -1426, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1450, 27, -1552, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1376, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1377, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1473, 23, -1377, 0, -1563, -10,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimFireballGround_joint18[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, -81,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 319, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -159,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 183, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 253, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 248, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 235, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 263, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 406, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimFireballGround_joint20[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1396, -43, 1619, 34, 1452, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1209, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1816, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1534, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1784, 167,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1836, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1231, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1350, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1782, -53, 1799, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1439, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1408, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1409, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1419, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1335, -13, 1434, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 1400, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 1399, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1425, 9, 1390, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1612, 7, 1442, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1396, -4, 1619, 7, 1452, 10,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimFireballGround_joint21[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, -33, 203, 2, 43, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 90, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -691, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -122, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -111, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -191, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 128, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 173, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -720, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -697, 29,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -181, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -140, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 136, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 142, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -664, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 181, 67,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -141, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 4, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 178, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 206, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, 57, 203, -3, 43, 39,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimFireballGround_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 550, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 507, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 386, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 422, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 554, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 515, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 475, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimFireballGround_joint24[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1671, -4, -1514, 0, 1395, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 1733, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 43), -1511, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 23), 1771,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1771, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1657, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1725, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 1402, -8,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1650, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1664, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1511, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1512, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1671, 7, -1514, -1, 1395, -7,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
