/* AnimJoint data for relocData file 1040 (FTSamusAnimCliffAttackSlow2) */
/* 1872 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCliffAttackSlow2_joint1[18];
extern u16 dFTSamusAnimCliffAttackSlow2_joint2[72];
extern u16 dFTSamusAnimCliffAttackSlow2_joint3[30];
extern u16 dFTSamusAnimCliffAttackSlow2_joint5[40];
extern u16 dFTSamusAnimCliffAttackSlow2_joint6[114];
extern u16 dFTSamusAnimCliffAttackSlow2_joint7[62];
extern u16 dFTSamusAnimCliffAttackSlow2_joint8[30];
extern u16 dFTSamusAnimCliffAttackSlow2_joint9[12];
extern u16 dFTSamusAnimCliffAttackSlow2_joint12[26];
extern u16 dFTSamusAnimCliffAttackSlow2_joint13[80];
extern u16 dFTSamusAnimCliffAttackSlow2_joint15[38];
extern u16 dFTSamusAnimCliffAttackSlow2_joint16[88];
extern u16 dFTSamusAnimCliffAttackSlow2_joint18[32];
extern u16 dFTSamusAnimCliffAttackSlow2_joint20[66];
extern u16 dFTSamusAnimCliffAttackSlow2_joint21[90];
extern u16 dFTSamusAnimCliffAttackSlow2_joint23[32];
extern u16 dFTSamusAnimCliffAttackSlow2_joint24[58];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimCliffAttackSlow2_joints[] = {
	(u32)dFTSamusAnimCliffAttackSlow2_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimCliffAttackSlow2_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimCliffAttackSlow2_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimCliffAttackSlow2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimCliffAttackSlow2_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimCliffAttackSlow2_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimCliffAttackSlow2_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimCliffAttackSlow2_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimCliffAttackSlow2_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimCliffAttackSlow2_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimCliffAttackSlow2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimCliffAttackSlow2_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimCliffAttackSlow2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimCliffAttackSlow2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimCliffAttackSlow2_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimCliffAttackSlow2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTSamusAnimCliffAttackSlow2_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTSamusAnimCliffAttackSlow2_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 195,
	ftAnimSetValBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 40), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 40), 916, 74,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 40), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimCliffAttackSlow2_joint2[72] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 77, 35, 949, -58, 203, -58,
	ftAnimSetValRateT(FT_ANIM_TRAX, 8), 79, -7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 942, 10, 142, -149,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 962, 98,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -206,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 74, 72,
	ftAnimBlock(0, 4),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 6,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), 31, -135,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 30), 1651, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), 0, 172,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 72,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), 58, -33,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 54,
	ftAnimSetValRateT(FT_ANIM_TRAX, 23), 0, -18,
	ftAnimBlock(0, 5),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -33,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 18), 6, -2,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimCliffAttackSlow2_joint3[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 339, 15, 347, 18, 148, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 393, -2, 362, -41, 138, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 294, -13, -268, -12, -232, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimCliffAttackSlow2_joint5[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY), 33, -5,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ), 37, -6, 3, 0, 15, -21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -2, 0, -20, 0, -15, 0, 24, 0, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -268, -25, 41, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimCliffAttackSlow2_joint6[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -532, -33, -324, 30, 658, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -726, -17, -268, -26, 523, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -743, 349, -300, -259, 502, -409,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 768, 396, -1095, -397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -788, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -587, 135,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -339, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 766, -1, -1089, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -916, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 643, -13,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -334, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -291, -8,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -904, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -482, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 625, -35, -318, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 445, 13, -162, 127,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -315, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 458, 12, -26, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 470, 11, 113, 139, -255, 60,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimCliffAttackSlow2_joint7[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1147, 19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1022, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1041, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -759, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -86, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -88, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -362, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -516, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -883, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 119,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimCliffAttackSlow2_joint8[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 173, 20, 6, 0, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 449, 3, 3, 0, 3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 297, 10, 0, 0, 8, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 701, 0, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTSamusAnimCliffAttackSlow2_joint9[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	_FT_ANIM_CMD(11, 0, 1), 10,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimCliffAttackSlow2_joint12[26] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -339, -15, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -317, 58, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 536, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTSamusAnimCliffAttackSlow2_joint13[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1293, -26, 1425, -1, 1376, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1265, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1313, -74, 1510, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1259, -47, 1577, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1805, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 1673, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1293, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1374, -9,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1772, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 1396, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1365, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1633, 8,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1694, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1717, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1638, 4, 1720, 2, 1394, -2,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimCliffAttackSlow2_joint15[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -269, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -417, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -994, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -987, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -598, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimCliffAttackSlow2_joint16[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 84, 14, 93, 11, -480, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -564, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 214, -6, 176, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 191, -45, 162, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -301, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -190, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -256, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -322, -18, -282, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -693, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -5, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -176, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 91, -15,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -665, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -416, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -23, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 72, -18, -38, -15, -321, 95,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimCliffAttackSlow2_joint18[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 959, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 954, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 972, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1185, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1170, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 530, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 364, -165,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimCliffAttackSlow2_joint20[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1647, -3, 1593, 2, 1687, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1834, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 1633, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1636, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1623, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1573, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1553, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1655, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1622, 29, 1863, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 1593, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -1797, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1770, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1692, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1673, 18, 1633, 0, 1591, -1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimCliffAttackSlow2_joint21[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1301, -10, 1265, 24, -2531, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 1407, 47, -2836, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 1262, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1250, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1877, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1477, 83, -2803, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1707, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -1908, 43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1879, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1530, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1687, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1744, 34,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1864, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1605, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1778, 31, 1504, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 1877, 1, 1470, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1877, 0, 1473, 3, -1595, 9,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimCliffAttackSlow2_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1212, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1005, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 969, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 800, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 770, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 323, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimCliffAttackSlow2_joint24[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, 10, -32, 2, -379, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -223, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 178, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 1, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 34, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -241, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -183, 3,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 39, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 118, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 120, 2, 179, 1, -181, 1,
	ftAnimEnd(),
	0x0000, 0x0000,
};
