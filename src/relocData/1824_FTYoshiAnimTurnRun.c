/* AnimJoint data for relocData file 1824 (FTYoshiAnimTurnRun) */
/* 3856 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimTurnRun_joint1[28];
extern u16 dFTYoshiAnimTurnRun_joint2[46];
extern u16 dFTYoshiAnimTurnRun_joint3[140];
extern u16 dFTYoshiAnimTurnRun_joint4[46];
extern u16 dFTYoshiAnimTurnRun_joint7[48];
extern u16 dFTYoshiAnimTurnRun_joint8[178];
extern u16 dFTYoshiAnimTurnRun_joint11[74];
extern u16 dFTYoshiAnimTurnRun_joint12[154];
extern u16 dFTYoshiAnimTurnRun_joint13[78];
extern u16 dFTYoshiAnimTurnRun_joint14[8];
extern u16 dFTYoshiAnimTurnRun_joint15[58];
extern u16 dFTYoshiAnimTurnRun_joint16[32];
extern u16 dFTYoshiAnimTurnRun_joint18[40];
extern u16 dFTYoshiAnimTurnRun_joint19[200];
extern u16 dFTYoshiAnimTurnRun_joint21[86];
extern u16 dFTYoshiAnimTurnRun_joint23[192];
extern u16 dFTYoshiAnimTurnRun_joint24[196];
extern u16 dFTYoshiAnimTurnRun_joint26[270];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimTurnRun_joints[] = {
	(u32)dFTYoshiAnimTurnRun_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimTurnRun_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimTurnRun_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimTurnRun_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimTurnRun_joint7, /* [4] joint 7 */
	0x00000000, /* [5] NULL */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimTurnRun_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimTurnRun_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimTurnRun_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimTurnRun_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimTurnRun_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimTurnRun_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimTurnRun_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimTurnRun_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimTurnRun_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimTurnRun_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimTurnRun_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimTurnRun_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimTurnRun_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	0xFFFF036C, /* [26] END */
};

