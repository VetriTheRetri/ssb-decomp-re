/* AnimJoint data for relocData file 667 (FTFoxAnimDamaged2) */
/* 2880 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDamaged2_joint1[10];
extern u16 dFTFoxAnimDamaged2_joint2[112];
extern u16 dFTFoxAnimDamaged2_joint4[68];
extern u16 dFTFoxAnimDamaged2_joint5[114];
extern u16 dFTFoxAnimDamaged2_joint6[52];
extern u16 dFTFoxAnimDamaged2_joint7[10];
extern u16 dFTFoxAnimDamaged2_joint8[74];
extern u16 dFTFoxAnimDamaged2_joint10[10];
extern u16 dFTFoxAnimDamaged2_joint11[128];
extern u16 dFTFoxAnimDamaged2_joint12[50];
extern u16 dFTFoxAnimDamaged2_joint13[52];
extern u16 dFTFoxAnimDamaged2_joint15[10];
extern u16 dFTFoxAnimDamaged2_joint16[108];
extern u16 dFTFoxAnimDamaged2_joint18[46];
extern u16 dFTFoxAnimDamaged2_joint20[130];
extern u16 dFTFoxAnimDamaged2_joint21[114];
extern u16 dFTFoxAnimDamaged2_joint23[56];
extern u16 dFTFoxAnimDamaged2_joint24[116];
extern u16 dFTFoxAnimDamaged2_joint25[128];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimDamaged2_joints[] = {
	(u32)dFTFoxAnimDamaged2_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimDamaged2_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimDamaged2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimDamaged2_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimDamaged2_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimDamaged2_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimDamaged2_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimDamaged2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimDamaged2_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimDamaged2_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimDamaged2_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimDamaged2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimDamaged2_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimDamaged2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimDamaged2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimDamaged2_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimDamaged2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimDamaged2_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimDamaged2_joint25, /* [24] joint 25 */
	0xFFFF02B2, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimDamaged2_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 48, 912, -20,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimDamaged2_joint2[112] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -141, -338, -3, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 113, -512, -321, 449, -163, 66, 0, 137, 0, -31, -153, -927,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -660, -31, 153, 32, -92, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 34, 94, -7, -220, -231, -484,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 23, -6, -55, -104, -274, 26,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -97, -36, -208, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -676, 7, 173, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -195, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 6), 28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 23, -62, -98, -148, -158, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 363, 84, -208, -47, -45, -26, -272, 34, -97, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 120, -89, -278, -22, -85, 33, -8, 63, -57, 384, 175, 137,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -10, 0, -31, 0, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimDamaged2_joint4[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 322, -83, -205, 42,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -165,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -25, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 284, 10, 81, 18,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 290, 82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -43, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 119, 3, 284, -22, 81, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -31, 46, 214, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 81,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 6), 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 383, 60, 177, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 309, 156,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimDamaged2_joint5[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, 69, -1442, -191, -1349, -601,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1568, 224, -1634, 24, -1950, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1947, 68, -1394, 175, -1972, 320,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1416, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1704, -159, -1310, 367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1628, -56, -1237, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1710, 23, -1507, -35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1431, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1586, 54,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1734, 21, -1541, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1906, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1664, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1548, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1648, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1530, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1653, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1988, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1944, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1536, -74, -1525, 105, -1432, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, -37, -1442, 82, -1349, 83,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDamaged2_joint6[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -148,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -707, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -634, -372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -745, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -762, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -740, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -612, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -919, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 360,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimDamaged2_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDamaged2_joint8[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -113, -72,
	ftAnimSetValRate(FT_ANIM_ROTY), 136, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -128, -38, 324, 51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -191, -102, 238, 0, -72, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -334, -15, 323, -1, -72, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 11), -91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 221, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -367, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -358, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 136, -8, -72, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -85, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -113, 24, -72, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 136,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimDamaged2_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDamaged2_joint11[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, -397, 271, -374, 336, -532,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -264, -85, -102, -79, -196, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -38, 75, 112, 186, -293, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 306, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -113, -8, -154, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -55, 75, -71, 90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 142, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 272, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 277, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -9, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 139, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 479, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 282, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 86, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, 45, 477, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 92, -45, -24, -146,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 73, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 94, 57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 41, -32, -156, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 170, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 181, 19, 220, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, -48, 271, 101, 336, 116,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDamaged2_joint12[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -580, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 290,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -469, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -623, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -783, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -871, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 276,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimDamaged2_joint13[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -96, 0, -31, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 120, 0, -3, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 314, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 120, 79, 9, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 221, 3, 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 36, -33, 157, -23, 12, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -96, 0, -31, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimDamaged2_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDamaged2_joint16[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2014, 199, -1385, 134, 1581, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1814, 0, -1250, -74, 1274, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2012, -77, -1534, -193, 1730, 344,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1642, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1844, 44, 1984, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1806, 33, 1983, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1928, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1653, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1630, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1268, 27,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1834, -151,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 464, -46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1575, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1548, -171,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 514, 125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1471, 153,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1745, -180, -1259, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -2007, -52, -1341, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2014, -6, -1385, -43, 1581, 109,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDamaged2_joint18[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, -123,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 230, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -115,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 641, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 746, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 662, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -147,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimDamaged2_joint20[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, -90, 1482, 70, 1552, 207,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2073, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1564, 115, 1553, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1885, 227, 1240, -156,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1274, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2019, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1834, -114, 2003, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1736, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1681, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1306, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1482, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1691, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1656, 40,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1667, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1465, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1681, 2, 1458, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1606, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1562, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1493, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1492, -96,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1594, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1446, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1630, 43, 1377, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1611, 8, 1429, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, 43, 1482, 35, 1552, 122,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDamaged2_joint21[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1253, 69, -1746, 149, -1473, -258,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1544, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1183, 17, -1732, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1218, 74, -1141, 420,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -912, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -844, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1544, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1462, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -828, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1032, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -831, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -845, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1445, -42, -849, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1601, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1724, -369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1021, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1245, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1569, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1746, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2055, -251,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1520, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1266, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1263, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1253, 10, -1746, 0, -1473, 46,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDamaged2_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 374, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 595, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 792, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 597, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 390, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDamaged2_joint24[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, -86, -102, 33, -226, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -70, 41, -68, 186, -190, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 98, 102, 270, 141, 31, 131,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 102, 0, 61, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 110, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 33, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 37, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 96, -3, 57, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 82, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -58, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -119, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -539, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 63, -44, 49, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -70, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 157, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -50, -517, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -289, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -71, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 26, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 51, -44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -241, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, -35, -102, -31, -226, 14,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDamaged2_joint25[128] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 10, 219, -29, 0, -14,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 94, 214, 32, -90, -37, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 428, 42, 38, -25, -36, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 305, -23, -95, -33, -17, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 198, -24, -283, -17, 221, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 95, -33, -243, 46, 358, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -114, -10, 156, 49, 117, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 10, 219, -29, 0, -14,
	ftAnimEnd(),
	0x400E, 0xFF4E, 0xFF86, 0x0000, 0x48E0, 0x0000, 0x0040, 0xFE3E, 0x200F, 0x0001, 0x000D, 0x0020, 0x0019, 0x0018, 0xFFCB, 0xFFF8, 0x200F, 0x0005, 0x000D, 0xFFE0, 0x0019, 0x000A, 0xFFCB, 0xFFF7, 0x200F, 0x000A, 0xFE18, 0xFFFB, 0x00B8, 0x000C, 0xFF35, 0xFFF4, 0x200F, 0x0003, 0xFFCB, 0x006C, 0x00BB, 0xFFD1, 0xFF2B, 0x0023, 0x200F, 0x0003, 0x007D, 0xFFE6, 0xFFAD, 0xFFBF, 0x0000, 0x002D, 0x380F, 0x0002, 0xFF4E, 0xFF86, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
