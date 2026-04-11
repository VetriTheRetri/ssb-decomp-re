/* AnimJoint data for relocData file 628 (FTMarioAnimLandingAirB) */
/* 1936 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimLandingAirB_joint1[16];
extern u16 dFTMarioAnimLandingAirB_joint2[22];
extern u16 dFTMarioAnimLandingAirB_joint4[30];
extern u16 dFTMarioAnimLandingAirB_joint5[80];
extern u16 dFTMarioAnimLandingAirB_joint6[44];
extern u16 dFTMarioAnimLandingAirB_joint7[10];
extern u16 dFTMarioAnimLandingAirB_joint8[14];
extern u16 dFTMarioAnimLandingAirB_joint10[30];
extern u16 dFTMarioAnimLandingAirB_joint11[74];
extern u16 dFTMarioAnimLandingAirB_joint12[42];
extern u16 dFTMarioAnimLandingAirB_joint13[36];
extern u16 dFTMarioAnimLandingAirB_joint15[10];
extern u16 dFTMarioAnimLandingAirB_joint16[106];
extern u16 dFTMarioAnimLandingAirB_joint18[48];
extern u16 dFTMarioAnimLandingAirB_joint20[120];
extern u16 dFTMarioAnimLandingAirB_joint21[96];
extern u16 dFTMarioAnimLandingAirB_joint23[142];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimLandingAirB_joints[] = {
	(u32)dFTMarioAnimLandingAirB_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimLandingAirB_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimLandingAirB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimLandingAirB_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimLandingAirB_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimLandingAirB_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimLandingAirB_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimLandingAirB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimLandingAirB_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimLandingAirB_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimLandingAirB_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimLandingAirB_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimLandingAirB_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimLandingAirB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimLandingAirB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimLandingAirB_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimLandingAirB_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF01AD, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimLandingAirB_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -146, 405, -618,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 223, 0, 540, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimLandingAirB_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -4, 0, -52, 0, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -71, -790, -95,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimLandingAirB_joint4[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 962, 84, -242,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 765, 0, 7, -2, 11, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 970, -60, 66, 27, 60, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimLandingAirB_joint5[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -180, -37, -1079, 45, 2842, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1012, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -521, -465, 3186, 464,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1148, -355, 3808, 330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1233, -72, -1226, -157, 3847, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1346, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1293, -47, 3876, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1363, -51, 4332, 111,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1336, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1305, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1437, -51, 4477, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1466, -18, 4535, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, -9, -1308, -2, 4553, 17,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimLandingAirB_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -509, -41,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -514, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -166, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -161, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -181, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimLandingAirB_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimLandingAirB_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimLandingAirB_joint10[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -230, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -230, 28, 0, 10, 0, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 88, 1, 115, 19, -172, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -221, 139, -209,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimLandingAirB_joint11[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2669, 60, 70, 1, 2050, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3116, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 488, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2268, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2430, 135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2785, 87,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3122, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3247, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2860, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2892, 102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3253, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3594, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3102, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3242, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3660, 66, 551, 63, 3282, 39,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimLandingAirB_joint12[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -161, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -138, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -428, -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -743, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -67,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimLandingAirB_joint13[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 804,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 22, 0, -22,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 312,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 3), 199,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -203, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 376,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -15, 0, 15,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 625,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimLandingAirB_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimLandingAirB_joint16[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -276, 0, -63, -15, 759, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -225, -108,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -11, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 748, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 480, -306,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -703, -498,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -295, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 170, 93, -233, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 70, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -218, -448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1130, -531, -1266, -411,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1698, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 89, -1, -1282, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1315, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 67, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1, -364, -1898, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1400, -449, -1690, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1560, -129, -1333, -17, -1667, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1722, -41, -1369, -13, -1576, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1743, -21, -1377, -8, -1563, 13,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimLandingAirB_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 468, 423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1181, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1018, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 442, -376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 99, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 268, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 386, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimLandingAirB_joint20[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1779, -27, 1413, -23, -1202, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1586, -156,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1225, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1240, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1504, -208,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1678, 149,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1373, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1235, 502, 1130, 296, -1358, 419,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2378, 675, 1819, 371, -838, 325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2586, 191, 1872, 24, -708, 160,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1920, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2761, 170, -517, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2928, 523, -281, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3807, 758, 2189, -99, -939, -604,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4445, 361, 1721, -271, -1490, -343,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1704, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4530, 65, 1647, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 4603, 18, 1622, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1749, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4613, 9, 1619, -2, -1764, -15,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimLandingAirB_joint21[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1054, -41, 1516, -153, -339, -105,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1556, -387, -1079, -555,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1198, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1117, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2008, -141, 1373, 200, -1770, -696,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3300, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1839, 47, 1518, -408,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1914, -190, 557, -557,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2220, -249, 403, -155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 80, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2413, -171, -3368, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3141, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3002, -27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 114, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 177, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3146, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3168, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3016, -14, 187, 9, -3181, -12,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimLandingAirB_joint23[142] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 344,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1116, 326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1407, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 851, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 721, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 432, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 6,
	ftAnimEnd(),
	0x0000, 0x200E, 0x04CA, 0x001C, 0xFB42, 0x0013, 0x085F, 0xFF39, 0x2807, 0x0003, 0x05DF, 0x00C7, 0xFB91, 0xFFFD, 0x2009, 0x0002, 0x068E, 0xFEF3, 0x2009, 0x0001, 0x057D, 0xFF84, 0x200F, 0x0001, 0x06C6, 0x000B, 0xFB70, 0xFF51, 0x0595, 0x0194, 0x200F, 0x0001, 0x05F6, 0xFDC4, 0xFA32, 0xFE75, 0x08A7, 0x00A3, 0x200F, 0x0001, 0x024C, 0xFE56, 0xF859, 0xFF4D, 0x06DD, 0xFF0D, 0x200F, 0x0001, 0x02A1, 0x009D, 0xF8CB, 0x008E, 0x06BF, 0xFFA9, 0x2809, 0x0003, 0x04F6, 0xFFCF, 0x2007, 0x0001, 0x0387, 0x010F, 0xF976, 0x0094, 0x2803, 0x0003, 0x0625, 0x0064, 0x2805, 0x0005, 0xFA06, 0x0009, 0x0801, 0x0002, 0x2009, 0x0001, 0x04FB, 0x0012, 0x2809, 0x0003, 0x0565, 0x0018, 0x2003, 0x0001, 0x066C, 0x0035, 0x2803, 0x0002, 0x069E, 0x0008, 0x0801, 0x0001, 0x2005, 0x0001, 0xFA11, 0x0008, 0x200F, 0x0001, 0x06A1, 0x0002, 0xFA16, 0x0005, 0x0573, 0x000E, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
