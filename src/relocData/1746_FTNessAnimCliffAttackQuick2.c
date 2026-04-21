/* AnimJoint data for relocData file 1746 (FTNessAnimCliffAttackQuick2) */
/* 4224 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCliffAttackQuick2_joint1[26];
extern u16 dFTNessAnimCliffAttackQuick2_joint2[104];
extern u16 dFTNessAnimCliffAttackQuick2_joint3[76];
extern u16 dFTNessAnimCliffAttackQuick2_joint5[64];
extern u16 dFTNessAnimCliffAttackQuick2_joint6[198];
extern u16 dFTNessAnimCliffAttackQuick2_joint7[78];
extern u16 dFTNessAnimCliffAttackQuick2_joint8[28];
extern u16 dFTNessAnimCliffAttackQuick2_joint9[62];
extern u16 dFTNessAnimCliffAttackQuick2_joint11[52];
extern u16 dFTNessAnimCliffAttackQuick2_joint12[180];
extern u16 dFTNessAnimCliffAttackQuick2_joint13[86];
extern u16 dFTNessAnimCliffAttackQuick2_joint14[64];
extern u16 dFTNessAnimCliffAttackQuick2_joint16[10];
extern u16 dFTNessAnimCliffAttackQuick2_joint17[176];
extern u16 dFTNessAnimCliffAttackQuick2_joint19[114];
extern u16 dFTNessAnimCliffAttackQuick2_joint20[172];
extern u16 dFTNessAnimCliffAttackQuick2_joint22[92];
extern u16 dFTNessAnimCliffAttackQuick2_joint23[150];
extern u16 dFTNessAnimCliffAttackQuick2_joint25[114];
extern u16 dFTNessAnimCliffAttackQuick2_joint26[148];
extern u16 dFTNessAnimCliffAttackQuick2_joint27[64];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimCliffAttackQuick2_joints[] = {
	(u32)dFTNessAnimCliffAttackQuick2_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimCliffAttackQuick2_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimCliffAttackQuick2_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimCliffAttackQuick2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimCliffAttackQuick2_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimCliffAttackQuick2_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimCliffAttackQuick2_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimCliffAttackQuick2_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimCliffAttackQuick2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimCliffAttackQuick2_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimCliffAttackQuick2_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimCliffAttackQuick2_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimCliffAttackQuick2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimCliffAttackQuick2_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimCliffAttackQuick2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimCliffAttackQuick2_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimCliffAttackQuick2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimCliffAttackQuick2_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimCliffAttackQuick2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimCliffAttackQuick2_joint26, /* [25] joint 26 */
	(u32)dFTNessAnimCliffAttackQuick2_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimCliffAttackQuick2_joint1[26] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 475, 0, 1352,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), 703, 449,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 421,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 0, -120, 1348, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), -60, 1348,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimCliffAttackQuick2_joint2[104] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 4,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 24), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 4,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY), 1637, -1, 0, 0, 650, -817, 182, 0, 3276, -546,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY, 2), 1637, 79, 0, 0, 293, 0, -73, 0, 3276, 546,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 18), 0, 0, 0, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAY, 4), 1943, 74, 601, 0, 4915, 163,
	ftAnimSetValRateT(FT_ANIM_TRAY, 14), 540, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 3216, 65,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 6), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 26), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0, -7, 540, 25, 0, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 223,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), -16, -4, 597, 4, -28, -11,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 3216, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTNessAnimCliffAttackQuick2_joint3[76] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 0, -7, 0, 0, 0, 16,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -277, -92, -804, 0, -275, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -277, 46, -804, 0, -275, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, -805, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 7, -3, -804, 0, 10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -71, 0, -790, 6, -95, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 14), 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 28, -1, -360, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -26, -62, 56,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimCliffAttackQuick2_joint5[64] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 29), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 5,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 604, 286, -24, -4, -10, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 604, -57, -24, 0, -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -84, -17, -29, 12, -12, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 208, 39, 258, 24, 110, 10,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 14), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 511, -14, 330, -18, 150, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimCliffAttackQuick2_joint6[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -347, 13, -1293, -31, -72, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -219, 347, -1402, 45, -256, -449,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 361, 471, -1234, 197, -961, -446,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 907, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1007, 135, -1150, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -964, 11, -1328, -80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1305, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -863, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 866, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 894, -101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1331, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1368, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 724, 305, -1205, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1505, 218, -770, 71, -1986, -216,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -442, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1161, -197, -1638, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1108, 11, -1561, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1135, 46, -1561, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1285, -91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1617, 85,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -444, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -600, -70,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1177, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 944, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -697, -181, -1519, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1388, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1454, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1228, 232, -1741, -242,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1543, 12, -2058, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1447, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1343, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1530, -38, -1940, 159,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1194, -21, -1223, 52,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1352, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1356, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1198, 3, -1347, 9, -1192, 30,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimCliffAttackQuick2_joint7[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -437, -442,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -884, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -102, 432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -108, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -126, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -508, -394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -798, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -405, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -192, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -50, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -221, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -470, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -3,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimCliffAttackQuick2_joint8[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 4,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -553, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -625, 12, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTNessAnimCliffAttackQuick2_joint9[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 288,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 0, 0, 288, 2, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 5,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 565, 172, -2, 0, 86, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 565, -53, -2, 0, 86, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -78, -16, -3, 0, 146, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 201, 2, -4, 14, 176, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -10, 0, 364, -3, -32, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 300, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimCliffAttackQuick2_joint11[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -18, -5, 8, 2, -17, -5, 0, 0, 54, 0, -17, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -182, -7, 113, 4, -172, -6,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 0, 0, 54, -10, -17, 3,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 5,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -221, 7, 139, -4, -209, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimCliffAttackQuick2_joint12[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 290, 10, 1308, 142, -244, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 208, -73, 1462, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -266, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 116, -37, 1384, -49, -642, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1353, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 539, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -518, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -92, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 57, 136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 121, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1374, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1459, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 618, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 456, -29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1440, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1178, -39,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 435, -64, 80, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 92, -5, -338, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1129, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 954, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 123, -386, -297, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -679, -583, 1149, 196, -1109, -469,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1337, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1042, -487, -1236, -164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1591, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1655, -382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1807, -100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1970, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1598, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1711, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1249, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1042, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2010, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2024, -14, 1038, -3, -1727, -15,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimCliffAttackQuick2_joint13[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -493, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -165, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, -464,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -928, -568,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1232, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1038, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -757, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -705, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -710, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNessAnimCliffAttackQuick2_joint14[64] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 958, -110, 382, -1, 18, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 557, -135, -95, -96, 77, 145,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -121, -44, -385, -13, 1185, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -158, 7, -303, 14, 795, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 23, 27, -92, 28, 658, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 118, 5, -20, 14, 314, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 88, 16, 61, 0, 152, -6,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimCliffAttackQuick2_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 38),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimCliffAttackQuick2_joint17[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1517, -16, -1915, -6, -2042, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1820, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1629, -135, -2142, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1790, -51, -2395, -138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1597, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1838, 77, -2418, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1666, 68, -1841, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1702, -37, -1998, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1593, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1514, 85, -1920, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1305, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1593, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1583, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1613, -83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1570, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1547, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1302, -2, -1559, 15, -1681, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1508, -147,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1319, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1632, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1472, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1730, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1651, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1804, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1280, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1204, -39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1913, -156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1999, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1900, -63, -1246, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1951, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1317, -14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1976, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1921, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1966, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1974, -7, -1328, -10, -1906, 15,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimCliffAttackQuick2_joint19[114] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 1139, 23,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1274, 130,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 6144, 6144, 6144,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1409, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1253, -535,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 337, -331,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 589, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 492, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 181, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -86,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 26), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 281, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 375, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 64, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 651, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 783, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 625, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 584, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 416, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimCliffAttackQuick2_joint20[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -379, 132, -151, 37, -13, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -242, 17, 347, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -246, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -329, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -325, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -176, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -184, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 96, 75, -187, 24, 660, 141,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -312, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -32, -92, 629, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -87, -49, 613, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -76, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 73, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 119, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 186, -72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -299, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -260, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 46, -119, -132, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -17, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -145, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -146, -25, -237, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -89, 142, 222, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -141, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 0, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 81, 129, 217, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 127, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 128, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 19, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -13, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 149, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 47, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 114, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 18, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -12, 12, -35, 26, 39,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimCliffAttackQuick2_joint22[92] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 72, 29, 14, 2, -186, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 195, -3, 37, 5, -100, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, -134, 41, 2, -93, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -73, -75, 42, 0, -132, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -169, -1, 40, -2, -203, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -78, 6, 33, -1, -129, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -93, 18, 26, 31, -66, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 179, -4, 470, 23, 242, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -130, -32, 234, -26, 68, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -177, 7, 178, -26, -41, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -66, 2, 0, -3, 0, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimCliffAttackQuick2_joint23[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -84, -12, 19, -6, -677, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 26, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -75, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -678, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -697, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -43, -10, -1090, -115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 67, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -928, 433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 11, 38, -222, 306,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 61, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -315, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -131, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 71, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 193, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -51, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 4, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 62, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3, -49,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -269, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -31, -31, -384, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 46, 101, -275, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 164, 76, 210, -3, -84, 155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -50, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 135, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -52, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -61, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -126, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -58, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -210, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, -1, 136, 0, -210, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimCliffAttackQuick2_joint25[114] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 1164, 15,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1243, 131,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 6144, 6144, 6144,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1428, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1280, -505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 417, -352,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 575, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 491, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 179, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -86,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 26), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 486, 342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 815, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 846, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 438, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 479, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 632, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 624, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 421, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimCliffAttackQuick2_joint26[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 83, -17, -138, -20, 89, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -58, -88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -145, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 196, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 358, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -146, -73, 548, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -8, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -128, -98,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -172, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -20, 63,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 211, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 108, -60, -221, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -251, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 42, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 13, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 209, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -218, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -397, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 44, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 27, -84,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 145, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 75, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -56, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 27, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -357, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -198, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 29, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 28, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, 0, 25, -3, -202, -4,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTNessAnimCliffAttackQuick2_joint27[64] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -9, 20, -1, 28, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -73, -8, 25, -1, -17, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -40, 7, 5, 2, -55, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 5, 30, 46, 9, -10, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 230, 28, 91, 12, 13, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 261, -12, 161, -6, -89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 56, -3, 0, -2, 0, 1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
