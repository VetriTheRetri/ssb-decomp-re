/* AnimJoint data for relocData file 1947 (FTYoshiAnimGroundPoundLanding) */
/* 3584 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimGroundPoundLanding_joint1[162];
extern u16 dFTYoshiAnimGroundPoundLanding_joint2[82];
extern u16 dFTYoshiAnimGroundPoundLanding_joint3[74];
extern u16 dFTYoshiAnimGroundPoundLanding_joint6[36];
extern u16 dFTYoshiAnimGroundPoundLanding_joint7[210];
extern u16 dFTYoshiAnimGroundPoundLanding_joint8[58];
extern u16 dFTYoshiAnimGroundPoundLanding_joint10[32];
extern u16 dFTYoshiAnimGroundPoundLanding_joint11[212];
extern u16 dFTYoshiAnimGroundPoundLanding_joint12[62];
extern u16 dFTYoshiAnimGroundPoundLanding_joint13[32];
extern u16 dFTYoshiAnimGroundPoundLanding_joint14[10];
extern u16 dFTYoshiAnimGroundPoundLanding_joint15[46];
extern u16 dFTYoshiAnimGroundPoundLanding_joint17[46];
extern u16 dFTYoshiAnimGroundPoundLanding_joint18[130];
extern u16 dFTYoshiAnimGroundPoundLanding_joint20[68];
extern u16 dFTYoshiAnimGroundPoundLanding_joint22[142];
extern u16 dFTYoshiAnimGroundPoundLanding_joint23[138];
extern u16 dFTYoshiAnimGroundPoundLanding_joint25[66];
extern u16 dFTYoshiAnimGroundPoundLanding_joint26[134];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimGroundPoundLanding_joints[] = {
	(u32)dFTYoshiAnimGroundPoundLanding_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimGroundPoundLanding_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimGroundPoundLanding_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimGroundPoundLanding_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimGroundPoundLanding_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimGroundPoundLanding_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimGroundPoundLanding_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimGroundPoundLanding_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimGroundPoundLanding_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimGroundPoundLanding_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimGroundPoundLanding_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimGroundPoundLanding_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimGroundPoundLanding_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimGroundPoundLanding_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimGroundPoundLanding_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimGroundPoundLanding_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimGroundPoundLanding_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimGroundPoundLanding_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimGroundPoundLanding_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimGroundPoundLanding_joint1[162] = {
	ftAnimSetValBlock(FT_ANIM_ROTY), 178,
	ftAnimSetValT(FT_ANIM_ROTY, 42), 40,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 877, 6758, -2355, 2662, 1392,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 7168, 2048, 2048, -3140, 6144, 2321,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 1,
	ftAnimSetValT(FT_ANIM_ROTX, 35), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 1,
	ftAnimSetValRate(FT_ANIM_TRAY), 295, -1926,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 38), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 126, -675,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 126, 7168, 2048, 6144,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 7168, 8, 2048, 5, 6144, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 126,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3686, -5321, 4915, 4641, 3686, -3322,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 126, 310,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 397, 196,
	ftAnimBlock(0, 2),
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3686, 4915, 3686,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3686, 4915, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3686, 204, 4915, -409, 3686, 204,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 136, 4096, -273, 4096, 136,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 347, 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 22), 399, 83,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 29), 4096, 4096, 4096,
	ftAnimBlock(0, 19),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 0, -4,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 9), 672, 128,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimGroundPoundLanding_joint2[82] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -27, -49, -167, -34,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 0, -27, -167,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 14,
	ftAnimSetValBlock(FT_ANIM_ROTX), -1697,
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX, 13), -1530,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 2, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 12),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -1530, -19, 2, -3, 0, 0, 0, 0, -27, 17, -167, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 23), -89, -3, 0, 0, 0, 0, 30, 15, 18, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1740, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 0, 82,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, -89, 0, 0, 30, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimGroundPoundLanding_joint3[74] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 16, 67, 75,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 1161, 9,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 1161, 0, 16, 67, 75,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 14,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1161, -15, 0, 0, 16, -4, 67, -20, 75, 24,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 0, -13, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), 835, -28, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 587, -134, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 432, -107, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 264, -52, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimGroundPoundLanding_joint6[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 562, 19, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 562, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 14,
	ftAnimBlock(0, 12),
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 562, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 640, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 586, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 78,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimGroundPoundLanding_joint7[210] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1947, 322, -1354, 17, -90, -167,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -264, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1356, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2269, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2274, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2159, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -271, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -211, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1876, -111, -1456, -47, -61, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -122, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1432, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2017, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2118, 127,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2786, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -161, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -142, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1431, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1354, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2844, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 2981, -49,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -116, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -36, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2915, -5, -1337, 95, 35, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -966, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2971, -38, -126, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2839, 182, -45, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3335, 164, -604, 316, -578, -176,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -86, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3169, -91, -399, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3180, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -330, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -464, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -376, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3172, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2914, -102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -95, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -116, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -370, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -323, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2839, 6, 10, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2928, 68, 18, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2975, 47, -13, -31, -395, -71,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimGroundPoundLanding_joint8[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -495, -377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -755, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -764, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, 342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -79, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -452, -355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -719, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, -45,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimGroundPoundLanding_joint10[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -625,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 26), -625,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 14,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -625, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -483, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1429, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1429, 158,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimGroundPoundLanding_joint11[212] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -319, -333, 220, 10, -1711, -160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1877, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 214, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -652, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -663, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -582, 158,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1831, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -341, 61, 138, -32, -1682, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -606, -155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 189, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1701, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1832, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -770, -157,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1412, -14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 188, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 149, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1833, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1738, 26,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1425, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1495, -46,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1707, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1969, 72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1547, -27, 160, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -234, -756,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1673, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1830, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1383, -605, -1955, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1445, -86, -1812, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1555, -98, -1835, -156,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1595, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1664, 3, -2125, -123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1715, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2082, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2048, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1934, 105,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1546, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1740, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1890, -163, -1754, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1804, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2041, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1929, 90, -1718, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1860, 68, -1656, 62, -1889, -84,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimGroundPoundLanding_joint12[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 26), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -769, -344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1019, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1002, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -722, -289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -960, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, -42,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimGroundPoundLanding_joint13[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -625,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 26), -625,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 14,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -625, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -483, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1429, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1429, 158,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimGroundPoundLanding_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -670, 1608, 0, 0, 156, 0,
	ftAnimBlock(0, 44),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimGroundPoundLanding_joint15[46] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -262, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), -262, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -262, -11, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), -535, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -262, 114, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -190, 66, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 72,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -190,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimGroundPoundLanding_joint17[46] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -504, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), -504, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -504, -10, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), -740, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -504, 195, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -153, 109, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 152,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -153,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimGroundPoundLanding_joint18[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 35, -568, -280, -68, 347, 469,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -326, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -533, -284, 816, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -534, -1, 812, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -483, 194, 794, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -148, 265, -357, 120, 508, -291,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -85, 135, 212, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, 0, 210, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 217, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -118, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 48, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), -15, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 199, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -59, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -110, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 4, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -73, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -395, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -375, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -14, 2, -407, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -6, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -204, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 1, 5, 0, -8, 88,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimGroundPoundLanding_joint20[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 499, -492,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 371, 364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 736, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 741, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 739, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 754, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 929, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 903, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 758, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 860, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 530, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 266, -129,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimGroundPoundLanding_joint22[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -86, -607, 1420, 331, -2306, 462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -693, -323, 1752, 176, -1843, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -733, -17, 1774, 17, -1752, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1765, -164, -1813, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -734, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -747, 506,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 278, 507, 1478, -143, -1896, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1479, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1924, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 268, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 104, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1480, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), 1693, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 21, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -12, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1925, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -2184, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -24, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 23, 10,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2173, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2095, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 28, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 9, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2147, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1988, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1929, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, -3, 1692, 0, -1872, 56,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimGroundPoundLanding_joint23[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -24, 558, 279, 61, 366, 454,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 318, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 533, 279, 820, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 534, 0, 816, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 483, -184, 798, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 165, -264, 347, -116, 537, -286,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -46, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 86, -130, 224, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 86, 0, 223, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 213, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 116, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 5, 2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 189, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -153, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 107, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 0, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -172, -107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -512, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -580, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -345, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -236, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, -157, 78,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimGroundPoundLanding_joint25[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 477, -477,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -238,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 338, 361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 722, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 727, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 739, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 760, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 990, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 972, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 828, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 930, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 606, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 380, -105,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimGroundPoundLanding_joint26[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 522, 324, -1569, -210, -1827, 178,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1645, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 846, 137, -1779, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 797, -50, -1781, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 730, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1720, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1643, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1899, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 715, -540,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -351, -528, -1448, 135,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1450, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -341, 9, -1904, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -156, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -2099, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1450, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -1551, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -137, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -40, 8,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1555, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1517, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -21, 20, -2099, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2001, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2043, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1877, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -2, -1518, -1, -1836, 41,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
