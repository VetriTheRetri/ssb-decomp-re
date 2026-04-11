/* AnimJoint data for relocData file 1912 (FTYoshiAnimHeavyItemPickup) */
/* 2208 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimHeavyItemPickup_joint2[70];
extern u16 dFTYoshiAnimHeavyItemPickup_joint3[24];
extern u16 dFTYoshiAnimHeavyItemPickup_joint6[30];
extern u16 dFTYoshiAnimHeavyItemPickup_joint7[184];
extern u16 dFTYoshiAnimHeavyItemPickup_joint8[56];
extern u16 dFTYoshiAnimHeavyItemPickup_joint10[14];
extern u16 dFTYoshiAnimHeavyItemPickup_joint11[178];
extern u16 dFTYoshiAnimHeavyItemPickup_joint12[54];
extern u16 dFTYoshiAnimHeavyItemPickup_joint13[16];
extern u16 dFTYoshiAnimHeavyItemPickup_joint14[8];
extern u16 dFTYoshiAnimHeavyItemPickup_joint15[16];
extern u16 dFTYoshiAnimHeavyItemPickup_joint17[16];
extern u16 dFTYoshiAnimHeavyItemPickup_joint18[58];
extern u16 dFTYoshiAnimHeavyItemPickup_joint20[48];
extern u16 dFTYoshiAnimHeavyItemPickup_joint22[42];
extern u16 dFTYoshiAnimHeavyItemPickup_joint23[58];
extern u16 dFTYoshiAnimHeavyItemPickup_joint25[48];
extern u16 dFTYoshiAnimHeavyItemPickup_joint26[130];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimHeavyItemPickup_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTYoshiAnimHeavyItemPickup_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimHeavyItemPickup_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimHeavyItemPickup_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimHeavyItemPickup_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimHeavyItemPickup_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimHeavyItemPickup_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimHeavyItemPickup_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimHeavyItemPickup_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimHeavyItemPickup_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimHeavyItemPickup_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimHeavyItemPickup_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimHeavyItemPickup_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimHeavyItemPickup_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimHeavyItemPickup_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimHeavyItemPickup_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimHeavyItemPickup_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimHeavyItemPickup_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimHeavyItemPickup_joint26, /* [25] joint 26 */
	0xFFFF0200, /* [26] END */
};

/* Joint 2 */
u16 dFTYoshiAnimHeavyItemPickup_joint2[70] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 30, 12, 20, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 40), 64, 1, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -1, 31, -4, 26, 153,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 26, -20, 135, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), -1,
	ftAnimSetValRateT(FT_ANIM_TRAY, 28), -46, -106,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 19), 0, 0, 65, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 9), 57, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 9), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 11), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 41), -24, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), -386, 12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), -36, 326,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimHeavyItemPickup_joint3[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -268, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 636, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 16), -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 508, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), 178, -5,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimHeavyItemPickup_joint6[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValRate(FT_ANIM_ROTX), 400, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 568, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 259, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), -56, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 0, 600, 329,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimHeavyItemPickup_joint7[184] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1646, -25, -1650, 32, -1945, 110,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1622, 41,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 8192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1448, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1835, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2052, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2386, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1665, 12, -2508, -32,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1603, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2414, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1445, 7, -2407, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1227, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2441, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2312, 51,
	ftAnimSetValT(FT_ANIM_SCAX, 30), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1617, 279, -2337, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2162, 435, -1121, -99, -2918, -408,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3041, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2489, 119, -1427, -159,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2176, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1440, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -1534, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2025, -122, -2964, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -3013, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1904, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1979, 97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2896, 112,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3090, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -3574, -32,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2980, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 3165, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1541, -1, -3593, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1525, 11, -3527, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3157, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3134, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3108, -25, -1515, 10, -3486, 41,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimHeavyItemPickup_joint8[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -491,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -706, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -667, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -436, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -287, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -204, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimHeavyItemPickup_joint10[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -625, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 36), -1072,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimHeavyItemPickup_joint11[178] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3107, 8, -20, 25, 182, -114,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3222, -69,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 8192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 138, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 68, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -301, -403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3270, -16, -904, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -821, 24,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3222, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 138, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 315, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -810, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -854, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, 44,
	ftAnimSetValT(FT_ANIM_SCAX, 30), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3245, -235, -764, -267,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -4055, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 419, -86, -1264, -382,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1336, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 142, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3938, 187, 134, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 60, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -3536, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3455, 64, -1261, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1859, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -3486, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3590, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -4547, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4626, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -4778, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1876, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1917, 44,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4770, 16, 66, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4745, 26, 79, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4716, 28, 93, 13, -1878, 39,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimHeavyItemPickup_joint12[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -830, -47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -711, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -432, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -279, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -188, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -478, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -723, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 264,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -8,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimHeavyItemPickup_joint13[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -625, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 36), -1072,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimHeavyItemPickup_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimHeavyItemPickup_joint15[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -190, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -223, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), -387, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimHeavyItemPickup_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -153, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -285, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 137, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimHeavyItemPickup_joint18[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, -86, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 2, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 151, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 201, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 159, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -254, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -283, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -596, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -597, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -459, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, -312, 147,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimHeavyItemPickup_joint20[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 334, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 254, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 76, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 6, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 20, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 605, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 650, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1383, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1255, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 931, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 643, -287,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimHeavyItemPickup_joint22[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 0, 0, 0, -252, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), 1608, 0, -1, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -407, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -425, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -850, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -723, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 0, 0, 1, -400, 139,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimHeavyItemPickup_joint23[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, -86, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 84, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 140, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -23, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -46, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -327, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -343, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -616, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -466, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, -312, 154,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimHeavyItemPickup_joint25[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 334, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 185, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 130, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 320, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 723, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 744, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1410, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1273, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 940, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 643, -296,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimHeavyItemPickup_joint26[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 0, 0, 0, -252, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), 1608, 0, -1, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -346, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -346, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -417, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -846, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -718, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -538, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 0, 0, 1, -400, 137,
	ftAnimEnd(),
	0x500C, 0x0000, 0x0000, 0x40E0, 0x0000, 0x00EC, 0x0438, 0x1002, 0x0000, 0x40E1, 0x0004, 0x0000, 0x00EC, 0x0438, 0x1003, 0x0004, 0x0000, 0x28E1, 0x0003, 0x0000, 0x0000, 0x00EC, 0x00F3, 0x0438, 0xFF37, 0x1003, 0x0003, 0x0000, 0x28E1, 0x0007, 0x0000, 0x0000, 0x021D, 0x01F4, 0x033C, 0xFE86, 0x1003, 0x0007, 0xFD23, 0x3002, 0xFFDB, 0x20E3, 0x000C, 0xFD3B, 0xFFFD, 0x0000, 0x0000, 0x0591, 0xFF5B, 0x00B4, 0xFEC5, 0x20E3, 0x0009, 0xFCDC, 0xFFFA, 0x0000, 0x0000, 0x006A, 0xFBA6, 0x0000, 0xFF77, 0x2841, 0x0002, 0xFF96, 0x0007, 0x4003, 0x0005, 0xFCDC, 0x38A1, 0x0002, 0x0000, 0xFFF9, 0x38E1, 0x0003, 0x0000, 0x006E, 0x0000, 0x0000, 0x0000, 0x0000,
};