/* Joint 1 */
u16 dFTYoshiAnimTurnRun_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1045,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 14), 1200, -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 13), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 13), 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 7), 1200,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 0, -1089,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimTurnRun_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 608, -52,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 14), 618, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 14), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 0, 139,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 610, 60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 621, -1, 0, 374,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 8), 1608, 137, 608, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 0, -196,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimTurnRun_joint3[140] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 86, 33, 0, 5, 0, -35, 213, 301, 1, -44,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -38, 446, 32, 7, -39,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -4, -4, 240, -439, -1, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -2, 0, 0, -578, 2, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -555, -36, 558, 10, -569, -37,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -4, 2, -247, -142, 23, 251,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -7, -170, 84, 335, 391,
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), -9, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -561, 48, -575, 49,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 566, -182, 352,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 558, -186, 335,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), -7, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 566, -61, -182, 621, 352, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 52, 86, -44, 0, 53,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -37, 366, 312, -378,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -5, 13, -50, 200, 216, -535,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -3, 15, 35, 143, 119, -598,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -1, 8, -16, 493, 72, -326,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 2, 213, 310, 1, -96,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimTurnRun_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -64,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 446, -6, -76, -13,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 16, 67, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 160, -28, -134, 36, 0, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 1, 6, 483, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 268, 42, 158, -52, 0, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 446, 20, -76, -26, -64, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimTurnRun_joint7[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -352, 13, 22, 9, 26, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 50, 117, 48, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 36, -3, 394, 29, 13, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -38, -7, 452, -6, -51, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -61, -29, 308, -40, -33, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -352, -33, 22, -32, 26, 6,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimTurnRun_joint8[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1497, 123, -1946, 113, 1155, 205,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1526, -387, 1732, 373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1833, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1524, 301,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -945, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 845, -751, 2108, 591,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 23, -697, 2916, 700,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -549, -544, -1024, -71, 3509, 527,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4289, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1065, -515, -1087, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1579, -334, -1555, -358,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1895, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1734, -140, 4245, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1860, -67, 4109, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1851, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4134, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 3776, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1898, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1746, 76,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1875, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1772, 84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1676, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1335, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1674, 354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1064, 404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -866, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -717, 461, -1249, 223, 3688, -446,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -286, 652,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 56, 290, 2882, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -136, 74, 3182, 163,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3045, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 205, 103, 417, 327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 70, -157, 369, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, -180, 338, -31, 2764, -281,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimTurnRun_joint11[74] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -679, -131,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -810, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1140, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1009, 367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -406, 354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -301, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -327, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 163,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -775, -553,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1115, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1234, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -959, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -679, 280,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimTurnRun_joint12[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 71, -45, -388, 74, -818, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 256, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 54, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -735, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -684, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -682, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 373, 145, -667, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1307, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 92, -240, -648, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -426, -35, -1190, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 21, 163, -743, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -99, -63, -882, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -104, 4, -911, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -935, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -214, -159,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1202, -114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1058, 102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1009, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -458, -508, 1283, 280, -1338, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1232, -540, 1619, 138, -1549, -263,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2106, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1539, -200, 1561, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1574, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1999, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2387, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2388, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1512, 18, -2462, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1537, -25, 1997, -2, -2426, 36,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimTurnRun_joint13[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -460, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -551, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -409, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, -626,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1252, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1040, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, 454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -132, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -423, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -97, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 89,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimTurnRun_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimTurnRun_joint15[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1188, -893, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1977, -237, -1123, -65, 849, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2339, 74, -1210, 12, 1243, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -625, 95, -893, 18, 0, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -687, -109, -886, 2, -28, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -835, 17, -889, -3, -15, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -653, -122, -893, -1, 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1188, -893, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimTurnRun_joint16[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -241, 6, 0, -20, 0, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -209, 0, -199, 9, -86, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -256, -1, 209, 11, -148, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -241, 1, 0, -26, 0, 18,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimTurnRun_joint18[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -132, -12, 0, -11, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -193, 0, -186, 1, -76, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -147, 23, 26, 18, -40, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, 3, 29, -6, -33, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -132, -30, 0, -4, 0, 4,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTYoshiAnimTurnRun_joint19[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3193, -40, 22, -44, -2805, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 3182, 45, -152, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2754, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3117, -441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3244, -103, -98, 39, -3636, -376,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 15, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2975, -195, -3869, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2852, -85, -3759, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2741, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3772, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3958, -102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -46, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -252, 137,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2865, 228, -4109, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3199, 270, -4452, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3406, 188, 23, 177, -4525, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3660, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -223, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4318, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4218, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3719, -282, -4213, 347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3095, -421, -448, 175, -3522, 502,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2877, 16, 126, 407, -3209, 355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3128, 48, 366, 87, -2812, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2973, -17, 301, -494, -2700, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3094, 461, -623, -210, -3382, -827,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 217, -461,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3896, 386, -4354, -629,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3867, 151, -4641, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -4238, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4199, 152, -1041, -895,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1610, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4171, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4514, 315, -4320, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4802, 287, -1631, -20, -4409, -89,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimTurnRun_joint21[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 619, 542,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1091, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1063, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 757, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 741, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1014, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1113, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1406, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1331, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1324, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1160, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, 493,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 986, 686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1379, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1489, -373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 631, -741,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimTurnRun_joint23[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1722, -241, 174, -200, 78, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -130, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1480, -288, 176, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1145, -69, -87, -202,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1784, 290,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -212, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -104, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 97, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1922, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2072, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 104, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 248, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -97, 92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2020, -112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1138, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 17, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -312, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 333, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 453, 74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -489, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1235, 149, -788, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1437, 411, 509, 2, -1017, 156,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 434, 91, -46, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2058, 316,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1744, -407,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 640, -216, -328, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1255, -260, 2, -280, -725, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1280, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 80, 193, -388, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 388, 122, -115, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1066, -98, 326, -49, -656, -232,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -176, 330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1083, 245, 290, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1557, 319, 379, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1722, 164, 174, -204, 81, 258,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimTurnRun_joint24[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3, -199, 211, -199, -957, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1118, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -253, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 11, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 118, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 437, 186, -831, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 196, 243, 490, 21, -278, 296,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 414, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 232, 51, -237, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -69, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 299, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 336, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 413, -10, -66, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -27, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 361, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 323, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 106, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -246, -233,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -704, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 293, -84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 167, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -981, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 458, 277, 196, -82, -887, 118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -281, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 661, 36, -744, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 531, -67, -518, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 526, -311, -262, -60, -587, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -91, -372, -401, 4, 116, 424,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -145, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -253, 150, 261, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -290, -979,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -101, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -106, 178, 24, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 211, -18, -375, -117, -1671, -391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -143, -104, -211, 293, -1073, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3, 146, 211, 422, -957, 116,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimTurnRun_joint26[270] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 914, 65,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1026, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 734, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 350, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 655, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 881, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 999, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 783, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 390, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 372, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 780, 781,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1570, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1182, -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 914, -268,
	ftAnimEnd(),
	0x200E, 0x0654, 0x008E, 0xFF7D, 0x00CD, 0xFEF3, 0x002B, 0x2809, 0x0002, 0xFF39, 0xFFF1, 0x2803, 0x0004, 0x07AC, 0xFFCD, 0x2005, 0x0001, 0x0049, 0x000F, 0x2005, 0x0001, 0xFF9C, 0xFF49, 0x2805, 0x0003, 0xFE50, 0x000A, 0x2009, 0x0001, 0xFF00, 0x0025, 0x2809, 0x0002, 0xFFF4, 0x0065, 0x0801, 0x0001, 0x2003, 0x0001, 0x0766, 0xFFD6, 0x2803, 0x0004, 0x06D0, 0x0000, 0x200D, 0x0001, 0xFE76, 0x002F, 0x004E, 0x0067, 0x2809, 0x0005, 0xFFB7, 0xFECA, 0x2805, 0x0006, 0xFF02, 0x0027, 0x0801, 0x0003, 0x2003, 0x0001, 0x06F3, 0x0065, 0x2803, 0x0002, 0x0823, 0x0027, 0x0801, 0x0001, 0x2009, 0x0001, 0xFE5D, 0xFF0C, 0x2809, 0x0003, 0xFEA8, 0x016A, 0x2007, 0x0001, 0x07EB, 0xFFB2, 0xFF18, 0x0004, 0x2805, 0x0004, 0xFDE5, 0x0013, 0x2003, 0x0002, 0x06EA, 0xFF0A, 0x200B, 0x0001, 0x0599, 0xFECE, 0x0098, 0x01FC, 0x2803, 0x0003, 0x0469, 0x00BD, 0x2009, 0x0001, 0x02A0, 0x012C, 0x200D, 0x0001, 0xFE23, 0x003E, 0x02F1, 0xFF68, 0x2805, 0x0003, 0xFF3C, 0x0079, 0x2009, 0x0001, 0x0170, 0xFEA6, 0x200B, 0x0001, 0x059E, 0x00D8, 0x003C, 0xFF10, 0x2803, 0x0002, 0x062B, 0x0082, 0x2009, 0x0001, 0xFF8F, 0xFF7F, 0x200D, 0x0001, 0xFFD1, 0xFF82, 0xFF39, 0xFEFF, 0x200F, 0x0001, 0x071F, 0x012C, 0xFE40, 0x0036, 0xFD8C, 0x0174, 0x200F, 0x0001, 0x0884, 0xFFEF, 0x003E, 0x0186, 0x0221, 0x010C, 0x200F, 0x0001, 0x06FC, 0xFEE9, 0x014B, 0xFFA0, 0xFFA5, 0xFE69, 0x200F, 0x0001, 0x0654, 0xFF59, 0xFF7D, 0xFE32, 0xFEF3, 0xFF4E, 0x0000, 0x0000, 0x0000,
};
