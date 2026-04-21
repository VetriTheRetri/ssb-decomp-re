/* AnimJoint data for relocData file 580 (FTMarioAnimCliffAttackQuick1) */
/* 1424 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCliffAttackQuick1_joint1[38];
extern u16 dFTMarioAnimCliffAttackQuick1_joint2[54];
extern u16 dFTMarioAnimCliffAttackQuick1_joint3[62];
extern u16 dFTMarioAnimCliffAttackQuick1_joint5[54];
extern u16 dFTMarioAnimCliffAttackQuick1_joint6[48];
extern u16 dFTMarioAnimCliffAttackQuick1_joint7[16];
extern u16 dFTMarioAnimCliffAttackQuick1_joint8[22];
extern u16 dFTMarioAnimCliffAttackQuick1_joint9[30];
extern u16 dFTMarioAnimCliffAttackQuick1_joint11[32];
extern u16 dFTMarioAnimCliffAttackQuick1_joint12[46];
extern u16 dFTMarioAnimCliffAttackQuick1_joint13[16];
extern u16 dFTMarioAnimCliffAttackQuick1_joint14[26];
extern u16 dFTMarioAnimCliffAttackQuick1_joint16[10];
extern u16 dFTMarioAnimCliffAttackQuick1_joint17[38];
extern u16 dFTMarioAnimCliffAttackQuick1_joint19[26];
extern u16 dFTMarioAnimCliffAttackQuick1_joint21[34];
extern u16 dFTMarioAnimCliffAttackQuick1_joint22[46];
extern u16 dFTMarioAnimCliffAttackQuick1_joint24[26];
extern u16 dFTMarioAnimCliffAttackQuick1_joint25[38];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimCliffAttackQuick1_joints[] = {
	(u32)dFTMarioAnimCliffAttackQuick1_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimCliffAttackQuick1_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimCliffAttackQuick1_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimCliffAttackQuick1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimCliffAttackQuick1_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimCliffAttackQuick1_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimCliffAttackQuick1_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimCliffAttackQuick1_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimCliffAttackQuick1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimCliffAttackQuick1_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimCliffAttackQuick1_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimCliffAttackQuick1_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimCliffAttackQuick1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimCliffAttackQuick1_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimCliffAttackQuick1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimCliffAttackQuick1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimCliffAttackQuick1_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimCliffAttackQuick1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTMarioAnimCliffAttackQuick1_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimCliffAttackQuick1_joint1[38] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -931, 449, -182, -406,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -254, 1200, -545, -656,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -181, 1040, -592, 260,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 5, 726, -480, 879,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), 0, 1352,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimCliffAttackQuick1_joint2[54] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ), -80, 0, -77,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 218, 582,
	ftAnimSetValBlock(FT_ANIM_SCAY), 4095,
	ftAnimSetValT(FT_ANIM_SCAY, 4), 4095,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 691, 0, 417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX, 1), 0, 343, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1637, 272,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY, 1), 0, 0, 650, -817, 182, -196, 3276, -510,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTMarioAnimCliffAttackQuick1_joint3[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_TRAY), 0, -31, 600, -208,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 0, -42,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 15,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 19), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 15,
	ftAnimSetValRateT(FT_ANIM_TRAY, 19), 0, -109,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -69, -804, -201, 0, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -277, -92, -275, -91,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 0, -7, 0, -17, 0, 16,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), -804,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimCliffAttackQuick1_joint5[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 178, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 357, -36,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 36), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 7,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -1, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -253, 61, -9, -6, -4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 604, 286, -24, -4, -10, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimCliffAttackQuick1_joint6[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1037, -256, -116, -42, -1411, 300,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1177, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 780, -94, -159, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 848, 212, -378, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1205, 186, -273, 231, -1645, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1220, 28, 85, -13, -1409, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1262, 42, -300, -385, -1679, -269,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimCliffAttackQuick1_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimCliffAttackQuick1_joint8[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 4,
	ftAnimSetValRate(FT_ANIM_ROTX), -553, 4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -625, -1, 0, 0, 0, 0,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTMarioAnimCliffAttackQuick1_joint9[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 288,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 44), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 15,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -641, 170, -1, 0, 19, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 565, 172, -2, 0, 86, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimCliffAttackQuick1_joint11[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -18,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 44), 0, 0, 54, 0, -17, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 15,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -18, -9, 8, 5, -17, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -182, -7, 113, 4, -172, -6,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimCliffAttackQuick1_joint12[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1141, -9, 182, 174, -1583, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1258, -169, -1782, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 357, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 373, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1489, 24, 482, 318, -2076, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1208, 80, 1011, -75, -1414, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1328, -119, 331, -679, -1869, -455,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimCliffAttackQuick1_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimCliffAttackQuick1_joint14[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1437, -77, -79, 20, 48, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 958, -110, 382, -1, 18, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 557, -85, -95, -118, 77, 39,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimCliffAttackQuick1_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimCliffAttackQuick1_joint17[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 391, 25, -84, 26, -8, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 357, -112, -251, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -36, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 148, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 189, -141, 267, 67, -417, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 74, -114, 283, 16, -439, -22,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimCliffAttackQuick1_joint19[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 924, 335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1147, 222,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimCliffAttackQuick1_joint21[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -735, 88, -309, 18, 777, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -249, 68, 256, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -569, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -625, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -537, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -334, 202, -151, 97, -14, -271,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimCliffAttackQuick1_joint22[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 39, -33, -6, 55, -2, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -17, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, 260, -84, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 513, 175, 179, 139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 28, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 193, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 32, -26, -168, -356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -71, -103, 44, 16, -519, -351,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimCliffAttackQuick1_joint24[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 610, 546,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, 489,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTMarioAnimCliffAttackQuick1_joint25[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1419, -12, -1864, 44, 2152, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1570, 108, 1888, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1432, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1160, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1183, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1543, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1485, 57, -1467, 103, 1649, -239,
	ftAnimEnd(),
};
