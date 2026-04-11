/* AnimJoint data for relocData file 1673 (FTNessAnimTurnRun) */
/* 2976 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimTurnRun_joint1[22];
extern u16 dFTNessAnimTurnRun_joint2[78];
extern u16 dFTNessAnimTurnRun_joint3[10];
extern u16 dFTNessAnimTurnRun_joint5[54];
extern u16 dFTNessAnimTurnRun_joint6[152];
extern u16 dFTNessAnimTurnRun_joint7[48];
extern u16 dFTNessAnimTurnRun_joint8[10];
extern u16 dFTNessAnimTurnRun_joint11[46];
extern u16 dFTNessAnimTurnRun_joint12[124];
extern u16 dFTNessAnimTurnRun_joint13[38];
extern u16 dFTNessAnimTurnRun_joint14[18];
extern u16 dFTNessAnimTurnRun_joint16[10];
extern u16 dFTNessAnimTurnRun_joint17[110];
extern u16 dFTNessAnimTurnRun_joint19[42];
extern u16 dFTNessAnimTurnRun_joint20[142];
extern u16 dFTNessAnimTurnRun_joint22[54];
extern u16 dFTNessAnimTurnRun_joint23[170];
extern u16 dFTNessAnimTurnRun_joint25[86];
extern u16 dFTNessAnimTurnRun_joint26[220];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimTurnRun_joints[] = {
	(u32)dFTNessAnimTurnRun_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimTurnRun_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimTurnRun_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimTurnRun_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimTurnRun_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimTurnRun_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimTurnRun_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimTurnRun_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimTurnRun_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimTurnRun_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimTurnRun_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimTurnRun_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimTurnRun_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimTurnRun_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimTurnRun_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimTurnRun_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimTurnRun_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimTurnRun_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimTurnRun_joint26, /* [25] joint 26 */
	0xFFFF02C6, /* [26] END */
};

