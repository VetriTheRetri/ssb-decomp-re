/* AnimJoint data for relocData file 587 (FTMarioAnimCliffEscapeSlow2) */
/* 3056 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCliffEscapeSlow2_joint1[22];
extern u16 dFTMarioAnimCliffEscapeSlow2_joint2[146];
extern u16 dFTMarioAnimCliffEscapeSlow2_joint3[52];
extern u16 dFTMarioAnimCliffEscapeSlow2_joint5[62];
extern u16 dFTMarioAnimCliffEscapeSlow2_joint6[158];
extern u16 dFTMarioAnimCliffEscapeSlow2_joint7[74];
extern u16 dFTMarioAnimCliffEscapeSlow2_joint8[28];
extern u16 dFTMarioAnimCliffEscapeSlow2_joint9[46];
extern u16 dFTMarioAnimCliffEscapeSlow2_joint11[116];
extern u16 dFTMarioAnimCliffEscapeSlow2_joint12[146];
extern u16 dFTMarioAnimCliffEscapeSlow2_joint13[54];
extern u16 dFTMarioAnimCliffEscapeSlow2_joint14[38];
extern u16 dFTMarioAnimCliffEscapeSlow2_joint16[10];
extern u16 dFTMarioAnimCliffEscapeSlow2_joint17[120];
extern u16 dFTMarioAnimCliffEscapeSlow2_joint19[46];
extern u16 dFTMarioAnimCliffEscapeSlow2_joint21[114];
extern u16 dFTMarioAnimCliffEscapeSlow2_joint22[98];
extern u16 dFTMarioAnimCliffEscapeSlow2_joint24[148];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimCliffEscapeSlow2_joints[] = {
	(u32)dFTMarioAnimCliffEscapeSlow2_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimCliffEscapeSlow2_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimCliffEscapeSlow2_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimCliffEscapeSlow2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimCliffEscapeSlow2_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimCliffEscapeSlow2_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimCliffEscapeSlow2_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimCliffEscapeSlow2_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimCliffEscapeSlow2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimCliffEscapeSlow2_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimCliffEscapeSlow2_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimCliffEscapeSlow2_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimCliffEscapeSlow2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimCliffEscapeSlow2_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimCliffEscapeSlow2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimCliffEscapeSlow2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimCliffEscapeSlow2_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimCliffEscapeSlow2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF02C5, /* [24] END */
};

