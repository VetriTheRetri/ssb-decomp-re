/* AnimJoint data for relocData file 871 (FTDonkeyAnimThrown2) */
/* 848 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimThrown2_joint1[10];
extern u16 dFTDonkeyAnimThrown2_joint2[12];
extern u16 dFTDonkeyAnimThrown2_joint3[16];
extern u16 dFTDonkeyAnimThrown2_joint5[12];
extern u16 dFTDonkeyAnimThrown2_joint6[24];
extern u16 dFTDonkeyAnimThrown2_joint7[16];
extern u16 dFTDonkeyAnimThrown2_joint8[8];
extern u16 dFTDonkeyAnimThrown2_joint9[8];
extern u16 dFTDonkeyAnimThrown2_joint11[8];
extern u16 dFTDonkeyAnimThrown2_joint12[24];
extern u16 dFTDonkeyAnimThrown2_joint13[16];
extern u16 dFTDonkeyAnimThrown2_joint14[16];
extern u16 dFTDonkeyAnimThrown2_joint17[10];
extern u16 dFTDonkeyAnimThrown2_joint18[44];
extern u16 dFTDonkeyAnimThrown2_joint20[20];
extern u16 dFTDonkeyAnimThrown2_joint22[38];
extern u16 dFTDonkeyAnimThrown2_joint23[32];
extern u16 dFTDonkeyAnimThrown2_joint25[58];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimThrown2_joints[] = {
	(u32)dFTDonkeyAnimThrown2_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimThrown2_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimThrown2_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimThrown2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimThrown2_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimThrown2_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimThrown2_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimThrown2_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimThrown2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimThrown2_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimThrown2_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimThrown2_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimThrown2_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimThrown2_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimThrown2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimThrown2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimThrown2_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimThrown2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF00C1, /* [25] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimThrown2_joint1[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1004, 1158,
	_FT_ANIM_CMD(11, 0, 1), 4,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimThrown2_joint2[12] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 12, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), -24, -522,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 12, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTDonkeyAnimThrown2_joint3[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, 78, -85,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -265, -41, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -268, 78, -85,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimThrown2_joint5[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 749,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 750,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 749,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimThrown2_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -393, 0, -143, 0, -18, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -393, 0, -143, 0, -19, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -393, 0, -143, 0, -18, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimThrown2_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -382, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -381, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -382, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimThrown2_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimThrown2_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimThrown2_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -932, 70, 29,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTDonkeyAnimThrown2_joint12[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1848, 0, -1755, 0, 1725, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1848, 0, -1755, 0, 1725, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1848, 0, -1755, 0, 1725, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimThrown2_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -552, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -551, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -552, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimThrown2_joint14[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 412, 34, -105, -11, 231, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 412, -34, -105, 11, 231, -25,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimThrown2_joint17[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTDonkeyAnimThrown2_joint18[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -727, -13, -430, -61, -87, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -598, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -808, -84, -75, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -908, 0, -7, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -740, 40, -96, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -492, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -727, 13, -430, 61, -87, 9,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimThrown2_joint20[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 717, 102,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 987, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 820, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 717, -102,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimThrown2_joint22[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 627, 45, -157, 14, 260, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -97, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 673, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 29, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 113, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -142, -30, 221, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 627, -45, -157, -14, 260, 39,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimThrown2_joint23[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 452, -4, 553, -50, -372, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 447, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 419, 64, -248, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 503, 67, -331, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 452, 4, 553, 50, -372, -40,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimThrown2_joint25[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1016, -49,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 863, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 967, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1016, 49,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFE1B, 0xFFF6, 0xFF1A, 0x0020, 0x003A, 0x002E, 0x2803, 0x0005, 0xFE11, 0x000B, 0x200D, 0x0004, 0xFF74, 0xFFD6, 0x00B1, 0xFFCC, 0x200D, 0x0001, 0xFF3B, 0xFFD4, 0x0068, 0xFFC5, 0x200F, 0x0001, 0xFE1B, 0x000A, 0xFF1A, 0xFFE0, 0x003A, 0xFFD2, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
