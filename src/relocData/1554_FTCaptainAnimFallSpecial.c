/* AnimJoint data for relocData file 1554 (FTCaptainAnimFallSpecial) */
/* 880 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimFallSpecial_joint1[26];
extern u16 dFTCaptainAnimFallSpecial_joint2[10];
extern u16 dFTCaptainAnimFallSpecial_joint4[16];
extern u16 dFTCaptainAnimFallSpecial_joint5[40];
extern u16 dFTCaptainAnimFallSpecial_joint6[16];
extern u16 dFTCaptainAnimFallSpecial_joint7[10];
extern u16 dFTCaptainAnimFallSpecial_joint10[10];
extern u16 dFTCaptainAnimFallSpecial_joint11[38];
extern u16 dFTCaptainAnimFallSpecial_joint12[16];
extern u16 dFTCaptainAnimFallSpecial_joint13[20];
extern u16 dFTCaptainAnimFallSpecial_joint14[10];
extern u16 dFTCaptainAnimFallSpecial_joint16[10];
extern u16 dFTCaptainAnimFallSpecial_joint17[42];
extern u16 dFTCaptainAnimFallSpecial_joint19[24];
extern u16 dFTCaptainAnimFallSpecial_joint21[32];
extern u16 dFTCaptainAnimFallSpecial_joint22[30];
extern u16 dFTCaptainAnimFallSpecial_joint24[20];
extern u16 dFTCaptainAnimFallSpecial_joint25[20];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimFallSpecial_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimFallSpecial_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimFallSpecial_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimFallSpecial_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimFallSpecial_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimFallSpecial_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimFallSpecial_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimFallSpecial_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimFallSpecial_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimFallSpecial_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimFallSpecial_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimFallSpecial_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimFallSpecial_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimFallSpecial_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimFallSpecial_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimFallSpecial_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimFallSpecial_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimFallSpecial_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimFallSpecial_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimFallSpecial_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 1116,
	ftAnimSetValRate(FT_ANIM_ROTX), 9484, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, -55, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 9484, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1141, 40,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 1141, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 1116,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimFallSpecial_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 3216, 0, 4, -76, 9,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimFallSpecial_joint4[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 422,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 277, 143, 0, -47, 70,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 463,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 422,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimFallSpecial_joint5[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1841, -18, -1341, -8, 2281, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1905, 12, -1374, 7, 2341, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1888, 19, -1364, 10, 2326, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1848, 12, -1345, 6, 2288, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1841, 7, -1341, 3, 2281, -7,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimFallSpecial_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -896, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -897, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -896, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimFallSpecial_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 2141, -58, -220, 424, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimFallSpecial_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 76, -238, 80, 0, 360, -108,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimFallSpecial_joint11[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2037, 5, 1132, -6, 1727, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 2045, -5, 1720, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1114, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1123, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2039, -4, 1129, 4, 1725, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2037, -2, 1132, 2, 1727, 2,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimFallSpecial_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1018, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1017, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1018, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimFallSpecial_joint13[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 247, 295, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 270, 275, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimFallSpecial_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 39,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimFallSpecial_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -184, -224, -84,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimFallSpecial_joint17[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 219, 0, 68, 2, -429, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 87, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 222, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -510, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -520, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -452, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 75, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 219, -2, 68, -6, -429, 23,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimFallSpecial_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 997, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1116, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1129, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1033, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 997, -35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimFallSpecial_joint21[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 36, -1, 122, 0, 238, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), 238,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 122, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 17, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 31, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 36, 4, 122, 0, 238, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimFallSpecial_joint22[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1525, 0, 1529, 0, 1315, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -1525, 0, 1529, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1349, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1325, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1525, 0, 1529, 0, 1315, -10,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimFallSpecial_joint24[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1310, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1342, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1322, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1310, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimFallSpecial_joint25[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -1616, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 1518, 1939,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1613, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1616, -2,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
