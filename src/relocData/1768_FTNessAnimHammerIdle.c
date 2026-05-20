/* AnimJoint data for relocData file 1768 (FTNessAnimHammerIdle) */
/* 1696 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimHammerIdle_joint1[26];
extern u16 dFTNessAnimHammerIdle_joint2[14];
extern u16 dFTNessAnimHammerIdle_joint4[36];
extern u16 dFTNessAnimHammerIdle_joint5[28];
extern u16 dFTNessAnimHammerIdle_joint6[14];
extern u16 dFTNessAnimHammerIdle_joint7[12];
extern u16 dFTNessAnimHammerIdle_joint8[12];
extern u16 dFTNessAnimHammerIdle_joint10[16];
extern u16 dFTNessAnimHammerIdle_joint11[8];
extern u16 dFTNessAnimHammerIdle_joint12[8];
extern u16 dFTNessAnimHammerIdle_joint13[32];
extern u16 dFTNessAnimHammerIdle_joint15[36];
extern u16 dFTNessAnimHammerIdle_joint16[84];
extern u16 dFTNessAnimHammerIdle_joint18[44];
extern u16 dFTNessAnimHammerIdle_joint19[112];
extern u16 dFTNessAnimHammerIdle_joint21[36];
extern u16 dFTNessAnimHammerIdle_joint22[88];
extern u16 dFTNessAnimHammerIdle_joint24[52];
extern u16 dFTNessAnimHammerIdle_joint25[108];
extern u16 dFTNessAnimHammerIdle_joint26[30];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimHammerIdle_joints[] = {
	(AObjEvent32 *)dFTNessAnimHammerIdle_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimHammerIdle_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimHammerIdle_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimHammerIdle_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimHammerIdle_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimHammerIdle_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimHammerIdle_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimHammerIdle_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimHammerIdle_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimHammerIdle_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimHammerIdle_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimHammerIdle_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimHammerIdle_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimHammerIdle_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimHammerIdle_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimHammerIdle_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimHammerIdle_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimHammerIdle_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimHammerIdle_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimHammerIdle_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimHammerIdle_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 551,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 502, -35,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 516, 31,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 534, 83,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 600,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimHammerIdle_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 184,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -178,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimHammerIdle_joint4[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -432, 69, 0, 16, 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 555, 136,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 130, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 658, -66, 0, -15, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimHammerIdle_joint5[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1359, 0, 117, 2, 2138, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -1359, 0, 117, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 2138,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1359, 0, 117, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 2138,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimHammerIdle_joint6[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 7 */
u16 dFTNessAnimHammerIdle_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimHammerIdle_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 288, -54,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimHammerIdle_joint10[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -156, 117, -87,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -165, 124, -93,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -156, 117, -87,
	ftAnimLoop(0x6800, -30),
};

/* Joint 11 */
u16 dFTNessAnimHammerIdle_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2726, 1742, -2767,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 12 */
u16 dFTNessAnimHammerIdle_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 13 */
u16 dFTNessAnimHammerIdle_joint13[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 625, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 54, 3, 126, 9,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 90,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 90, 54, 126,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimHammerIdle_joint15[36] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1965, -270, 944,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 75, -92, 17,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2134, 217, 1005,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2174, 72, 946,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2054, -360, 891,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1923, -266, 816,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1965, -270, 944,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimHammerIdle_joint16[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1391, -78, -1503, 56, 586, 98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1647, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1502, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1021, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1118, -89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 520, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1566, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1664, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1552, -21, 308, -130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1458, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 643, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 933, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1672, 25, 1170, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1419, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1085, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 693, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1393, 25, -1498, -40, 597, -95,
	ftAnimLoop(0x6800, -164),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimHammerIdle_joint18[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1228, -100,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 887, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 649, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1015, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 968, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 702, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 548, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1089, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1203, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1226, 23,
	ftAnimLoop(0x6800, -86),
};

/* Joint 19 */
u16 dFTNessAnimHammerIdle_joint19[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 190, 44, 259, -15, 425, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 224, -137,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 408, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 395, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 361, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, -92, -79, -157,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 102, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 405, -9, 46, 216,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 909, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 345, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 161, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 217, -95,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 703, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 405, 29, 515, -334,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 279, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 65, -44, 34, -246,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 185, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 22, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 323, 159,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 207, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 207, 0, 250, -28, 444, 120,
	ftAnimLoop(0x6800, -220),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimHammerIdle_joint21[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -531, 211, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -178, -16, 198, -8, 37, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -649, -1, 151, 0, 27, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -192, 13, 196, 6, 68, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -531, 211, 79,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimHammerIdle_joint22[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1752, -78, 1404, -39, 1510, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1462, -208, 1367, 146, 888, -503,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1257, -67, 1659, 179, 314, -347,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1519, -43, 677, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1383, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1474, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1420, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1506, -6, 867, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1537, 104, 557, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1300, -36, 1714, 67, 226, -146,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1648, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1441, -33, 1019, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1441, 6, 1307, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1689, 41, 1454, 13, 1439, 131,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimHammerIdle_joint24[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 559, 252,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 811, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1193, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1310, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1258, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 731, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 909, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1340, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1302, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 968, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 676, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 507, -169,
	ftAnimLoop(0x6800, -102),
};

/* Joint 25 */
u16 dFTNessAnimHammerIdle_joint25[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 12, -4, -21, -8, -113, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -70, -66, -47, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -162, -21, 441, 331,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 109, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 615, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 291, -278,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -12, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -14, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -42, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 123, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -7, -122,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 119, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -155, -40, 496, 224,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 46, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 567, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -10, 29, 260, -240,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 22, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 86, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 68, 13, 41, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, -1, 72, 4, 49, 8,
	ftAnimLoop(0x6800, -212),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimHammerIdle_joint26[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 56,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -721, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -455, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -600, 64,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 56,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
