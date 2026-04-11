/* AnimJoint data for relocData file 1097 (FTSamusAnimScrewAttackGround) */
/* 2144 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimScrewAttackGround_joint1[20];
extern u16 dFTSamusAnimScrewAttackGround_joint2[224];
extern u16 dFTSamusAnimScrewAttackGround_joint3[10];
extern u16 dFTSamusAnimScrewAttackGround_joint5[36];
extern u16 dFTSamusAnimScrewAttackGround_joint6[110];
extern u16 dFTSamusAnimScrewAttackGround_joint7[48];
extern u16 dFTSamusAnimScrewAttackGround_joint8[18];
extern u16 dFTSamusAnimScrewAttackGround_joint9[10];
extern u16 dFTSamusAnimScrewAttackGround_joint12[10];
extern u16 dFTSamusAnimScrewAttackGround_joint13[86];
extern u16 dFTSamusAnimScrewAttackGround_joint15[48];
extern u16 dFTSamusAnimScrewAttackGround_joint16[68];
extern u16 dFTSamusAnimScrewAttackGround_joint18[38];
extern u16 dFTSamusAnimScrewAttackGround_joint20[84];
extern u16 dFTSamusAnimScrewAttackGround_joint21[80];
extern u16 dFTSamusAnimScrewAttackGround_joint23[134];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimScrewAttackGround_joints[] = {
	(u32)dFTSamusAnimScrewAttackGround_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimScrewAttackGround_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimScrewAttackGround_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimScrewAttackGround_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimScrewAttackGround_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimScrewAttackGround_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimScrewAttackGround_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimScrewAttackGround_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimScrewAttackGround_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimScrewAttackGround_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimScrewAttackGround_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimScrewAttackGround_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimScrewAttackGround_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimScrewAttackGround_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimScrewAttackGround_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimScrewAttackGround_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF01E8, /* [23] END */
};

