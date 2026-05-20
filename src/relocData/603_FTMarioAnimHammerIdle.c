/* AnimJoint data for relocData file 603 (FTMarioAnimHammerIdle) */
/* 1744 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimHammerIdle_joint1[20];
extern u16 dFTMarioAnimHammerIdle_joint2[18];
extern u16 dFTMarioAnimHammerIdle_joint4[40];
extern u16 dFTMarioAnimHammerIdle_joint5[30];
extern u16 dFTMarioAnimHammerIdle_joint6[8];
extern u16 dFTMarioAnimHammerIdle_joint7[14];
extern u16 dFTMarioAnimHammerIdle_joint8[18];
extern u16 dFTMarioAnimHammerIdle_joint10[24];
extern u16 dFTMarioAnimHammerIdle_joint11[30];
extern u16 dFTMarioAnimHammerIdle_joint12[16];
extern u16 dFTMarioAnimHammerIdle_joint13[32];
extern u16 dFTMarioAnimHammerIdle_joint15[48];
extern u16 dFTMarioAnimHammerIdle_joint16[108];
extern u16 dFTMarioAnimHammerIdle_joint18[48];
extern u16 dFTMarioAnimHammerIdle_joint20[126];
extern u16 dFTMarioAnimHammerIdle_joint21[104];
extern u16 dFTMarioAnimHammerIdle_joint23[40];
extern u16 dFTMarioAnimHammerIdle_joint24[100];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimHammerIdle_joints[] = {
	(AObjEvent32 *)dFTMarioAnimHammerIdle_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimHammerIdle_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimHammerIdle_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimHammerIdle_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimHammerIdle_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimHammerIdle_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimHammerIdle_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimHammerIdle_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimHammerIdle_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimHammerIdle_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimHammerIdle_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimHammerIdle_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimHammerIdle_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimHammerIdle_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimHammerIdle_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimHammerIdle_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimHammerIdle_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimHammerIdle_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimHammerIdle_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 8), 0, 540,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 8), 0, 600,
	ftAnimLoop(0x6800, -38),
};

/* Joint 2 */
u16 dFTMarioAnimHammerIdle_joint2[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 184,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -178,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimHammerIdle_joint4[40] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -432, 69, 0, 16, 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 555, 136,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 130, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 658, -66, 0, -15, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimHammerIdle_joint5[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1359, 0, 117, 0, -1078, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4095, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 117, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -1359, -1078,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1359, 0, 117, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1078,
	ftAnimLoop(0x6800, -58),
};

/* Joint 6 */
u16 dFTMarioAnimHammerIdle_joint6[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 7 */
u16 dFTMarioAnimHammerIdle_joint7[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 16,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimHammerIdle_joint8[18] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 288, 0, -54, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 288, -54,
	ftAnimLoop(0x6800, -34),
};

/* Joint 10 */
u16 dFTMarioAnimHammerIdle_joint10[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -156, -6, 117, 5, -87, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -165, 124, -93,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -156, 117, -87,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimHammerIdle_joint11[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 480, 0, -133, -3, -1158, 2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4095, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 480, 0, -137, 1, -1156, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 480, 0, -133, 3, -1158, -2,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimHammerIdle_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTMarioAnimHammerIdle_joint13[32] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -61, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -61, 27, -108,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -64, -261, -37,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -37, 111, 63,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 178, 0, 402,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -61, 0, 0,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimHammerIdle_joint15[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1215, -396, -2600,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 71, 0, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1276, 9, -452, -2, -2741, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1300, -50, -422, 55, -2774, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1175, -78, -341, 63, -2812, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1143, 6, -296, -9, -2850, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1215, -396, -2600,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimHammerIdle_joint16[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 115, -93, -146, -34, -997, 152,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -154, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -151, 55, -582, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, 21, -377, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -170, -59, -688, -321,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -101, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -26, -347, -228, -239, -1043, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -358, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -797, -780, -650, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1588, -33, -258, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -864, 672, -532, 11, -704, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, 316, -234, 214, -845, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -182, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -230, 42, -549, 220,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 77, 63, -878, -164,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -169, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 111, 34, -149, 19, -985, -106,
	ftAnimLoop(0x6800, -212),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimHammerIdle_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1228, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 783, -355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 395, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 650, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 805, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 647, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 416, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 648, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1202, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1226, 24,
	ftAnimLoop(0x6800, -94),
};

/* Joint 20 */
u16 dFTMarioAnimHammerIdle_joint20[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1274, -8, -2027, 17, -1120, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1517, -185, -2097, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1228, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1285, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1715, -71, -2020, 35, -1715, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1660, 96, -2025, 4, -1605, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1523, 344, -2010, 275, -1256, 403,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1097, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -970, 657, -797, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -207, 9, -1357, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -951, -552, -1429, -449, -720, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1311, -297, -1996, -337, -905, -248,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1707, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2104, -17, -1216, -401,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -2041, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1707, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1609, 117, -1689, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1338, 96, -1281, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2049, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2039, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1278, 60, -2028, 11, -1135, 146,
	ftAnimLoop(0x6800, -248),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimHammerIdle_joint21[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1752, -88, 1404, -36, -1706, -206,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1513, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1362, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2241, -368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2650, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1664, 32, -2943, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1521, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1406, 59, -2760, 209,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2360, -168,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1447, -92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1509, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1526, 63,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2598, -261,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2940, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1344, -48, 1633, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1648, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1665, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1505, -111, -2570, 374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1441, 6, -1907, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1689, 40, 1454, 12, -1777, 129,
	ftAnimLoop(0x6800, -204),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimHammerIdle_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 559, 240,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1295, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1294, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 852, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1310, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1299, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 673, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 507, -166,
	ftAnimLoop(0x6800, -78),
};

/* Joint 24 */
u16 dFTMarioAnimHammerIdle_joint24[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 147, 0, -21, -11, -113, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 5, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 67, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 179, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 499, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 232, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 82, 63, 12, -156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -93, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 48, -93,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 42, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 168, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 21, 202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 494, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -63, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 79, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 192, -235,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -13, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 156, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 149, -6, 81, 1, 0, 12,
	ftAnimLoop(0x6800, -188),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
