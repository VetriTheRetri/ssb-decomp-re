/* AnimJoint data for relocData file 746 (FTFoxAnimStarRodSmash) */
/* 3888 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimStarRodSmash_joint1[48];
extern u16 dFTFoxAnimStarRodSmash_joint2[54];
extern u16 dFTFoxAnimStarRodSmash_joint4[54];
extern u16 dFTFoxAnimStarRodSmash_joint5[232];
extern u16 dFTFoxAnimStarRodSmash_joint6[46];
extern u16 dFTFoxAnimStarRodSmash_joint7[10];
extern u16 dFTFoxAnimStarRodSmash_joint8[174];
extern u16 dFTFoxAnimStarRodSmash_joint10[10];
extern u16 dFTFoxAnimStarRodSmash_joint11[260];
extern u16 dFTFoxAnimStarRodSmash_joint12[64];
extern u16 dFTFoxAnimStarRodSmash_joint13[182];
extern u16 dFTFoxAnimStarRodSmash_joint15[10];
extern u16 dFTFoxAnimStarRodSmash_joint16[140];
extern u16 dFTFoxAnimStarRodSmash_joint18[62];
extern u16 dFTFoxAnimStarRodSmash_joint20[124];
extern u16 dFTFoxAnimStarRodSmash_joint21[150];
extern u16 dFTFoxAnimStarRodSmash_joint23[64];
extern u16 dFTFoxAnimStarRodSmash_joint24[126];
extern u16 dFTFoxAnimStarRodSmash_joint25[82];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimStarRodSmash_joints[] = {
	(u32)dFTFoxAnimStarRodSmash_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimStarRodSmash_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimStarRodSmash_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimStarRodSmash_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimStarRodSmash_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimStarRodSmash_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimStarRodSmash_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimStarRodSmash_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimStarRodSmash_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimStarRodSmash_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimStarRodSmash_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimStarRodSmash_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimStarRodSmash_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimStarRodSmash_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimStarRodSmash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimStarRodSmash_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimStarRodSmash_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimStarRodSmash_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimStarRodSmash_joint25, /* [24] joint 25 */
	0xFFFF03B7, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimStarRodSmash_joint1[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 0, -20, -120, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), 990,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -120, 959,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 0, 990,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 600, -445, 720, 959,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 720,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 11, 600, 73, 720, -174,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimStarRodSmash_joint2[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -86, 2, -574, -12, -21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -86, 36, -574, 4, -21, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 171, 37, -545, 31, 96, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 178, 0, -357, 6, 178, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 178, -9, -357, 0, 178, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimStarRodSmash_joint4[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 73, -12, -419, -30, -122, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 73, 16, -419, 153, -122, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 187, 26, 653, 205, -81, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 261, 2, 1020, 13, -354, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 261, 1, 1020, -25, -354, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimStarRodSmash_joint5[232] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1718, 38, 1774, -54, -1349, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1518, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1261, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1466, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1815, -298,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2231, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1506, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1353, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1216, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1107, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1387, -21, -2307, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -1287, 22, -2477, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1129, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1253, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1282, -35, 1256, -39, -2466, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1201, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1358, -190, -2528, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1662, -46, -3120, -248,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2732, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1450, 119, 1358, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1166, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1424, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1161, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2530, 168,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2123, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1070, 64, 1219, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1031, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1353, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1360, 4, -2126, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1346, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -2128, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1032, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), -1033, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1031, -21, 1354, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1490, 188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1383, -179,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2119, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1387, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1778, 205,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1832, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1563, -122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1699, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1323, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1334, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1805, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1789, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, -19, 1774, -15, -1349, -15,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimStarRodSmash_joint6[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -66,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -626, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -229, 313,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 44), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -370, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -495, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -565, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimStarRodSmash_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimStarRodSmash_joint8[174] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -112, 1, 143, 14, -75, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, 1, 164, 27, -85, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 1, 198, 39, -100, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -108, 0, 243, 49, -119, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, -4, 298, 58, -141, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -117, -10, 360, 64, -167, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -131, -19, 427, 69, -197, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -155, -34, 499, 71, -234, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -199, -63, 571, 71, -286, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -282, -133, 641, 64, -373, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -465, 513, 701, 119, -556, 515,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 744, 417, 879, 101, 658, 423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 369, -272, 904, 35, 291, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 199, -127, 949, 44, 130, -117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 993, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 114, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 993, -174,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 114, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -154, -141, -224, -200, -69, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -875, -25, -409, -6, 693, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -875, 21, -409, 7, 693, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -264, 76, -184, 54, 171, -76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimStarRodSmash_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimStarRodSmash_joint11[260] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, -45, 271, -2, 336, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 34, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 427, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 234, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -41, -134,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -30, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 113, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 370, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -52, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -445, -223,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 246, -143, 475, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 59, 85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -198, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1012, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 170, 108, -1112, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 330, -34, -1155, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -239, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -287, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 278, 80, -196, 49, -1195, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 491, 20, -187, -68, -1535, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 319, -270, -334, -59, -1471, 181,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -983, 131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -108, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -48, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -164, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -15, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -910, 155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -513, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -202, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -253, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2, 14, -519, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 28, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -547, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -246, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -345, -36,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 19, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -202, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -555, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -386, 142, -596, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -634, -307, -60, 236, -565, -125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -878, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 26, -847, -153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -55, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -502, 400,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -800, 257, 177, 209,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 31, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 363, 52, 50, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 281, -45, 337, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, 101, 271, -9, 336, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimStarRodSmash_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, 154,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -439, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -673, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -361, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -641, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -708, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 113,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimStarRodSmash_joint13[182] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 96, 32, -10, -2, 355, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 328, 41, -23, -2, 631, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 389, -22, -28, 18, 489, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 261, -146, 33, 21, 354, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 95, -144, 15, -16, 398, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, -24, 0, -2, 399, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -27, 50, 0, 0, 399, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 227, 4, 0, 130, 29, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, 9, 261, 188, 85, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 246, 287, 376, -34, 349, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 555, 199, 192, -211, 452, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 645, -104, -46, -188, 261, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 346, -294, -185, 37, 291, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, -11, 27, 8, 614, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 55, 0, 27, 0, 614, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 53, -28, 34, -10, 607, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, 29, 7, -156, 692, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 113, 99, -279, -258, 833, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 197, 16, -509, -3, 669, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, 99, -287, 103, 506, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 495, -29, -200, 57, 361, -101,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimStarRodSmash_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimStarRodSmash_joint16[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1202, 0, -1385, 0, 1581, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), 1212, -4, -1561, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1810, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1815, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1857, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, -27, -1547, 113, 1815, -154,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -991, 21, 816, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1200, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1351, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1385, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1046, -70, 692, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1299, -2, 718, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1430, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1383, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1301, -1, 717, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 699, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -1296, 10,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1384, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 1428, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1430, -26, 717, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1185, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1557, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1273, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1374, -17,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1192, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1200, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, 2, -1385, -10, 1581, 24,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimStarRodSmash_joint18[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 125, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -62,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 422, 361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 723, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 739, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 718, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 707, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 675, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 434, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimStarRodSmash_joint20[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, -2, 1482, 3, 1552, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), 1527, 12, 1775, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1673, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1671, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1646, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1553, -14, 1758, -60, 1662, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1426, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1502, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1490, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1489, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1656, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1500, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1638, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1522, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 1611, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1664, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 1648, 21,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1644, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 1596, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1589, 13, 1611, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1462, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1657, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1664, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1547, 6,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1476, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, -2, 1482, 5, 1552, 4,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimStarRodSmash_joint21[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1253, 0, -1746, 1, 1743, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), -1155, -3, 1762, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), -1574, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1557, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1574, -160,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1163, -67, 1747, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1539, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1291, -258, -1851, -212,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -2003, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1680, -187,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1595, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1794, 164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1953, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1514, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1419, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1957, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 1936, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2000, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -2000, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1419, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1427, 10,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1984, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1763, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1413, -30, 1919, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1467, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1732, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1668, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1731, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1409, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1263, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1253, 10, -1746, 17, 1743, 11,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimStarRodSmash_joint23[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 125, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 16, -62,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 381, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 270, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -135,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 307, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 357, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimStarRodSmash_joint24[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1624, -1, 1711, 2, 1381, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1518, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 2034, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1565, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1583, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1645, -15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1494, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1518, 54,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2024, -57, 1610, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1563, 10, 1920, -271, 1322, -144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1608, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1482, -374, 1321, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1103, -35, 1544, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, 3, 1098, 4, 1538, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 27), 1591, -19, 1462, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 26), 1117, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1152, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1704, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1572, -11, 1434, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1623, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1251, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1279, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1363, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, 1, 1711, 6, 1381, 18,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimStarRodSmash_joint25[82] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 219,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 0, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), 402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 0, -15, 37, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 0, -10, 37, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 154, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), -273,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 0, 219,
	ftAnimEnd(),
	0x0000, 0x4006, 0xFF4E, 0xFF86, 0x48E8, 0x0000, 0x0000, 0x0040, 0xFE3E, 0x2007, 0x000E, 0x0000, 0x0006, 0x0000, 0x0004, 0x3807, 0x000C, 0x0000, 0x0000, 0x2007, 0x000E, 0x0000, 0x000F, 0x0000, 0xFFFD, 0x2007, 0x000B, 0x018D, 0xFFEF, 0xFFB2, 0xFFF9, 0x2007, 0x0003, 0xFF11, 0xFFC0, 0xFF9E, 0xFFFC, 0x3807, 0x0006, 0xFF4E, 0xFF86, 0x0000, 0x0000,
};
