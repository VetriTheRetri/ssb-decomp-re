/* AnimJoint data for relocData file 1680 (FTNessAnimCrouch) */
/* 992 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCrouch_joint1[22];
extern u16 dFTNessAnimCrouch_joint2[10];
extern u16 dFTNessAnimCrouch_joint4[16];
extern u16 dFTNessAnimCrouch_joint5[38];
extern u16 dFTNessAnimCrouch_joint6[16];
extern u16 dFTNessAnimCrouch_joint7[10];
extern u16 dFTNessAnimCrouch_joint10[26];
extern u16 dFTNessAnimCrouch_joint11[38];
extern u16 dFTNessAnimCrouch_joint12[24];
extern u16 dFTNessAnimCrouch_joint13[10];
extern u16 dFTNessAnimCrouch_joint15[10];
extern u16 dFTNessAnimCrouch_joint16[40];
extern u16 dFTNessAnimCrouch_joint18[24];
extern u16 dFTNessAnimCrouch_joint19[24];
extern u16 dFTNessAnimCrouch_joint21[22];
extern u16 dFTNessAnimCrouch_joint22[38];
extern u16 dFTNessAnimCrouch_joint24[24];
extern u16 dFTNessAnimCrouch_joint25[30];
extern u16 dFTNessAnimCrouch_joint26[22];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimCrouch_joints[] = {
	(u32)dFTNessAnimCrouch_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimCrouch_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimCrouch_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimCrouch_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimCrouch_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimCrouch_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimCrouch_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimCrouch_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimCrouch_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimCrouch_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimCrouch_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimCrouch_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimCrouch_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimCrouch_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimCrouch_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimCrouch_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimCrouch_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimCrouch_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimCrouch_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimCrouch_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -16, 537, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 4), -24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 366, -466, -118, -119,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 304, -88,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimCrouch_joint2[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 21, -78, 23,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimCrouch_joint4[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 247, 92,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 368,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimCrouch_joint5[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1198, -436, -1347, 91, -1192, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1316, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1112, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 761, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 749, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 824, 64, -1373, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 878, 53, -1381, -8, -1117, -5,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimCrouch_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, -69,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -704, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimCrouch_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimCrouch_joint10[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, -3, -32, 4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -82, 29, 292, -96, -128, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 107, -22, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimCrouch_joint11[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2024, -1, 1038, -455, -1727, -471,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2277, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 583, -242, -2198, -320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 553, 15, -2368, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 614, 82, -2460, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2379, -101, 718, 103, -2524, -64,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimCrouch_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -498,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1057, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -880, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -556, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -263, 293,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimCrouch_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 90, 54, 126, 143, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimCrouch_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimCrouch_joint16[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, 355, -279, -118, -297, -546,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 212, -398, 4, -844, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 42, -270, 126, -937, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 74, 8, -145, 87, -949, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 75, 0, -95, 50, -942, 6,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimCrouch_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, 403,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 799, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 883, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 943, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 966, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimCrouch_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, 10, 12, 2, 26, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -34, -8, -6, -4, 13, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, 2, -7, 0, -12, -25,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimCrouch_joint21[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -517, -136, 286, 22, -59, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -613, 91, 43,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimCrouch_joint22[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1481, -327, 1472, 15, 1397, -427,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1230, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1153, -191, 969, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1098, -2, 970, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1147, -11, 950, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1075, -71, 1027, -203, 673, -276,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimCrouch_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 350,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 758, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 822, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 876, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 891, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimCrouch_joint25[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 76, 342, 25, -23, -202, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 17, -130, -224, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 535, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 536, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 438, -98, -207, -224, -212, 12,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimCrouch_joint26[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 56, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -404, -36, -86, -70, -113, -119,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -89, -283, -478,
	ftAnimEnd(),
};
