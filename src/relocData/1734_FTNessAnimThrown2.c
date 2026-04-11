/* AnimJoint data for relocData file 1734 (FTNessAnimThrown2) */
/* 2256 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimThrown2_joint1[8];
extern u16 dFTNessAnimThrown2_joint2[34];
extern u16 dFTNessAnimThrown2_joint3[28];
extern u16 dFTNessAnimThrown2_joint5[46];
extern u16 dFTNessAnimThrown2_joint6[92];
extern u16 dFTNessAnimThrown2_joint7[36];
extern u16 dFTNessAnimThrown2_joint8[12];
extern u16 dFTNessAnimThrown2_joint9[32];
extern u16 dFTNessAnimThrown2_joint11[46];
extern u16 dFTNessAnimThrown2_joint12[62];
extern u16 dFTNessAnimThrown2_joint13[20];
extern u16 dFTNessAnimThrown2_joint14[18];
extern u16 dFTNessAnimThrown2_joint16[12];
extern u16 dFTNessAnimThrown2_joint17[128];
extern u16 dFTNessAnimThrown2_joint19[64];
extern u16 dFTNessAnimThrown2_joint20[92];
extern u16 dFTNessAnimThrown2_joint22[42];
extern u16 dFTNessAnimThrown2_joint23[108];
extern u16 dFTNessAnimThrown2_joint25[60];
extern u16 dFTNessAnimThrown2_joint26[134];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimThrown2_joints[] = {
	(u32)dFTNessAnimThrown2_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimThrown2_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimThrown2_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimThrown2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimThrown2_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimThrown2_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimThrown2_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimThrown2_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimThrown2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimThrown2_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimThrown2_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimThrown2_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimThrown2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimThrown2_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimThrown2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimThrown2_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimThrown2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimThrown2_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimThrown2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimThrown2_joint26, /* [25] joint 26 */
	0xFFFF0226, /* [26] END */
};

/* Joint 1 */
u16 dFTNessAnimThrown2_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 840, 240,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTNessAnimThrown2_joint2[34] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -16, 0, -302, 0, -270, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), -16, -2, -302, 0, -270, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 12), 0,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTNessAnimThrown2_joint3[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -79, 4, -360, 30, 8, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 25, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -79, -360, 8,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimThrown2_joint5[46] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -35, -38, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -134, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 134, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 0, -22,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 18), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -134, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -134,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 0, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -35,
	ftAnimLoop(0x6800, -88),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimThrown2_joint6[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -237, 87, -86, -77, 891, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -150, 41, -164, -37, 665, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -154, -8, -161, -1, 676, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -150, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 217, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -97, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -67, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 35, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -142, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -160, -12,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 214, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 341, 98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 25, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -53, -118,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -175, 36, 462, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -237, -184, -86, 89, 891, 428,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimThrown2_joint7[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, 586,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, -586,
	ftAnimLoop(0x6800, -70),
};

/* Joint 8 */
u16 dFTNessAnimThrown2_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTNessAnimThrown2_joint9[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, -25, 364, 0, -32, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -179, 0, 0, 0, 288, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -10, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 364, -32, 0, 300, 0,
	ftAnimLoop(0x6800, -62),
};

/* Joint 11 */
u16 dFTNessAnimThrown2_joint11[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -92, 0, 0, -35, 0, 0, 0, 0, 0, -16, 0, 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -92, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 0, 29,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 0, -29,
	ftAnimLoop(0x6800, -90),
};

/* Joint 12 */
u16 dFTNessAnimThrown2_joint12[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1063, 30, 1447, 0, 2216, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1164, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1450, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1898, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1837, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1919, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1163, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1056, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1460, 7, 1953, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 1445, 1, 2231, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1064, 8, 1447, 2, 2215, -16,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimThrown2_joint13[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -38),
};

/* Joint 14 */
u16 dFTNessAnimThrown2_joint14[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, 0, 6, -1, 998, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -141, 6, 998,
	ftAnimLoop(0x6800, -34),
};

/* Joint 16 */
u16 dFTNessAnimThrown2_joint16[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimThrown2_joint17[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1957, 23, -1320, 26, 1422, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1940, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1212, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1527, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1704, 182,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1996, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2039, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1920, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1254, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1340, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2014, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1795, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1840, 91, 1670, -150,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1592, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1091, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1327, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1451, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1582, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1736, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1098, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1151, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1445, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1323, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1152, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1343, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1820, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1936, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1957, -20, -1320, 3, 1422, 79,
	ftAnimLoop(0x6800, -252),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimThrown2_joint19[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 419, 66,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 486, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 599, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 632, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 530, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 267, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 248, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 542, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 633, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 375, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 227, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 365, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 411, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 419, -3,
	ftAnimLoop(0x6800, -126),
};

/* Joint 20 */
u16 dFTNessAnimThrown2_joint20[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -101, 62, 6, 5, 23, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 22, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 43, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 90, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -48, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -320, -171,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -114, 77,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -37, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -142, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -52, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 102, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -8, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 4, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -129, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 8, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 110, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -38, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -101, -63, 6, 2, 23, 14,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimThrown2_joint22[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 23, 0, -4, 0, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 98, 61, -29, -13, 145, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 363, -31, -94, 2, 108, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -280, -25, 0, 5, 0, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -66, 0, 0,
	ftAnimLoop(0x6800, -82),
};

/* Joint 23 */
u16 dFTNessAnimThrown2_joint23[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -129, -26, 149, -25, -200, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -64, 104, 91, 19, -524, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 70, 112, 115, 13, -485, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 124, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 160, 24, -448, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 118, -52, -487, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 8, 5, -307, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 25, 17, -135, 162,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 21, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 155, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 179, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 139, -79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 131, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 159, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 7, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -101, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 49, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -118, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, -28, 149, -9, -200, -82,
	ftAnimLoop(0x6800, -212),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimThrown2_joint25[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 625, 41,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 603, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 226, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 361, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 645, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 657, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 364, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 581, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 601, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 634, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 615, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 625, 10,
	ftAnimLoop(0x6800, -118),
};

/* Joint 26 */
u16 dFTNessAnimThrown2_joint26[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 135, -12, 42, -5, -178, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -92, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -195, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 34, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -77, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 85, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 81, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -92, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -136, -4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 54, -33, -160, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -95, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -61, -26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -136, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 35, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -133, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 67, 86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -95, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -172, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 122, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 137, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 135, -1, 42, 7, -178, -6,
	ftAnimLoop(0x6800, -208),
	ftAnimEnd(),
	0x2802, 0x00B3, 0x000A, 0x48EC, 0x0000, 0x0000, 0xFF82, 0xFFAE, 0xFFF4, 0x2003, 0x0001, 0x0060, 0xFF92, 0x2003, 0x0003, 0xFEF9, 0x000D, 0x2003, 0x0010, 0x0168, 0x0016, 0x3803, 0x0004, 0x00B3, 0x6800, 0xFFCE, 0x0000, 0x0000,
};
