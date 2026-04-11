/* AnimJoint data for relocData file 602 (FTMarioAnimStarRodDash) */
/* 2832 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimStarRodDash_joint1[10];
extern u16 dFTMarioAnimStarRodDash_joint2[64];
extern u16 dFTMarioAnimStarRodDash_joint3[42];
extern u16 dFTMarioAnimStarRodDash_joint5[68];
extern u16 dFTMarioAnimStarRodDash_joint6[150];
extern u16 dFTMarioAnimStarRodDash_joint7[46];
extern u16 dFTMarioAnimStarRodDash_joint8[12];
extern u16 dFTMarioAnimStarRodDash_joint9[62];
extern u16 dFTMarioAnimStarRodDash_joint11[38];
extern u16 dFTMarioAnimStarRodDash_joint12[156];
extern u16 dFTMarioAnimStarRodDash_joint13[56];
extern u16 dFTMarioAnimStarRodDash_joint14[50];
extern u16 dFTMarioAnimStarRodDash_joint16[10];
extern u16 dFTMarioAnimStarRodDash_joint17[140];
extern u16 dFTMarioAnimStarRodDash_joint19[78];
extern u16 dFTMarioAnimStarRodDash_joint21[106];
extern u16 dFTMarioAnimStarRodDash_joint22[134];
extern u16 dFTMarioAnimStarRodDash_joint24[144];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimStarRodDash_joints[] = {
	(u32)dFTMarioAnimStarRodDash_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimStarRodDash_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimStarRodDash_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimStarRodDash_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimStarRodDash_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimStarRodDash_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimStarRodDash_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimStarRodDash_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimStarRodDash_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimStarRodDash_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimStarRodDash_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimStarRodDash_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimStarRodDash_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimStarRodDash_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimStarRodDash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimStarRodDash_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimStarRodDash_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimStarRodDash_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF02A7, /* [24] END */
};

