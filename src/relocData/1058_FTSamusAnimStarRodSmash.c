/* AnimJoint data for relocData file 1058 (FTSamusAnimStarRodSmash) */
/* 3312 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimStarRodSmash_joint1[68];
extern u16 dFTSamusAnimStarRodSmash_joint2[26];
extern u16 dFTSamusAnimStarRodSmash_joint4[38];
extern u16 dFTSamusAnimStarRodSmash_joint5[214];
extern u16 dFTSamusAnimStarRodSmash_joint6[66];
extern u16 dFTSamusAnimStarRodSmash_joint7[140];
extern u16 dFTSamusAnimStarRodSmash_joint8[10];
extern u16 dFTSamusAnimStarRodSmash_joint11[28];
extern u16 dFTSamusAnimStarRodSmash_joint12[214];
extern u16 dFTSamusAnimStarRodSmash_joint14[72];
extern u16 dFTSamusAnimStarRodSmash_joint15[136];
extern u16 dFTSamusAnimStarRodSmash_joint17[56];
extern u16 dFTSamusAnimStarRodSmash_joint19[142];
extern u16 dFTSamusAnimStarRodSmash_joint20[170];
extern u16 dFTSamusAnimStarRodSmash_joint22[230];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimStarRodSmash_joints[] = {
	(u32)dFTSamusAnimStarRodSmash_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimStarRodSmash_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimStarRodSmash_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimStarRodSmash_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimStarRodSmash_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimStarRodSmash_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimStarRodSmash_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimStarRodSmash_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimStarRodSmash_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimStarRodSmash_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimStarRodSmash_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimStarRodSmash_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimStarRodSmash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimStarRodSmash_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimStarRodSmash_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF02EB, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimStarRodSmash_joint1[68] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 1600, 3,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 14), 1594, -17,
	ftAnimSetValT(FT_ANIM_TRAX, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 13), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 361, 1604,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1292, -2291, 657, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValT(FT_ANIM_TRAX, 29), -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 27), 653, -33,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 984, -10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 26), 984, 17,
	ftAnimSetValT(FT_ANIM_TRAX, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 1315, 414, 317, -483,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 1600, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 7), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimStarRodSmash_joint2[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -547, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 16), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 44), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 29), -572, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), 0, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimStarRodSmash_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 12, 0, -3, 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -176, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 272, 4, -83, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 23), 282, -7, -214, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimStarRodSmash_joint5[214] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 476, 14, 114, -8, -231, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -984, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 710, -3, -14, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 698, -17, -27, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 509, -11, -138, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1050, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1220, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 500, 24, -141, -61, -1272, -156,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -571, -110, -1716, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 558, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 892, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1065, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 790, -2, -648, 137, -1164, 452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1059, 189, -296, 368, -811, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1168, 98, 88, 285, -693, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1266, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -626, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 275, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 279, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 215, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1273, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 1203, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -619, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -571, -3,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1192, -16, 204, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 120, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 977, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -576, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -596, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 71, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -93, -125, -659, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -359, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -179, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -187, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 918, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 498, -32,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -89, 100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 86, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -289, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 480, -11, -245, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 476, -3, 114, 27, -231, 14,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimStarRodSmash_joint6[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -956, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -913, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -722, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -592, 358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -30, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -337, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -554, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -638, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -778, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -752, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 13,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimStarRodSmash_joint7[140] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 701, 0,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 504, -38, -64, -3, 42, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 43, -218, -61, 16, 333, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 67, 23, -31, 92, -124, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, -100, 123, 234, 382, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -133, -581, 436, 174, 351, -364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1072, 256, 473, 488, -345, 353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 379, 711, 1414, 415, 1058, 568,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 349, 0, 1303, -8, 791, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 396, 8, 1209, -7, 882, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 580, 7, 1112, -22, 1057, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 650, 110, 1088, -8, 1172, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 801, -650, 1096, -281, 1317, -658,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -650, -609, 525, -292, -145, -601,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -417, 152, 511, -176, 113, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -39, 159, -180, -73, 573, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 701, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimStarRodSmash_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1522, -347, -3026, 98, 60, -42,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimStarRodSmash_joint11[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 332, 20, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 460, 7, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 541, -12, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimStarRodSmash_joint12[214] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -12, -128, 11, -215, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -188, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -282, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 65, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 159, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 496, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -246, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -136, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -307, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -186, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -95, 93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 411, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 502, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 480, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -102, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 219, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 621, 336, 643, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 891, 176, 388, -65, 797, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 973, 72, 349, 8, 788, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1087, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 839, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 405, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 480, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1087, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 917, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 839, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 720, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 481, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 461, 13,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 900, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 730, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 719, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 667, -59,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 657, -98, 479, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 314, -232,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 474, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 580, -141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 138, -195,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 69, -181,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 11, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 331, -154, -7, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -64, -70, -165, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 44, 23, -113, -31, -200, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 13, -128, -15, -215, -14,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimStarRodSmash_joint14[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -816, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1250, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1282, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1029, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -771, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -605, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -809, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -814, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -877, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -945, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -994, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -910, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -627, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimStarRodSmash_joint15[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1492, -4, 1621, 4, -2049, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1894, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -1756, -23, -1935, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1777, -59, -1920, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1991, 87, -1827, -122,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1890, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1989, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1825, 284, 2103, 57, -2025, -297,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 2091, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1421, 231, -2423, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1362, 30, -2478, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1354, 2, -2490, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2099, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 2068, -16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1352, 2, -2493, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -2421, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -1358, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1365, -11, 2049, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -1392, 23, 1706, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2404, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -2054, 11,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1371, 8, 1659, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1473, -19, 1619, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1492, -18, 1621, 1, -2049, 5,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimStarRodSmash_joint17[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 468, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 533, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 517, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 579, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 692, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 888, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1096, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1107, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 1101, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1098, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 479, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 468, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimStarRodSmash_joint19[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1510, 1, -1561, 0, 1629, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1451, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -1490, 12, 1574, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1478, 6, 1568, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1596, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1435, 9, 1596, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1481, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1486, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1415, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1364, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1378, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1407, -41, -1576, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1409, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1593, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1375, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 1386, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1411, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 1349, -7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1594, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -1424, 22,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1345, -1, 1396, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1323, -10, 1626, 38,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1401, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1532, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1320, 12, 1658, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1494, 19, 1631, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1510, 15, -1561, -28, 1629, -1,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimStarRodSmash_joint20[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1874, -9, 1383, 3, 1458, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 1527, 4, 1268, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 1537, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1524, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1510, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1531, -41, 1256, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1294, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1440, -25, 1376, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1459, 52, 1504, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1545, 5, 1671, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1202, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1286, 0, 1550, -149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1241, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1183, -11, 1234, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1164, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 1229, 6,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1302, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1340, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1164, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1176, 12,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1239, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1379, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1194, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1698, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1362, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1461, -25,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1379, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1444, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1432, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1387, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1781, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1846, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1874, 28, 1383, -4, 1458, 13,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimStarRodSmash_joint22[230] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 569, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 576, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 575, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 259, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 212, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 507, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 748, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 745, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 746, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 796, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 797, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 608, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 581, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 569, -11,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0063, 0x0000, 0x007C, 0x0003, 0xFF18, 0x0000, 0x280B, 0x000C, 0x0074, 0xFFFB, 0xFF4E, 0x0004, 0x2005, 0x0009, 0x0079, 0xFFE4, 0x2005, 0x0001, 0x005B, 0xFFE1, 0x2805, 0x0004, 0x0008, 0x0002, 0x0801, 0x0002, 0x200B, 0x0001, 0x006E, 0x0039, 0xFF52, 0xFFF7, 0x2809, 0x0002, 0xFF67, 0x0046, 0x2003, 0x0001, 0x00E8, 0x005C, 0x2007, 0x0001, 0x0128, 0x0031, 0x0001, 0xFFFA, 0x2803, 0x0003, 0x0185, 0x0037, 0x2805, 0x0004, 0x0055, 0x0026, 0x2009, 0x0001, 0xFFC7, 0xFFF9, 0x2009, 0x0002, 0xFEC8, 0xFF86, 0x200B, 0x0001, 0x01CF, 0x0025, 0xFE62, 0xFFD6, 0x2809, 0x0002, 0xFE89, 0x000F, 0x2803, 0x0003, 0x01C3, 0xFFFD, 0x2005, 0x0001, 0x0074, 0x001A, 0x2805, 0x000A, 0x0084, 0xFFFE, 0x0801, 0x0001, 0x2009, 0x0001, 0xFE91, 0x0004, 0x2809, 0x0018, 0xFE83, 0xFFFF, 0x2003, 0x0001, 0x01C1, 0xFFFF, 0x2803, 0x0016, 0x01BF, 0xFFFF, 0x0801, 0x0007, 0x2005, 0x0001, 0x0082, 0xFFFE, 0x2805, 0x000F, 0x0091, 0x000E, 0x0801, 0x000E, 0x2003, 0x0001, 0x01BC, 0xFFF8, 0x2803, 0x000D, 0x0067, 0xFFF7, 0x200D, 0x0001, 0x00A4, 0x0015, 0xFE80, 0xFFFD, 0x2809, 0x000A, 0xFEEB, 0x0017, 0x2005, 0x0009, 0x00FB, 0xFFDC, 0x2005, 0x0001, 0x00D0, 0xFFD4, 0x2805, 0x0002, 0x0081, 0xFFED, 0x2009, 0x0001, 0xFF02, 0x0013, 0x2009, 0x0001, 0xFF12, 0x000B, 0x200F, 0x0001, 0x0063, 0xFFFD, 0x007C, 0xFFFB, 0xFF18, 0x0006, 0x0000,
};
