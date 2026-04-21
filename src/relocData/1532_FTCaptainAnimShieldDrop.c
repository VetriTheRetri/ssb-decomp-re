/* AnimJoint data for relocData file 1532 (FTCaptainAnimShieldDrop) */
/* 3040 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimShieldDrop_joint1[46];
extern u16 dFTCaptainAnimShieldDrop_joint2[62];
extern u16 dFTCaptainAnimShieldDrop_joint4[80];
extern u16 dFTCaptainAnimShieldDrop_joint5[146];
extern u16 dFTCaptainAnimShieldDrop_joint6[56];
extern u16 dFTCaptainAnimShieldDrop_joint7[26];
extern u16 dFTCaptainAnimShieldDrop_joint8[46];
extern u16 dFTCaptainAnimShieldDrop_joint10[34];
extern u16 dFTCaptainAnimShieldDrop_joint11[160];
extern u16 dFTCaptainAnimShieldDrop_joint12[64];
extern u16 dFTCaptainAnimShieldDrop_joint13[24];
extern u16 dFTCaptainAnimShieldDrop_joint14[16];
extern u16 dFTCaptainAnimShieldDrop_joint16[12];
extern u16 dFTCaptainAnimShieldDrop_joint17[164];
extern u16 dFTCaptainAnimShieldDrop_joint19[64];
extern u16 dFTCaptainAnimShieldDrop_joint21[146];
extern u16 dFTCaptainAnimShieldDrop_joint22[122];
extern u16 dFTCaptainAnimShieldDrop_joint24[64];
extern u16 dFTCaptainAnimShieldDrop_joint25[138];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimShieldDrop_joints[] = {
	(u32)dFTCaptainAnimShieldDrop_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimShieldDrop_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimShieldDrop_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimShieldDrop_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimShieldDrop_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimShieldDrop_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimShieldDrop_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimShieldDrop_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimShieldDrop_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimShieldDrop_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimShieldDrop_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimShieldDrop_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimShieldDrop_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimShieldDrop_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimShieldDrop_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimShieldDrop_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimShieldDrop_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimShieldDrop_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimShieldDrop_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimShieldDrop_joint1[46] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 916, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValT(FT_ANIM_TRAX, 12), -22,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 843, -84, 307, 99,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 788, 3, 149, -720,
	ftAnimSetValT(FT_ANIM_TRAX, 18), -55,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 845, 189, -52, -291,
	ftAnimSetValRateT(FT_ANIM_TRAY, 16), 1225, 10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -69, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 12), -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimShieldDrop_joint2[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 107, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 566, 72, 2, 13, -200, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 250, 26, -238, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 705, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1363, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2168, 230, 210, 9, -46, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 337, -6, -64, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2749, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2919, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 3149, 43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 3457, 95, 49,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimShieldDrop_joint4[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 306, -23, 33, -31, 47,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -141, -79, 65, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 420, 42, -50, -23, 25, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 649, 32, -211, -21, -281, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 583, -29, -156, 13, 24, 59,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -140, 42, 65, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -76, -1,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 469, -74, 78, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 91, 1, 78, -5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 311, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 242, -182,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimShieldDrop_joint5[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2610, 4, -171, 0, -644, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -120, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2485, 16, -946, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2496, -158, -986, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2803, -188, 1, 22, -796, 116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -124, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2873, 71, -754, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2452, 141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -782, 199,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -138, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -18, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2378, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2429, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2685, -178, -457, 176,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -457, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2722, -49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -69, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -21, -60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -358, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -533, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2840, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3070, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -544, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -606, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3087, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2986, 46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -83, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2947, 39, -113, -29, -611, -4,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimShieldDrop_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -756, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -879, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -775, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -906, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -835, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -797, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -679, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -542, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -816, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1063, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1100, -37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimShieldDrop_joint7[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, -90, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 5, 0, 5, 0, 7,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -5, 0, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -97, -323,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimShieldDrop_joint8[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 46, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 214, 6, -47, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 74, 16, -33, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 314, 64, -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 399, -28, -6, -18,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 144, -44, -117, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -153, 113, -38,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimShieldDrop_joint10[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 184, -3, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -255, -7, -38, -3, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -38, 2, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimShieldDrop_joint11[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 61, -4, 83, 0, 290, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 186, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -133, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 219, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 188, -127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -253, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 137, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 10, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -192, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -229, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -365, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -474, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -524, -279, 267, 205, -730, -212,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 327, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -788, -85, -899, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -695, 17, -737, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -753, 55, 178, -110, -783, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 182, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -584, 121, -651, 131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -498, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -465, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -430, 224,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 347, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -281, 237, 394, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -23, 122, 241, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -37, -22, 230, 2, 359, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 617, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -23, 89, 310, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 70, 71, 266, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 119, 31, 249, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 13, 249, 0, 627, 9,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimShieldDrop_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -646, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -910, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -897, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -445, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -449, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1021, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -871, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -653, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -670, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1095, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -901, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -838, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -643, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimShieldDrop_joint13[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 275, 5, 105, -3, -199, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 167, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 361, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), -5,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimShieldDrop_joint14[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 1538, -1003, 119, 85, 49, 39,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimShieldDrop_joint16[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 18, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 30), 255, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimShieldDrop_joint17[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, 33, -8, -2, -1066, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -41, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 303, 90, -1080, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 346, -20, -909, 168,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -620, 147,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 163, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -139, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -194, 98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -449, 98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -576, -143,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 254, -16, -7, 179,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -86, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 165, 59, -709, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 111, -66, -1009, -176,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -2, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1062, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -918, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 65, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -926, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -712, 132,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 84, -24, -35, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 88, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 32, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -545, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -561, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 88, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 82, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 41, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 57, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -564, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -560, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, -2, 82, 0, -558, 2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimShieldDrop_joint19[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1047, 34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1105, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 940, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 643, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 974, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1317, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1181, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1155, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1040, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 851, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 460, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 253, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 239, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimShieldDrop_joint21[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1624, -27, 1475, -22, -1548, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1832, -150,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1538, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1750, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1899, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1718, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1963, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1893, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1705, 9, -1932, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1698, -45, 1665, 7, -1927, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1504, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1796, 0, -2048, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1685, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1697, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1674, 73, 1578, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1663, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1550, 41, -1762, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1592, -32, -1866, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1549, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1796, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1955, 70,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1559, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1615, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1537, 44, -1803, 191,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1628, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1319, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1621, 7, -1301, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1644, -27, -1132, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1615, 13, 1616, -28, -1100, 31,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimShieldDrop_joint22[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1578, 8, 1398, 6, -1755, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1561, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1606, -40, -2024, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1645, 12, -1994, 141,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1418, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1742, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1615, -52, -1520, -144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1352, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2031, -356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1561, -136, -2232, -234,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1760, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1379, 36, -2499, -153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1331, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2540, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2425, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1660, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1660, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2509, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2451, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1650, 11, -2290, 119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1626, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -2299, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2333, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2419, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1623, 3, 1320, -10, -2432, -12,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimShieldDrop_joint24[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1219, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1009, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 886, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 491, -443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 829, 616,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1232, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1318, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1257, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1219, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1281, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1045, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1009, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 879, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimShieldDrop_joint25[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1627, -21, 1731, 3, 1279, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1430, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1626, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1629, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1741, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1758, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1461, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1455, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1575, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1565, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1902, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1504, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1557, 63, 1263, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1559, 101, 1693, 60, 1333, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1673, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1679, -3, 1325, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1644, -101, 1348, -42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1732, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1770, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1510, -90, 1298, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1542, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1336, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1806, 17, 1422, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 1618, -17, 1466, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1562, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1665, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1607, -11, 1666, 0, 1456, -10,
	ftAnimEnd(),
	0x0000, 0x0000,
};
