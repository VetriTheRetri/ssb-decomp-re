/* AnimJoint data for relocData file 564 (FTMarioAnimThrowB) */
/* 3424 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimThrowB_joint1[28];
extern u16 dFTMarioAnimThrowB_joint2[34];
extern u16 dFTMarioAnimThrowB_joint4[84];
extern u16 dFTMarioAnimThrowB_joint5[124];
extern u16 dFTMarioAnimThrowB_joint6[30];
extern u16 dFTMarioAnimThrowB_joint7[12];
extern u16 dFTMarioAnimThrowB_joint8[86];
extern u16 dFTMarioAnimThrowB_joint10[18];
extern u16 dFTMarioAnimThrowB_joint11[114];
extern u16 dFTMarioAnimThrowB_joint12[38];
extern u16 dFTMarioAnimThrowB_joint13[24];
extern u16 dFTMarioAnimThrowB_joint15[8];
extern u16 dFTMarioAnimThrowB_joint16[238];
extern u16 dFTMarioAnimThrowB_joint18[82];
extern u16 dFTMarioAnimThrowB_joint20[160];
extern u16 dFTMarioAnimThrowB_joint21[176];
extern u16 dFTMarioAnimThrowB_joint23[86];
extern u16 dFTMarioAnimThrowB_joint24[202];
extern u16 dFTMarioAnimThrowB_joint25[118];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimThrowB_joints[] = {
	(u32)dFTMarioAnimThrowB_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimThrowB_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimThrowB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimThrowB_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimThrowB_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimThrowB_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimThrowB_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimThrowB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimThrowB_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimThrowB_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimThrowB_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimThrowB_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimThrowB_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimThrowB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimThrowB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimThrowB_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimThrowB_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimThrowB_joint24, /* [23] joint 24 */
	(u32)dFTMarioAnimThrowB_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimThrowB_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 180, -119,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 540,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 10), 0, 178, 0, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), 8042, 314,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 35), -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 22), 8256, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimThrowB_joint2[34] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -68, 5, -798, 66, -97, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 1, 0, 17, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), 0, -1, 0, -13, 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -71, -790, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimThrowB_joint4[84] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 790, -22, 622, -51, 795, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 522, -40, 0, -23, 0, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -312, -24,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 39,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 40, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 40, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 42, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -536, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 71, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -268, 33, 96, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 208, 258, 110,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimThrowB_joint5[124] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096,
	ftAnimSetValRateBlock(FT_ANIM_SCAX), 6144, 75,
	ftAnimSetValRateT(FT_ANIM_SCAX, 48), 6144, -59,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX, 1), 2,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2554, -29, -155, 4, 2331, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), -143, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 39), -3026, 13, 2612, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3001, 52, 2595, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2732, 266,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2302, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -150, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -284, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2387, 318,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1858, 12,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 21), 4095,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2299, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 2639, 93,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1849, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -2018, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2143, -149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3026, -71,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2749, 116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2929, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -305, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3070, -28, -302, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3083, -12, -300, 2, 2944, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimThrowB_joint6[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -187, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 5,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimThrowB_joint7[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 8,
	ftAnimBlock(0, 67),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimThrowB_joint8[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 11, 0, 0, 0, 3, -23, 3, 283, 0, -49, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -3, 6, 136, 5,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 54), -1, 2, 287, 0, -3, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 27), 335, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 370, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 395, -39, 274, 0, 245, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 171, -35, -3, -122, 150, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 144, 22, -579, -68, -208, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 398, -4, -685, 7, -530, 23,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 99, -15, -495, 52, 47, 54,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimThrowB_joint10[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -3, 0, 2, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 67), -221, 139, -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimThrowB_joint11[114] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096,
	ftAnimSetValRateBlock(FT_ANIM_SCAX), 6144, 75,
	ftAnimSetValRateT(FT_ANIM_SCAX, 48), 6144, -59,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX, 1), 2,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, 7, 185, 0, -887, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 55), 180, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 39), -103, -3, -602, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -109, -13, -615, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -911, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -283, 2,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 21), 4095,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -914, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -880, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -279, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -335, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 186, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 371, 104,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -878, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 17, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -319, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 396, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 499, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 561, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, 47, 551, -9, 65, 48,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimThrowB_joint12[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 54), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -143, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -475, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -794, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimThrowB_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 759, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 625, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 625, 51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 625,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 37), 625,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimThrowB_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimBlock(0, 67),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimThrowB_joint16[238] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 920, 27, -1375, 53, -1261, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1341, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 1316, 56, -1768, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1367, 25, -1861, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1402, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1834, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1333, 9, -1838, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1662, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1467, -49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1440, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1317, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1275, -30, -1605, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1589, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1324, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1509, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1424, -12,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1583, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1933, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1313, -5, -1438, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1265, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1507, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1681, 149, -2197, -261,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1578, -225, -2664, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1323, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1446, -188,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1325, -181, -2562, 132,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1578, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1720, -183, -2398, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1912, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2420, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2412, 17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1898, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1394, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1633, -97, -2391, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2495, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1383, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1281, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1622, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2479, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2118, 162,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1319, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1317, -42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1635, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1443, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1950, 156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1571, 30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1355, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1472, 29, -1378, -23, -1557, 13,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimThrowB_joint18[82] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 276, 74,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 473, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 570, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 454, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 821, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 791, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 449, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 577, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 478, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 474, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 607, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 479, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 401, -21,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimThrowB_joint20[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -275, 28, -10, 9, -153, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -36, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -321, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -47, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -68, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -131, 41,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -51, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 48, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -88, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -215, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -342, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 20, 20,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -208, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -294, 60,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 83, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 394, -152,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 41, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 146, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -221, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -170, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -254, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -55, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -14, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -44, -87,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 227, -130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 26, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 131, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -155, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -140, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -289, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 13, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -20, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -247, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -214, 33, -20, 0, -158, -3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimThrowB_joint21[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1599, 57, 1326, 43, 1742, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1654, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1743, 10, 1401, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1740, -27, 1351, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1279, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1413, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1363, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1291, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1246, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1123, -67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1667, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1774, 36,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1054, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1083, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1296, 15, 1805, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1618, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 2019, -44,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1164, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1052, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1592, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1299, 13,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1966, -54, 1062, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1984, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1700, 49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1315, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1770, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1999, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1826, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1747, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 1640, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1768, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 1432, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1424, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1812, -9, 1420, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1807, -5, 1419, -1, 1637, -3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimThrowB_joint23[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 186, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 491, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 842, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 803, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 505, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 585, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 475, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 366, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 755, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 764, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 259, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 161, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 99, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 180, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 442, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 444, 1,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimThrowB_joint24[202] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 220, -29, -86, -19, 39, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 19, 182,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 127, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -132, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -117, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -73, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 222, 193,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 363, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 200, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 161, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 160, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 352, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -92, -76,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 195, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -43, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 170, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 204, 96,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -182, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -479, 35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -105, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -353, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -15, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -426, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -158, 125,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -260, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 196, -122,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -117, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -134, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -18, 144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 619, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 35, -149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 82, 24,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 611, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -86, -16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -161, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -213, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 102, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 87, -2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -98, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 86, 0, -103, -4, -213, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTMarioAnimThrowB_joint25[118] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 1608, 0, 600,
	ftAnimSetValBlock(FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 300,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 6), 981,
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -804, -48, 1608, -13,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 6), -95,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -528,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, -360, 102, 600, -78,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 5,
	ftAnimSetValRateT(FT_ANIM_TRAY, 17), 173, 177,
	ftAnimSetValT(FT_ANIM_TRAZ, 35), 600,
	ftAnimSetValRateT(FT_ANIM_TRAX, 35), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -707, 1, 1413, -9, 75, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -786, -2, 1471, 6, 61, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -759, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 1608, 0,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 7), 173,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -759, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 173, 222,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 480, 424,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -580,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 2405,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 22), 0, 1660, 3600,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -580, 1608, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