/* Joint 1 */
u16 dFTMarioAnimStarRodDash_joint1[10] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 0, 2116,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 38), 3600,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 2), 3600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimStarRodDash_joint2[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 755, -195, -67, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 283, -385,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 37), -34, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 5, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 418,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 283, -41,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 23), 283, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 4), 182, 31, 445, 281,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -95,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 223, 12, 0, 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 540, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 223, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTMarioAnimStarRodDash_joint3[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -124, 0, -113, 0, 41, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 3, 0, 3, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, -2, 0, -10, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -72, -9, -344, -107, -48, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -71, -790, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimStarRodDash_joint5[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 407, 36, 234, 10, 78, 7,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 108,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 108,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 714, 9, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 714, -2, 0, 1, 0, 0, 0, 1, 0, 0, 0, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 4), 644, -69, 38, 35, -8, 15, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 4, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 208, 258, 110, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimStarRodDash_joint6[150] = {
	ftAnimSetValAfter(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -342, -109, -303, 107, 288, 168,
	ftAnimSetValBlock(FT_ANIM_SCAX), 4096,
	ftAnimSetValT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -452, 79, -195, -476, 457, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -182, 318, -1256, -752, 88, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_SCAX, 2), -1733, -20, 5120, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 184, 196, 389, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 209, 10, 365, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 69, -4,
	ftAnimSetValT(FT_ANIM_SCAX, 29), 5121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 366, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1742, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -1746, 12,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 63, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -71, -61,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1733, 33,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX), -66,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1524, 299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -165, -162, 378, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -604, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 422, 42,
	ftAnimSetValT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1080, 245, 463, 210,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1070, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -967, -301, 843, 334,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1382, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1133, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1175, -112, 1320, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1460, -77, -1295, -119, 1338, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimStarRodDash_joint7[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -247, -686,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -973, 466,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 486,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -165, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -187, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimStarRodDash_joint8[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 40), -625, 15,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTMarioAnimStarRodDash_joint9[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 188, -1, -68, 7, -36, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 78, -153, 49, 17, -95, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -424, -68, 0, -14, 0, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -265, -3, -20, -3, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -442, -5, -19, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -424, 31, 0, 0, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 441, 85, -23, 0, 68, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 201, -4, 176,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimStarRodDash_joint11[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, 5, -42, 0, 97, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 5, 0, 1, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, -6, 0, 4, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -221, -30, 145, 19, -87, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -221, 139, -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimStarRodDash_joint12[156] = {
	ftAnimSetValAfter(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1827, -14, 1005, 81, -2168, -114,
	ftAnimSetValBlock(FT_ANIM_SCAX), 4096,
	ftAnimSetValT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1841, -92, 1086, 226, -2283, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2012, -45, 1457, 346, -2644, -287,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX, 2), -1889, 27, 5120, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2934, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1779, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1840, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1893, 0,
	ftAnimSetValT(FT_ANIM_SCAX, 29), 5121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1876, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -1881, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2946, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -2920, 23,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1893, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1842, -8,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1887, 19, -2899, 50,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX), -66,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1826, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1829, -87, -2818, 276,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1446, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2345, 460,
	ftAnimSetValT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1655, 126, -1898, 172,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1509, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2000, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1633, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1359, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1334, 164, 1236, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1181, 153, 1073, -163, -1552, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimStarRodDash_joint13[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -489, -144,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -633, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -394, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -514, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -302, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -90,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimStarRodDash_joint14[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 322, -14, 649, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 322, -3, 0, 1, 649, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 195, -57, 44, 28, 429, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 93, 107, 114, -11, 78, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 625, -7, 0, -8, 0, 21,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimStarRodDash_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimStarRodDash_joint17[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1731, 4, 1718, -58, 1221, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1635, 33, 1614, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1218, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1791, 596,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1752, 66, 1511, -48, 2411, 335,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1822, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1591, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2462, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2724, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1828, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 1766, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1590, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1591, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2730, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 2714, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2706, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2457, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1562, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1511, 18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1752, -54, 2411, -124,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1635, 48, 1781, -595,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1553, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1727, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1754, 41, 1639, -26, 1017, -411,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1618, -78, 1803, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1139, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1403, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1528, -89, 1821, 18, 1627, 223,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimStarRodDash_joint19[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 112, 381,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 866, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1077, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 463, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 140, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 383, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 465, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 835, 350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1240, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1319, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1063, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 660, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, -233,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimStarRodDash_joint21[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1408, -88, -1309, 10, -1361, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1713, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -1271, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1319, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1411, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1334, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1536, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1649, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1720, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), -1756, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1698, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 1744, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1744, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1626, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1592, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1419, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1276, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1551, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1349, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1093, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1349, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1381, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1394, 13, -1559, -7, -1764, -7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimStarRodDash_joint22[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -43, 34, 174, -23, 752, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 2, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 200, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 808, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 821, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1116, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -21, 2,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1121, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1105, -31,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 225, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 442, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -19, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 218, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1046, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 932, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 449, -70, 898, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, -263, 334, 26, 646, -495,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 150, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -78, -200, -91, -614,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 12, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -582, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 173, 15, -462, 136,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 190, -3, -140, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 78, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 128, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 163, 35, 175, -15, 15, 155,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimStarRodDash_joint24[144] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 284, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 404, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 505, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 440, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 129, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -64,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 366, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 454, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 876, 359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1259, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1070, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 678, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 536, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, -69,
	ftAnimEnd(),
	0x200E, 0x0036, 0xFFE3, 0x007E, 0x0000, 0xFF6A, 0x0000, 0x280D, 0x0024, 0x003E, 0xFFFB, 0x0007, 0xFFFF, 0x2003, 0x001F, 0xFFAF, 0x0005, 0x2003, 0x0001, 0xFFB5, 0x000D, 0x2003, 0x0002, 0xFFF2, 0x0012, 0x2003, 0x0001, 0xFFF0, 0x0043, 0x2003, 0x0001, 0x0078, 0x0038, 0x200F, 0x0001, 0x0060, 0xFFEB, 0x0039, 0xFFEE, 0x0005, 0xFFE4, 0x200F, 0x0002, 0x0055, 0x0006, 0xFFE7, 0xFFD7, 0xFF6F, 0xFFB1, 0x200F, 0x0001, 0x005B, 0x0006, 0xFFC7, 0xFFE1, 0xFF31, 0xFFC3, 0x0000,
};
