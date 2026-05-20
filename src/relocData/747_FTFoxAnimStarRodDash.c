/* AnimJoint data for relocData file 747 (FTFoxAnimStarRodDash) */
/* 2464 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimStarRodDash_joint1[10];
extern u16 dFTFoxAnimStarRodDash_joint2[34];
extern u16 dFTFoxAnimStarRodDash_joint3[26];
extern u16 dFTFoxAnimStarRodDash_joint5[30];
extern u16 dFTFoxAnimStarRodDash_joint6[108];
extern u16 dFTFoxAnimStarRodDash_joint8[46];
extern u16 dFTFoxAnimStarRodDash_joint9[32];
extern u16 dFTFoxAnimStarRodDash_joint11[8];
extern u16 dFTFoxAnimStarRodDash_joint12[134];
extern u16 dFTFoxAnimStarRodDash_joint13[48];
extern u16 dFTFoxAnimStarRodDash_joint14[144];
extern u16 dFTFoxAnimStarRodDash_joint16[10];
extern u16 dFTFoxAnimStarRodDash_joint17[78];
extern u16 dFTFoxAnimStarRodDash_joint19[48];
extern u16 dFTFoxAnimStarRodDash_joint21[76];
extern u16 dFTFoxAnimStarRodDash_joint22[94];
extern u16 dFTFoxAnimStarRodDash_joint24[48];
extern u16 dFTFoxAnimStarRodDash_joint25[102];
extern u16 dFTFoxAnimStarRodDash_joint26[42];
extern u16 dFTFoxAnimStarRodDash_joint27[60];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTFoxAnimStarRodDash_joints[] = {
	(AObjEvent32 *)dFTFoxAnimStarRodDash_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimStarRodDash_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimStarRodDash_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTFoxAnimStarRodDash_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTFoxAnimStarRodDash_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimStarRodDash_joint8, /* [6] joint 8 */
	NULL, /* [7] NULL */
	(AObjEvent32 *)dFTFoxAnimStarRodDash_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTFoxAnimStarRodDash_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTFoxAnimStarRodDash_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimStarRodDash_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimStarRodDash_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTFoxAnimStarRodDash_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTFoxAnimStarRodDash_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTFoxAnimStarRodDash_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTFoxAnimStarRodDash_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTFoxAnimStarRodDash_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTFoxAnimStarRodDash_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTFoxAnimStarRodDash_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimStarRodDash_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTFoxAnimStarRodDash_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimStarRodDash_joint1[10] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1600,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 46), 3600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimStarRodDash_joint2[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 780, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 36), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 720, -80,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 20), 540, -44,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 12), 540, 97,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 24, 39, 747, 298, 120, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimStarRodDash_joint3[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, -268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -178, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 357, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 357, -11, -178, -3, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimStarRodDash_joint5[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 320, 201, -181,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 7, -8, 371, 4, -429, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 7, 7, 371, -5, -429, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimStarRodDash_joint6[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1327, 7, 1893, 53, -1209, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1156, -215,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 2271, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1030, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 897, -151, -411, 185,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 815, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2268, -3, -360, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -378, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 2223, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 782, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 893, 29,
	ftAnimBlock(0, 27),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -411, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1023, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 925, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1279, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2237, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1918, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1389, 79, 1848, -60, -1220, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1490, 12, 1763, 12, -1334, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 8, 1774, 10, -1349, -15,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimStarRodDash_joint8[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 30), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -188, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -527, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -338, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -411, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -546, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -12,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimStarRodDash_joint9[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -446, 2, -178, -4, 268, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), -446, 8, -178, 7, 268, -8,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 136, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -144, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -113,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimStarRodDash_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTFoxAnimStarRodDash_joint12[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1911, 158, 1346, -264, 2049, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2069, 468, 1082, -180, 2044, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2848, 131, 986, -168, 1968, -335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2332, 78, 744, -370, 1373, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3005, 327, 244, -242, 1857, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2988, -15, 259, 14, 1851, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2974, -15, 274, 13, 1848, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 3007, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 267, -19, 1842, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 246, -31, 1862, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2103, 333,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 69, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3041, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3165, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2577, 422,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3552, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3077, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3357, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 106, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 234, 60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3561, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3558, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3349, -7, 271, 37, 3553, -4,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimStarRodDash_joint13[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -73, 65,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -152, -341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -683, -374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -850, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -638, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimStarRodDash_joint14[144] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 130, -136, -347, -32, 240, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -272, -173, -64, 152, 558, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -215, 186, -41, 70, 634, 159,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 99, 77, 876,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 51, -4, 57, 0, 895, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 22, 0, 65, 0, 870, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 54, 4, 69, 0, 870, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 99, 77, 876,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 117, 27, 76, -14, 844, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 155, 50, 48, -50, 830, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 218, 44, -24, -28, 880, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 245, -12, -8, 30, 735, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 193, -84, 37, 20, 526, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 75, -118, 32, -12, 338, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -43, -64, 12, -16, 200, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -53, 12, 0, -7, 107, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -18, 26, -1, 0, 33, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimStarRodDash_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimStarRodDash_joint17[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1518, -15, -1393, 5, 656, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 1490, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), -1290, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 651, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 633, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 406, 20,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1499, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1377, -81,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 429, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 979, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1286, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1370, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1302, -59, 1175, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1204, -3, 1555, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, -1, -1385, -14, 1581, 26,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimStarRodDash_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 107, 64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 171, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 362, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 480, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 498, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 733, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 728, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 885, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 838, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 409, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -55,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimStarRodDash_joint21[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1679, 2, 1708, -22, 1676, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1765, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), 1698, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1541, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1539, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 1541, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1761, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 1732, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1547, -8, 1725, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1290, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1474, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1696, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1655, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1359, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1517, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, 0, 1482, 8, 1552, 35,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimStarRodDash_joint22[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1770, 41, -1833, 2, 1767, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1264, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1891, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1430, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1423, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -1469, 9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1258, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 1278, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1893, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -1932, 4,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1454, 22, 1318, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1306, -12, 1804, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1923, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1769, 29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1313, 2, 1787, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1277, 23, 1767, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1253, 23, -1746, 23, 1743, -24,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimStarRodDash_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 305, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 724, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 737, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 891, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 878, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 403, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 181, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 291, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 309, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 309, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimStarRodDash_joint25[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1535, -42, 1504, 10, 1925, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1337, -139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 37), 1582, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1361, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1535, 160,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1841, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1206, -112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 954, -9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1849, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 1906, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 945, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 898, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 927, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1291, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1600, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1706, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1909, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1677, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1313, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1375, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, -52, 1711, 4, 1381, 5,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimStarRodDash_joint26[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -442, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 625, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -384, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 368, -10, 0, -2,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), 219,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -74,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 219, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTFoxAnimStarRodDash_joint27[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -178, 53,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 348, -17, 20, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -322, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 348, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -322, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 348, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -322, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 348, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -322, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 348, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -322, -47, 5, -13,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -178, -122,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
	0x0000,
};
