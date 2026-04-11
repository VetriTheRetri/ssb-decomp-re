/* AnimJoint data for relocData file 1790 (FTNessAnimDownBStartGround) */
/* 2304 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDownBStartGround_joint1[58];
extern u16 dFTNessAnimDownBStartGround_joint2[8];
extern u16 dFTNessAnimDownBStartGround_joint4[24];
extern u16 dFTNessAnimDownBStartGround_joint5[118];
extern u16 dFTNessAnimDownBStartGround_joint6[62];
extern u16 dFTNessAnimDownBStartGround_joint7[10];
extern u16 dFTNessAnimDownBStartGround_joint8[44];
extern u16 dFTNessAnimDownBStartGround_joint10[10];
extern u16 dFTNessAnimDownBStartGround_joint11[124];
extern u16 dFTNessAnimDownBStartGround_joint12[60];
extern u16 dFTNessAnimDownBStartGround_joint13[30];
extern u16 dFTNessAnimDownBStartGround_joint15[10];
extern u16 dFTNessAnimDownBStartGround_joint16[104];
extern u16 dFTNessAnimDownBStartGround_joint18[48];
extern u16 dFTNessAnimDownBStartGround_joint19[76];
extern u16 dFTNessAnimDownBStartGround_joint21[44];
extern u16 dFTNessAnimDownBStartGround_joint22[84];
extern u16 dFTNessAnimDownBStartGround_joint24[48];
extern u16 dFTNessAnimDownBStartGround_joint25[138];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimDownBStartGround_joints[] = {
	(u32)dFTNessAnimDownBStartGround_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimDownBStartGround_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimDownBStartGround_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimDownBStartGround_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimDownBStartGround_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimDownBStartGround_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimDownBStartGround_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimDownBStartGround_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimDownBStartGround_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimDownBStartGround_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimDownBStartGround_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimDownBStartGround_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimDownBStartGround_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimDownBStartGround_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimDownBStartGround_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimDownBStartGround_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimDownBStartGround_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimDownBStartGround_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimDownBStartGround_joint25, /* [24] joint 25 */
	0xFFFF0227, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimDownBStartGround_joint1[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -16, 537, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 158, 17, -17, -1, 394, -183,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), -41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 158, -19, -17, -5, 389, 39,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), -41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, -26, -22, -12, 401, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), -124,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 3), 0, -124,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -23, 275,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 401, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimDownBStartGround_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimDownBStartGround_joint4[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 389, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 389, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, -64,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimDownBStartGround_joint5[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1890, -43, -1249, -71, 1950, 123,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1916, 25, -1401, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2074, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2233, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1882, -26, -1373, 53, 2195, -99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2053, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1293, 29, 2035, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1315, -9, 2064, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1308, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2051, 10, 2061, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2015, 6, 2056, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2018, -88, -1304, -114, 2052, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2324, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2192, -320, -1537, 549,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2658, -237, -205, 632,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2666, 29, -271, -52, 2351, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2599, 17, -309, -8, 2275, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2631, -33, -289, 18, 2311, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2666, -34, -271, 17, 2351, 40,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDownBStartGround_joint6[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, -171,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -645, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -719, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -449, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -283, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -321, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -273, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -170, -441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1155, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 577,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimDownBStartGround_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDownBStartGround_joint8[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, -3, -32, 4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -129, 13, 201, -18, -74, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 113, 23, 199, 20, 4, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 60, -19, 363, 27, -30, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -5, -8, 363, 0, -30, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimDownBStartGround_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDownBStartGround_joint11[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1192, -12, 1038, 57, 1489, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1180, -48, 1096, 111, 1481, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1096, -80, 1261, 160, 1327, -188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 981, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1416, 58, 1104, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1379, -94, 1005, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1023, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1228, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 988, 5, 1167, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 986, -8, 1230, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1029, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1025, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 974, 131, 1364, -15, 1002, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1250, 76, 1198, -550, 1326, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1128, 78, 263, -376, 492, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1407, 322, 446, 79, 818, 385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1773, 93, 422, 6, 1263, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1594, -183, 459, 11, 1039, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1407, -187, 446, -13, 818, -220,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDownBStartGround_joint12[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -75,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -588, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -310, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -538, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -613, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -528, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -329, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -991, -459,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1249, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -718, 425,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -398, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -585, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -718, -132,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimDownBStartGround_joint13[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 571, -46, 156,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 571, -46, 156,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -424, 38, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -424, 38, 60,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimDownBStartGround_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDownBStartGround_joint16[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, 43, -279, -51, -297, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -191, 160,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -450, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -588, -238,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1050, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1, 163,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 176, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -437, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -447, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1129, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1066, 54,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 147, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 93, -111, -1008, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, -168, -455, 21, -816, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -244, 51, -405, -12, -586, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 25, 81, -481, -27, -1027, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, -135, -459, 38, -830, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -244, -163, -405, 54, -586, 243,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimDownBStartGround_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, 93,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 490, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 653, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 896, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 884, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 513, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 243, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 563, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 455, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 243, -211,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimDownBStartGround_joint19[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, 3, 12, 0, 26, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 43, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -7, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -39, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -32, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -33, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 36, 1, -39, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 68, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 72, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 303, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 60, 32, 477, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, 10, -9, 0, 455, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 80, -36, -8, 0, 438, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 60, -20, -7, 0, 477, 38,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimDownBStartGround_joint21[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -261, -21, -113, -12, 706, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -261, 5, -113, 1, 706, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -215, 6, -98, 25, 355, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -236, -10, 545,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -215, -98, 355,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimDownBStartGround_joint22[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1735, -9, 1472, 24, -1819, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1621, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1742, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1994, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2109, -94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2182, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1624, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1613, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1729, 56, 1554, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1630, 125, 1329, -244, -2199, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1478, -181, 1064, -68, -2162, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1994, -145, 1192, 7, -2597, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1769, 257, 1079, -63, -2433, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1478, 291, 1064, -15, -2162, 270,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDownBStartGround_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 77,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 484, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 627, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 887, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 879, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 880, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 921, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 938, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1222, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1094, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 938, -156,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimDownBStartGround_joint25[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1684, -12, -1633, -3, -1810, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1588, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1663, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2002, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2005, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1993, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1584, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1617, 47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1661, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1684, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1961, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1793, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1687, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1704, 87, -1599, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1862, 28, -1632, -5, -1801, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1760, -79, -1611, 16, -1816, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1704, -56, -1599, 11, -1793, 23,
	ftAnimEnd(),
	0x400E, 0x0038, 0x0000, 0x0000, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0004, 0xFF17, 0xFFE0, 0x0064, 0x000B, 0xFF76, 0xFFF1, 0x200F, 0x0005, 0xFF17, 0x0014, 0x0064, 0xFFF5, 0xFF76, 0xFFE1, 0x200F, 0x0003, 0xFFB8, 0x0028, 0x000B, 0xFFE4, 0xFE7C, 0xFF93, 0x380F, 0x0001, 0xFFB8, 0xFFF2, 0xFDC1, 0x380F, 0x0002, 0xFFB8, 0x000B, 0xFE7C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
