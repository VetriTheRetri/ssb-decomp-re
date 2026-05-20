/* AnimJoint data for relocData file 1816 (FTYoshiAnimWalk1) */
/* 2128 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimWalk1_joint1[16];
extern u16 dFTYoshiAnimWalk1_joint2[56];
extern u16 dFTYoshiAnimWalk1_joint3[26];
extern u16 dFTYoshiAnimWalk1_joint6[74];
extern u16 dFTYoshiAnimWalk1_joint7[102];
extern u16 dFTYoshiAnimWalk1_joint10[40];
extern u16 dFTYoshiAnimWalk1_joint11[104];
extern u16 dFTYoshiAnimWalk1_joint13[40];
extern u16 dFTYoshiAnimWalk1_joint14[20];
extern u16 dFTYoshiAnimWalk1_joint15[44];
extern u16 dFTYoshiAnimWalk1_joint17[54];
extern u16 dFTYoshiAnimWalk1_joint18[84];
extern u16 dFTYoshiAnimWalk1_joint20[48];
extern u16 dFTYoshiAnimWalk1_joint22[76];
extern u16 dFTYoshiAnimWalk1_joint23[82];
extern u16 dFTYoshiAnimWalk1_joint25[56];
extern u16 dFTYoshiAnimWalk1_joint26[90];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimWalk1_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimWalk1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimWalk1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimWalk1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimWalk1_joint6, /* [3] joint 6 */
	NULL, /* [4] NULL */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimWalk1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimWalk1_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimWalk1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimWalk1_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTYoshiAnimWalk1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimWalk1_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimWalk1_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimWalk1_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimWalk1_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimWalk1_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimWalk1_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimWalk1_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimWalk1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimWalk1_joint1[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 763,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 22), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 23), 763,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 22), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 23), 763,
	ftAnimLoop(0x6800, -30),
};

/* Joint 2 */
u16 dFTYoshiAnimWalk1_joint2[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -44,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 45), 44,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 23,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX), -44, 60,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAZ), -223, 0, 20, 11,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 30,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 23), -160, 120,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 45), 44, -60,
	ftAnimBlock(0, 22),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 45), -44,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 22), -223, 20,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 45), -44, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 22), -160, 120,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 23), 20, -11,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 45), 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 23), -223,
	ftAnimLoop(0x6800, -110),
};

/* Joint 3 */
u16 dFTYoshiAnimWalk1_joint3[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 84,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 22), -112,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 15,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 23), 84,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 22), -112,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 23), 84,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 22), -112,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimWalk1_joint6[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 338, 5, -31, -4, 40, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 359, -4, -72, -2, 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 242, -5, -87, 1, -32, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 238, 4, -33, 5, -39, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 340, 5, 25, 4, -32, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 357, -4, 68, 2, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 250, -5, 84, -1, 30, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 233, 3, 31, -5, 42, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 338, 5, -31, -4, 40, -1,
	ftAnimLoop(0x6800, -144),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimWalk1_joint7[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1542, -3, -1614, 2, 1647, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -1520, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 56), -1612, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 1336, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1306, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1600, 39,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1521, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -1608, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1637, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 1356, -38,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1606, 6, -1608, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -1637, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), -1539, -3,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1319, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 1550, 30,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1631, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1618, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1579, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1628, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1542, -3, -1614, 3, 1647, 19,
	ftAnimLoop(0x6800, -200),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimWalk1_joint10[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1129, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -1264, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1266, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -1075, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1073, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -1205, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1203, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -1139, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1129, 9,
	ftAnimLoop(0x6800, -78),
};

/* Joint 11 */
u16 dFTYoshiAnimWalk1_joint11[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1541, -4, -1599, 0, 1767, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1521, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 62), -1577, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 1349, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1310, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 1506, 34,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1521, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1611, -2,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1539, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 1352, -32,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1614, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -1627, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1572, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -1537, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1321, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 1553, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1593, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1753, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1620, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1600, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1541, -4, -1599, 1, 1767, 13,
	ftAnimLoop(0x6800, -204),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimWalk1_joint13[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1115, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -1200, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1197, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -1110, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1111, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -1261, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1263, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -1131, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1115, 15,
	ftAnimLoop(0x6800, -78),
};

/* Joint 14 */
u16 dFTYoshiAnimWalk1_joint14[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 156, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 711, -1062, -1262,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 65), -536, -893, 0,
	ftAnimLoop(0x6800, -38),
};

/* Joint 15 */
u16 dFTYoshiAnimWalk1_joint15[44] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -268, -89,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 22), -190,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 0, 3,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 15,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 23), -268, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 22), -190,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 23), -268, -89,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 22), -190,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 0, 3,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -86),
};

/* Joint 17 */
u16 dFTYoshiAnimWalk1_joint17[54] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 30), -153,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 15,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -178,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 0, 7,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 8,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 22), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 30), -153,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 23), 0, -7,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 22), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 30), -153,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 0, 7,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -104),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimWalk1_joint18[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, 0, 9, 0, 197, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 49), 51, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 61), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 594, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 604, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 643, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 594, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -187, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), -35, 34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 51, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), -4, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 9, 0,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 178, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 0, 9, 0, 197, 19,
	ftAnimLoop(0x6800, -164),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimWalk1_joint20[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 296, -29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 35, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 361, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 425, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), 873, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 851, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 315, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 296, -18,
	ftAnimLoop(0x6800, -94),
};

/* Joint 22 */
u16 dFTYoshiAnimWalk1_joint22[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1603, 3, -14, 3, -82, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 46), 1623, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 70), -38, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -333, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -330, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -412, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -398, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -53, 1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1620, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 42), 1600, 3,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -52, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -78, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -40, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 18), -18, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1603, 3, -14, 3, -82, -3,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimWalk1_joint23[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -37, -2, 33, -2, -27, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 58), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 89), 35, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), -219, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -193, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 388, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 419, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 607, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), -35, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 617, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 657, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 656, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 332, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 298, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 2, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -37, -2, 33, -2, -27, -29,
	ftAnimLoop(0x6800, -160),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimWalk1_joint25[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 926, 23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), 412, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 385, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 152, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 102, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 142, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 719, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 757, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 905, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 926, 20,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimWalk1_joint26[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1600, 1, -43, 1, -330, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 46), 1610, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 54), -15, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -54, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -57, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -213, -19,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1607, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 42), 1598, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -233, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -334, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -18, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), -44, 1,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -335, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -415, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -426, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -345, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1600, 1, -43, 1, -330, 15,
	ftAnimLoop(0x6800, -164),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
