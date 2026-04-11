/* AnimJoint data for relocData file 1084 (FTSamusAnimAttackAirD) */
/* 1664 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimAttackAirD_joint1[20];
extern u16 dFTSamusAnimAttackAirD_joint2[54];
extern u16 dFTSamusAnimAttackAirD_joint4[72];
extern u16 dFTSamusAnimAttackAirD_joint5[82];
extern u16 dFTSamusAnimAttackAirD_joint6[48];
extern u16 dFTSamusAnimAttackAirD_joint7[24];
extern u16 dFTSamusAnimAttackAirD_joint8[10];
extern u16 dFTSamusAnimAttackAirD_joint11[26];
extern u16 dFTSamusAnimAttackAirD_joint12[126];
extern u16 dFTSamusAnimAttackAirD_joint14[62];
extern u16 dFTSamusAnimAttackAirD_joint15[74];
extern u16 dFTSamusAnimAttackAirD_joint17[24];
extern u16 dFTSamusAnimAttackAirD_joint19[34];
extern u16 dFTSamusAnimAttackAirD_joint20[58];
extern u16 dFTSamusAnimAttackAirD_joint22[72];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimAttackAirD_joints[] = {
	(u32)dFTSamusAnimAttackAirD_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimAttackAirD_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimAttackAirD_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimAttackAirD_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimAttackAirD_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimAttackAirD_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimAttackAirD_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimAttackAirD_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimAttackAirD_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimAttackAirD_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimAttackAirD_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimAttackAirD_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimAttackAirD_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimAttackAirD_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimAttackAirD_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF018C, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimAttackAirD_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 1300,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, -4, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 7), 913,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 1300, 93,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 26), 1300,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimAttackAirD_joint2[54] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1340, 334, 804, 89,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 158,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 804, 115,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1245, -240,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 5), 804,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1160, 32,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 5), 804,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 1608, 18, 1608, 28, 1608, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimAttackAirD_joint4[72] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 240, 0, 0, 0, -21, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 240, 43, 0, 116, 0, 118, 0, 38, -21, -26, 56, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 413, -9, 467, 11, 472, -30, 19, 74, -34, -110, 22, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 181, -18, 70, -84, -181, -63, 55, -52, -104, 16, 26, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 225, 1, -378, -2, -157, 5, -46, -14, -14, 21, 49, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 240, 0, 0, 0, -21, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimAttackAirD_joint5[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, 4, -1583, 123, 1673, 101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1325, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1468, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1919, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1929, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2119, 60,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1343, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -1540, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2164, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2104, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1464, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 1659, -2,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2078, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1675, -4,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1554, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1576, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, -3, -1583, -6, 1673, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimAttackAirD_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1046, 28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -851, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -681, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -969, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -735, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -758, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -1070, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1063, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1047, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimAttackAirD_joint7[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 536,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -250, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -339, 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 536,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimAttackAirD_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimAttackAirD_joint11[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 214, -536, -245,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -317, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 604, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimAttackAirD_joint12[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -239, -307, 116, -47, -60, -241,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -734, -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -546, -199, 68, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -637, -134, -113, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -815, -253, -36, 392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1143, -230, 670, 304, -1181, -417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1276, -14, 572, -141, -1569, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1172, 61, 387, -86, -1655, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -539, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -881, 144, 505, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -731, 137, 448, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -451, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 513, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 456, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 387, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -468, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -186, 12,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -450, 1, 376, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), -263, 23, 138, -20,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -174, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -72, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -239, 24, 116, -21, -60, 11,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimAttackAirD_joint14[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -985, 76,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -909, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -881, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -95, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -491, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -640, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -957, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -971, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -986, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimAttackAirD_joint15[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 31, -2, -51, 0, -566, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 59, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -56, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -324, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -401, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -890, -25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 65, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 20, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -895, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -559, -4,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -56, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -53, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -569, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, 11, -51, 1, -566, 3,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimAttackAirD_joint17[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1329, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1178, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1196, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 1265, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, 63,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimAttackAirD_joint19[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 34, 2, 21, 0, 48, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), 21, 0, 48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -20, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -20, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), 46, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34, -11, 21, 0, 48, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimAttackAirD_joint20[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 2, 38, 4, -592, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 136, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 19, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -218, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -266, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -699, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 137, 0, -714, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 41, -2, -599, 7,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 16, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 38, -2, -592, 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimAttackAirD_joint22[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1100, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 727, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 720, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1214, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1221, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 1111, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, -10,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFFBA, 0x000B, 0x0040, 0x0000, 0x003B, 0x0000, 0x280D, 0x0027, 0x0040, 0x0000, 0x003B, 0x0000, 0x2003, 0x000B, 0x0061, 0xFFFB, 0x2003, 0x0001, 0x004C, 0xFFDC, 0x2003, 0x001B, 0xFFBF, 0xFFFB, 0x200F, 0x0001, 0xFFBA, 0xFFFB, 0x0040, 0x0000, 0x003B, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
