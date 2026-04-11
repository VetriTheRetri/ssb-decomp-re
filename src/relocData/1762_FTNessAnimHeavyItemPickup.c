/* AnimJoint data for relocData file 1762 (FTNessAnimHeavyItemPickup) */
/* 3840 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimHeavyItemPickup_joint1[44];
extern u16 dFTNessAnimHeavyItemPickup_joint2[84];
extern u16 dFTNessAnimHeavyItemPickup_joint4[84];
extern u16 dFTNessAnimHeavyItemPickup_joint5[208];
extern u16 dFTNessAnimHeavyItemPickup_joint6[44];
extern u16 dFTNessAnimHeavyItemPickup_joint7[10];
extern u16 dFTNessAnimHeavyItemPickup_joint8[98];
extern u16 dFTNessAnimHeavyItemPickup_joint10[34];
extern u16 dFTNessAnimHeavyItemPickup_joint11[218];
extern u16 dFTNessAnimHeavyItemPickup_joint12[42];
extern u16 dFTNessAnimHeavyItemPickup_joint13[22];
extern u16 dFTNessAnimHeavyItemPickup_joint15[10];
extern u16 dFTNessAnimHeavyItemPickup_joint16[188];
extern u16 dFTNessAnimHeavyItemPickup_joint18[76];
extern u16 dFTNessAnimHeavyItemPickup_joint19[144];
extern u16 dFTNessAnimHeavyItemPickup_joint21[50];
extern u16 dFTNessAnimHeavyItemPickup_joint22[156];
extern u16 dFTNessAnimHeavyItemPickup_joint24[72];
extern u16 dFTNessAnimHeavyItemPickup_joint25[150];
extern u16 dFTNessAnimHeavyItemPickup_joint26[132];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimHeavyItemPickup_joints[] = {
	(u32)dFTNessAnimHeavyItemPickup_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimHeavyItemPickup_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimHeavyItemPickup_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimHeavyItemPickup_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimHeavyItemPickup_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimHeavyItemPickup_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimHeavyItemPickup_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimHeavyItemPickup_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimHeavyItemPickup_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimHeavyItemPickup_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimHeavyItemPickup_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimHeavyItemPickup_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimHeavyItemPickup_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimHeavyItemPickup_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimHeavyItemPickup_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimHeavyItemPickup_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimHeavyItemPickup_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimHeavyItemPickup_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimHeavyItemPickup_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimHeavyItemPickup_joint26, /* [25] joint 26 */
	0xFFFF0388, /* [26] END */
};

