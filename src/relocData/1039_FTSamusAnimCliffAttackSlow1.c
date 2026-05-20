/* AnimJoint data for relocData file 1039 (FTSamusAnimCliffAttackSlow1) */
/* 1024 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCliffAttackSlow1_joint1[16];
extern u16 dFTSamusAnimCliffAttackSlow1_joint2[24];
extern u16 dFTSamusAnimCliffAttackSlow1_joint3[16];
extern u16 dFTSamusAnimCliffAttackSlow1_joint5[26];
extern u16 dFTSamusAnimCliffAttackSlow1_joint6[46];
extern u16 dFTSamusAnimCliffAttackSlow1_joint7[16];
extern u16 dFTSamusAnimCliffAttackSlow1_joint8[24];
extern u16 dFTSamusAnimCliffAttackSlow1_joint9[10];
extern u16 dFTSamusAnimCliffAttackSlow1_joint12[14];
extern u16 dFTSamusAnimCliffAttackSlow1_joint13[40];
extern u16 dFTSamusAnimCliffAttackSlow1_joint15[28];
extern u16 dFTSamusAnimCliffAttackSlow1_joint16[38];
extern u16 dFTSamusAnimCliffAttackSlow1_joint18[24];
extern u16 dFTSamusAnimCliffAttackSlow1_joint20[34];
extern u16 dFTSamusAnimCliffAttackSlow1_joint21[52];
extern u16 dFTSamusAnimCliffAttackSlow1_joint23[16];
extern u16 dFTSamusAnimCliffAttackSlow1_joint24[40];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTSamusAnimCliffAttackSlow1_joints[] = {
	(AObjEvent32 *)dFTSamusAnimCliffAttackSlow1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimCliffAttackSlow1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimCliffAttackSlow1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTSamusAnimCliffAttackSlow1_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffAttackSlow1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimCliffAttackSlow1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimCliffAttackSlow1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimCliffAttackSlow1_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimCliffAttackSlow1_joint12, /* [9] joint 12 */
	NULL, /* [10] NULL */
	NULL, /* [11] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffAttackSlow1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTSamusAnimCliffAttackSlow1_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffAttackSlow1_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTSamusAnimCliffAttackSlow1_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffAttackSlow1_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffAttackSlow1_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTSamusAnimCliffAttackSlow1_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffAttackSlow1_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTSamusAnimCliffAttackSlow1_joint1[16] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1358, 552, -303, 26,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0, 155, 0, 195,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimCliffAttackSlow1_joint2[24] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 13, 1588, -12, 244, -19,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 77, 35, 203, -58,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 9), 979, -179,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -189,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 949, -58,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimCliffAttackSlow1_joint3[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, 10, 0, 5, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 339, 15, 347, 18, 148, 6,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimCliffAttackSlow1_joint5[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 134, 0, 0, 0, 0, 0, 0, 0, 54, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 37, -6, 3, 0, 15, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 10), 33, -5,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimCliffAttackSlow1_joint6[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1603, 0, -1538, 56, 1491, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1107, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1709, -129, 1884, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1847, -126, 2039, 136,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2098, -49, 2259, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1144, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1243, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2141, -42, -1283, -40, 2266, 6,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimCliffAttackSlow1_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -947, -53,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1164, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1147, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimCliffAttackSlow1_joint8[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 819, -12, -1, -2, 66, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 8, -64, 8, 0, 8, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 173, 20, 6, 0, 1, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimCliffAttackSlow1_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimCliffAttackSlow1_joint12[14] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -3, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -339, -15, 0, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimCliffAttackSlow1_joint13[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1664, 17, 1569, -16, 1526, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1425, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1512, -114, 1525, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1383, -90, 1362, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1331, -44, 1425, 0, 1372, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1293, -37, 1425, 0, 1376, 4,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimCliffAttackSlow1_joint15[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -935, 15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -612, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -374, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimCliffAttackSlow1_joint16[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -125, 13, -50, -20, -8, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 67, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 70, 1, -343, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 73, 5, -405, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 82, 9, -451, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 84, 17, 93, 11, -480, -28,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimCliffAttackSlow1_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 166, 216,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 889, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 935, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 972, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 959, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimCliffAttackSlow1_joint20[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1580, 17, 1560, 0, 1827, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1590, 3, 1698, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1646, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1675, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1650, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1647, 3, 1593, 2, 1687, -10,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimCliffAttackSlow1_joint21[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1667, 15, 1558, -22, -1608, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1714, -130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1159, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1574, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1635, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2419, -142,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1551, -153,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1330, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1221, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1301, -29, 1265, 44, -2531, -111,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimCliffAttackSlow1_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 359, 90,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1203, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1212, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimCliffAttackSlow1_joint24[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, -5, -33, -2, 93, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -34, 2, -363, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -11, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -18, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 17, 36, -32, 2, -379, -15,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
