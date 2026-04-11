/* AnimJoint data for relocData file 861 (FTDonkeyAnimRollB) */
/* 3776 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimRollB_joint1[108];
extern u16 dFTDonkeyAnimRollB_joint2[92];
extern u16 dFTDonkeyAnimRollB_joint3[42];
extern u16 dFTDonkeyAnimRollB_joint5[54];
extern u16 dFTDonkeyAnimRollB_joint6[214];
extern u16 dFTDonkeyAnimRollB_joint7[88];
extern u16 dFTDonkeyAnimRollB_joint8[34];
extern u16 dFTDonkeyAnimRollB_joint9[34];
extern u16 dFTDonkeyAnimRollB_joint11[56];
extern u16 dFTDonkeyAnimRollB_joint12[188];
extern u16 dFTDonkeyAnimRollB_joint13[80];
extern u16 dFTDonkeyAnimRollB_joint14[66];
extern u16 dFTDonkeyAnimRollB_joint15[8];
extern u16 dFTDonkeyAnimRollB_joint17[26];
extern u16 dFTDonkeyAnimRollB_joint18[168];
extern u16 dFTDonkeyAnimRollB_joint20[64];
extern u16 dFTDonkeyAnimRollB_joint22[170];
extern u16 dFTDonkeyAnimRollB_joint23[126];
extern u16 dFTDonkeyAnimRollB_joint25[218];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimRollB_joints[] = {
	(u32)dFTDonkeyAnimRollB_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimRollB_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimRollB_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimRollB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimRollB_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimRollB_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimRollB_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimRollB_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimRollB_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimRollB_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimRollB_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimRollB_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimRollB_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimRollB_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimRollB_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimRollB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimRollB_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimRollB_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimRollB_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF0363, /* [25] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimRollB_joint1[108] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, 0, 0, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -470,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -2513,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), -1127, -2015,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 5), -533, -763,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -618, -277,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 2), -623, 477,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), -2758, -2416,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -463, 918,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -326, 830,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -194, 674, 0, -807,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -73, 778, -302, -1442,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 169, -360, 630, -2939, -805,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 11, 19, 12, 704, -3160, -567,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 9, -6, -8, -7, -3223, -519,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 15), -4200, -290,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 12), 0, -5, 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), -4200, -290,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimRollB_joint2[92] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), -402,
	ftAnimSetValRate(FT_ANIM_TRAY), 1032, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), -24,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 887, -290,
	ftAnimSetValT(FT_ANIM_TRAX, 4), -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -402,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 887, -463, -402, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 621, -1217,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -402, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 3), -24,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 295, -505,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -24,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 375, 475, -402, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), -24,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 592, 1204, -402, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 3), -24,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 977, 3040, -402, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -24,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 2112, 63,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 24), -402,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 3), -24,
	ftAnimSetValT(FT_ANIM_TRAX, 21), -24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 1032, -720,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 829,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 7), 1032,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTDonkeyAnimRollB_joint3[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -41,
	ftAnimSetValRate(FT_ANIM_ROTX), 2959, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 2959, 0, -41, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -78, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 2196, -249, 191, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1020, -271, -244, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -265, -65, -41, 9,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), -265, -41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimRollB_joint5[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 742, 24, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 742, 0, 24, 0, 41, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -9, -13,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 320, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 660, -5, -78, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 660, 27, -78, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 966, 21, 291, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 982, -6, 320, -17, 291, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 750, 24, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimRollB_joint6[214] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1671, -11, -1513, 4, 1121, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1665, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1391, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1060, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1061, 121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1842, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1743, -140,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2143, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1370, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1627, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1867, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1844, 312, 1881, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1518, 194, -1550, 28, 1659, -154,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1514, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1626, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1455, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1539, -60,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1375, -315,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 520, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1708, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1558, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1562, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1633, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 688, 161,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 907, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1555, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1630, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1479, 115, 763, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1278, 361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1398, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1720, -162, -1165, 150,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1113, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1957, -126, 1670, 242,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1814, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1973, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1394, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1098, 15, 1814, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1453, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1486, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1379, 4, 1472, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1308, -113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1658, -31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1511, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1520, 0, 1188, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1671, -13, -1513, 6, 1123, -65,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimRollB_joint7[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -373, -190,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -666, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -666, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1039, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1058, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1025, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1067, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -869, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -898, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1113, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -718, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -572, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -861, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1315, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1338, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1125, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1037, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -491, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -378, 112,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimRollB_joint8[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, 7, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -3, -44, 7, 4, -20, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -356, 0, 43, 0, -150, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -3, 11, 7, -1, -16, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -3, 7, -16,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTDonkeyAnimRollB_joint9[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 174, 27, -67, 26, -44, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 393, -11, 144, -12, 74, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -18, -7, -274, -7, 299, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimRollB_joint11[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -398, -6, 70, -35, 29, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -452, 46, -206, -42, 75, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -93, 69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -206, 75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -93, -206, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -93, -39, -206, 35, 75, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -398, -15, 70, 14, 29, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -398, 70, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTDonkeyAnimRollB_joint12[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -121, 23, 160, 38, -482, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 55, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 310, 62, -433, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 366, 31, -288, 131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 321, -115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 36, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 148, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 162, -134,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 141, -123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 186, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -50, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 53, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -21, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -129, -164,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 91, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -111, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 169, -73, -711, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -3, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -358, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 74, 136, -461, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34, 282, 270, 101, -292, 280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 452, 291, 277, -44, 98, 249,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 184, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 216, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 616, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 658, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 196, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 253, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 214, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -159, -132,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 644, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 141, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3, -116, -299, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -91, -58, 192, -46, -421, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -121, -29, 161, -31, -481, -60,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimRollB_joint13[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -402, -180,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -680, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -680, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -728, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -911, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -976, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1062, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1207, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1024, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -746, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -852, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1176, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1144, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -991, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -952, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -512, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 104,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimRollB_joint14[66] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 98, 19, 0, -5, 0, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 253, 97, -45, -4, -198, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 730, 75, -27, 20, -156, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 743, -60, 88, 3, -184, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 99, -36, 10, -21, -3, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 411, 26, -109, -10, 253, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 411, -21, -109, 7, 253, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTDonkeyAnimRollB_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 38),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimRollB_joint17[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -404, -25, -85, -6, 61, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -1131, 0, -171, 4, 123, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTDonkeyAnimRollB_joint18[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -64, 48, -362, -7, -320, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -404, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 46, 1, -465, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 57, 28, -470, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 102, -60, -767, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -63, -191, -833, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -371, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -750, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -397, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -473, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -357, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -205, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -806, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -879, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -466, -235, -722, 155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -598, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -675, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -581, 153,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -75, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -486, 37, -689, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -308, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -459, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -82, -31, -185, 254,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -231, -3, 392, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -308, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -354, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -233, 0, 408, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -65, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 317, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -285, -56,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -44, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -53, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -64, -11, -360, -6, -311, -25,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimRollB_joint20[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1005, 66,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1036, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 910, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1043, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1096, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 928, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1058, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1135, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 970, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 753, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 751, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 895, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 927, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1020, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimRollB_joint22[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -143, 8, 30, 3, -371, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 94, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -81, 12, -403, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -89, 70, -405, 167,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 255, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -68, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -13, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -99, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 311, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 338, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 352, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 636, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 117, 1, -68, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -280, -124, -255, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 599, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 457, -508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -417, -569,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -409, 49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -404, -60, -347, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -409, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -309, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -476, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -590, 34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -414, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -436, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -303, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -456, -76,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -539, 102, -404, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -202, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 5, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -499, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -395, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -160, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -144, 16, 30, 25, -371, 23,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimRollB_joint23[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 118, -26, 244, 9, -300, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 53, 64, 262, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -417, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -424, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 185, 75, 357, 18, -580, -101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 208, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 71, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -892, -41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 201, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 188, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -929, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1073, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 43, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -88, -5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1066, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -290, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -82, 34, 209, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 260, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 118, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 61, -40, -373, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 115, 6, -297, 12,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 261, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 247, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 118, 3, 245, -1, -290, 7,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimRollB_joint25[218] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 993, 68,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 990, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1113, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1030, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1020, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1134, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1250, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1112, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1129, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1233, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1225, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1003, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, -10,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0623, 0x0006, 0x05DE, 0x0000, 0xF82F, 0xFFEE, 0x2809, 0x0005, 0xF8A3, 0x00B1, 0x2805, 0x0007, 0x060D, 0x0021, 0x2003, 0x0003, 0x0633, 0xFFFD, 0x2003, 0x0001, 0x062C, 0xFF83, 0x2803, 0x0002, 0x04B4, 0xFFDC, 0x0801, 0x0001, 0x2009, 0x0001, 0xF96E, 0x00A7, 0x2809, 0x0007, 0xF8F1, 0x0001, 0x2003, 0x0001, 0x04EF, 0x0006, 0x2803, 0x0002, 0x04F2, 0x002A, 0x2005, 0x0001, 0x062A, 0x001C, 0x2805, 0x000A, 0x06A4, 0xFFE6, 0x0801, 0x0001, 0x2003, 0x0001, 0x0516, 0x0021, 0x2803, 0x0004, 0x04EA, 0xFFCE, 0x0801, 0x0003, 0x2009, 0x0001, 0xF8F4, 0x0003, 0x2809, 0x0006, 0xF874, 0xFFB4, 0x2003, 0x0001, 0x04C1, 0xFEF2, 0x2003, 0x0001, 0x02CC, 0xFDA8, 0x2003, 0x0001, 0x0010, 0x0175, 0x2003, 0x0001, 0x05B8, 0x029F, 0x2007, 0x0001, 0x0550, 0xFFE5, 0x0678, 0xFFBF, 0x2803, 0x0003, 0x0660, 0x0024, 0x2805, 0x0005, 0x05C0, 0xFFFF, 0x0801, 0x0001, 0x2009, 0x0001, 0xF82E, 0xFFD2, 0x2809, 0x000C, 0xF804, 0x0008, 0x0801, 0x0001, 0x2003, 0x0001, 0x066E, 0x0000, 0x2803, 0x000E, 0x062A, 0xFFF7, 0x0801, 0x0001, 0x2005, 0x0001, 0x05C1, 0x0003, 0x2805, 0x000C, 0x05DE, 0x0000, 0x0801, 0x0008, 0x2009, 0x0001, 0xF80E, 0x000A, 0x2009, 0x0003, 0xF82B, 0x0005, 0x200F, 0x0001, 0x0624, 0xFFFB, 0x05DE, 0x0000, 0xF82E, 0x0003, 0x0000, 0x0000, 0x0000,
};