/* Joint 1 */
u16 dFTNessAnimTurnRun_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 8), 618, 545,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 973, -96,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 484, -1167,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimTurnRun_joint2[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -357, 0, -16, 439, 34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 4), -477, -53, 0, 0, 330, 4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 8), -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 31,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 4), -933, -70, 43, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 330,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1182, -19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -16, -5, 313, -42, 70, 69,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 247, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), -20, 297,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -9,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 8), -1965,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -16, 4, 382, 111, 110, -176,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -16, 439, 34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimTurnRun_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 405, -1, 8, 0, 0, 0,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimTurnRun_joint5[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -101, 1, 8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 73, 24, -264, 25, 54, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), 275,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -3, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 88, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 51, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -200, -2, -264, -34, 319, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 33, 13, 4, 34, 76, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -97, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTNessAnimTurnRun_joint6[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -588, -45, -537, -37, 334, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -702, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -634, -136, 353, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -861, 77, 519, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -478, 161, -993, -239, 101, -172,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1040, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -538, -13, 174, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -206, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -399, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -85, 329, -921, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -940, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 258, -103, -481, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -291, -421, 115, 457,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -657, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, 189,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 505, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -983, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -919, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -760, 7, -355, 480, 574, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -342, 386, 606, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 41, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -49, -99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -383, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 129, 372, 383, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 613, 15, 284, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 577, -299, 293, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13, -578, -496, -78, 321, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -579, -593, -540, -44, 328, 6,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimTurnRun_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -652, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -466, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimTurnRun_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimTurnRun_joint11[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -102, 347, -175,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -241, -5, 453, 0, -121, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -144, 38, 349, -42, -286, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 13, 29, 172, -39, -218, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 52, -10, 88, 15, -139, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -102, 347, -175,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimTurnRun_joint12[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 486, 42, 1120, -16, 385, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1318, 288,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 959, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 982, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1079, 96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1117, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1633, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1921, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1761, -118, 932, -7, 942, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1041, 185, 1351, 440,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1684, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1620, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1875, 87, 1315, 175, 1949, 318,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1889, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1422, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1795, -116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1414, -102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1962, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2056, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1413, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1161, -359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1330, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1514, 325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1981, 286, 655, -334, 1937, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2087, 106, 491, -163, 1984, 47,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimTurnRun_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -659, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -440, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 215,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNessAnimTurnRun_joint14[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 557,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 66, 217, 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), 557,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 1018,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 557,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimTurnRun_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimTurnRun_joint17[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, -13, -174, -20, -1059, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -466, -59, -741, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 88, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 73, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -374, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -506, -17, -497, 230,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 118, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -402, 17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -411, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -407, 110, 101, -174,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -674, -320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -190, 200, -424, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -190, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -90, -49, -872, -189,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 292, 52, -1225, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -186, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -153, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -133, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 337, 50, -287, -82, -1037, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 393, 55, -298, -10, -1068, -30,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimTurnRun_joint19[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 960, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1112, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1077, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1013, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, -506,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -307,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimTurnRun_joint20[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1898, -6, 2369, -163, -1180, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1033, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1905, 127, 2205, -362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1642, 113, 1644, -448,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1733, -101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1557, 91,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1019, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1435, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1881, -139,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2037, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1481, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1489, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1642, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1754, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2038, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1465, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1795, -299,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2162, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1718, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1560, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2071, 84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1996, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1564, -125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1786, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1941, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1734, -43, 1804, 238, -1624, 395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1873, -135, 2037, 141, -1150, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2005, -131, 2087, 49, -1045, 104,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimTurnRun_joint22[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -902, 85, -102,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -782, 49, 85, 28, -102, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -524, 56, 306, 44, 87, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -410, 30, 377, 0, 68, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -324, -77, 303, -46, 159, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1006, -74, 16, -28, -36, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -902, 85, -102,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimTurnRun_joint23[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 450, 347, 257, 71, 626, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 601, 410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 798, 400, 537, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1250, 158, 707, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1114, 289, 1149, 456, 563, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1829, 393, 1514, 203, 263, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1900, 14, 1556, 34, 353, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1884, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1859, -37, 377, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1892, 86, 439, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1998, -182, 591, 389,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1347, 241, 1409, -316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2183, 146,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1930, -305,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2009, 212, 585, -559,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 249, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1771, -204, 1568, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1600, -16, 1539, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1943, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1545, 74, 279, 124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 987, 615,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1688, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1799, -207, 1956, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1528, -46, 1790, -173, 1728, 404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1705, 138, 1608, -165, 1796, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1958, 123, 1366, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1918, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2122, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2052, 93, 1347, -18, 2228, 105,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimTurnRun_joint25[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 68,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 68, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 594, 599,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1267, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1260, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1108, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1070, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 965, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 733, -449,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 66, -366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 813, 510,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1020, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 855, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 936, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 733, -490,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -366,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimTurnRun_joint26[220] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -84, -42, -168, -291, 59, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 173, -459, -32, 32, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 263, 151, -234, 205, -524, -373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 176, -309, -48, 247, -714, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -355, -293, 261, 168, -249, 224,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -339, 64, 272, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -265, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -251, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -247, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -281, 1, 233, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -484, 191,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 246, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -341, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -164, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -420, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 149, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -181, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -23, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -173, -185, 311, 1, -38, -283,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -153, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -421, 83, -606, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -227, 216, -405, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -347, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 10, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 20, -32, -135, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -53, -37, -121, -4, -27, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -55, -1, -145, -24, 60, 88,
	ftAnimEnd(),
	0x400E, 0x01D3, 0x008B, 0xFFE5, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0002, 0xFE21, 0xFEB3, 0xFEE1, 0xFFEC, 0xFDFF, 0x0007, 0x200F, 0x0002, 0xFC35, 0xFFDD, 0x0034, 0x0063, 0x0003, 0x0070, 0x200F, 0x0004, 0xFD5C, 0x001B, 0x0105, 0x0034, 0x006A, 0x0013, 0x200F, 0x0003, 0xFCE9, 0xFFC1, 0x018F, 0xFFE4, 0x0087, 0xFFFF, 0x200F, 0x0003, 0xFBBA, 0x008D, 0x0049, 0xFFDC, 0x005F, 0x001E, 0x200F, 0x0005, 0x0131, 0x00C9, 0x0076, 0x0008, 0x0175, 0xFFF1, 0x380F, 0x0003, 0x01D3, 0x008B, 0xFFE5, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
