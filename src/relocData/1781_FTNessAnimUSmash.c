/* AnimJoint data for relocData file 1781 (FTNessAnimUSmash) */
/* 5360 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimUSmash_joint1[96];
extern u16 dFTNessAnimUSmash_joint2[70];
extern u16 dFTNessAnimUSmash_joint4[44];
extern u16 dFTNessAnimUSmash_joint5[276];
extern u16 dFTNessAnimUSmash_joint6[124];
extern u16 dFTNessAnimUSmash_joint7[10];
extern u16 dFTNessAnimUSmash_joint8[200];
extern u16 dFTNessAnimUSmash_joint10[10];
extern u16 dFTNessAnimUSmash_joint11[254];
extern u16 dFTNessAnimUSmash_joint12[58];
extern u16 dFTNessAnimUSmash_joint13[78];
extern u16 dFTNessAnimUSmash_joint15[10];
extern u16 dFTNessAnimUSmash_joint16[198];
extern u16 dFTNessAnimUSmash_joint18[88];
extern u16 dFTNessAnimUSmash_joint19[224];
extern u16 dFTNessAnimUSmash_joint21[104];
extern u16 dFTNessAnimUSmash_joint22[214];
extern u16 dFTNessAnimUSmash_joint24[80];
extern u16 dFTNessAnimUSmash_joint25[190];
extern u16 dFTNessAnimUSmash_joint26[94];
extern u16 dFTNessAnimUSmash_joint27[204];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTNessAnimUSmash_joints[] = {
	(AObjEvent32 *)dFTNessAnimUSmash_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimUSmash_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimUSmash_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimUSmash_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimUSmash_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimUSmash_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimUSmash_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimUSmash_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimUSmash_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimUSmash_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimUSmash_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimUSmash_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimUSmash_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimUSmash_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimUSmash_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimUSmash_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimUSmash_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimUSmash_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimUSmash_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimUSmash_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTNessAnimUSmash_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimUSmash_joint1[96] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), -16, 537,
	ftAnimSetValBlock(FT_ANIM_TRAZ), -28,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -9, 4, 434, -71,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 2), -28,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), -9, 5, 417, -17,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 10), -28,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -1, 6, 408, -75,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 2), -23,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -4, -5, 389, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 5), -23,
	ftAnimSetValT(FT_ANIM_TRAZ, 5), -25,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -8, -6, 389, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -11, -3, 389, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 1), 281,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 2), -164,
	ftAnimSetValT(FT_ANIM_TRAZ, 2), -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 402, 25,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 12), -16,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), -27,
	ftAnimSetValT(FT_ANIM_TRAZ, 5), -28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 537, 100,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimUSmash_joint2[70] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1789, 880, -1510, -647, -1597, -794,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -1654, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1789, -1579,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1789, 0, -1654, 3, -1579, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1630, -45, -1519, 98, -1585, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1496, -8, -948, 35, -1361, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 1496, -63, -948, 15, -1361, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 448, -146, -699, 58, -440, 137,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 28, -360, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimUSmash_joint4[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 1213, 28, -19, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 1213, -23, -19, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -5, 0, 531, -76, -24, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 26), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 16), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimUSmash_joint5[276] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1198, 926, -1347, -507, -1192, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2124, -43, -1854, -26, -1351, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1110, -510, -1400, 314, -1151, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1434, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1103, 37, -1226, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1185, 12, -1069, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1068, -62, -1049, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1408, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1260, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1003, -57, -1060, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 889, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1091, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1115, -118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1459, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1250, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1330, -470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 907, -384, -1326, 287, -2191, -870,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 121, -364, -884, 222, -3070, -619,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 177, -98, -882, 549, -3430, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -27, 213, 498, -3502, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 122, 197, 115, -100, -3883, -204,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 596, 98, -257, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3911, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3954, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -4034, -125,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 679, 130, -502, -190,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -684, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 856, 224, -4232, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1128, 229, -4529, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1315, 41, -683, 441, -4733, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1210, 107, 198, 49, -5190, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1530, -123, -584, -357, -5036, 431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 963, -128, -515, -45, -4327, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1273, 487, -676, -71, -4655, -505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1937, 451, -657, 39, -5338, -445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2177, 219, -598, 85, -5547, -160,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -155, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -5586, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2377, 155,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2394, -39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -135, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -178, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2355, -28, -5602, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -5911, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2356, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2573, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2806, 233, -261, -82, -6018, -106,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimUSmash_joint6[124] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, -289,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -763, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -682, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -721, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -369, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -778, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -162, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -475, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -591, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -638, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -670, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1034, 518,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -467, -423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -855, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -917, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -906, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -808, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -849, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -933, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -759, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 285,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimUSmash_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimUSmash_joint8[200] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, 0, -32, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, -9, 300, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 125, 753, -341, -520, -80, -721,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1496, 37, -675, -30, -1475, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1496, -30, -675, 15, -1475, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, -709, -508, 338, -75, 791,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 159, -33, -38, 35, 15, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -58, -14, -292, -43, -50, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 41, 8, -388, -4, 17, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 46, 1, -347, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -35, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 299, 1,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -283, -100,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 51, 6,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 1884, 637,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 187, -190, 59, -73,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 3, -11,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -942,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -36,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -38, 153,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 3), 80,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -15,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 58, 26, 21, 351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 99, 28, 356, 177, 95, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 115, 11, 376, 6, 124, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 123, -17, 370, -4, 185, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 81, -58, 367, -3, 154, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, -57, 362, -4, 78, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -33, -9, 359, 1, 0, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -10, 0, 364, 0, -32, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimUSmash_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimUSmash_joint11[254] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, -130, 569, -1213, -119, 618,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -546, -208, -644, -350, 499, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -832, -142, -130, 270, -842, -674,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -831, -1, -102, 22, -849, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -834, -3, -84, 13, -854, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -852, 7, -107, -19, -854, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -841, 117, -127, 115, -853, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -617, 450, 123, 274, -739, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 372, 420, 133, -577, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -38, 391, 21, -635, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, -557, 463, -63, -794, -466,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -986, -563, 263, -78, -1568, -443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1145, -97, 305, 60, -1681, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 506, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1181, -107, -1697, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1361, -137, -1649, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1456, 220, 658, 87, -1423, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -920, 276, 680, -43, -794, 347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -904, 7, 570, -82, -727, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -905, -108, 516, -194, -723, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -717, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1122, -170, 180, -253,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -57, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1247, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1234, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1495, -197, -21, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 43, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1630, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1588, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -945, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 83, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 32, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -699, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -520, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 63, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -880, 58, 122, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -828, 48, 219, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -783, 185, 589, 223, -534, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -457, 183, 666, -9, -201, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, 41, 569, -96, -119, 81,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimUSmash_joint12[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 558,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -163, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -673, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 332,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -542, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -669, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 110,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimUSmash_joint13[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -255, -28, -432, -40, 286, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -255, 0, -432, 26, 286, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -262, -53, 157, 48, 374, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -950, -277, 199, 46, 345, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -817, 278, 251, 77, 379, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 162, 88, 507, 39, 1031, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -285, -74, 486, -3, 298, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -285, 47, 486, -54, 298, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimUSmash_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 150, -130, 81,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimUSmash_joint16[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1242, 113, -1328, -122, -1906, -345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1356, 147, -1451, -142, -2251, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1537, 101, -1612, -87, -2400, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2433, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1559, 18, -1625, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1573, 9, -1634, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 1535, 6, -1607, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2440, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -2440, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2444, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2236, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1556, 23, -1580, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 1551, -3, -1316, 12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2191, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -2143, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1547, -131, -1304, -231, -2153, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1288, -66, -1779, -29, -1920, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1415, 191, -1364, 283, -2083, -151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1253, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1670, 95, -2222, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1605, -86, -2216, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2102, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1498, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1458, -41, -1255, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1421, 68, -1207, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2026, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1939, -83,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1526, 123, -1146, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1180, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1714, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2061, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2336, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1179, -12, -2369, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1411, -235, -1204, -74, -2121, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1242, -168, -1328, -123, -1906, 214,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimUSmash_joint18[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 404, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 504, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 560, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 559, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 555, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 759, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 815, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 906, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 906, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 713, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 944, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 700, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 816, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 885, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 911, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 939, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 912, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 699, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -303,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimUSmash_joint19[224] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, 198, 12, 83, 26, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 203, 36, 95, -9, 130, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 78, -76, -7, -62, 149, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -47, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 139, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 32, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 20, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 62, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -48, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -8, -9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 80, 0, 136, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -56, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -215, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -33, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -471, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -86, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -305, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -357, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -474, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -422, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -93, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -102, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -330, 324, -112, -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 291, 92, -441, 5, -816, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -146, -336, -412, 68, -348, 501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -382, -76, -304, 47, 186, 186,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -326, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -300, 77, 25, -160,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -233, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -135, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -326, -6, -155, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -348, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -105, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -290, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -478, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -441, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -132, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -304, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -19, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -118, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -81, 76,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -25, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 31, 12, 32, 26, 108,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimUSmash_joint21[104] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -66, 0,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -576, 1, -41, -3, -60, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -576, -1, -41, 0, -60, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -204, 32, 94, 25, 86, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -221, -3, 234, 5, 70, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -221, 35, 234, 5, 70, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -149, -47, -28, -58, -206, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -315, -1, 118, 21, 29, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -156, 35, 80, -5, 242, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -64, 32, 80, -21, 242, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 6, -22, -27, -17, 410, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -178, -14, -5, 5, 423, -82,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -66, 0, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimUSmash_joint22[214] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, 10, 136, -69, -210, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -81, 0, 25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -300, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -269, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -275, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -81, 0, 25, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 23, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -86, -15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -275, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -281, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 49, 51, -221, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 207, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -113, -61, -182, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -442, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -295, -148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -625, -113,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 110, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -67, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -456, 1, -707, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -402, 0, -776, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -403, 8, -64, 309, -773, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -385, -47, 551, 67, -355, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -499, 131, 71, -320, -677, -275,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -99, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -122, 106, -906, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -286, -143, -835, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -408, -68, -45, 30, -754, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -49, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -423, -7, -748, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -712, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -373, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -263, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -151, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -35, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 46, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -660, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -511, 97,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -189, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -171, 30, 100, 44, -369, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 44, 136, 35, -210, 158,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimUSmash_joint24[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 161,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 709, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 763, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 797, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 897, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 861, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 805, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 811, -399,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 723, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 861, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 877, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 833, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 814, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 817, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 844, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 678, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -271,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimUSmash_joint25[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 76, -160, 25, 276, -202, -153,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -163, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, 199, -355, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 424, 61, -541, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 424, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -140, 24, -555, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -87, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -574, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 425, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 426, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -107, 24, 424, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 186, 93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -40, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -552, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -396, 59,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 267, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 336, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -97, -47, -337, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -161, 7, -276, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 327, 68, -152, 73, -280, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 472, 31, -14, 36, -175, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 390, -213, -78, -117, -355, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, -94, -249, -50, -79, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 130, -179, 58, -209, -111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -262, -80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -251, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 348, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 335, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 111, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -345, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 3, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 81, -18, -284, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 91, -10, -327, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, -15, 25, 21, -202, 124,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimUSmash_joint26[94] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 56, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 56, -1, 0, 7, 0, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -556, -83, 150, 23, -291, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -696, -28, 215, 13, -314, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -696, 261, 215, -95, -314, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -173, 43, 24, -24, -450, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -609, -167, 166, 76, -68, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -509, 41, 177, -43, 13, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -526, -20, 80, 14, -73, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -572, 25, 221, -7, -55, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -348, 62, 28, -22, 100, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 56, 0, 0,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTNessAnimUSmash_joint27[204] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, -422, -113,
	ftAnimSetValRate(FT_ANIM_TRAZ), 50, 1233,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 16, 16, 16,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 305, 485, 401, 343, -220, -181,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 0, 25, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 16, 16, 16,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValAfterT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 37), 16, 16, 16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 305, 75, 401, -134, -220, 242,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 409, -1348, 217, -1423, 113, 6862,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -12, -755, 45, 2443, 1705, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), -62, -66, 121, -8461,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 10767, -2,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 26), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 649, 4525,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1177, 4005,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 2007, 83,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1101, -3659, -1365, -1235,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -54, -94,
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), -121, -553,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), -1570, 12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 218, -4264,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -811,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 3), -29, 19, 24, -91,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), -469, 225, -401, 674,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), -385, 160,
	ftAnimSetValRateT(FT_ANIM_TRAY, 12), 46, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -119, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -412, 304,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -393, 94,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -389, 13,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), -383, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -320, -126,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -464, 246,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), -408, -45,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -381, -24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -61, -426, -288, 1127,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -422, -75, -113, -981, 50, 1106,
	ftAnimBlock(0, 1),
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 16, 16, 16,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
