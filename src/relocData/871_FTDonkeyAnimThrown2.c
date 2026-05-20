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
extern u16 dFTDonkeyAnimThrown2_joint25[20];
extern u16 dFTDonkeyAnimThrown2_joint26[38];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTDonkeyAnimThrown2_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimThrown2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimThrown2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimThrown2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTDonkeyAnimThrown2_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTDonkeyAnimThrown2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimThrown2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimThrown2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimThrown2_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTDonkeyAnimThrown2_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTDonkeyAnimThrown2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimThrown2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimThrown2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimThrown2_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTDonkeyAnimThrown2_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTDonkeyAnimThrown2_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTDonkeyAnimThrown2_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTDonkeyAnimThrown2_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTDonkeyAnimThrown2_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTDonkeyAnimThrown2_joint26, /* [25] joint 26 */
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
u16 dFTDonkeyAnimThrown2_joint25[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1016, -49,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 863, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 967, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1016, 49,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimThrown2_joint26[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -485, -10, -230, 32, 58, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -495, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -140, -42, 177, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -197, -44, 104, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -485, 10, -230, -32, 58, -46,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
