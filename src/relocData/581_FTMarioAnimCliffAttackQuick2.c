/* AnimJoint data for relocData file 581 (FTMarioAnimCliffAttackQuick2) */
/* 3648 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCliffAttackQuick2_joint1[24];
extern u16 dFTMarioAnimCliffAttackQuick2_joint2[92];
extern u16 dFTMarioAnimCliffAttackQuick2_joint3[78];
extern u16 dFTMarioAnimCliffAttackQuick2_joint5[64];
extern u16 dFTMarioAnimCliffAttackQuick2_joint6[216];
extern u16 dFTMarioAnimCliffAttackQuick2_joint7[74];
extern u16 dFTMarioAnimCliffAttackQuick2_joint8[32];
extern u16 dFTMarioAnimCliffAttackQuick2_joint9[52];
extern u16 dFTMarioAnimCliffAttackQuick2_joint11[50];
extern u16 dFTMarioAnimCliffAttackQuick2_joint12[178];
extern u16 dFTMarioAnimCliffAttackQuick2_joint13[30];
extern u16 dFTMarioAnimCliffAttackQuick2_joint14[42];
extern u16 dFTMarioAnimCliffAttackQuick2_joint16[10];
extern u16 dFTMarioAnimCliffAttackQuick2_joint17[134];
extern u16 dFTMarioAnimCliffAttackQuick2_joint19[106];
extern u16 dFTMarioAnimCliffAttackQuick2_joint21[154];
extern u16 dFTMarioAnimCliffAttackQuick2_joint22[174];
extern u16 dFTMarioAnimCliffAttackQuick2_joint24[264];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimCliffAttackQuick2_joints[] = {
	(u32)dFTMarioAnimCliffAttackQuick2_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimCliffAttackQuick2_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimCliffAttackQuick2_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimCliffAttackQuick2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimCliffAttackQuick2_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimCliffAttackQuick2_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimCliffAttackQuick2_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimCliffAttackQuick2_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimCliffAttackQuick2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimCliffAttackQuick2_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimCliffAttackQuick2_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimCliffAttackQuick2_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimCliffAttackQuick2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimCliffAttackQuick2_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimCliffAttackQuick2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimCliffAttackQuick2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimCliffAttackQuick2_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimCliffAttackQuick2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0348, /* [24] END */
};

