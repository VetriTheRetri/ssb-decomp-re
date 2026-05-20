/* AnimJoint data for relocData file 566 (FTMarioAnimThrownDKPulled) */
/* 2080 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimThrownDKPulled_joint2[66];
extern u16 dFTMarioAnimThrownDKPulled_joint3[28];
extern u16 dFTMarioAnimThrownDKPulled_joint5[50];
extern u16 dFTMarioAnimThrownDKPulled_joint6[88];
extern u16 dFTMarioAnimThrownDKPulled_joint7[16];
extern u16 dFTMarioAnimThrownDKPulled_joint8[12];
extern u16 dFTMarioAnimThrownDKPulled_joint9[40];
extern u16 dFTMarioAnimThrownDKPulled_joint11[40];
extern u16 dFTMarioAnimThrownDKPulled_joint12[102];
extern u16 dFTMarioAnimThrownDKPulled_joint13[16];
extern u16 dFTMarioAnimThrownDKPulled_joint14[14];
extern u16 dFTMarioAnimThrownDKPulled_joint16[8];
extern u16 dFTMarioAnimThrownDKPulled_joint17[118];
extern u16 dFTMarioAnimThrownDKPulled_joint19[72];
extern u16 dFTMarioAnimThrownDKPulled_joint21[70];
extern u16 dFTMarioAnimThrownDKPulled_joint22[102];
extern u16 dFTMarioAnimThrownDKPulled_joint24[60];
extern u16 dFTMarioAnimThrownDKPulled_joint25[88];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTMarioAnimThrownDKPulled_joints[] = {
	NULL, /* [0] NULL */
	(AObjEvent32 *)dFTMarioAnimThrownDKPulled_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimThrownDKPulled_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTMarioAnimThrownDKPulled_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTMarioAnimThrownDKPulled_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimThrownDKPulled_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimThrownDKPulled_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimThrownDKPulled_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTMarioAnimThrownDKPulled_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTMarioAnimThrownDKPulled_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimThrownDKPulled_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimThrownDKPulled_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTMarioAnimThrownDKPulled_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTMarioAnimThrownDKPulled_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTMarioAnimThrownDKPulled_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTMarioAnimThrownDKPulled_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTMarioAnimThrownDKPulled_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTMarioAnimThrownDKPulled_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTMarioAnimThrownDKPulled_joint25, /* [24] joint 25 */
};

/* Joint 2 */
u16 dFTMarioAnimThrownDKPulled_joint2[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 13, 0, -17, 0, 0, 0, -101, 0, 254,
	ftAnimSetValBlock(FT_ANIM_TRAY), -240,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 0, 0, 0, -140,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 172, -13, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 6), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 156,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), -40, -272,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -17, 0, 1, 0, 0, 0, 0, -240, 32, 0, -245,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), 0, 0, -480, -306,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 7), 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTMarioAnimThrownDKPulled_joint3[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 4, 0, 47, 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0, 0, -2, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -17, 1, -53, 4, -89, 7,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimThrownDKPulled_joint5[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -134, -51, 0, -18, 0, -16,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 134, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -134, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -134, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -134, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -134, 20, 0, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 14, 0, -14, 268, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimThrownDKPulled_joint6[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1715, 9, -1472, 1, -1189, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1465, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1620, 80, -1024, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1542, 72, -1117, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1278, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1182, 58,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1471, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1421, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1190, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -943, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1128, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1264, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -971, -196,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1708, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1430, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1198, 51, -1522, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1160, 37, -1541, -18, -1833, -124,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimThrownDKPulled_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimThrownDKPulled_joint8[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTMarioAnimThrownDKPulled_joint9[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -312, -83, 0, 0, 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -357, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -357, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -312,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -357, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 446, 86,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimThrownDKPulled_joint11[40] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 13, 0, -47, 0, 12,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -178, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 178, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, -54,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, 19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimThrownDKPulled_joint12[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2246, -205, 132, 1, -2804, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2889, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 138, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -2853, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2773, 131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1913, 101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2803, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2729, -76,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1850, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2246, -266,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, -4, -2804, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2932, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 184, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2518, -237,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2853, -81,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2993, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2983, -397, 425, 91, -3309, -577,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3648, -360, 368, -67, -4148, -462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3704, -55, 290, -77, -4233, -84,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimThrownDKPulled_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimThrownDKPulled_joint14[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 36, 0, -21, 0, 55,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 625, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimThrownDKPulled_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTMarioAnimThrownDKPulled_joint17[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1748, -9, -1375, 13, -1562, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1314, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1760, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1260, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1289, -126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2239, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1252, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1442, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1573, 140,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1616, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2196, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1451, 3, -2076, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1396, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1586, -1, -2101, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2003, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1561, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1351, 206,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1273, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1460, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1261, -64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1941, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1600, 221, -1811, -475,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1498, 4, -1423, -92, -2225, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1590, -91, -1446, -23, -2138, 87,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimThrownDKPulled_joint19[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 332, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 428, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 906, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 763, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 502, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 227, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 464, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 591, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 96, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 428, 372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 840, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 775, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 363, -412,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimThrownDKPulled_joint21[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, -42, -11, 11, -156, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 31, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -388, 144, 54, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -219, 124, 22, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -36, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -113, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -155, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -405, -87,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 47, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -83, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -498, 12, 38, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -146, 131, 4, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -118, 28, -11, -15, -156, -72,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimThrownDKPulled_joint22[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 148, -59, 164, 16, 27, -240,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 167, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 135, 41, -466, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 160, -27, -448, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -29, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -547, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 228, 44, -254, 302,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 271, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 156, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 85, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 110, 51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 163, -123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -486, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 151, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 164, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 160, -21, -448, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 58, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -234, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 116, 57, 150, -13, 23, 258,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimThrownDKPulled_joint24[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 174,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 607, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 372, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 226, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 529, 296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 986, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 438, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 570, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 407, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 226, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 628, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -190,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTMarioAnimThrownDKPulled_joint25[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1682, -33, -1514, -1, 1395, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1527, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1515, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1547, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1485, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1614, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1633, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1926, -55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1554, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1372, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1774, -117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1571, -70,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1376, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1390, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1485, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1646, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1672, 25, -1514, 1, 1395, 4,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