/* Joint 1 */
u16 dFTMarioAnimCliffEscapeSlow2_joint1[22] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 2242,
	ftAnimSetValBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValT(FT_ANIM_TRAY, 64), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 31), 3600, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 26), 3600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 7), 3600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimCliffEscapeSlow2_joint2[146] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -536, 15, 0, 13, 0, 0, -300, 258,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 0, 419, 568,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 157, -225, 354, 78, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 315, 132, 172, 100, 583, 464,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 265, -159, -25, -98, 1006, 198,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 268, -77,
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, -134, -24, 15, 980, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 0, 5, 6, 778, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0, 0, 804, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 804,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 361,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 56,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 0, 346, -46,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 53), 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_TRAX, 16), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 268, 97,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 8, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 10), 223, 5, 0, -20, 540, 167,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 7), 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 534, -20,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 522, -12,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 22), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 521, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 17), 540,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTMarioAnimCliffEscapeSlow2_joint3[52] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAY), 0, -624, 600, -154,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), -7224, -12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 0, -436,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 53), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 0, -2, 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -95, -2,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 10), -71,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 29), -71, -95,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 29), -7224,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimCliffEscapeSlow2_joint5[62] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 63), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 28,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 759, -12, 0, -44,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 0, -94,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -804,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 0, 39,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 0, 28, 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 685, 5, 258, 6, 110, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 29), 208, 258, 110, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimCliffEscapeSlow2_joint6[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1631, -625, -954, 69, 1294, 637,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2839, -362, -1010, -147, 2506, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2982, -116, -1180, -145, 2624, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -3155, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1443, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 2927, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2918, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 2907, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3148, 32, 2906, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2672, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -2134, 136,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1454, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1266, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2608, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2126, -118,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1211, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1357, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2002, 121, 2006, -114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1428, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1336, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1245, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1250, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1428, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -1425, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1360, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -1309, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1250, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1240, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1432, -15, 1255, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1473, -3, 1332, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, -1, -1308, 1, 1336, 3,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimCliffEscapeSlow2_joint7[74] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -640, -111,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -589, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -207, 290,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -295, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -482, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -856, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -765, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -182, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 0, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -28, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -176, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimCliffEscapeSlow2_joint8[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -794, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), 0, 2, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 10,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 35),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -625, 0, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTMarioAnimCliffEscapeSlow2_joint9[46] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 288,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 58), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 23,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -5, 0, -7,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 5, -235, 0, 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 201, 3, -4, 4, 176, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 29), 201, -4, 176, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimCliffEscapeSlow2_joint11[116] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 54, 0, -18, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 87), 0, 54, -17,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 23,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -368, -13, 309, -2, -239, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -388, -14, 104, -37, -77, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -454, 131, 82, -21, 21, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -124, 227, 60, -41, 108, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -65, 0, -22, -122, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -255, -140, 15, 18, -95, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -280, -13, 37, 0, -151, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -311, 77, 19, -2, -33, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 108, 87, 23, 13, -24, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 124, -1, 88, 14, -231, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 99, -59, 107, 4, -300, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -348, -7, 125, 0, -301, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 38), -221, 139, -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimCliffEscapeSlow2_joint12[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 144, 52, -141, 29, -690, -148,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -65, -230,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 118, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1052, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1080, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -1103, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -334, -228,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -657, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 127, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 257, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -657, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -460, 73,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 276, 70, -1095, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 580, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -263, 122,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -376, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 372, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 613, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 506, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -153, 96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 154, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 414, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 466, -6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 502, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 551, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 154, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 66, -1,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 460, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 444, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, 0, 551, 0, 65, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimCliffEscapeSlow2_joint13[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -478, 190,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -288, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 144,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -234, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -815, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -816, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -811, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTMarioAnimCliffEscapeSlow2_joint14[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 1, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 625, 8,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 5,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 54), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 19), 908,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 625, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 29), 625, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimCliffEscapeSlow2_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 64),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimCliffEscapeSlow2_joint17[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -173, 97, -593, 141, 151, -123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -135, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -40, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 72, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 198, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -125, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -104, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -371, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -137, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -89, 23,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -39, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -208, -32,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -378, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -121, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 75, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 30, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 89, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -224, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -230, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -116, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -134, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 90, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 45, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, 0, -230, 0, 45, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimCliffEscapeSlow2_joint19[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 920, -78,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 505, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 147, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 22), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 375, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 401, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimCliffEscapeSlow2_joint21[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -408, -37, -107, 15, 20, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 616, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 137, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -150, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -93, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 80, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 629, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 590, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 139, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 10, -17,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 99, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -15, -68,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 542, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -156, -20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -84, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -231, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -4, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -11, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -169, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -156, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -231, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), -212, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 0, -11, 0, -156, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimCliffEscapeSlow2_joint22[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 67, 21, 48, -39, 120, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 151, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 192, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -179, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -71, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 123, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 249, 9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 40, 11,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 258, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 190, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 49, 33, 208, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), 187, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 35, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 29, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 35, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 190, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 200, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 0, 187, 0, 35, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimCliffEscapeSlow2_joint24[148] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 30), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 326, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 401, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 516, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 515, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 439, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 0,
	ftAnimEnd(),
	0x200E, 0x0767, 0xFFD3, 0xF8E5, 0x0000, 0x0856, 0xFFF6, 0x2809, 0x000F, 0x07E5, 0x0007, 0x2805, 0x001A, 0xF8FB, 0x0008, 0x2003, 0x0006, 0x0646, 0x0052, 0x2003, 0x0001, 0x06B0, 0x0052, 0x2003, 0x0007, 0x06F3, 0x0004, 0x2003, 0x0001, 0x06F5, 0x0003, 0x2803, 0x000E, 0x0690, 0xFFED, 0x2009, 0x0001, 0x07EC, 0x0006, 0x2809, 0x000D, 0x06D4, 0xFFA5, 0x0801, 0x000A, 0x2005, 0x0001, 0xF907, 0x000F, 0x2805, 0x000B, 0xF9D7, 0x0002, 0x0801, 0x0002, 0x200B, 0x0001, 0x0683, 0xFFFB, 0x0676, 0xFFA6, 0x2809, 0x000F, 0x0545, 0x0000, 0x2803, 0x0010, 0x06BF, 0x0000, 0x0801, 0x0008, 0x2005, 0x0001, 0xF9D9, 0x0002, 0x2805, 0x0018, 0xF9CC, 0x0000, 0x0801, 0x0006, 0x2009, 0x0001, 0x0545, 0x0000, 0x2809, 0x0011, 0x056D, 0x0000, 0x2003, 0x0001, 0x06BF, 0x0000, 0x2003, 0x0010, 0x06B0, 0x0000, 0x200F, 0x0001, 0x06B0, 0x0000, 0xF9CC, 0x0000, 0x056D, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
