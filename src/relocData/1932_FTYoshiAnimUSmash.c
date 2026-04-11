/* AnimJoint data for relocData file 1932 (FTYoshiAnimUSmash) */
/* 3424 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimUSmash_joint1[62];
extern u16 dFTYoshiAnimUSmash_joint2[70];
extern u16 dFTYoshiAnimUSmash_joint3[38];
extern u16 dFTYoshiAnimUSmash_joint4[108];
extern u16 dFTYoshiAnimUSmash_joint6[24];
extern u16 dFTYoshiAnimUSmash_joint7[114];
extern u16 dFTYoshiAnimUSmash_joint10[62];
extern u16 dFTYoshiAnimUSmash_joint11[104];
extern u16 dFTYoshiAnimUSmash_joint12[70];
extern u16 dFTYoshiAnimUSmash_joint13[10];
extern u16 dFTYoshiAnimUSmash_joint14[36];
extern u16 dFTYoshiAnimUSmash_joint15[32];
extern u16 dFTYoshiAnimUSmash_joint17[32];
extern u16 dFTYoshiAnimUSmash_joint18[192];
extern u16 dFTYoshiAnimUSmash_joint20[108];
extern u16 dFTYoshiAnimUSmash_joint22[188];
extern u16 dFTYoshiAnimUSmash_joint23[172];
extern u16 dFTYoshiAnimUSmash_joint25[238];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimUSmash_joints[] = {
	(u32)dFTYoshiAnimUSmash_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimUSmash_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimUSmash_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimUSmash_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimUSmash_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimUSmash_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimUSmash_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimUSmash_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimUSmash_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimUSmash_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimUSmash_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimUSmash_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimUSmash_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimUSmash_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimUSmash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimUSmash_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimUSmash_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimUSmash_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF030D, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimUSmash_joint1[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 672, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -208, 276, -395, 0, -319,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 3), 0, 89, 276, 2181,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), -208, -319,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 98, 1639, 186, 0, 150,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 445,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 15), 0, -11, 672, -510,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 23), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 363,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 18), 672,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimUSmash_joint2[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -11, -89, 4, 30, 12, 20, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -536, -67, 312, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 30, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -536, -26, 312, -98, 30, 8, 20, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -670, 5, -178, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 35, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -446, 35, -89, 2, 30, -1, 20, -1,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 23), 30,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 23), -89, 7, 20, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), 0, 3,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimUSmash_joint3[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 16, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 16, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -470, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 893, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1054, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 863, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 415, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 16, -5,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimUSmash_joint4[108] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 329,
	ftAnimSetValRate(FT_ANIM_ROTX), 78, -1,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 600, 329,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 78, -131,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 600, -492, 329, 646,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -446, -387, 4096, 2048, 4096, 4096, 4096, 2048,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY, 1), -697, 234, 6144, 1517, 8192, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 1), 6144,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 23, 51, 5613, -1365, 8192, -2730, 4096, -1365,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 416, 572,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 600, 105, 329, -138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 78, 36,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 35), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 600, 329,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 23), 600, 329,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 676,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), 78, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimUSmash_joint6[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 48, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, 58,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 465,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 0, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 23), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimUSmash_joint7[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1718, -5, -1476, -4, 1256, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1745, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1559, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1658, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1684, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1630, 48, 1112, -144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1649, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1581, -13, 1396, 165,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1655, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1318, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1391, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1431, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1651, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -1648, -18,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1424, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1236, -28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1660, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1479, 6,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1204, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1376, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1666, -17, 1381, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1718, 0, 1261, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, 0, -1476, 3, 1256, -5,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimUSmash_joint10[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -764, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1193, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1244, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -980, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -931, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -516, 465,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 254,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -509, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -764, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimUSmash_joint11[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -145, -4, -103, 6, -219, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -103, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 285, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 351, -383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 49, -481, -206,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -18, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, 0, -61, 246,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -73, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 11, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -221, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -137, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -21, -2, -128, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 33), -145, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -255, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -278, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -81, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -74, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -101, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -214, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, 0, -103, -1, -219, -5,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimUSmash_joint12[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1002, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1348, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1393, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1164, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1128, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, 564,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -100, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -861, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -911, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1001, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, -1,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimUSmash_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172, 0, 0,
	ftAnimBlock(0, 48),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimUSmash_joint14[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 156, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -536, 151, -893, -11, 0, -153,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 676, -988, -1224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -536, -30, -893, 2, 0, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -536, -893, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimUSmash_joint15[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -190, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 438, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -332, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 271, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 513, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -293, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -190, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimUSmash_joint17[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -153, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 183, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -179, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 271, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 376, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -392, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -153, 19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimUSmash_joint18[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, -6, 5, 59, -3, 312,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -15, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -160, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 791, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 952, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -103, 15, 702, -290,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 230, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -303, 46, 371, -484,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -67, 138, -266, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 83, -115, -27, 36, -239, 373,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 14, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -116, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 480, 368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 498, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 314, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 274, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 115, -130,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 48, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -49, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -148, 6, 22, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -32, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -149, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 60, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 189, 147,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 596, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 7, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -22, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 20, 600, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 2, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 545, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 47, -394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -442, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -23, 0, -442, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -23, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -6, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 6, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 0, 5, 0, -3, -2,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimUSmash_joint20[108] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 262, -255,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 586, 507,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1021, 411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1172, -701,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -582,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 573, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 549, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 361, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 650, 466,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1141, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1141, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 313, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 269, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimUSmash_joint22[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1602, 86, -83, -121, -263, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1412, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -400, -187, -412, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -580, -15, -531, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -286, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1611, -208, -507, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1866, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -612, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -195, 19, -684, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -289, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -478, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1726, -9, -338, 435,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2091, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 393, 472,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 656, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -176, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -245, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1899, 161, 568, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1782, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 306, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -134, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -253, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -105, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -222, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -301, 99,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1772, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1579, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -146, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -189, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -489, -220,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -721, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -108, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -89, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -271, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1579, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -1601, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, 0, -83, 6, -263, 7,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimUSmash_joint23[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -5, 0, 3, -154, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 3, -5, -59, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 194, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 371, 119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 117, -613,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -9, 58, -167, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 135, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -204, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 135, 103, -794, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 83, -73, 1, -78, -411, 723,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 111, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 0, 652, 475,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -87, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 540, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 205, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 130, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 14, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 77, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 115, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 96, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 13, -29,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 196, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 535, -106,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -10, -6, -43, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 6, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 306, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -476, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -779, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -162, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 5, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, -154, 8,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimUSmash_joint25[238] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 378, 76,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 753, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 850, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1176, 330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1510, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1130, -755,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -565,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 366, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 281, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 266, 374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, 388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1237, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1202, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 392, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -13,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0000, 0xFFDC, 0x06A1, 0xFFD8, 0x0563, 0xFFBE, 0x2809, 0x0005, 0x02DE, 0xFF89, 0x2805, 0x0008, 0x04FF, 0x003B, 0x2003, 0x0004, 0xFFAF, 0xFF9A, 0x2003, 0x0001, 0xFF39, 0xFF9E, 0x200B, 0x0001, 0xFEE9, 0xFFBE, 0x0287, 0x0117, 0x200B, 0x0001, 0xFEB3, 0x011E, 0x050E, 0x0164, 0x200B, 0x0001, 0x0124, 0x0187, 0x0550, 0x0161, 0x200F, 0x0001, 0x01C1, 0x0058, 0x0561, 0x0064, 0x07D1, 0x019B, 0x2803, 0x0003, 0x012D, 0xFF6B, 0x2805, 0x0006, 0x0624, 0x0023, 0x2009, 0x0001, 0x0886, 0x0080, 0x2809, 0x0005, 0x0742, 0xFFBC, 0x0801, 0x0002, 0x2003, 0x0001, 0x00A4, 0xFF7E, 0x2803, 0x0004, 0xFF6A, 0xFFE7, 0x0801, 0x0002, 0x200D, 0x0001, 0x0630, 0x000B, 0x0702, 0xFFC0, 0x2809, 0x0007, 0x058E, 0x0045, 0x2805, 0x001F, 0x06A9, 0xFFFA, 0x0801, 0x0001, 0x2003, 0x0001, 0xFF55, 0xFFF1, 0x2803, 0x000F, 0x0005, 0x0001, 0x0801, 0x0005, 0x2009, 0x0001, 0x05FE, 0x0051, 0x2009, 0x0001, 0x0631, 0xFFB9, 0x2009, 0x0001, 0x0570, 0xFF3E, 0x2809, 0x0008, 0x046D, 0x0007, 0x0801, 0x0007, 0x2003, 0x0001, 0x0006, 0x0001, 0x2803, 0x000D, 0x0000, 0x0000, 0x2009, 0x0001, 0x0474, 0x0008, 0x2009, 0x000C, 0x055F, 0x0008, 0x200F, 0x0001, 0x0000, 0x0000, 0x06A1, 0xFFF9, 0x0563, 0x0003, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
