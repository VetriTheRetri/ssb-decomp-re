/* AnimJoint data for relocData file 661 (FTFoxAnimLandingAirX) */
/* 1296 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimLandingAirX_joint1[24];
extern u16 dFTFoxAnimLandingAirX_joint2[16];
extern u16 dFTFoxAnimLandingAirX_joint4[34];
extern u16 dFTFoxAnimLandingAirX_joint5[66];
extern u16 dFTFoxAnimLandingAirX_joint6[36];
extern u16 dFTFoxAnimLandingAirX_joint7[10];
extern u16 dFTFoxAnimLandingAirX_joint8[30];
extern u16 dFTFoxAnimLandingAirX_joint10[14];
extern u16 dFTFoxAnimLandingAirX_joint11[62];
extern u16 dFTFoxAnimLandingAirX_joint12[32];
extern u16 dFTFoxAnimLandingAirX_joint13[20];
extern u16 dFTFoxAnimLandingAirX_joint15[10];
extern u16 dFTFoxAnimLandingAirX_joint16[32];
extern u16 dFTFoxAnimLandingAirX_joint18[20];
extern u16 dFTFoxAnimLandingAirX_joint20[34];
extern u16 dFTFoxAnimLandingAirX_joint21[34];
extern u16 dFTFoxAnimLandingAirX_joint23[28];
extern u16 dFTFoxAnimLandingAirX_joint24[44];
extern u16 dFTFoxAnimLandingAirX_joint25[50];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimLandingAirX_joints[] = {
	(u32)dFTFoxAnimLandingAirX_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimLandingAirX_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimLandingAirX_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimLandingAirX_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimLandingAirX_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimLandingAirX_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimLandingAirX_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimLandingAirX_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimLandingAirX_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimLandingAirX_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimLandingAirX_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimLandingAirX_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimLandingAirX_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimLandingAirX_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimLandingAirX_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimLandingAirX_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimLandingAirX_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimLandingAirX_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimLandingAirX_joint25, /* [24] joint 25 */
	0xFFFF0136, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimLandingAirX_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ), 117, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 600, -779,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 0, 48, -20,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 600, 640,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 912,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimLandingAirX_joint2[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -71, 142, -15, -23, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -141, -338, -3, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimLandingAirX_joint4[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 333, 89, -142,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 127, 8, -88, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 506, 103,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 644,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 156, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 506, -66,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 309,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimLandingAirX_joint5[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 755, 388, -191, -35, -947, -103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -489, -525,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1143, 93, -1050, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 942, 191, -1026, -321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1527, 269, -1278, -485, -1694, -260,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1497, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1482, -21, -1547, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1498, -1, -1383, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1494, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1470, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 0, -1442, 27, -1349, 34,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimLandingAirX_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -392, -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -742, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -563, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -360, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -496, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimLandingAirX_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimLandingAirX_joint8[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 89, 26,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -74, 74, 114, 6, -14, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 319, -6, 114, 3, -33, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimLandingAirX_joint10[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 40, -16, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 62, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimLandingAirX_joint11[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -989, 67, 1160, 179, 2217, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -990, -217, 1454, -32, 1973, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1357, -339, 1274, -31, 1662, -270,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1467, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1562, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1669, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1709, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1543, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1436, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1365, -49, 1819, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, 68, 1336, -28, 1945, 126,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimLandingAirX_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -516,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -987, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1006, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -453, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -557, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -36,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimLandingAirX_joint13[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 268, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 357, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimLandingAirX_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimLandingAirX_joint16[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1497, 34, 1732, 14, 1328, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1296, -75, 1910, -30, 1442, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1230, -46, 1864, -39, 1536, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, -27, 1831, -32, 1581, 45,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimLandingAirX_joint18[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1045, 83,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 670, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 466, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -112,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimLandingAirX_joint20[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -18, -36, 102, -22, -262, -145,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 43, 7, 128, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -491, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -118, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 3, 125, -2, -56, 61,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimLandingAirX_joint21[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -252, 15, -12, 136, -641, 226,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 329, 47, 168, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -181, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -146, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 97, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 25, 137, -31, 134, 37,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimLandingAirX_joint23[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1302, 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1323, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1164, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 632, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -106,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimLandingAirX_joint24[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1701, 44, -1448, -96, -1905, -356,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1588, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1626, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2409, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2375, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1902, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1551, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1504, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, -2, -1505, -1, -1835, 67,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimLandingAirX_joint25[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 714, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -60, -171, 150, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -315, 15, 198, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, 219,
	ftAnimEnd(),
	0x4006, 0x0094, 0x0000, 0x4808, 0x0000, 0x2007, 0x0004, 0x0258, 0x0027, 0xFFC1, 0xFFEF, 0x2007, 0x0002, 0x0180, 0xFF3E, 0xFF99, 0xFFF2, 0x3807, 0x0002, 0xFF4E, 0xFF86, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
