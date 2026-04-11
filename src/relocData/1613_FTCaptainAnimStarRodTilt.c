/* AnimJoint data for relocData file 1613 (FTCaptainAnimStarRodTilt) */
/* 4288 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimStarRodTilt_joint1[82];
extern u16 dFTCaptainAnimStarRodTilt_joint2[60];
extern u16 dFTCaptainAnimStarRodTilt_joint4[102];
extern u16 dFTCaptainAnimStarRodTilt_joint5[250];
extern u16 dFTCaptainAnimStarRodTilt_joint6[102];
extern u16 dFTCaptainAnimStarRodTilt_joint7[38];
extern u16 dFTCaptainAnimStarRodTilt_joint8[60];
extern u16 dFTCaptainAnimStarRodTilt_joint10[8];
extern u16 dFTCaptainAnimStarRodTilt_joint11[206];
extern u16 dFTCaptainAnimStarRodTilt_joint12[88];
extern u16 dFTCaptainAnimStarRodTilt_joint13[110];
extern u16 dFTCaptainAnimStarRodTilt_joint14[10];
extern u16 dFTCaptainAnimStarRodTilt_joint16[14];
extern u16 dFTCaptainAnimStarRodTilt_joint17[202];
extern u16 dFTCaptainAnimStarRodTilt_joint19[72];
extern u16 dFTCaptainAnimStarRodTilt_joint21[198];
extern u16 dFTCaptainAnimStarRodTilt_joint22[178];
extern u16 dFTCaptainAnimStarRodTilt_joint24[314];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimStarRodTilt_joints[] = {
	(u32)dFTCaptainAnimStarRodTilt_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimStarRodTilt_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimStarRodTilt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimStarRodTilt_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimStarRodTilt_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimStarRodTilt_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimStarRodTilt_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimStarRodTilt_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimStarRodTilt_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimStarRodTilt_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimStarRodTilt_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimStarRodTilt_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimStarRodTilt_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimStarRodTilt_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimStarRodTilt_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimStarRodTilt_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimStarRodTilt_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimStarRodTilt_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF03BF, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimStarRodTilt_joint1[82] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValT(FT_ANIM_TRAX, 3), -24,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), -114, 262,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 153, 37,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 1274, -270,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 1169, -63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 924, 945,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), -24,
	ftAnimSetValT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 415, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1203, 12, 1357, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValBlockT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetValT(FT_ANIM_TRAX, 31), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 415, -7, 1203, -43, 1363, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 278, -29, 1066, 226, 534, -778,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 1600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimStarRodTilt_joint2[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 240, 6, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 240, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -47, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -119, -4, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -104, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 72, 10, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 107, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimStarRodTilt_joint4[102] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, 0, 0, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 245, 15, 303, 19, 73, 17, 66, 78, -16, 23, 75, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 285, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 264, 72, 89, 57, 52, -200, -16, -57, 87, -36,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -47, -59, -49, 38, 55, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 464, 44, 247, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 517, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 0, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -14, 7, 22, 12, 24, 50, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 84, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 84, 3, 0, 0, 7, -2, 12, -11, 50, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 189, 0, 0, 0, -31, 47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimStarRodTilt_joint5[250] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, -4, 5, -144, -524, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 235, -146, -138, -176, -397, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -53, -276, -347, -70, 67, 391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -317, -145, -279, 46, 386, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -345, 0, -254, 0, 423, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -244, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -277, -50, 384, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -356, -69, 233, -183,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -422, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -105, 121, 17, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1, 5, -119, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 281, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -93, -70, -378, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -142, -31, -335, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -156, 221, -389, -44, 139, -453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 300, 324, -425, 80, -625, -547,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 491, 107, -229, 134, -956, -172,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -140, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 515, 39, -970, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 570, 58, -914, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -885, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 631, 37, -120, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -272, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 645, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 601, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -885, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -845, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -285, -18, -829, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -620, 123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -460, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 591, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 436, -92,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, 141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -195, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 334, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 207, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -445, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -157, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -220, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -424, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 231, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 262, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -78, 69, -476, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 247, -11, -17, 41, -511, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, -8, 5, 23, -524, -13,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimStarRodTilt_joint6[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -197,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -995, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1172, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1043, 73,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1025,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1043, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -927, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -582, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -656, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -817, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1102, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -988, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -648, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -662, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -848, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -972, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -986, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1036, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1034, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1110, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1099, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1039, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1020, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -820, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 22,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimStarRodTilt_joint7[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -781, -89, -388,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -504, 18, 99, 14, -380, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -539, -1, 103, 0, -319, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -539, -8, 103, -6, -319, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -781, -89, -388,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimStarRodTilt_joint8[60] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 14, -343, -40, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -327, 40, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -37, -21, 52, 0, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -184, -10, 95, 6, -87, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -184, 13, 95, -3, -87, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 81, 13, 32, -6, -29, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimStarRodTilt_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimStarRodTilt_joint11[206] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1737, -243, 1464, -287, -1016, -822,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1980, -248, 1177, -7, -1839, -561,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2234, -133, 1448, 312, -2138, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2247, -25, 1802, 173, -2182, -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2286, 1796, -2200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2247, 94, 1802, -71, -2182, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2098, 379, 1653, -601, -1940, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1489, 316, 599, -699, -1556, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1465, -264, 254, -86, -1622, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2017, -516, 427, 194, -2024, -362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2499, -380, 643, 62, -2346, -355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2779, -99, 552, -84, -2735, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2699, 74, 474, -83, -2762, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2751, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2478, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 223, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 228, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 223, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2750, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2754, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2446, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -2434, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2459, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2804, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 227, 2, -2758, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 192, -91, -2794, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 44, -95, -2740, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 47, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2624, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2927, -113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3313, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 84, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 144, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3337, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3346, -8, 144, 0, -2624, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimStarRodTilt_joint12[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, 97,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -926, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -795, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -412, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -415, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -412, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1008, 382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -73, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -432, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -602, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -715, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -894, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -939, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1018, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimStarRodTilt_joint13[110] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -43, -199, 256, -58, 391, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -328, -71, 188, 5, 209, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -328, -85, 202, 38, 209, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -585, 227, 303, 45, 419, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 127, 1106, 293, -930, 744, -733,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1628, -21, -1556, -342, -1046, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 85, -678, -390, 615, 601, 783,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 71, -324, 227, 519, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 227, -124, 64, 380, 441, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2, -7, 43, 0, 687, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 2, 8, 43, 16, 687, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 157, 19, 336, 16, 360, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimStarRodTilt_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimStarRodTilt_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 18, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 42), 0, 18, 0, -3,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimStarRodTilt_joint17[202] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -1, 70, 55, -472, -140,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 194, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 75, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -771, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 227, 30, -832, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 202, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -899, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1074, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -7, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -112, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -144, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -14, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1077, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1069, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 142, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -2, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 63, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 65, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 6, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 63, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1066, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1053, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 93, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1061, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1152, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 73, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 183, 45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 156, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 365, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1105, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -859, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 232, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 219, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 317, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 212, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 164, -51, -750, 117,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 83, -22, -517, 75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 195, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, -4, 70, -12, -472, 45,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimStarRodTilt_joint19[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 184,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 771, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 797, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 902, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 896, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 838, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 830, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 851, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 848, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 887, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 897, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 815, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 750, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 613, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 547, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimStarRodTilt_joint21[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, -36, -42, 34, 80, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -30, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -186, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -7, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 43, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -87, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -54, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -152, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -134, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 53, 64, -149, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 151, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -295, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -108, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -266, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 112, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -11, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -281, -16, -300, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -269, 4, -213, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -13, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 5, 7,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -264, 5, -210, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -216, 14, -167, 48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 12, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -83, -66,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -197, 27, -108, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -59, 5, 160, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -159, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -341, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -431, -54, -67, -13, 194, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -71, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 86, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -449, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -364, 97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -178, 57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -54, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -139, 25, -44, 6, 79, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, 12, -42, 2, 80, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimStarRodTilt_joint22[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, -16, 110, 21, -76, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 124, 19, 156, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -172, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -279, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -335, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 168, 41, 112, -82, -206, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 206, 15, -8, -86, 59, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 199, -1, -59, 10, 178, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 143, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12, 54, 32, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 50, 30, -34, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 118, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -68, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -93, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -97, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 147, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 157, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 118, 0, -97, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 139, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -69, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -57, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -344, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 151, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 11, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 157, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 148, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -420, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -501, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 151, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, 86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -118, 68,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 122, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 9, 110, -12, -76, 41,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimStarRodTilt_joint24[314] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 193,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 734, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 908, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 934, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 842, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 286, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 502, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 547, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 474, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 389, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 393, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 281, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 289, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 319, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 322, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 767, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 882, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1039, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 960, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 596, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -54,
	ftAnimEnd(),
	0x0000, 0x200E, 0x00A1, 0xFFDD, 0x016D, 0xFFA8, 0xFEE9, 0xFF83, 0x200F, 0x0001, 0x007E, 0xFFD1, 0x0114, 0xFF94, 0xFE6C, 0xFF84, 0x200F, 0x0001, 0x0041, 0xFFD6, 0x0094, 0xFFCA, 0xFDF0, 0xFFB6, 0x2803, 0x0002, 0x000F, 0xFFE3, 0x200D, 0x0001, 0x00A7, 0x000F, 0xFDD6, 0xFFCA, 0x200D, 0x0001, 0x00B3, 0x000A, 0xFD82, 0xFFE0, 0x2805, 0x0003, 0x00BE, 0xFFE3, 0x200B, 0x0001, 0xFFF0, 0xFFED, 0xFD94, 0x0059, 0x200B, 0x0001, 0xFFE9, 0x0019, 0xFE35, 0x00B3, 0x2809, 0x0002, 0xFFA8, 0x0079, 0x2003, 0x0001, 0x0021, 0x0023, 0x2803, 0x0003, 0x002A, 0xFFFA, 0x2005, 0x0001, 0x008E, 0xFFCF, 0x200D, 0x0001, 0x005B, 0xFFBC, 0xFFED, 0x003F, 0x2809, 0x0003, 0x0057, 0x000B, 0x2005, 0x0001, 0x0005, 0xFFB3, 0x2805, 0x0007, 0xFF42, 0xFFFD, 0x2003, 0x0001, 0x001F, 0xFFF3, 0x2803, 0x0004, 0x0011, 0x001A, 0x0801, 0x0001, 0x2009, 0x0001, 0x0061, 0x0008, 0x2809, 0x000D, 0x004B, 0xFFF8, 0x0801, 0x0002, 0x2003, 0x0001, 0x0035, 0x0028, 0x2803, 0x0004, 0x00C2, 0x0007, 0x0801, 0x0001, 0x2005, 0x0001, 0xFF40, 0x0000, 0x2805, 0x000B, 0xFFBB, 0x0010, 0x0801, 0x0002, 0x2003, 0x0001, 0x00C2, 0x0000, 0x2803, 0x000B, 0x011B, 0x0023, 0x0801, 0x0005, 0x2009, 0x0001, 0x0041, 0xFFF6, 0x2809, 0x0003, 0xFFD6, 0xFFC2, 0x0801, 0x0002, 0x2005, 0x0001, 0xFFCB, 0x0017, 0x2805, 0x0004, 0x00B6, 0x0050, 0x2009, 0x0001, 0xFF96, 0xFFC4, 0x2809, 0x0003, 0xFF19, 0xFFF1, 0x0801, 0x0001, 0x2003, 0x0001, 0x013F, 0x001F, 0x2803, 0x0003, 0x0155, 0xFFDD, 0x0801, 0x0001, 0x200D, 0x0001, 0x0105, 0x0049, 0xFF13, 0xFFF4, 0x280D, 0x0004, 0x0182, 0xFFFB, 0xFEAA, 0x0003, 0x0801, 0x0001, 0x2003, 0x0001, 0x0121, 0xFFCA, 0x2803, 0x0003, 0x00AB, 0xFFF2, 0x0801, 0x0002, 0x200D, 0x0001, 0x0179, 0xFFF8, 0xFEBA, 0x0017, 0x200F, 0x0001, 0x00A3, 0xFFFB, 0x0170, 0xFFFA, 0xFED8, 0x0017, 0x200F, 0x0001, 0x00A1, 0xFFFF, 0x016D, 0xFFFD, 0xFEE9, 0x0010, 0x0000, 0x0000, 0x0000,
};
