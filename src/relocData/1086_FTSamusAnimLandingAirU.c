/* AnimJoint data for relocData file 1086 (FTSamusAnimLandingAirU) */
/* 1376 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimLandingAirU_joint2[44];
extern u16 dFTSamusAnimLandingAirU_joint4[36];
extern u16 dFTSamusAnimLandingAirU_joint5[56];
extern u16 dFTSamusAnimLandingAirU_joint6[36];
extern u16 dFTSamusAnimLandingAirU_joint7[18];
extern u16 dFTSamusAnimLandingAirU_joint8[16];
extern u16 dFTSamusAnimLandingAirU_joint11[16];
extern u16 dFTSamusAnimLandingAirU_joint12[46];
extern u16 dFTSamusAnimLandingAirU_joint14[28];
extern u16 dFTSamusAnimLandingAirU_joint15[72];
extern u16 dFTSamusAnimLandingAirU_joint17[36];
extern u16 dFTSamusAnimLandingAirU_joint19[74];
extern u16 dFTSamusAnimLandingAirU_joint20[70];
extern u16 dFTSamusAnimLandingAirU_joint22[36];
extern u16 dFTSamusAnimLandingAirU_joint23[58];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimLandingAirU_joints[] = {
	(u32)dFTSamusAnimLandingAirU_joint2, /* [0] joint 2 */
	0x00000000, /* [1] NULL */
	(u32)dFTSamusAnimLandingAirU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimLandingAirU_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimLandingAirU_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimLandingAirU_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimLandingAirU_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimLandingAirU_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimLandingAirU_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimLandingAirU_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimLandingAirU_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimLandingAirU_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimLandingAirU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimLandingAirU_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimLandingAirU_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimLandingAirU_joint23, /* [22] joint 23 */
};

/* Joint 2 */
u16 dFTSamusAnimLandingAirU_joint2[44] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -732,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 264, -276,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 428, 55,
	ftAnimSetValAfterT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 522, -254,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 926, 174,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), 1128,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 4), 1600,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimLandingAirU_joint4[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 268, -36, 66,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 15), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 268, 13, -36, -50, 66, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 446, -67, -117, 72, 203, -132,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimLandingAirU_joint5[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 134, -28, -309, 15, 240, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -107, -16, -141, 12, 414, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -123, -66, -129, 50, 424, -187,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -51, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -239, 3, 39, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -115, 179, -134, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 118, 295, -32, 82, -157, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 476, 357, 114, 147, -231, -73,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimLandingAirU_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -723, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -721, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -714, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -853, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -838, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -908, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 169,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimLandingAirU_joint7[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -68,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 0, 136,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 701,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimLandingAirU_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimLandingAirU_joint11[16] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTY), -89,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 11), 178,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimLandingAirU_joint12[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1366, 69, -1918, 13, 1777, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1590, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1439, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -1843, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1845, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1583, 101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1579, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1602, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, 64, -1479, 103, 1392, -46,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimLandingAirU_joint14[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -597, -47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -801, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -757, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -689, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 94,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimLandingAirU_joint15[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, 14, -12, -16, 3025, -246,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2297, -139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 21, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 89, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 245, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 258, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2204, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2134, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 10, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -54, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 224, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 42, 24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2132, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2737, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 45, -27, 26, 2827, 89,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimLandingAirU_joint17[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 228, 460,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1360, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1365, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 997, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 848, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 552, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimLandingAirU_joint19[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1621, -10, -1590, 28, -1734, -88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1647, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1713, 8, -1706, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1656, 26, -1463, 121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1689, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1739, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1621, 17, -1829, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1728, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1692, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1686, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1671, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1708, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1687, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1709, -37, -1646, 46, -1659, 27,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimLandingAirU_joint20[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, 7, -3206, 3, 2701, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -28, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -3024, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 2188, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2040, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2045, 114,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -52, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 212, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2204, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2306, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2561, 263,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3079, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3002, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3036, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 14, -3056, -19, 3167, 87,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimLandingAirU_joint22[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 716, 32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1120, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1221, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 843, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 692, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 526, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -84,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimLandingAirU_joint23[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 35, 8, 39, 1, -40, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 84, 2, -436, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 75, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 130, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 39, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 88, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 85, 52, 86, 41, -437, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 193, 30, 168, 53, -269, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 147, -46, 193, 25, -213, 55,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
