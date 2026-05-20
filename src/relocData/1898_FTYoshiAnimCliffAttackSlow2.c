/* AnimJoint data for relocData file 1898 (FTYoshiAnimCliffAttackSlow2) */
/* 4000 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCliffAttackSlow2_joint1[16];
extern u16 dFTYoshiAnimCliffAttackSlow2_joint2[22];
extern u16 dFTYoshiAnimCliffAttackSlow2_joint3[98];
extern u16 dFTYoshiAnimCliffAttackSlow2_joint4[92];
extern u16 dFTYoshiAnimCliffAttackSlow2_joint5[128];
extern u16 dFTYoshiAnimCliffAttackSlow2_joint7[14];
extern u16 dFTYoshiAnimCliffAttackSlow2_joint8[226];
extern u16 dFTYoshiAnimCliffAttackSlow2_joint9[40];
extern u16 dFTYoshiAnimCliffAttackSlow2_joint11[18];
extern u16 dFTYoshiAnimCliffAttackSlow2_joint12[244];
extern u16 dFTYoshiAnimCliffAttackSlow2_joint13[54];
extern u16 dFTYoshiAnimCliffAttackSlow2_joint14[18];
extern u16 dFTYoshiAnimCliffAttackSlow2_joint15[34];
extern u16 dFTYoshiAnimCliffAttackSlow2_joint16[34];
extern u16 dFTYoshiAnimCliffAttackSlow2_joint18[34];
extern u16 dFTYoshiAnimCliffAttackSlow2_joint19[198];
extern u16 dFTYoshiAnimCliffAttackSlow2_joint21[72];
extern u16 dFTYoshiAnimCliffAttackSlow2_joint23[180];
extern u16 dFTYoshiAnimCliffAttackSlow2_joint24[160];
extern u16 dFTYoshiAnimCliffAttackSlow2_joint26[88];
extern u16 dFTYoshiAnimCliffAttackSlow2_joint27[176];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTYoshiAnimCliffAttackSlow2_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow2_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTYoshiAnimCliffAttackSlow2_joint1[16] = {
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 22), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimCliffAttackSlow2_joint2[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 672,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 268,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 0, -6,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 3,
	ftAnimBlock(0, 22),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 17), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimCliffAttackSlow2_joint3[98] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), -224, 70, -31, -3, -119, 34, 64, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -37, 95, 0, 23,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 136, 24,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 1,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 33), -7, 23, 29, -8,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 1,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), -240, -9,
	ftAnimSetValRateT(FT_ANIM_TRAY, 27), 30, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 444, 37, 115, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 136, 6, 444, -35, 115, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 220, 32, 0, -202, 0, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 301, 7, -575, -52, -267, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 301, -14, -575, 24, -267, 13,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, -89, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), -66,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 8), 30,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), 0, 20,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimCliffAttackSlow2_joint4[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 745, -39, 0, 35, 6, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 368, -38, 536, 42, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 206, -40, 600, 16, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 206, 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 206, 600, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 206, 57, 600, -22, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 368, -47, 536, -137, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, -15, 0, -114,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 290, 23, -42, -41, 0, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 160, -42, -277, -8, -131, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -210, -9, -145, 17, -70, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 16, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimCliffAttackSlow2_joint5[128] = {
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 67), 4096, 27, 4096, 126, 4096, 27,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 51,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 600, 23, 329, -4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 39), 0, 600, 329,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 8,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 34, 0, -15, 0, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 592, 26, -235, 33, -410, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 185, -101, 236, 118, 83, 123,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 185, 236, 83,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 185, 236, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 185, 101, 236, -14, 83, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 592, 98, 180, -59, 286, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 580, -35, 0, -23, 0, -32,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 5038, 8363, 5038,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 202, -54, -79, -3, -75, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, 4096, 4096,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -198, -9, -54, 5, -51, 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 78, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 600, 329,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimCliffAttackSlow2_joint7[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 0, -4,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 80), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 41,
	ftAnimBlock(0, 39),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimCliffAttackSlow2_joint8[226] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, -33, -250, -18, 273, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -502, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -390, -6, 299, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -419, -36, 347, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 520, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -485, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -679, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -732, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 571, 91,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -755, -22, -454, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1184, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -459, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -502, 48, 687, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -235, -54, 837, 206,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1419, -185,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1735, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -471, -117, 1126, 181,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1191, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -457, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -451, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -424, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1252, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1280, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1746, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1830, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1293, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1241, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1767, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1855, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1276, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1152, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -441, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -473, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1770, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1793, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1158, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1810, 118, -483, -101, 1168, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1555, -167, -677, -349, 851, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2144, -142, -1181, -372, 1473, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1841, 198, -1422, -161, 1307, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1747, 94, -1503, -80, 1249, -58,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimCliffAttackSlow2_joint9[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -256, -415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -830, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -853, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 88,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimCliffAttackSlow2_joint11[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), -804, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1525, 16,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 11,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 38), 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimCliffAttackSlow2_joint12[244] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2037, 207, 1440, -174, 1516, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1263, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2244, 319, 1578, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2675, 263, 1886, 178,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2696, -25, 1911, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1327, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1206, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2718, -4, 1944, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2544, -313, 1820, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1124, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1044, 108,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2062, -443, 1349, -447,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1827, 559, 1110, 574,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1172, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 990, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2687, 555, 1061, -4, 1952, 555,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2938, 237, 981, -36, 2221, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3162, -32, 988, -138, 2458, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2874, 31, 704, -375, 2146, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3226, 338, 238, 215, 2436, 383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3550, 152, 1136, 467, 2914, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3530, -13, 1173, 22, 2912, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2962, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1173, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 3548, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3587, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3438, -62, 2820, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2840, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3463, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 3402, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2842, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2769, -31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1181, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1211, 76,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2756, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2766, -138,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3399, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3177, -220, 2487, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2958, 105, 1318, -497, 2137, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3387, 66, 216, -726, 2787, 434,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3091, -295, -134, -351, 3006, 218,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimCliffAttackSlow2_joint13[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -610, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 305,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, -538,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1086, -524,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1456, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 454,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimCliffAttackSlow2_joint14[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), -804, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -625, 16,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 11,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 24), 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimCliffAttackSlow2_joint15[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -870, -8, -429, -6, 314, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -1072, 12, -893, -17, 0, -12,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 11,
	ftAnimBlock(0, 9),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -536, 17, -893, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -536, -893, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimCliffAttackSlow2_joint16[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -354, -2, 56, -2, 10, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 31, 12, 7, -1, 1, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 31, -6, 7, 0, 1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -190, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimCliffAttackSlow2_joint18[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -589, 2, 122, -5, -12, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 186, 25, 16, -3, -1, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 186, -9, 16, 0, -1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -153, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTYoshiAnimCliffAttackSlow2_joint19[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1616, 84, -1528, 15, -1257, -350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1818, 67, -1623, -162, -2045, -390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1836, 634, -1838, -113, -2388, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3086, 677, -1851, 97, -1471, 431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3192, 71, -1643, 129, -1525, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1321, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 3330, 83, -1567, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3439, 248, -1574, -140,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4340, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1115, 57, -1848, -338,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1348, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2251, -218,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2252, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4475, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4556, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1430, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1545, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2231, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2254, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4734, 187,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4959, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1664, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1591, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2033, 272,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1285, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4851, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 4804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1656, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1586, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1286, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1349, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4805, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 4822, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1345, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1648, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1706, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1634, 34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1587, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1610, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4819, -2, -1613, -3, -1612, 21,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimCliffAttackSlow2_joint21[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 437,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 814, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 952, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 990, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 987, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 826, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 870, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 241, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 345, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 538, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 299, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimCliffAttackSlow2_joint23[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1652, 46, -298, 9, -2871, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1660, -105, -206, 69, -3138, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1816, 23, -150, -517, -3144, -452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1613, -72, -1240, -592, -4042, -389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1961, -152, -1334, -50, -3923, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1649, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1847, 55, -4002, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1806, 1, -4008, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2073, -327, -4123, -230,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1915, -187,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1952, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2499, -331, -4469, -280,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2881, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -4779, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1985, 66, -4818, -128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -5575, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3112, -162, -1820, 268,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3054, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1449, 278,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1060, 21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5555, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -5387, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3032, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -3237, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1044, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1440, -49,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5384, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -5562, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5540, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -5109, 33,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1484, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3222, 10, -1514, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3216, 5, -1524, -10, -5089, 20,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimCliffAttackSlow2_joint24[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -172, -29, 180, -35, -4, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 50, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 23, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, 172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 305, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -34, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -56, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -17, -25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 278, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 98, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -40, 30, 28, -183,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -6, 59, -608, -168,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, 139,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 454, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 123, 24, -606, 85,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -42, -60, -364, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 432, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 400, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -77, -31, -326, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -236, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -141, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -138, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -286, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -237, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 0, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 405, -14, -372, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 6, -13, -167, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 4, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -3, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -6, 0, 3, -154, 12,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimCliffAttackSlow2_joint26[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 698, 57,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 670, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 223, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 211, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 466, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 523, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 846, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 386, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 330, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 178, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 300, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 493, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 508, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 466, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 387, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTYoshiAnimCliffAttackSlow2_joint27[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1791, -43, 369, 0, -372, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2045, -243, 516, 130, -576, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2321, -225, 629, 63, -808, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -2231, 86, 616, -6, -1011, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2143, 88, 609, -7, -994, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1624, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 528, -74, -789, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 406, -198, -656, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1577, -22, 131, -398, -450, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1670, -371, -390, -400, -254, 432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2320, -506, -669, -117, 414, 519,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2809, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -624, 31, 784, 226,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -675, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 922, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2840, -25, 970, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2769, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1057, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1022, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 772, -241,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2690, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1964, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 500, -296,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -151, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -655, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -101, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1840, 98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1621, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -229, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1613, 7, -89, 12, -228, 1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
