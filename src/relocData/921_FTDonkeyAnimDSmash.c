/* AnimJoint data for relocData file 921 (FTDonkeyAnimDSmash) */
/* 4992 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDSmash_joint1[56];
extern u16 dFTDonkeyAnimDSmash_joint2[108];
extern u16 dFTDonkeyAnimDSmash_joint3[74];
extern u16 dFTDonkeyAnimDSmash_joint5[70];
extern u16 dFTDonkeyAnimDSmash_joint6[236];
extern u16 dFTDonkeyAnimDSmash_joint7[96];
extern u16 dFTDonkeyAnimDSmash_joint8[84];
extern u16 dFTDonkeyAnimDSmash_joint9[40];
extern u16 dFTDonkeyAnimDSmash_joint11[64];
extern u16 dFTDonkeyAnimDSmash_joint12[250];
extern u16 dFTDonkeyAnimDSmash_joint13[88];
extern u16 dFTDonkeyAnimDSmash_joint14[138];
extern u16 dFTDonkeyAnimDSmash_joint15[46];
extern u16 dFTDonkeyAnimDSmash_joint17[74];
extern u16 dFTDonkeyAnimDSmash_joint18[252];
extern u16 dFTDonkeyAnimDSmash_joint20[94];
extern u16 dFTDonkeyAnimDSmash_joint22[160];
extern u16 dFTDonkeyAnimDSmash_joint23[224];
extern u16 dFTDonkeyAnimDSmash_joint25[290];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimDSmash_joints[] = {
	(u32)dFTDonkeyAnimDSmash_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimDSmash_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimDSmash_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimDSmash_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimDSmash_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimDSmash_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimDSmash_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimDSmash_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimDSmash_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimDSmash_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimDSmash_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimDSmash_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimDSmash_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimDSmash_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimDSmash_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimDSmash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimDSmash_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimDSmash_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimDSmash_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF047E, /* [25] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimDSmash_joint1[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 40), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 45), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 0, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 18), 880, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 858, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, -121,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1816, -148, 858, -45, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -2079, -93, 227, -57,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -3216, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimDSmash_joint2[108] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -29, 1031, -400,
	ftAnimSetValRateT(FT_ANIM_TRAX, 12), -325, 24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1322, -270, -400, 355,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 626, -276, 132, 352,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 42, 217, 632, -9, 479, 78,
	ftAnimSetValRateT(FT_ANIM_TRAY, 22), 586, -99,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 137, -33, 298, -163,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 11), -29, -134, 132, -83,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), -132, -167, 132, 237,
	ftAnimSetValRateT(FT_ANIM_TRAX, 10), -342, -127,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 321, -939, 369, 209,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 315, -1275,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), -1, -1612,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), -485, -2330,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -1457, -729, -746, -2436,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -355, 217, -1123, 1621, -1817, -969,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -124, 255, 163, 2190, -1716, 1054,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -100, 109, 1067, 991, -762, 1503,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -29, 1031, -400,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTDonkeyAnimDSmash_joint3[74] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -16, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -189, 23, -365, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -73, 15, -506, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -47, 1, 818, 254,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -117, -6, 1278, 117, -12, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -98, 2, 1754, 75, 10, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), -25, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 50), -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 20), 3175, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 3175, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 3175, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 3175, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -71,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), -265, 3175,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimDSmash_joint5[70] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 750, 24, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 670, -79, -241, 50, -156, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 111, 0, 430, 0, 39, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 557, 16, 135, -9, 21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 629, -6, 135, -3, 21, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 33, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 357, 0, 24, -7,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 488, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 24,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 488, 17, 33, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 750, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimDSmash_joint6[236] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 96, -88, -43, -479, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33, 252, -132, -120, -478, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 441, 359, -328, -69, -822, -349,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -251, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 753, 170, -1177, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 782, 1, -1208, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 757, -55, -312, -110, -1148, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 672, 97, -472, -362, -1026, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 951, 98, -1037, -377, -1332, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 868, 36, -1228, -157, -1274, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1404, 377, -1243, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1352, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1329, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1780, 215, -1500, -186, -1539, -221,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1842, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1663, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1703, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1737, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1686, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1850, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 33), 1920, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1657, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -1616, 3,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1691, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1482, 64,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1611, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1676, -155,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1418, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1209, 116,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1931, 6, -1845, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1754, -56, -2370, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1722, 5, -1067, 108, -2606, -206,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1348, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1680, -113, -2743, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1537, -124, -2619, 113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1932, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1540, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1429, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1520, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1889, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2067, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1545, 5, -1520, 0, -2088, -20,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimDSmash_joint7[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -393, -187,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -650, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -514, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -848, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1040, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -834, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1005, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1118, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -928, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -607, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -577, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -810, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -900, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1038, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -997, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1234, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1164, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1041, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -928, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -436, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, 43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimDSmash_joint8[84] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 162, 6, -290, -10, -720, -26,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 309, 18, -248, 7, -822, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 307, -5, -228, 1, -872, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 244, -2, -228, 0, -887, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 248, -6, -235, 2, -885, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 145, -63, -193, 0, -483, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -70, -18, -234, -3, -3, 39,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -70, -234, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -70, 4, -234, 15, -3, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimDSmash_joint9[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -16, -25, -60, 0, 43, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -31, 4, -60, 0, 29, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 37), 174, 4, -67, 0, -44, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 174, -67, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 174, -67, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimDSmash_joint11[64] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -362, 62, 284, 11, 76, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 103, 14, 159, 2, 4, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -232, -10, 309, 4, -188, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), -232, -5, 309, -7, -188, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -398, 12, 70, -15, 29, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -37, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 70, 29,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 70, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -37, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), -398,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDSmash_joint12[250] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -115, 43, 171, 34, -474, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 314, 252, 225, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -168, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 81, 183,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 235, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 574, 229, 132, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 760, -207, 415, 147,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 193, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 461, -179, 532, -22, -48, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 246, -208, 220, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 102, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -14, -234, 188, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -375, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 238, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 17, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 8, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -388, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -510, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -86, -12,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 244, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 216, -13,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -522, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -396, 16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -103, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -582, -96,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 209, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 394, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1164, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -368, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -310, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -567, -440, 425, -69, -1423, -357,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 107, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1191, -365, -1880, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1298, 321, -1872, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -549, 551, 159, -47, -1435, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -196, 180, 12, -68, -1197, 187,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -192, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -736, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 21, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 169, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -194, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -118, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -483, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, 3, 171, 1, -474, 8,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimDSmash_joint13[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -428, -130,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -984, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -864, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -613, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -899, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -871, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -734, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -733, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -629, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -647, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -930, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -904, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -950, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -844, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -522, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -550, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -441, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -478, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -443, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -428, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimDSmash_joint14[138] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -252, -40, 602, 36, -880, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -542, -33, 576, -8, -1118, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -517, 6, 533, -9, -1159, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -472, -1, 475, -2, -1158, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -550, 56, 477, -6, -1147, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 547, 134, 363, -17, 152, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 795, 150, 304, -12, 535, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1602, 255, 275, -14, 367, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1560, 105, 260, 66, 245, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1812, 91, 407, 67, 819, 353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1742, -94, 396, -71, 952, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1623, -34, 264, -238, 943, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1674, -1, -81, -167, 923, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1620, -453, -69, 331, 870, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 767, -651, 581, 219, 200, -469,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 318, -60, 368, -52, -68, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTDonkeyAnimDSmash_joint15[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -893, -7, -1340, -25, 2502, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -986, 0, -1648, -18, 2368, -9,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -881, 7, -1615, 0, 2357, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -776, 0, -1643, -2, 2368, 3,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -893, -1340, 2502,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimDSmash_joint17[74] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -255, -8, 328, 0, 425, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -453, 2, 1, -155, 11, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -244, -16, -292, -18, -363, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -723, -21, -300, 4, -363, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -838, 12, -167, 23, -209, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -417, 24, 252, -3, 192, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -286, -15, -241, -22, -253, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -705, -10, -152, 21, -155, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTDonkeyAnimDSmash_joint18[252] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, 74, -377, 40, -224, -182,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -38, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -165, 9, -757, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -222, -50, -756, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -275, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -804, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -108, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 24, 175,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -165, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 230, 160, -123, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 287, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -315, -190, -913, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -612, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -866, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -17, -147, -546, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1, 3, -569, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 0, -574, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 34, 27, -606, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -613, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -602, 7,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 58, 18, -631, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 73, 112, -652, -132,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -593, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -267, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 296, 164, -910, -203,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 365, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1234, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -262, -2, -1239, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -396, -10, -679, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 338, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -46, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -37, 83, -409, -20, -678, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -525, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 325, 92, -1020, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 305, -80, -921, 145,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 129, 136, -672, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -599, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -489, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 436, 165, -991, -165,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -306, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -923, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -517, -8, -733, 233,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -345, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -96, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -284, 64, -96, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, 87, -372, -16, -178, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 68, -377, -5, -224, -46,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimDSmash_joint20[94] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1009, 53,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 964, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 930, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 964, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 942, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 374, -378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -185,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 453, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 604, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 848, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 840, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 689, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 272, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 4, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 411, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 739, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 662, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 920, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1009, 89,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimDSmash_joint22[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -138, 109, 14, -57, -369, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -6, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -204, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 314, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 422, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 314, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -15, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 182, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -203, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -23, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 62, -239,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -238, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 306, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 403, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -238, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -283, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -20, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 53), 14, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 304, -2,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -286, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 90, 131,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 306, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 364, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 231, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 294, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 266, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -252, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -300, -69, 326, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -359, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -450, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -270, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -98, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -138, -40, 14, 0, -369, -10,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimDSmash_joint23[224] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 51, 56, 197, -9, -237, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 24, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 217, 11, -161, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 241, 32, -212, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 279, -182, -478, -213,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 65, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 80, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -49, -408, -771, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -538, -281, -868, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -611, 120, 369, 288, -1034, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, 147, 656, 144, -742, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -14, 658, 1, -769, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 656, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 21), -279, -28, -746, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -301, -18, -765, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -309, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -778, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 651, -44, -768, -90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 323, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -483, -117, -959, -135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -542, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1040, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1023, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 293, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 407, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -535, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -477, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -493, -43, 415, -16, -1029, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -579, 136, 504, 139, -1056, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -340, 24, 655, 24, -784, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 479, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -531, -108, -973, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -558, 5, -989, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 141, -27, -146, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 442, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 281, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 215, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 199, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 86, -45, -209, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 51, -35, 197, -2, -237, -27,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimDSmash_joint25[290] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1007, -77,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 694, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 761, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1091, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1265, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 636, -549,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -315,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 383, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 508, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1086, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1098, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 765, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 376, -380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 289, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 748, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 663, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 916, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1007, 90,
	ftAnimEnd(),
	0x200E, 0x0047, 0xFFB4, 0x0067, 0xFFBB, 0xFE7D, 0x002B, 0x200F, 0x0004, 0xFF69, 0xFFEE, 0xFF0A, 0xFFFB, 0xFF0F, 0xFFC5, 0x200F, 0x0001, 0xFF50, 0xFFDF, 0xFF11, 0x000D, 0xFEC4, 0xFFBD, 0x2809, 0x0004, 0xFF12, 0x00E3, 0x2805, 0x0005, 0xFFED, 0x006D, 0x2003, 0x0002, 0xFEFC, 0xFFE9, 0x2003, 0x0001, 0xFEF7, 0x009A, 0x2003, 0x0001, 0x002F, 0x01BE, 0x200B, 0x0001, 0x0272, 0x00BB, 0x0049, 0x0119, 0x2809, 0x0005, 0x01B4, 0x0007, 0x2007, 0x0001, 0x01A6, 0xFF6C, 0x0052, 0x0041, 0x2805, 0x0007, 0x007E, 0x0001, 0x2003, 0x0001, 0x014A, 0xFFB9, 0x2803, 0x0009, 0x00E1, 0xFFFF, 0x0801, 0x0003, 0x2009, 0x0001, 0x01BB, 0x0005, 0x2809, 0x0026, 0x0167, 0xFFFF, 0x0801, 0x0002, 0x2005, 0x0001, 0x007F, 0x0000, 0x2805, 0x0018, 0x0082, 0x0002, 0x0801, 0x0002, 0x2003, 0x0001, 0x00E0, 0xFFFF, 0x2803, 0x0019, 0x00EE, 0xFFF5, 0x0801, 0x0015, 0x2005, 0x0001, 0x0080, 0xFFF7, 0x2805, 0x000B, 0xFF20, 0x0011, 0x0801, 0x0003, 0x2003, 0x0001, 0x00DD, 0xFFE9, 0x2003, 0x0006, 0xFF78, 0xFFFD, 0x200B, 0x0001, 0xFF97, 0x0083, 0x0166, 0x0004, 0x2803, 0x0002, 0x0104, 0x0048, 0x2809, 0x0009, 0x0051, 0xFF89, 0x2005, 0x0001, 0xFF48, 0x0046, 0x2805, 0x0004, 0x008B, 0x001B, 0x0801, 0x0001, 0x2003, 0x0001, 0x0111, 0xFFF4, 0x2803, 0x0005, 0x01AD, 0x0021, 0x0801, 0x0002, 0x2005, 0x0001, 0x00A5, 0x0018, 0x2805, 0x0008, 0x006E, 0xFFF5, 0x0801, 0x0002, 0x2003, 0x0001, 0x01B5, 0xFFD5, 0x2803, 0x0004, 0x0023, 0xFFF9, 0x2009, 0x0001, 0xFFD3, 0xFF84, 0x2809, 0x0004, 0xFE8B, 0xFFE6, 0x0801, 0x0003, 0x2003, 0x0001, 0x0035, 0x0011, 0x200F, 0x0001, 0x0047, 0x0012, 0x0067, 0xFFFA, 0xFE7D, 0xFFF3, 0x0000,
};