/* Joint 1 */
u16 dFTNessAnimHeavyItemPickup_joint1[44] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -24, 0, 540, -12, -7, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 19, 535, -3, 0, -237,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 535, -1, -305, 59,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 0, 0, 531, -1, 209, 137,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 1, 531, 0, 209, -29,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimHeavyItemPickup_joint2[84] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAZ), 0, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, 4, -360, 22, 8, 2,
	ftAnimSetValBlock(FT_ANIM_SCAY), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 35), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0, 10, 0, 0, -120, -137, 300, 400,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), -120, 53,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 300,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 300, -81,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 26, 24, 96, -151,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -44, -129, -174, -285,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -120, -383, -223, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -3, 0, -19, 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY, 2), -284, -223, 2293,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY, 3), -120, -223, 4096,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimHeavyItemPickup_joint4[84] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 14, 0, -5, 0, -1,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 598, 59, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 17), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 598, -36, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -9, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -169, -2,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 30), 0, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 9), 0, -46,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 534, 46, 0, 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), -104, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 534, -10, 0, 4, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), -104,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimHeavyItemPickup_joint5[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1198, -10, -1347, 103, -1192, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1187, -345, -1243, 534, -1293, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 507, -357, -277, 553, -894, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 471, -100, -137, 88, -997, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 307, -132, -99, 23, -1021, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -99, -8, -1021, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 239, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 319, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 183, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, -18, -985, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -808, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -200, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 145, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 69, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -790, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -722, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 40, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 144, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -186, 13, -707, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -126, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1063, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1170, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1417, -84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 188, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 265, 131, -127, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 452, 495, -135, -47, -1508, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1257, 608, -222, -8, -1824, -517,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -93, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1670, 214, -2544, -431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1686, 24, -2687, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1718, 43, -88, 1, -2758, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -93, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1774, 12, -2819, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1743, -35, -2781, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1703, -28, -2718, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1686, -16, -93, 0, -2687, 31,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimHeavyItemPickup_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, -312,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -786, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimHeavyItemPickup_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimHeavyItemPickup_joint8[98] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, -3, -32, 4,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 293, -78, 8, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -697, -65, 0, -36, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -670, 18, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 153, -2, -138, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -442, 4, 1, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), -1,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 0, 288, 54, 0, 55,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -595, 45, 3, 0, 1, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 327, 65, 4, 0, 2, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 288, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 327, -2, 4, 0, 2, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 288, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimHeavyItemPickup_joint10[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 11, 0, -8, 0, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 31), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -9, 0, 7, 0, -4,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimHeavyItemPickup_joint11[218] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1192, -324, 1038, 113, -1727, -484,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 868, -249, 1152, 190, -2212, -384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 694, -117, 1418, 164, -2497, -193,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2629, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 609, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1480, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1508, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1508, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2641, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2629, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 608, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 729, 73,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1496, -18, -2598, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2420, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1413, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 807, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1006, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2402, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2326, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1065, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1171, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1429, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1486, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2364, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2956, -79,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1049, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 740, -349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 349, -302,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -50, -42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1485, -5, -3033, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3433, -515,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1475, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -104, -247, 1391, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1519, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -546, -321, -4152, -431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -747, -544, -4296, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1635, -491, 1519, -1, -4378, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1513, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1731, -48, -4451, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1705, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4404, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4329, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1694, 10, 1514, 1, -4296, 33,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimHeavyItemPickup_joint12[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 238,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -320, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 155,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimHeavyItemPickup_joint13[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), 90, 0, 54, 0, 126, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 625, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimHeavyItemPickup_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimHeavyItemPickup_joint16[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1211, 118, -1377, 0, -1860, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1329, 199, -1376, -45, -1924, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1610, 236, -1468, -86, -2010, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1840, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1781, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1550, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1501, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1383, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1781, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1578, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1643, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1484, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1645, 91, -1649, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1762, 72, -1431, -39, -1942, -195,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1426, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1790, 6, -2040, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1710, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1997, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1971, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1551, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1692, -17, -1421, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1435, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1530, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1511, -5, -1505, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1834, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1670, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1430, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1387, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1917, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2107, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1686, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1753, -35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2158, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2090, 47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1388, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1710, -32, -1391, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1687, -23, -1388, 2, -2051, 38,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimHeavyItemPickup_joint18[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 376, 89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 465, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 629, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 594, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 738, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 726, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 215, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 154, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 78, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 132, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 382, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 477, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 716, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 816, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 867, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 726, -50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimHeavyItemPickup_joint19[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 18, 12, 13, -29, -15, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -28, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -379, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -16, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -166, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -134, -86, -261, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -192, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -250, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -159, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -363, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -365, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -198, -3, -159, 1, -249, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -165, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -42, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -143, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -144, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -56, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -25, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -112, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -164, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -201, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -119, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -160, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -41, 21, -212, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 29, -23, -182, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -221, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -182, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3, -29, -195, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -175, 6, -29, -25, -211, -16,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimHeavyItemPickup_joint21[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -96, 36, 8, 4, 43, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 191, -8, 30, 3, 83, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -175, -6, 38, 1, 106, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 65, 4, 64, 1, 69, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -72, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 64, 69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -72, 64, 69,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimHeavyItemPickup_joint22[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1492, -16, 1458, 25, -1773, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1866, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1408, -11, 1444, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1407, 24, 1410, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1367, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1456, 67, -1737, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1542, 6, -1568, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1326, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1707, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1459, 70, -1961, -161,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1463, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1273, -16, -2029, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1344, 26, -1989, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1371, 27, 1447, -15, -1970, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1621, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1439, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1635, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1609, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1958, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1612, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1429, -18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2016, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2140, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1410, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1358, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1445, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1425, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2184, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2107, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1400, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1422, 22, 1425, 0, -2088, 19,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimHeavyItemPickup_joint24[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 366, 116,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 783, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 503, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 716, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 684, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 309, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 269, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 218, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 306, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 586, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 630, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 902, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 850, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 761, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 707, -54,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimHeavyItemPickup_joint25[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 78, -19, 25, 54, -208, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 226, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -336, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 118, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 174, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 192, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 213, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 242, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -369, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -345, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 243, 46, -192, 140,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 223, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 264, 4, -64, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 166, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -68, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -53, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 213, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 196, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 157, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 133, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -40, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -60, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -51, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -202, -54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 208, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 234, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 142, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 157, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 196, -17, -245, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 199, -2, -174, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 193, -5, 140, -17, -138, 35,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimHeavyItemPickup_joint26[132] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 56,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 56, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -81, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -81,
	ftAnimEnd(),
	0x40E2, 0x0000, 0xFFFE, 0x016F, 0x03D9, 0x480C, 0x0000, 0x0000, 0x4003, 0x0007, 0x0000, 0x20E1, 0x0004, 0x0000, 0x0002, 0x016E, 0x0005, 0x03CB, 0xFFF3, 0x20E1, 0x0003, 0x0000, 0x0000, 0x0174, 0x000E, 0x03CE, 0x0003, 0x28E1, 0x0003, 0x0000, 0x0000, 0x0179, 0x0088, 0x03CE, 0xFE9A, 0x1003, 0x0003, 0x0000, 0x3002, 0xFFEA, 0x20E3, 0x0008, 0xFF0A, 0xFFE1, 0x0000, 0x0000, 0x0230, 0x0099, 0x01E1, 0xFE54, 0x20E3, 0x0004, 0xFE89, 0xFFE0, 0x0000, 0x0000, 0x025F, 0x0124, 0x014B, 0xFE4D, 0x2803, 0x000D, 0xFCDC, 0xFFE9, 0x20E1, 0x0004, 0x0000, 0x0000, 0x0354, 0x027F, 0x002D, 0xFEA8, 0x20E1, 0x0006, 0x0000, 0x0000, 0x057F, 0xFDEB, 0xFF9D, 0xFF1E, 0x20E1, 0x0003, 0x0000, 0x0000, 0x00FB, 0xF668, 0xFF2F, 0xFF2D, 0x2821, 0x0002, 0x0000, 0x0000, 0x4003, 0x0005, 0xFCDC, 0x38C1, 0x0002, 0xFF81, 0xFF19, 0x38E1, 0x0003, 0x0000, 0x00FB, 0xFF2F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
