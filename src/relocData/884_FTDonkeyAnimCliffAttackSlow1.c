/* AnimJoint data for relocData file 884 (FTDonkeyAnimCliffAttackSlow1) */
/* 2944 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCliffAttackSlow1_joint1[44];
extern u16 dFTDonkeyAnimCliffAttackSlow1_joint2[70];
extern u16 dFTDonkeyAnimCliffAttackSlow1_joint3[64];
extern u16 dFTDonkeyAnimCliffAttackSlow1_joint5[64];
extern u16 dFTDonkeyAnimCliffAttackSlow1_joint6[156];
extern u16 dFTDonkeyAnimCliffAttackSlow1_joint7[64];
extern u16 dFTDonkeyAnimCliffAttackSlow1_joint8[46];
extern u16 dFTDonkeyAnimCliffAttackSlow1_joint9[22];
extern u16 dFTDonkeyAnimCliffAttackSlow1_joint11[36];
extern u16 dFTDonkeyAnimCliffAttackSlow1_joint12[174];
extern u16 dFTDonkeyAnimCliffAttackSlow1_joint13[72];
extern u16 dFTDonkeyAnimCliffAttackSlow1_joint14[40];
extern u16 dFTDonkeyAnimCliffAttackSlow1_joint15[8];
extern u16 dFTDonkeyAnimCliffAttackSlow1_joint17[48];
extern u16 dFTDonkeyAnimCliffAttackSlow1_joint18[144];
extern u16 dFTDonkeyAnimCliffAttackSlow1_joint20[44];
extern u16 dFTDonkeyAnimCliffAttackSlow1_joint22[72];
extern u16 dFTDonkeyAnimCliffAttackSlow1_joint23[136];
extern u16 dFTDonkeyAnimCliffAttackSlow1_joint25[116];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimCliffAttackSlow1_joints[] = {
	(u32)dFTDonkeyAnimCliffAttackSlow1_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimCliffAttackSlow1_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimCliffAttackSlow1_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimCliffAttackSlow1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimCliffAttackSlow1_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimCliffAttackSlow1_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimCliffAttackSlow1_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimCliffAttackSlow1_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimCliffAttackSlow1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimCliffAttackSlow1_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimCliffAttackSlow1_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimCliffAttackSlow1_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimCliffAttackSlow1_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimCliffAttackSlow1_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimCliffAttackSlow1_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimCliffAttackSlow1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimCliffAttackSlow1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimCliffAttackSlow1_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimCliffAttackSlow1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF02BE, /* [25] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimCliffAttackSlow1_joint1[44] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 80), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 40,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), -1974, 910,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), -1866, 592,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), -1604, 777,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), -1186, -51,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), -1668, -662,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), -1974, 410,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 12), -795, 789,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 0, 353,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimCliffAttackSlow1_joint2[70] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -475, 1032, -427,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 19), -445, 56,
	ftAnimSetValRateT(FT_ANIM_TRAY, 20), 1032, 7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 18), -671, 67,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 67,
	ftAnimSetValRateT(FT_ANIM_TRAX, 11), -482, 210,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 56,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 20), -6, 216,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 7,
	ftAnimSetValRateT(FT_ANIM_TRAY, 11), 1054, -141,
	ftAnimBlock(0, 9),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 210,
	ftAnimSetValRateT(FT_ANIM_TRAX, 18), -49, 118,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -141,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 938, -501,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -501,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 615, -277,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -277, 216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 592, 55, 19, -704,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTDonkeyAnimCliffAttackSlow1_joint3[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, -11, -53, 22, -105, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 18, 0, 177, 46, -97, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 18, 0, 177, -71, -97, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 19, 0, -249, -81, -113, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, 0, -249, 17, -113, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 17, 0, -53, 14, -105, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 17, -9, -53, 0, -105, 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -265, -41, -16,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimCliffAttackSlow1_joint5[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 21, 211, 42, -148, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -14, 0, 446, 47, -155, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -14, 60, 446, -81, -155, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 350, 69, -39, -92, -49, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 350, -37, -39, -10, -49, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 121, -37, -104, 26, -37, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -9, 24, 211, 7, -148, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 727, 25, 79, -6, -13, 6,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimCliffAttackSlow1_joint6[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1656, -146, -1519, 84, -2054, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1193, 236, -2094, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1510, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1241, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1126, 218, -961, 174, -2081, -267,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3105, -185,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1158, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1678, 530,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2188, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2142, -44, -3000, 108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2699, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1651, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1321, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1588, -111, -2666, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2225, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1544, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1514, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1505, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1651, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2151, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1544, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1609, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1131, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1733, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1750, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1539, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1423, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1130, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1174, 29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1752, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1737, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1208, 33, -1715, 21, -1420, 2,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimCliffAttackSlow1_joint7[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1080, -63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1074, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -841, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -462, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -366, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -424, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -193, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -599, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -698, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1237, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1190, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -965, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -964, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimCliffAttackSlow1_joint8[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -258, -178, -100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -258, -178, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -258, -94, -178, -14, -100, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -823, -265, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -258, 34, -178, 17, -100, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -270, 8, 23, 5, -460, 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTDonkeyAnimCliffAttackSlow1_joint9[22] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 393, 144, 74,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 393, 144, 74,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 174, -67, -44,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimCliffAttackSlow1_joint11[36] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -603, -188, 324,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -603, -188, 324,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -603, -188, 324,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -545, 46, -215,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -603, -188, 324,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -603, -188, 324,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -230, -7, 119,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTDonkeyAnimCliffAttackSlow1_joint12[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -486, 20, 303, 214, -734, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 692, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -466, 376, -673, 404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 266, 558, 74, 554,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 650, 111, 510, -119, 434, 88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 419, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 489, -143, 251, -133,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 68, -398, 17, -297,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 476, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -432, -355, 226, -208, -429, -313,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -718, 18, -733, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 59, -151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -292, -134,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -697, 26, -775, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -563, -5, -914, 52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -454, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 222, 111,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -576, 6, -832, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -586, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -422, -39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 303, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 152, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -549, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -540, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -467, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -729, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 138, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -58, 18,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -506, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -711, 18, -30, 28, -490, 15,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimCliffAttackSlow1_joint13[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1010, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -931, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -934, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1125, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -866, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -866, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -353, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -100, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -446, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -934, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -966, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -777, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -795, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimCliffAttackSlow1_joint14[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1161, 59, 0, -5, 268, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1161, -197, 0, 33, 268, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -26, -48, 201, 20, 236, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 138, -6, 437, 0, 147, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -240, -1, 230, -16, -1, -5,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTDonkeyAnimCliffAttackSlow1_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimCliffAttackSlow1_joint17[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -404, 45, 0, 64, 0, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -130, -4, 387, 13, 618, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -453, -1, 133, -11, 141, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -182, -8, 41, -3, 110, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -734, -14, 6, -2, 24, -7,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTDonkeyAnimCliffAttackSlow1_joint18[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1956, -351, -917, 75, 192, 284,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -928, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1605, -575, 477, 512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 806, -410, 1216, 371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 784, 0, -1038, -104, 1220, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1192, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 804, 34, 1215, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1064, 15, 1411, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1079, 15, 1397, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1025, -115,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1761, 200,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1155, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1300, -93,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 885, -170,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 88, -39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1956, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1956, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 112, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 379, 106,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2008, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 2094, 13,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1397, -88, 496, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1400, 35, 1088, 47,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2105, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2085, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2064, -21, -1368, 32, 1132, 44,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimCliffAttackSlow1_joint20[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1189, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 817, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 851, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 902, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1192, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1183, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1376, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1364, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1350, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimCliffAttackSlow1_joint22[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 377, 86, 9, 0, 41, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), -169, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 490, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 290, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 134, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 152, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 377, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 405, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 186, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 82, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -628, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -675, -36, -192, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -721, 0, -256, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -717, 3, 21, 0, -275, -19,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimCliffAttackSlow1_joint23[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1292, -67, -1807, 34, 416, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1940, 46, 1206, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1376, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1533, 139,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1879, -67,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1874, 63, 1400, 156,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1939, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1413, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1782, -80, 1190, -193,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1424, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 429, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1943, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1813, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1346, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1232, -36,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1807, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1604, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1192, -42, 451, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 665, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1080, 69,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1604, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1758, -57,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 663, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 747, 55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1156, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1242, 86, -1813, -54, 813, 66,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimCliffAttackSlow1_joint25[116] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1190, 15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 778, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 587, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 4, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 652, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 781, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1186, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1190, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1327, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1306, -20,
	ftAnimEnd(),
	0x0000, 0x2806, 0x0653, 0x002F, 0x06CA, 0x0000, 0x3808, 0xFB0A, 0x2809, 0x0018, 0xFB0A, 0xFFF6, 0x2805, 0x0027, 0x062A, 0xFFF2, 0x2003, 0x0007, 0x0643, 0x001C, 0x2003, 0x0001, 0x066D, 0x001D, 0x2003, 0x000A, 0x0616, 0x001A, 0x2003, 0x0001, 0x0635, 0x001E, 0x2803, 0x0009, 0x06ED, 0x003A, 0x0801, 0x0005, 0x2009, 0x0001, 0xFAFB, 0xFFF1, 0x2809, 0x000E, 0xF920, 0xFFD8, 0x0801, 0x0003, 0x2003, 0x0001, 0x072B, 0x003E, 0x2003, 0x000A, 0x0798, 0xFFCB, 0x200F, 0x0001, 0x0760, 0xFFC9, 0x061C, 0xFFF2, 0xF8F9, 0xFFD9, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
