/* AnimJoint data for relocData file 605 (FTMarioAnimFireFlowerShoot) */
/* 3264 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimFireFlowerShoot_joint1[52];
extern u16 dFTMarioAnimFireFlowerShoot_joint2[72];
extern u16 dFTMarioAnimFireFlowerShoot_joint4[42];
extern u16 dFTMarioAnimFireFlowerShoot_joint5[158];
extern u16 dFTMarioAnimFireFlowerShoot_joint6[70];
extern u16 dFTMarioAnimFireFlowerShoot_joint7[10];
extern u16 dFTMarioAnimFireFlowerShoot_joint8[40];
extern u16 dFTMarioAnimFireFlowerShoot_joint10[18];
extern u16 dFTMarioAnimFireFlowerShoot_joint11[168];
extern u16 dFTMarioAnimFireFlowerShoot_joint12[70];
extern u16 dFTMarioAnimFireFlowerShoot_joint13[40];
extern u16 dFTMarioAnimFireFlowerShoot_joint15[14];
extern u16 dFTMarioAnimFireFlowerShoot_joint16[186];
extern u16 dFTMarioAnimFireFlowerShoot_joint18[86];
extern u16 dFTMarioAnimFireFlowerShoot_joint20[186];
extern u16 dFTMarioAnimFireFlowerShoot_joint21[146];
extern u16 dFTMarioAnimFireFlowerShoot_joint23[226];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimFireFlowerShoot_joints[] = {
	(u32)dFTMarioAnimFireFlowerShoot_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimFireFlowerShoot_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimFireFlowerShoot_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimFireFlowerShoot_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimFireFlowerShoot_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimFireFlowerShoot_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimFireFlowerShoot_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimFireFlowerShoot_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimFireFlowerShoot_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimFireFlowerShoot_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimFireFlowerShoot_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimFireFlowerShoot_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimFireFlowerShoot_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimFireFlowerShoot_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimFireFlowerShoot_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimFireFlowerShoot_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimFireFlowerShoot_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF02E7, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimFireFlowerShoot_joint1[52] = {
	ftAnimSetValAfter(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 3,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_TRAY), 223, 540,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 30), 223,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 30), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 5), 444,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 15), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 3), 408,
	ftAnimSetValT(FT_ANIM_TRAY, 22), 540,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 12), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimFireFlowerShoot_joint2[72] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), -71, -790, -95, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAY), 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -3, -524, -163,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), -65, 120,
	ftAnimSetValT(FT_ANIM_TRAZ, 5), 120,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -42,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -42,
	ftAnimSetValT(FT_ANIM_TRAX, 3), -65,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -3, -524, -163,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -3, -524, -163,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 43, -104,
	ftAnimSetValT(FT_ANIM_TRAZ, 5), 120,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -3, -524, -163,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), -54,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 0, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -71, -790, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimFireFlowerShoot_joint4[42] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 258, 110,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 154, 306, 181,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 154, 306, 181,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 306, 181,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 154,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -72,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -468,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 123, 306, 181,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimFireFlowerShoot_joint5[158] = {
	ftAnimSetValAfter(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, -36, -300, 117, -272, -20,
	ftAnimSetValBlock(FT_ANIM_SCAX), 4096,
	ftAnimSetValT(FT_ANIM_SCAX, 5), 5529,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 96, -19, -182, 144, -292, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 94, -33, -12, 164, -430, -180,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -77, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, 122, -652, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 231, 66, -727, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 278, 0, -766, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -197, -59,
	ftAnimSetValT(FT_ANIM_SCAX, 25), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -145, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -123, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -125, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 278, 0, -766, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -740, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 126, -44,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -130, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 72, 45,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -722, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -647, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 112, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 148, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 78, -72, -618, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -18, -87, -458, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -97, -74, -371, 76,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -272, -36, -237, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 128, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 105, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 27, -300, -27, -272, -35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimFireFlowerShoot_joint6[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -188,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -370, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -325, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -292, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -395, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -341, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 159,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimFireFlowerShoot_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimFireFlowerShoot_joint8[40] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -4, 176,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 200, -368, 244,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 200, -368, 244,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, -368, 244,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 200, -368, 244,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 485, -343, 43,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 200, -368, 244,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimFireFlowerShoot_joint10[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, -6, 139, 3, -209, -5,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -221, 139, -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimFireFlowerShoot_joint11[168] = {
	ftAnimSetValAfter(FT_ANIM_SCAZ), 4096,
	ftAnimSetVal0Rate(FT_ANIM_SCAY), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, -327, 551, 9, 65, -338,
	ftAnimSetValBlock(FT_ANIM_SCAX), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -108, -118, -537, -187,
	ftAnimSetValT(FT_ANIM_SCAX, 5), 5529,
	ftAnimSetValRateT(FT_ANIM_SCAY, 5), 4095, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 561, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 390, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -121, 17, 176, -179, -648, -107,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -22, 30, -841, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 31, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -34, 4,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 2), 4095,
	ftAnimSetValT(FT_ANIM_SCAX, 25), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -13, 0, -846, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -13, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -846, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 3), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -34, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 19, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_SCAY, 7), 4095, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -10, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -79, -24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_SCAY, 13), 4096, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -846, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -104, -17, 54, 49, -808, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 56, 104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 548, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -698, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -426, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -323, 116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -55, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 179, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 318, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, 125, 551, 3, 65, 120,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimFireFlowerShoot_joint12[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -735, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -271, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -92, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -352, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -608, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -826, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimFireFlowerShoot_joint13[40] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 45, 30, 250,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 45, 30, 250,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 60, 252,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 19, 51, -89,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 4, 54, -89,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 77, 254,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 625, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimFireFlowerShoot_joint15[14] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1608, 0,
	ftAnimSetValAfter(FT_ANIM_ROTY), -804,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1521, -86,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 23), 1608, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimFireFlowerShoot_joint16[186] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1473, 87, -1377, 63, -1563, -189,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1240, 82, -1928, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1560, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1658, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1659, 12, -1149, 59, -2019, -131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1124, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1684, 0, -2192, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1658, -45, -2239, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1594, -8, -2173, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1640, 48, -1116, 5, -2221, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1150, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1690, -65, -2269, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1509, -159, -2102, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1371, -80, -1220, -38, -1953, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1349, -23, -1228, -8, -1915, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1325, 38, -1238, 22, -1873, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1426, 84, -1182, 43, -2010, -101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2056, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1493, 47, -1150, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1424, -39, -1145, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2023, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1776, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1386, -33, -1149, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1360, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1260, -34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1754, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1594, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1390, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1467, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1296, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1356, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1473, 6, -1377, -20, -1563, 31,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimFireFlowerShoot_joint18[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 315,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 915, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 940, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 782, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 668, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 702, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 735, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 350, -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -175,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 282, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 459, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 571, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 524, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 333, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 330, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 456, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 467, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 441, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -40,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimFireFlowerShoot_joint20[186] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -211, -20, -67, 66, -190, -156,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 95, 122, -432, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -232, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -276, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -292, 24, 244, 139, -438, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 442, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -227, 58, -276, 158,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -165, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -121, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 451, 6, -38, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 457, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -181, -17, -57, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -200, 26, -77, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, 125, 454, -38, 270, 353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 51, 64, 380, -21, 629, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -58, 411, 30, 571, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -99, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 453, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 497, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -131, -32, 139, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -164, -14, 9, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -160, 4, 40, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -243, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 454, -5, 70, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 245, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 70, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 44, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -182, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -248, 0, 182, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -214, 5, -27, -41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -201, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -205, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -211, 2, -67, -40, -190, 15,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimFireFlowerShoot_joint21[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, -44, 187, 11, 35, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 179, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 145, 4, 161, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 165, 11, 274, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 168, 14, 232, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 194, 9, 154, -8, 247, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 172, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 180, -5, 245, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 175, 26, 249, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 233, 112, 171, 1, 42, -161,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 169, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 401, 44, -73, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 323, -71, -49, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 258, -55, -9, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 197, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 141, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 156, -9, 254, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 189, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 245, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 236, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 97, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 189, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 190, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 190, 1, 84, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 189, -1, 43, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 9, 187, -2, 35, -7,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimFireFlowerShoot_joint23[226] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 413, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 326, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 431, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 470, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 548, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 579, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 825, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 916, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 891, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 842, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 655, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 497, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 496, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 491, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 515, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 450, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -11,
	ftAnimEnd(),
	0x0000, 0x200E, 0x06A1, 0x0038, 0xFA16, 0xFFA5, 0x0573, 0xFFE3, 0x2807, 0x0003, 0x0732, 0x0015, 0xF93C, 0xFFDB, 0x2009, 0x0002, 0x054C, 0x0003, 0x2009, 0x0001, 0x055C, 0xFFF6, 0x2809, 0x0002, 0x0519, 0xFFE3, 0x2007, 0x0001, 0x0735, 0x0002, 0xF928, 0xFFEF, 0x2807, 0x0003, 0x0749, 0x0009, 0xF915, 0xFFFF, 0x0801, 0x0001, 0x2009, 0x0001, 0x04FD, 0xFFE5, 0x2809, 0x0002, 0x04C9, 0xFFC8, 0x0801, 0x0001, 0x2007, 0x0001, 0x0752, 0xFFC4, 0xF914, 0x0023, 0x200F, 0x0001, 0x06D0, 0xFF64, 0xF95D, 0x005B, 0x0472, 0xFFD3, 0x2809, 0x0002, 0x047B, 0x0011, 0x2007, 0x0001, 0x0618, 0xFFCA, 0xF9CB, 0x0020, 0x2007, 0x0001, 0x0664, 0x0048, 0xF99F, 0xFFD6, 0x200F, 0x0001, 0x06A9, 0x0041, 0xF976, 0xFFDB, 0x0491, 0x001B, 0x2805, 0x0004, 0xF928, 0x0004, 0x200B, 0x0002, 0x0719, 0x002D, 0x04D7, 0x002F, 0x200B, 0x0001, 0x0742, 0x000E, 0x0512, 0x001E, 0x280B, 0x0002, 0x0728, 0xFFF6, 0x0518, 0x0001, 0x0801, 0x0001, 0x2005, 0x0001, 0xF92C, 0x0007, 0x2805, 0x000C, 0xF9FB, 0x001A, 0x200B, 0x0001, 0x0720, 0xFFF8, 0x0517, 0x0000, 0x200B, 0x000B, 0x06AE, 0xFFF5, 0x0567, 0x000C, 0x200F, 0x0001, 0x06A1, 0xFFF4, 0xFA16, 0x001B, 0x0573, 0x000C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
