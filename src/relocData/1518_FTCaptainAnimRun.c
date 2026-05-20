/* AnimJoint data for relocData file 1518 (FTCaptainAnimRun) */
/* 2240 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimRun_joint1[26];
extern u16 dFTCaptainAnimRun_joint2[44];
extern u16 dFTCaptainAnimRun_joint4[48];
extern u16 dFTCaptainAnimRun_joint5[116];
extern u16 dFTCaptainAnimRun_joint6[56];
extern u16 dFTCaptainAnimRun_joint7[40];
extern u16 dFTCaptainAnimRun_joint8[8];
extern u16 dFTCaptainAnimRun_joint10[40];
extern u16 dFTCaptainAnimRun_joint11[112];
extern u16 dFTCaptainAnimRun_joint12[48];
extern u16 dFTCaptainAnimRun_joint13[54];
extern u16 dFTCaptainAnimRun_joint16[12];
extern u16 dFTCaptainAnimRun_joint17[82];
extern u16 dFTCaptainAnimRun_joint19[40];
extern u16 dFTCaptainAnimRun_joint21[104];
extern u16 dFTCaptainAnimRun_joint22[88];
extern u16 dFTCaptainAnimRun_joint24[48];
extern u16 dFTCaptainAnimRun_joint25[104];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimRun_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimRun_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimRun_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimRun_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimRun_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimRun_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimRun_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimRun_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimRun_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimRun_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimRun_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimRun_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimRun_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimRun_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimRun_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimRun_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimRun_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimRun_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimRun_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimRun_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 1253,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1318, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1170, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 1318, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1170, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 1253,
	ftAnimLoop(0x6800, -50),
};

/* Joint 2 */
u16 dFTCaptainAnimRun_joint2[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 148, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 268, -26, 74, -32, 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 249, 22, -87, -29, -5, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 393, -1, -148, 0, -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 268, -17, -74, 33, -4, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 393, 148, 9,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimRun_joint4[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 258,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -312, -71, 65, -23,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, -72, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 346, 0, -453, 0, -63, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 312, 90, -65, 42,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 346, 0, 453, 0, 63, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -312, -54, 65, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 258,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimRun_joint5[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, 151, -188, -72, -781, -145,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 601, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -411, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1166, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1296, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -499, 401,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 540, -215,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -415, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -515, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -360, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, 275,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -28, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -217, 178,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -73, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -381, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -105, 69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 96, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 63, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -93, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 63, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 27, -1, -28, 10, -2, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 61, 86, -85, -79, -252, -389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 138, -188, -102, -781, -528,
	ftAnimLoop(0x6800, -228),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimRun_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -848, -42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -954, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -794, 330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -266, 351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -91, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -345, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -516, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -727, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1038, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -848, 190,
	ftAnimLoop(0x6800, -110),
};

/* Joint 7 */
u16 dFTCaptainAnimRun_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 38, 38, -4, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 164, 0, 36, 4, -261, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 29, -35, 52, 0, -115, 19,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -138, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 38, 38,
	ftAnimLoop(0x6800, -78),
};

/* Joint 8 */
u16 dFTCaptainAnimRun_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, -62, 8,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTCaptainAnimRun_joint10[40] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 163, 108,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -617, -188,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -32, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -511, 14, 356, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -445, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 24, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -355, 0, 183, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 163, 47,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -617, -188,
	ftAnimLoop(0x6800, -78),
};

/* Joint 11 */
u16 dFTCaptainAnimRun_joint11[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1494, -53, 1205, 12, -1426, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1524, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1365, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1430, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1348, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1745, -411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1574, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1790, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1433, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1402, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1983, -84, -2309, -365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1960, -40, -2612, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2040, -78, 1431, -15, -2805, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2052, 242,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1149, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2520, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2308, 268,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1366, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1702, 326,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1269, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1204, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1236, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1494, -224, 1205, -31, -1426, -60,
	ftAnimLoop(0x6800, -220),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimRun_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -419, 106,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -303, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -550, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -896, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1096, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -825, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -910, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -973, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -968, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -710, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -419, 290,
	ftAnimLoop(0x6800, -94),
};

/* Joint 13 */
u16 dFTCaptainAnimRun_joint13[54] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 379, -36, -20, 11, 98, -34,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -44, -89, -48, 4, -214, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -149, 64, 39, 0, 41, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 600, 27, -47, -13, -24, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 127, -31, 113, 3, -87, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 379, -36, -20, 11, 98, -34,
	ftAnimLoop(0x6800, -104),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimRun_joint16[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimRun_joint17[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 166, -35, -61, 12, -72, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -71, 30, -91, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -159, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -329, -242,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1081, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -32, 22, -137, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 77, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 16, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1017, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -847, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -842, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -148, 120,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 133, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 162, 16, -33, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 166, 3, -61, -28, -72, 75,
	ftAnimLoop(0x6800, -160),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimRun_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 293, 138,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1234, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1308, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 658, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 746, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 848, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 646, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 406, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, -112,
	ftAnimLoop(0x6800, -78),
};

/* Joint 21 */
u16 dFTCaptainAnimRun_joint21[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -82, -67, -81, 20, -38, 198,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -89, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -71, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 160, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 135, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 45, 172,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -34, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 243, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -227, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -83, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 0, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -128, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 5, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -144, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -113, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 9, 10, -252, -149,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -13, -55, -298, 208,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -29, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -60, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -82, -68, -81, -20, -38, 259,
	ftAnimLoop(0x6800, -204),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimRun_joint22[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -10, 157, -14, -1083, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -122, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 39, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -932, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -830, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -638, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -410, 202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -20, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -157, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 96, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 63, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 103, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 12, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -722, -245,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, -26, 139, 27, -952, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 28, -20, 157, 18, -1083, -130,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimRun_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1180, -157,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 658, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 751, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 837, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 631, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 281, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 404, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1218, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1271, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1250, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1180, -69,
	ftAnimLoop(0x6800, -94),
};

/* Joint 25 */
u16 dFTCaptainAnimRun_joint25[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1688, 15, -1714, 78, -1439, -393,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1566, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1674, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1832, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1747, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1727, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1882, -164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1929, 231,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1554, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1669, -53,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1711, -8, -1639, 235,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1725, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1669, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1622, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1680, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1757, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1416, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1671, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1692, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1688, 7, -1714, -22, -1439, -22,
	ftAnimLoop(0x6800, -196),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
