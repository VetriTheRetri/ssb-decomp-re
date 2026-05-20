/* AnimJoint data for relocData file 750 (FTFoxAnimFireFlowerShoot) */
/* 2912 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimFireFlowerShoot_joint1[34];
extern u16 dFTFoxAnimFireFlowerShoot_joint2[36];
extern u16 dFTFoxAnimFireFlowerShoot_joint4[38];
extern u16 dFTFoxAnimFireFlowerShoot_joint5[154];
extern u16 dFTFoxAnimFireFlowerShoot_joint6[72];
extern u16 dFTFoxAnimFireFlowerShoot_joint7[10];
extern u16 dFTFoxAnimFireFlowerShoot_joint8[40];
extern u16 dFTFoxAnimFireFlowerShoot_joint10[10];
extern u16 dFTFoxAnimFireFlowerShoot_joint11[144];
extern u16 dFTFoxAnimFireFlowerShoot_joint12[76];
extern u16 dFTFoxAnimFireFlowerShoot_joint13[72];
extern u16 dFTFoxAnimFireFlowerShoot_joint15[10];
extern u16 dFTFoxAnimFireFlowerShoot_joint16[110];
extern u16 dFTFoxAnimFireFlowerShoot_joint18[54];
extern u16 dFTFoxAnimFireFlowerShoot_joint20[78];
extern u16 dFTFoxAnimFireFlowerShoot_joint21[140];
extern u16 dFTFoxAnimFireFlowerShoot_joint23[74];
extern u16 dFTFoxAnimFireFlowerShoot_joint24[138];
extern u16 dFTFoxAnimFireFlowerShoot_joint25[50];
extern u16 dFTFoxAnimFireFlowerShoot_joint26[64];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimFireFlowerShoot_joints[] = {
	(AObjEvent32 *)dFTFoxAnimFireFlowerShoot_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimFireFlowerShoot_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimFireFlowerShoot_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimFireFlowerShoot_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimFireFlowerShoot_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimFireFlowerShoot_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimFireFlowerShoot_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimFireFlowerShoot_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimFireFlowerShoot_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimFireFlowerShoot_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimFireFlowerShoot_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimFireFlowerShoot_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimFireFlowerShoot_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimFireFlowerShoot_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimFireFlowerShoot_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimFireFlowerShoot_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimFireFlowerShoot_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimFireFlowerShoot_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimFireFlowerShoot_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimFireFlowerShoot_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimFireFlowerShoot_joint1[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 720, 120,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 720,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 14), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -360,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 780, 85,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimFireFlowerShoot_joint2[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -268, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -178, -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -141, -338, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimFireFlowerShoot_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, 268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 178, 268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -178, -178, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 178, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimFireFlowerShoot_joint5[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, 364, -1442, 73, -1349, -193,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2055, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1369, -260, -1543, -518,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1963, -297, -2387, -422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2055, 0, -1963, 0, -2387, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -1963, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 2055,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -2387,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1963, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -2387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2055, -338, -1963, 229, -2387, 197,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 761, -341,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1301, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1504, 667,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -628, 402,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1099, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 696, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1240, 491, -1595, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1680, 343, -1221, -136, -1797, -230,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1913, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1372, -52, -2055, -101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1938, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1325, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1398, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1882, -38, -1864, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1354, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1502, -7,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1422, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1437, -9, -1350, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, -4, -1442, -5, -1349, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimFireFlowerShoot_joint6[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -540,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1099, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, 374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -350, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -880, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 436,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -443, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -394, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -89, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -303, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -564, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimFireFlowerShoot_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimFireFlowerShoot_joint8[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -89, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -89, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 178, 357,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 89, -16, -44, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimFireFlowerShoot_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimFireFlowerShoot_joint11[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, -273, 271, -280, 336, -288,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -229, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -140, -65, 48, -667,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2, 70, -997, -520,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -229, 0, -992, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -229, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -992,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -992, 31,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 0, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 258, -158, 202, -929, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 517, 146, 176, 137, -1332, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 434, -98, 116, -55, -1232, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 47, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -9, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1143, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1249, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1130, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 22, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 247, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1086, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -185, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -43, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 139, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 304, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, -6, 271, 24, 336, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTFoxAnimFireFlowerShoot_joint12[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -424,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1019, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 506,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -624, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -526, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -794, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -680, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 196,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -155, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -366, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -650, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 55,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimFireFlowerShoot_joint13[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 4, 227, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 4, 227, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 35, 1, -53, -168, 31, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 47, -109, -23, 209, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, 16, -125, -17, 196, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 71, -20, -178, 8, 26, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 58, -4, -71, 16, -32, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 35, -5, -44, 7, 281, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimFireFlowerShoot_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimFireFlowerShoot_joint16[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1202, 97, -1385, 67, 1581, -183,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 3), 1430,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 8), -1330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1239, -79,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1239,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1239, -34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1430,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1430, 36,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1330,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1304, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1502, 9, 1171, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1438, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1289, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1283, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1547, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1440, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1290, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1309, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1383, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1554, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1581, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1278, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1204, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, -1, -1385, -1, 1581, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTFoxAnimFireFlowerShoot_joint18[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 311,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 873, 103,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 873,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 873,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 873, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 734, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 375, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 650, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 710, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 540, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 359, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimFireFlowerShoot_joint20[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, -20, 1482, 6, 1552, -193,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 1620, 15, 1517, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1209, -74,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1209,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 1209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1209, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1813, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1622, -21, 1503, 4, 1707, -150,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1523, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1653, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1308, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1321, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1548, 6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1515, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1483, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, 1, 1482, -1, 1552, 3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimFireFlowerShoot_joint21[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1253, -35, -1746, -87, 1743, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1802, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1248, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1782, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1960, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1960, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1960, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1960, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1802, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1802, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1248, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1248, -46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1960, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1638, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1341, -43, -1852, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1798, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1278, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1687, 86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2122, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1826, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1770, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2116, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1902, -76,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1279, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1256, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1768, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1747, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1842, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1749, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1253, 3, -1746, 1, 1743, -6,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimFireFlowerShoot_joint23[74] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 78,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 410, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 158, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 158, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 158, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 158, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 158, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 634, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 789, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 304, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -152,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 242, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 288, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 327, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimFireFlowerShoot_joint24[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1624, 146, 1711, -56, 1381, -123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1893, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1595, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1258, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1299, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1299, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1893, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1893, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1893, -53, 1299, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1635, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1628, 29, 1094, -107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1669, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1084, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1249, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1680, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1871, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1418, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1472, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1859, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1651, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1481, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1413, -47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1673, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1708, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1388, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1380, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1631, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, -7, 1711, 2, 1381, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimFireFlowerShoot_joint25[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 219,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -96,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, -61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -536, -29, 357, 10,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 18), 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -178, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 357, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 268, -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimFireFlowerShoot_joint26[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -178, -122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 64, -450,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 0, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 357, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -357, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -178, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 536, -59, 0, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -357, -78,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -89, 67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 178, -8, 0, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -178, -122,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
