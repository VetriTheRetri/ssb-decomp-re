/* AnimJoint data for relocData file 841 (FTDonkeyAnimDamaged) */
/* 1264 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDamaged_joint1[14];
extern u16 dFTDonkeyAnimDamaged_joint2[54];
extern u16 dFTDonkeyAnimDamaged_joint4[18];
extern u16 dFTDonkeyAnimDamaged_joint5[56];
extern u16 dFTDonkeyAnimDamaged_joint7[32];
extern u16 dFTDonkeyAnimDamaged_joint10[16];
extern u16 dFTDonkeyAnimDamaged_joint11[48];
extern u16 dFTDonkeyAnimDamaged_joint12[24];
extern u16 dFTDonkeyAnimDamaged_joint13[16];
extern u16 dFTDonkeyAnimDamaged_joint16[12];
extern u16 dFTDonkeyAnimDamaged_joint17[64];
extern u16 dFTDonkeyAnimDamaged_joint19[24];
extern u16 dFTDonkeyAnimDamaged_joint21[44];
extern u16 dFTDonkeyAnimDamaged_joint22[74];
extern u16 dFTDonkeyAnimDamaged_joint24[24];
extern u16 dFTDonkeyAnimDamaged_joint25[62];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimDamaged_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimDamaged_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimDamaged_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimDamaged_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamaged_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimDamaged_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamaged_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamaged_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimDamaged_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimDamaged_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimDamaged_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamaged_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimDamaged_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamaged_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamaged_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimDamaged_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamaged_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimDamaged_joint1[14] = {
	ftAnimSetVal(FT_ANIM_ROTX), 2234,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -6, -19, 14, 1061, 240,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 28), -982,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimDamaged_joint2[54] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -176, -245, -1152, 0, -752,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -66, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 7), -82, 19,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 11), -1507, -192,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), -593, 473,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 12), 925,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAX, 14), 116, -22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), -345, 1294,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), -245, -1152,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), 0, -176, 0, -752,
	ftAnimLoop(0x6800, -106),
};

/* Joint 4 */
u16 dFTDonkeyAnimDamaged_joint4[18] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 766, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), 88,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 14), -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 0, 32,
	ftAnimLoop(0x6800, -34),
};

/* Joint 5 */
u16 dFTDonkeyAnimDamaged_joint5[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1753, 32, -1459, 20, -2048, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1493, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -1742, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -2281, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2204, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1959, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1496, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1486, 25,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1758, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1776, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1753, 23, -1459, 27, -2048, -88,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimDamaged_joint7[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1047, 55,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -312, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -302, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -861, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -923, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1079, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1047, 31,
	ftAnimLoop(0x6800, -62),
};

/* Joint 10 */
u16 dFTDonkeyAnimDamaged_joint10[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -34, 222, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -41, -221, 52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -34, 222, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 11 */
u16 dFTDonkeyAnimDamaged_joint11[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1647, -10, 1474, 8, -2018, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 1689, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 1466, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -2457, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2459, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1993, -14,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1692, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1664, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1647, -16, 1474, 8, -2018, -25,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDamaged_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -780, 74,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -603, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -650, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -862, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -780, 82,
	ftAnimLoop(0x6800, -46),
};

/* Joint 13 */
u16 dFTDonkeyAnimDamaged_joint13[16] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -43, 275, 59,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 98, 0, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 16 */
u16 dFTDonkeyAnimDamaged_joint16[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 28),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimDamaged_joint17[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -382, 23, -701, 0, -300, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -655, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 131, 21, -858, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 148, 14, -881, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -211, -86, -479, 91,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -669, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -700, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -295, -73, -390, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -358, -43, -325, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -382, -23, -701, 0, -300, 24,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimDamaged_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1072, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 1020, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1034, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1072, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1072, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 21 */
u16 dFTDonkeyAnimDamaged_joint21[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 307, -1, 164, 0, 0, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 7, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 164, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), 265, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 276, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 305, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 307, 1, 164, 0, 0, -1,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimDamaged_joint22[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1401, 12, 1438, -29, -2049, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1091, -12, -2216, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1451, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1495, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1409, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1081, -7, -2262, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -2073, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1347, 61,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1374, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1388, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2040, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2041, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1409, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1401, -12, 1438, 29, -2049, -8,
	ftAnimLoop(0x6800, -144),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimDamaged_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1078, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 1101, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1098, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1079, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1078, -1,
	ftAnimLoop(0x6800, -46),
};

/* Joint 25 */
u16 dFTDonkeyAnimDamaged_joint25[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -256, -12, 53, -1, -109, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -68, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -320, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -190, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -198, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 52, 3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -78, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -108, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -310, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -269, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -256, 12, 53, 1, -109, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
