/* AnimJoint data for relocData file 788 (FTFoxAnimFireFoxEndAir) */
/* 1168 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimFireFoxEndAir_joint1[8];
extern u16 dFTFoxAnimFireFoxEndAir_joint2[12];
extern u16 dFTFoxAnimFireFoxEndAir_joint3[22];
extern u16 dFTFoxAnimFireFoxEndAir_joint5[12];
extern u16 dFTFoxAnimFireFoxEndAir_joint6[78];
extern u16 dFTFoxAnimFireFoxEndAir_joint7[36];
extern u16 dFTFoxAnimFireFoxEndAir_joint8[10];
extern u16 dFTFoxAnimFireFoxEndAir_joint9[12];
extern u16 dFTFoxAnimFireFoxEndAir_joint11[10];
extern u16 dFTFoxAnimFireFoxEndAir_joint12[44];
extern u16 dFTFoxAnimFireFoxEndAir_joint13[28];
extern u16 dFTFoxAnimFireFoxEndAir_joint14[10];
extern u16 dFTFoxAnimFireFoxEndAir_joint16[12];
extern u16 dFTFoxAnimFireFoxEndAir_joint17[42];
extern u16 dFTFoxAnimFireFoxEndAir_joint19[34];
extern u16 dFTFoxAnimFireFoxEndAir_joint21[42];
extern u16 dFTFoxAnimFireFoxEndAir_joint22[34];
extern u16 dFTFoxAnimFireFoxEndAir_joint24[24];
extern u16 dFTFoxAnimFireFoxEndAir_joint25[24];
extern u16 dFTFoxAnimFireFoxEndAir_joint26[36];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimFireFoxEndAir_joints[] = {
	(u32)dFTFoxAnimFireFoxEndAir_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimFireFoxEndAir_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimFireFoxEndAir_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimFireFoxEndAir_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimFireFoxEndAir_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimFireFoxEndAir_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimFireFoxEndAir_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimFireFoxEndAir_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimFireFoxEndAir_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimFireFoxEndAir_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimFireFoxEndAir_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimFireFoxEndAir_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimFireFoxEndAir_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimFireFoxEndAir_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimFireFoxEndAir_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimFireFoxEndAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimFireFoxEndAir_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimFireFoxEndAir_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimFireFoxEndAir_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimFireFoxEndAir_joint26, /* [25] joint 26 */
	0xFFFF011A, /* [26] END */
};

/* Joint 1 */
u16 dFTFoxAnimFireFoxEndAir_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimFireFoxEndAir_joint2[12] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 960,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 20), 240,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimFireFoxEndAir_joint3[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 268, 297,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1340, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1965, 96,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 2502,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimFireFoxEndAir_joint5[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 446,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimFireFoxEndAir_joint6[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, 1, -1571, -17, -2506, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2699, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 2496, 69, -1164, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2590, 138, -1058, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3149, 158,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1449, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2904, -158,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3383, -123,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3311, 178,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 4261, 37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3505, -117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3915, -38,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4289, 19, -1423, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4300, 10, -1409, 14, -3938, -22,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimFireFoxEndAir_joint7[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -644, 87,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -666, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -747, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -821, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -904, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -653, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -534, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -481, 52,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimFireFoxEndAir_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimFireFoxEndAir_joint9[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 402,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimFireFoxEndAir_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimFireFoxEndAir_joint12[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1717, 17, 1591, 13, 2335, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1962, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1427, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 2355, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2341, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2499, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1969, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 2133, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2136, 2, 1419, -8, 2502, 2,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimFireFoxEndAir_joint13[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -722, -56,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -794, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -762, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -554, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -516, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimFireFoxEndAir_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimFireFoxEndAir_joint16[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	_FT_ANIM_CMD(11, 0, 1), 40,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimFireFoxEndAir_joint17[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1645, 3, -1616, 0, -1377, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), -1617, -2, -1512, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1145, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1284, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -2079, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2149, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2273, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1619, -1, -1512, 0, -2274, -1,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimFireFoxEndAir_joint19[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 296, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 479, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 759, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 732, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 722, -10,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimFireFoxEndAir_joint21[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 68, -2, -2, -1, 487, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), -22, 0, 64, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 410, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 212, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -384, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -241, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 0, 66, 1, -232, 8,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimFireFoxEndAir_joint22[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, -6, 1580, 6, -2437, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), 1662, 0, 1534, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -2206, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2234, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -2367, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1663, 0, 1533, 0, -2367, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimFireFoxEndAir_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 926, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 646, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 623, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 608, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 602, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimFireFoxEndAir_joint25[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1503, 14, 1591, -4, 1525, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 1517, 0, 1596, 0, 1647, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1517, 0, 1596, 0, 1649, 2,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimFireFoxEndAir_joint26[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -555, 52, 13, 0, 21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 755, -11, 0, 0, 0, 0,
	ftAnimEnd(),
	0x2806, 0x0000, 0xFFBF, 0x0000, 0x0000, 0x4808, 0x0000, 0x2803, 0x0009, 0xFD98, 0x001F, 0x3805, 0x0009, 0x0000, 0x3807, 0x000B, 0x027A, 0x0000, 0x0000, 0x0000,
};
