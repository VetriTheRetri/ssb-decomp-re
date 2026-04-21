/* AnimJoint data for relocData file 866 (FTDonkeyAnimEggLayPulled) */
/* 800 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimEggLayPulled_joint1[24];
extern u16 dFTDonkeyAnimEggLayPulled_joint2[14];
extern u16 dFTDonkeyAnimEggLayPulled_joint3[16];
extern u16 dFTDonkeyAnimEggLayPulled_joint5[10];
extern u16 dFTDonkeyAnimEggLayPulled_joint6[24];
extern u16 dFTDonkeyAnimEggLayPulled_joint7[16];
extern u16 dFTDonkeyAnimEggLayPulled_joint8[8];
extern u16 dFTDonkeyAnimEggLayPulled_joint9[8];
extern u16 dFTDonkeyAnimEggLayPulled_joint11[12];
extern u16 dFTDonkeyAnimEggLayPulled_joint12[24];
extern u16 dFTDonkeyAnimEggLayPulled_joint13[16];
extern u16 dFTDonkeyAnimEggLayPulled_joint14[16];
extern u16 dFTDonkeyAnimEggLayPulled_joint17[10];
extern u16 dFTDonkeyAnimEggLayPulled_joint18[24];
extern u16 dFTDonkeyAnimEggLayPulled_joint20[20];
extern u16 dFTDonkeyAnimEggLayPulled_joint22[30];
extern u16 dFTDonkeyAnimEggLayPulled_joint23[30];
extern u16 dFTDonkeyAnimEggLayPulled_joint25[16];
extern u16 dFTDonkeyAnimEggLayPulled_joint26[30];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimEggLayPulled_joints[] = {
	(u32)dFTDonkeyAnimEggLayPulled_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimEggLayPulled_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimEggLayPulled_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimEggLayPulled_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimEggLayPulled_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimEggLayPulled_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimEggLayPulled_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimEggLayPulled_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimEggLayPulled_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimEggLayPulled_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimEggLayPulled_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimEggLayPulled_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimEggLayPulled_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimEggLayPulled_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimEggLayPulled_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimEggLayPulled_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimEggLayPulled_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimEggLayPulled_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTDonkeyAnimEggLayPulled_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimEggLayPulled_joint1[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1043, 132,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1043, -255, 0, -528,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -1,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 979, -156,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1004, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimEggLayPulled_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), -24, -522,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 12, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTDonkeyAnimEggLayPulled_joint3[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -265, 0, -41, 17, -16, -9,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimEggLayPulled_joint5[10] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 750, -22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 571,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimEggLayPulled_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -59, -84, -19, -473, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -241, -117, -109, -4, -103, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -356, -115, -114, -5, -14, 89,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimEggLayPulled_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -158,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -641, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -550, 90,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimEggLayPulled_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimEggLayPulled_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimEggLayPulled_joint11[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -398, -70,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 70, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -961, -133,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTDonkeyAnimEggLayPulled_joint12[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1492, 91, -1780, -49, 1129, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1742, 140, -1835, 15, 1558, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1865, 123, -1799, 35, 1678, 119,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimEggLayPulled_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -166,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -671, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -609, 61,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimEggLayPulled_joint14[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 98, 1, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimEggLayPulled_joint17[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTDonkeyAnimEggLayPulled_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -86, 0, -304, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -162, -71, -356, 33, -95, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -229, -66, -328, 28, 232, 327,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimEggLayPulled_joint20[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1004, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1055, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 817, -238,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimEggLayPulled_joint22[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -62, 0, 24, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -377,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -132, -107, -61, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, -146, -95, -33, -559, -22,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimEggLayPulled_joint23[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 99, 0, -297, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 216,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 168, -22, -233, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 99, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 88, 137, 172, 4, 156, 389,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimEggLayPulled_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 993, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1037, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 823, -213,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimEggLayPulled_joint26[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 105, -383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 121, 85, 161, 52, -465, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 172, 51, 210, 49, -593, -128,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
