/* AnimJoint data for relocData file 1687 (FTNessAnimSleep) */
/* 2880 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimSleep_joint1[54];
extern u16 dFTNessAnimSleep_joint2[98];
extern u16 dFTNessAnimSleep_joint4[98];
extern u16 dFTNessAnimSleep_joint5[122];
extern u16 dFTNessAnimSleep_joint6[64];
extern u16 dFTNessAnimSleep_joint7[8];
extern u16 dFTNessAnimSleep_joint8[40];
extern u16 dFTNessAnimSleep_joint10[10];
extern u16 dFTNessAnimSleep_joint11[116];
extern u16 dFTNessAnimSleep_joint12[70];
extern u16 dFTNessAnimSleep_joint13[24];
extern u16 dFTNessAnimSleep_joint15[12];
extern u16 dFTNessAnimSleep_joint16[148];
extern u16 dFTNessAnimSleep_joint18[56];
extern u16 dFTNessAnimSleep_joint19[128];
extern u16 dFTNessAnimSleep_joint21[20];
extern u16 dFTNessAnimSleep_joint22[124];
extern u16 dFTNessAnimSleep_joint24[52];
extern u16 dFTNessAnimSleep_joint25[130];
extern u16 dFTNessAnimSleep_joint26[14];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimSleep_joints[] = {
	(AObjEvent32 *)dFTNessAnimSleep_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimSleep_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimSleep_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimSleep_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimSleep_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimSleep_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimSleep_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimSleep_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimSleep_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimSleep_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimSleep_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimSleep_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimSleep_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimSleep_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimSleep_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimSleep_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimSleep_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimSleep_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimSleep_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimSleep_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimSleep_joint1[54] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 542, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 20), 571, 6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 564, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 563, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 554, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 552, -8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 533, -10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 526, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 11), 535, 6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 9), 544, 6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 550, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 542, 5,
	ftAnimLoop(0x6800, -104),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimSleep_joint2[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1117, 69, -794, 0, -1242, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 917, -25, -765, 1, -1030, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 341, -45, -753, 1, -515, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 3, -39, -740, 2, -226, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -443, -25, -696, 3, 175, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -504, -9, -673, -1, 220, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -632, -22, -718, -3, 362, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -964, -23, -735, -1, 700, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -1118, 3, -739, -1, 916, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -903, -1, -764, -2, 773, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1154, -59, -780, -1, 1048, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -2099, 69, -794, 0, 1974, -69,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimSleep_joint4[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 428, 0, 35, 2, 52, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 326, -5, 78, 1, -90, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 264, -6, 69, 0, -122, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 190, -5, 95, 1, -117, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 162, -2, 90, -3, -134, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 130, -4, 33, -2, -71, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 73, -1, 32, -2, 3, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 98, 3, -8, -3, 43, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 149, 6, -36, -1, 74, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 224, 9, -35, 2, 82, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 331, 10, 10, 3, 69, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 428, 0, 35, 2, 52, -5,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimSleep_joint5[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -146, 2, -241, -1, -70, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -228, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 27), -72, -4, -270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -76, -2, -270, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), -152, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), -100, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -223, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 28), -167, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -161, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -162, 4,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -152, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 43), -135, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -104, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -65, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -67, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -124, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -158, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 18), -146, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -155, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -235, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -134, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -144, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -115, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -78, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -146, -2, -241, -5, -70, 8,
	ftAnimLoop(0x6800, -240),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimSleep_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimLoop(0x6800, -126),
};

/* Joint 7 */
u16 dFTNessAnimSleep_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, 0, 0,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -14),
};

/* Joint 8 */
u16 dFTNessAnimSleep_joint8[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -131,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 60), 215,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 55,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 245,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 60), -159,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 25,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 60), -131,
	ftAnimBlock(0, 30),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 60), 245,
	ftAnimBlock(0, 30),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 60), 215,
	ftAnimBlock(0, 30),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 60), -159,
	ftAnimBlock(0, 25),
	ftAnimLoop(0x6800, -78),
};

/* Joint 10 */
u16 dFTNessAnimSleep_joint10[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 115,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -18),
};

/* Joint 11 */
u16 dFTNessAnimSleep_joint11[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 219, 4, 361, -4, -146, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), 273, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), 281, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -136, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -135, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -104, -7,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 271, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 289, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 280, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 279, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -107, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), -10, 3,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 279, 0, 292, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 31), 318, -1, 328, -1,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -37, -13,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 314, -5, 327, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), 227, -5, 356, 3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -51, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -135, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 219, -7, 361, 4, -146, -10,
	ftAnimLoop(0x6800, -228),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimSleep_joint12[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimLoop(0x6800, -136),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimSleep_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 178, 1,
	ftAnimSetValBlock(FT_ANIM_ROTX), 89,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 63), -29, 358,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 63), 84,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 57), 0, 178,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 57), 89,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimSleep_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimSleep_joint16[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, -4, -148, 0, -87, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), -174, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 50), 95, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 26), 4, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 8, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -6, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -167, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -88, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -7, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 8, 6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 101, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 74, 2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 14, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -90, -3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -94, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -127, -1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -93, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -92, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 76, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -53, -9,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -128, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -145, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -61, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -90, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -88, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -1, -2,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -146, -1, -90, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -147, -1, -89, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, -3, -148, 0, -87, 2,
	ftAnimLoop(0x6800, -292),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimSleep_joint18[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 460, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 367, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 374, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 323, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 324, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 459, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 461, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 438, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 434, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 443, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 452, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 462, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, -2,
	ftAnimLoop(0x6800, -110),
};

/* Joint 19 */
u16 dFTNessAnimSleep_joint19[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -183, 1, -35, 2, -174, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 31, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 44), -209, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -149, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -152, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), -157, -4,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 39, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 31, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -200, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 41), -129, 1,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 23, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 63, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -162, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -259, 1,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 60, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -22, -7,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -128, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -146, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -257, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -167, 0,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -30, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -37, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -151, -6, -167, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -183, 0, -175, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -183, 0, -35, 2, -174, 0,
	ftAnimLoop(0x6800, -252),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimSleep_joint21[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 56, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), 85, 8, -71,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 70), 56, 0, 0,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimSleep_joint22[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 127, 0, 177, 0, -101, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), 119, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 50), 172, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 32), 231, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 228, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 162, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), 216, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 221, 4, 173, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 141, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 48), 208, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 159, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 142, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 133, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 127, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -101, -4,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -6, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 58, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -105, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -103, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 206, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 175, 1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 59, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 125, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 127, 2, 177, 1, -101, 1,
	ftAnimLoop(0x6800, -244),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimSleep_joint24[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 488, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 275, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 270, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 299, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 300, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 412, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 410, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 577, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 580, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), 488, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 489, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 488, -1,
	ftAnimLoop(0x6800, -102),
};

/* Joint 25 */
u16 dFTNessAnimSleep_joint25[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 79, 0, -33, -1, -168, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 31), 62, 4, -25, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -132, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -246, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 67, 4, -17, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 206, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 114, 0,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -253, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -307, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 216, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 242, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 118, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 105, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -308, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 48), -168, -1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 242, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), 110, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 104, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 30), 25, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 22, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -30, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 105, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 79, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -169, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 79, 0, -33, -3, -168, 0,
	ftAnimLoop(0x6800, -256),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimSleep_joint26[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 143, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 40), 213,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 80), 143,
	ftAnimLoop(0x6800, -26),
};
