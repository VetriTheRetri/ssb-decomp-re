/* AnimJoint data for relocData file 583 (FTMarioAnimCliffAttackSlow2) */
/* 2528 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCliffAttackSlow2_joint1[24];
extern u16 dFTMarioAnimCliffAttackSlow2_joint2[34];
extern u16 dFTMarioAnimCliffAttackSlow2_joint3[34];
extern u16 dFTMarioAnimCliffAttackSlow2_joint5[54];
extern u16 dFTMarioAnimCliffAttackSlow2_joint6[122];
extern u16 dFTMarioAnimCliffAttackSlow2_joint7[46];
extern u16 dFTMarioAnimCliffAttackSlow2_joint8[18];
extern u16 dFTMarioAnimCliffAttackSlow2_joint9[42];
extern u16 dFTMarioAnimCliffAttackSlow2_joint11[50];
extern u16 dFTMarioAnimCliffAttackSlow2_joint12[118];
extern u16 dFTMarioAnimCliffAttackSlow2_joint13[46];
extern u16 dFTMarioAnimCliffAttackSlow2_joint14[34];
extern u16 dFTMarioAnimCliffAttackSlow2_joint16[10];
extern u16 dFTMarioAnimCliffAttackSlow2_joint17[136];
extern u16 dFTMarioAnimCliffAttackSlow2_joint19[54];
extern u16 dFTMarioAnimCliffAttackSlow2_joint21[94];
extern u16 dFTMarioAnimCliffAttackSlow2_joint22[118];
extern u16 dFTMarioAnimCliffAttackSlow2_joint24[70];
extern u16 dFTMarioAnimCliffAttackSlow2_joint25[110];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTMarioAnimCliffAttackSlow2_joints[] = {
	(AObjEvent32 *)dFTMarioAnimCliffAttackSlow2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimCliffAttackSlow2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimCliffAttackSlow2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTMarioAnimCliffAttackSlow2_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTMarioAnimCliffAttackSlow2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimCliffAttackSlow2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimCliffAttackSlow2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimCliffAttackSlow2_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTMarioAnimCliffAttackSlow2_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTMarioAnimCliffAttackSlow2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimCliffAttackSlow2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimCliffAttackSlow2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTMarioAnimCliffAttackSlow2_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTMarioAnimCliffAttackSlow2_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTMarioAnimCliffAttackSlow2_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTMarioAnimCliffAttackSlow2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTMarioAnimCliffAttackSlow2_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTMarioAnimCliffAttackSlow2_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTMarioAnimCliffAttackSlow2_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimCliffAttackSlow2_joint1[24] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -9,
	ftAnimSetValBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValT(FT_ANIM_TRAY, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 463, 1920,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 960, -29,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 26), 360, -104,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimCliffAttackSlow2_joint2[34] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY), -536, 15, 0, -396, -300, -156,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 223, 15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -594, -327, -234, 244,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), -204, 169, -147, 221,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 25), 0, 36, 540, 122,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTMarioAnimCliffAttackSlow2_joint3[34] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 1, 0, 101, 0, -2, 600, -90,
	ftAnimSetValRateT(FT_ANIM_TRAY, 30), 0, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 22, -2, 1417, -26, -28, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -71, -2, -790, -48, -95, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimCliffAttackSlow2_joint5[54] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 32), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 28,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 759, 32, 0, 6, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 676, -2, 90, 12, 38, 5,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 26), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 714, -18, 203, 6, 86, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 208, -15, 258, 1, 110, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimCliffAttackSlow2_joint6[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -70, -653, 239, -313, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -93, 270, -414, 155, -207, -321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 516, 253, -342, 184, -956, -414,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -949, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 412, -102, -45, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 312, -68, -26, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 201, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 93, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -846, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -566, 31,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 185, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 83, 45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -535, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -344, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 110, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -162, -86,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -199, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -161, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -207, -49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -242, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -291, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 49, -300, -8, -272, -64,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimCliffAttackSlow2_joint7[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -640, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -375, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -491, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -351, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 169,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimCliffAttackSlow2_joint8[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -804,
	ftAnimSetValRateT(FT_ANIM_ROTX, 70), -625, 8,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 40,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTMarioAnimCliffAttackSlow2_joint9[42] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 288,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 27), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 23,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, -2, 0, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 30), 201, 4, 176, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -57, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 26), -4, 1, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimCliffAttackSlow2_joint11[50] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 54, 0, -18, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 53), 0, 0, 54, 0, -17, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 23,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -368, -40, 309, -37, -239, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -733, 0, -357, -27, 912, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -354, 19, -198, 19, 19, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -221, 4, 139, 10, -209, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimCliffAttackSlow2_joint12[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3072, -225, -141, 634, -690, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3297, 83, 493, 276, -447, 366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2905, 707, 411, -138, 43, 488,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 86, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1882, 709, 528, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1485, 265, 501, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1337, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 701, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 55, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 150, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1346, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -1743, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1761, -19, 169, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -2036, -112, 258, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 733, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 513, -35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2132, -98, 280, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -2528, -209, 506, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 481, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 289, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2773, -245, 551, 45, 65, -224,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimCliffAttackSlow2_joint13[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -478, -75,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -546, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -848, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 37,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTMarioAnimCliffAttackSlow2_joint14[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 3, 0, 4, 0, -3,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 625, 8,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 5,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 23), 908,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 625, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimCliffAttackSlow2_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimCliffAttackSlow2_joint17[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -173, 207, -593, 17, 151, -214,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -663, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 316, 259, -324, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 552, -90, -508, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -432, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -628, 227, -101, 574,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, 230, 641, 366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -378, 58, -168, 46, 630, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 364, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -203, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 623, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 417, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -161, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 366, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -246, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -355, -116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -130, 57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -230, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -149, 79,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -258, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -240, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -90, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -114, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -71, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -20, -230, 9, 45, 48,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimCliffAttackSlow2_joint19[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 920, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 905, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 521, -449,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -49,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 461, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 557, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 453, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -52,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimCliffAttackSlow2_joint21[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -408, 40, -107, -21, 20, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -113, -125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -367, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -375, -476,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1321, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -118, 657,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -6, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 22, 16, -250, -127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -429, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 65, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 138, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 16, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -10, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -404, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -166, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -71, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -209, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, -2, -11, 0, -156, 10,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimCliffAttackSlow2_joint22[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1538, -100, 1560, -92, -1487, -210,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1896, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1639, -263, 1467, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2065, -372, 1303, -414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2385, -71, 638, -357, -2022, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2208, 95, 588, -31, -1839, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2248, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 620, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1817, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -2500, -101,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2270, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -2971, -92,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 628, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 410, -78,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3065, -217, -2607, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3405, -199, -3019, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3463, -20, -3147, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -3082, 71, -3215, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 342, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 210, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3016, 66, 187, -23, -3181, 34,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimCliffAttackSlow2_joint24[70] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 442,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 449, 445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 897, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -448,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 0, 7372, 6144, 6144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4096, 4096, 4096,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 347, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 495, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 501, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -62,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTMarioAnimCliffAttackSlow2_joint25[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1657, -221, -1819, -156, 2134, -244,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1915, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1436, -29, 1889, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1598, 110, 1554, -130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1756, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1628, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1702, 150, 1993, 207,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2029, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1584, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1700, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 2068, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2008, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1622, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1575, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1588, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1596, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1399, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2092, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 2011, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1937, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1736, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1712, -23, -1588, 0, 1389, -9,
	ftAnimEnd(),
	0x0000, 0x0000,
};