/* Joint 1 */
u16 dFTMarioAnimCliffAttackQuick2_joint1[24] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1352,
	ftAnimSetValBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValT(FT_ANIM_TRAY, 55), 5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 703, 449,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 18), 1348, 161,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 14), 1348, -255,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimCliffAttackQuick2_joint2[92] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 4,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY), 1637, 272, 0, 0, 650, -817, 182, -196, 3276, -510,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY, 2), 1637, 51, 0, 0, 293, 484, -73, -362, 3276, 561,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY, 4), 1943, 71, 0, 0, 1014, 109, -88, 32, 4915, 169,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 0, 540, -210, 0, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 3216, 39,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 6), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 26), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 223, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 540, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 540, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 3216, 223,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTMarioAnimCliffAttackQuick2_joint3[78] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 0, -109,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 0, -7, 0, -17, 0, 16,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -277, -92, -804, 0, -275, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -277, 46, -804, 0, -275, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 28, -805, 0, 0, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 7, -3, -804, 0, 10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -71, -3, -790, 0, -95, -4,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), -71, -790,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -95, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -26, -62, 56,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 7, 0, 17, 0, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimCliffAttackQuick2_joint5[64] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 36), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 604, 286, -24, -4, -10, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 604, -57, -24, 0, -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -84, -17, -29, 12, -12, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 208, 39, 258, 24, 110, 10,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 14), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 511, 330, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 208, -10, 258, -2, 110, -1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimCliffAttackQuick2_joint6[216] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1262, 7, -300, 97, -1679, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1586, 655,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -203, -20, -1667, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -341, 20, -2264, -470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2580, 655, -162, -124, -2607, -375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2897, 58, -591, -219, -3015, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2697, -118, -601, -17, -2840, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2747, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -626, -15, -2802, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2917, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -715, -57,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2782, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2824, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2817, -228, -2917, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2367, -597, -766, -5, -2476, 593,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -278, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1622, -439, -1731, 443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1489, -67, -1588, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1488, 7, -1570, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1715, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1713, 35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -203, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -84, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1746, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2117, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1764, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2047, 48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -97, 36, -2130, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2373, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 41, -210,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2094, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3048, 117,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2339, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2977, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -246, -183,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -304, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3138, 88, -3129, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3225, 111, -305, 7, -3283, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3360, 135, -290, 15, -3513, -230,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimCliffAttackQuick2_joint7[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -601,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1202, -538,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1077, 578,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -45, 465,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -147, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -118, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -61, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -813, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1104, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -736, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -495, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -129, 366,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimCliffAttackQuick2_joint8[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 4,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -553, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -625, -1, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -625, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTMarioAnimCliffAttackQuick2_joint9[52] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 288,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 44), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 20,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 565, 172, -2, 0, 86, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 565, -53, -2, 0, 86, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -78, -16, -3, 0, 146, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 201, 10, -4, 0, 176, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 14), 201, -4, 176, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimCliffAttackQuick2_joint11[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -18,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 44), 0, 0, 54, 0, -17, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 20,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -18, -9, 8, 5, -17, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -182, -7, 113, 4, -172, -6,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -221, -1, 139, 0, -209, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), -221, 139, -209, 0, 54, -17,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimCliffAttackQuick2_joint12[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1330, -32, 334, 3, -1874, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1943, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1366, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 216, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 117, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 160, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1973, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1587, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1349, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -836, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 124, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 154, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1463, 120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1424, -48,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 146, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 388, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -885, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1270, -110,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1472, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1905, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1379, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1582, -33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1924, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2013, 92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1574, 68, 400, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 445, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1153, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1841, 163,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1566, -113,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 603, 138,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1051, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1285, 257, -1710, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -639, 199, -1065, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -887, -156, -1305, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1027, -107, -1418, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1167, -140, 1065, 13, -1542, -123,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimCliffAttackQuick2_joint13[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -321, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -499, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -788, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimCliffAttackQuick2_joint14[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 958, -110, 382, -1, 18, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 557, -85, -95, -118, 77, 39,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 273, 3, -562, 4, 333, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 625, 11, 0, 18, 0, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 625, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimCliffAttackQuick2_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 38),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimCliffAttackQuick2_joint17[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 83, -24, 281, 0, -422, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 173, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -9, -100, -520, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -133, -54, -758, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -117, 142, -803, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 151, 101, -226, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 85, -22, -397, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 105, 14, -323, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 7, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 89, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 152, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -211, 17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 17, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 69, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 88, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -117, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 111, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -206, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -109, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 18, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 47, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -239, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -161, 38,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -191, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -222, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, 26, -230, -7, 45, -2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimCliffAttackQuick2_joint19[106] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 1128, 32,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1269, 126,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 6144, 6144, 6144,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1400, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1254, -534,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, -334,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 586, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 488, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 180, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -86,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 26), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 400, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 713, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 447, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -46,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimCliffAttackQuick2_joint21[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -335, 94, -151, 28, -14, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -124, 29, -92, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -241, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -296, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -11, -119,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -92, -10, -137, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -214, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 33, 402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -247, -157, 668, 299,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -253, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 631, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -128, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -234, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -71, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -204, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 135, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 113, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -180, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -172, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -240, -106,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -202, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -193, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -11, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 129, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -369, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -398, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -388, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -205, 70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 124, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 22, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, -19, -11, -33, -156, 49,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimCliffAttackQuick2_joint22[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -72, -12, 42, 0, -534, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -76, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 29, -46, -689, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, -10, -1091, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 68, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -929, 435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 14, 40, -221, 306,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 49, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -316, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 72, 3, -255, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 29, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 178, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 65, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -30, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 21, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 4, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -269, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -284, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -58, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 148, -81,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 193, 4, -99, 159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 27, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 251, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 37, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 43, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 45, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 160, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 57, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 163, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 248, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 199, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 169, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 54, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 37, 187, -12, 35, -18,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimCliffAttackQuick2_joint24[264] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 1086, -2,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1080, 81,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 6144, 6144, 6144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1246, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1284, -507,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 415, -356,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 570, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 486, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 179, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -86,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 26), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 486, 339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 815, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 438, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 473, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 528, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 486, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 313, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 290, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 421, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 16,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFA38, 0x0000, 0xFA44, 0x0011, 0x0679, 0xFFFD, 0x2805, 0x000A, 0xFA49, 0x0018, 0x200B, 0x0005, 0xF9A2, 0xFFA7, 0x07B5, 0x00AF, 0x200B, 0x0001, 0xF944, 0xFFBA, 0x086D, 0x004B, 0x2803, 0x0008, 0xF9E2, 0x0035, 0x2009, 0x0002, 0x083C, 0xFFEC, 0x2009, 0x0001, 0x0823, 0xFFE1, 0x2809, 0x000A, 0x0520, 0xFFC0, 0x0801, 0x0001, 0x2005, 0x0001, 0xFA64, 0x001A, 0x2805, 0x000D, 0xF9CC, 0xFFC3, 0x0801, 0x0003, 0x2003, 0x0001, 0xFA22, 0x004C, 0x2003, 0x0002, 0xFAEE, 0x0003, 0x2003, 0x0001, 0xFA82, 0xFFC2, 0x2803, 0x0003, 0xFA30, 0xFFC4, 0x0801, 0x0001, 0x2009, 0x0001, 0x04E9, 0xFFE2, 0x2809, 0x0005, 0x055C, 0xFFE4, 0x0801, 0x0001, 0x2003, 0x0001, 0xF9EF, 0xFFE2, 0x2803, 0x0006, 0xFAD6, 0xFFFC, 0x0801, 0x0002, 0x2005, 0x0001, 0xF990, 0xFFC5, 0x2805, 0x0009, 0xF952, 0x0004, 0x2009, 0x0001, 0x0534, 0xFFDE, 0x2809, 0x000A, 0x056B, 0x0002, 0x0801, 0x0002, 0x2003, 0x0001, 0xFAC8, 0xFFF2, 0x2803, 0x0008, 0xFA40, 0xFFD7, 0x0801, 0x0005, 0x2005, 0x0001, 0xF95B, 0x0017, 0x2805, 0x0002, 0xF9B2, 0x0025, 0x0801, 0x0001, 0x2009, 0x0001, 0x056D, 0x0001, 0x200F, 0x0001, 0xFA20, 0xFFE1, 0xF9CC, 0x001A, 0x056D, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