/* Joint 1 */
u16 dFTSamusAnimScrewAttackGround_joint1[20] = {
	ftAnimSetVal(FT_ANIM_TRAY), 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 4), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 6659,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 5684, 533,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 36), 4772, -616,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimScrewAttackGround_joint2[224] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, -6, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1296, -697, 0, -23,
	ftAnimSetValT(FT_ANIM_TRAX, 50), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -112,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), -28, -26,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -17,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 593, -79,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 819,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -68,
	ftAnimSetValT(FT_ANIM_ROTX, 3), 4036,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 192, 394,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -123,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -177, 78,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 218, -137,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 953, -245,
	ftAnimSetValT(FT_ANIM_ROTX, 3), 7253,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 531, -19,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 945, 3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -223, 12,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 223, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 533, 22,
	ftAnimSetValT(FT_ANIM_ROTX, 3), 10470,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -228, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 956, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_ROTX, 4), 13687,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 218, 10,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -224, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 521, 24,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 966, 6,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 1804,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 215, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 526, -4,
	ftAnimSetValT(FT_ANIM_ROTX, 9), 16904,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 12,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), -223, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 960, 1,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 78,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 222, -39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 528, 1,
	ftAnimSetValT(FT_ANIM_ROTX, 12), 20121,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 143, -557,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -218, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 962, -18,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 14,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), 221, 33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 526, 0,
	ftAnimSetValT(FT_ANIM_ROTX, 12), 22518,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), -172, -524,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 817, 612,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 85,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 0, 337,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimScrewAttackGround_joint3[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 50), -62, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimScrewAttackGround_joint5[36] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAY, 4), 0,
	ftAnimSetValT(FT_ANIM_TRAX, 50), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 3), 122, 44,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 1), 209, 73,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 46), -33, 70,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 13), 209,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 25), 209,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 255,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimScrewAttackGround_joint6[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 476, -219, 114, -259, -227, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 147, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, -140, -212, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -167, 4, -104, 388,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 123, 302, 565, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 752, 314, -535, -550,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 752, 0, -535, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -8, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), 752, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -535,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), -535, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 35), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 752, -50, -8, -141,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 504, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -291, -167, -547, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -544, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -343, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -448, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 464, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 430, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 422, -7, -449, 0, -549, -4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimScrewAttackGround_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -742, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -912, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1093, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -790, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -790, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), -790, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -790, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -618, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -756, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -990, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1028, -38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimScrewAttackGround_joint8[18] = {
	ftAnimSetVal(FT_ANIM_ROTX), 701,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -178,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 38), -178,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), -268,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimScrewAttackGround_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimScrewAttackGround_joint12[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 50), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTSamusAnimScrewAttackGround_joint13[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -121, -128, 86, -215, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -120, -36, 65, 95, 285, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -333, 148, -69, 545, -542,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -787, -325, -73, -110, -800, -672,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -787, 0, -73, 0, -800, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 37), -800, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 36), -787, 0, -74, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -787, -15, -74, 146,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -804, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 218, 221, -791, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -602, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 369, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 277, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -800, 3, 266, -11, -592, 10,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimScrewAttackGround_joint15[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -298,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1078, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -729, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), -728, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -728, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -838, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -777, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -684, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -687, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimScrewAttackGround_joint16[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -14, -27, 14, -389, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), 11, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 41), 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -485, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -503, -395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1276, -386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1276, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), -1276, 0,
	ftAnimBlock(0, 29),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 11, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -11, -1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 20, 1, -1276, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 31, 0, -1078, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 32, 0, -13, -1, -1056, 22,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimScrewAttackGround_joint18[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 164,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 771, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 879, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1390, 255,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), 1390, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1379, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1306, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1293, -13,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimScrewAttackGround_joint20[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 19, -28, 22, -41, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -190, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 33), 128, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 34, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -72, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -72, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -190, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), -190, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -72, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -22, 9,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 138, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 168, -25,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -190, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -24, 29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 145, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 90, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 77, -13, -12, 9, 5, 30,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimScrewAttackGround_joint21[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1382, -89, 1447, 2, -1658, -167,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), 1621,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 14), -1628,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1976, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2116, -456,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2888, -385,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -2888,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), -2888, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1621,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), 1619, -6,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1628,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), -1656, 0,
	ftAnimBlock(0, 26),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2888, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2382, 107,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1611, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1601, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1656, 0, 1591, -10, -2276, 105,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimScrewAttackGround_joint23[134] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 199,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 782, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 885, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1391, 252,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1391,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 36), 1391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1391, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1459, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1447, -12,
	ftAnimEnd(),
	0x0000, 0x200E, 0x008E, 0xFFD7, 0x00C1, 0xFFC4, 0xFF2B, 0xFFFC, 0x2803, 0x0004, 0xFFDF, 0x0002, 0x2809, 0x000C, 0xFF5B, 0x0000, 0x2005, 0x0003, 0xFFF2, 0x000C, 0x2005, 0x0001, 0x0058, 0x0033, 0x2805, 0x0005, 0x0058, 0x0000, 0x2003, 0x0001, 0xFFDF, 0x0000, 0x2803, 0x0024, 0xFE64, 0xFFDD, 0x0801, 0x0004, 0x3805, 0x0001, 0x0058, 0x2805, 0x0027, 0x0057, 0x0000, 0x0801, 0x0002, 0x2009, 0x0001, 0xFF5B, 0x0000, 0x2809, 0x001D, 0xFF5B, 0x0009, 0x0801, 0x001C, 0x2003, 0x0001, 0xFE40, 0x002C, 0x2803, 0x0002, 0xFF17, 0x004D, 0x2009, 0x0001, 0xFF6E, 0x0012, 0x2809, 0x0006, 0xFFDC, 0x0011, 0x0801, 0x0001, 0x2003, 0x0001, 0xFF58, 0x0038, 0x2003, 0x0004, 0xFFE3, 0x0015, 0x200F, 0x0001, 0xFFF7, 0x0013, 0x0057, 0x0000, 0xFFED, 0x0011, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
