/* AnimJoint data for relocData file 879 (FTDonkeyAnimCliffQuick) */
/* 816 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCliffQuick_joint1[14];
extern u16 dFTDonkeyAnimCliffQuick_joint2[14];
extern u16 dFTDonkeyAnimCliffQuick_joint3[14];
extern u16 dFTDonkeyAnimCliffQuick_joint5[14];
extern u16 dFTDonkeyAnimCliffQuick_joint6[38];
extern u16 dFTDonkeyAnimCliffQuick_joint7[16];
extern u16 dFTDonkeyAnimCliffQuick_joint8[14];
extern u16 dFTDonkeyAnimCliffQuick_joint9[10];
extern u16 dFTDonkeyAnimCliffQuick_joint11[10];
extern u16 dFTDonkeyAnimCliffQuick_joint12[44];
extern u16 dFTDonkeyAnimCliffQuick_joint13[16];
extern u16 dFTDonkeyAnimCliffQuick_joint14[14];
extern u16 dFTDonkeyAnimCliffQuick_joint17[8];
extern u16 dFTDonkeyAnimCliffQuick_joint18[24];
extern u16 dFTDonkeyAnimCliffQuick_joint20[16];
extern u16 dFTDonkeyAnimCliffQuick_joint22[24];
extern u16 dFTDonkeyAnimCliffQuick_joint23[24];
extern u16 dFTDonkeyAnimCliffQuick_joint25[16];
extern u16 dFTDonkeyAnimCliffQuick_joint26[26];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTDonkeyAnimCliffQuick_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimCliffQuick_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimCliffQuick_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimCliffQuick_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTDonkeyAnimCliffQuick_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffQuick_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimCliffQuick_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimCliffQuick_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimCliffQuick_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTDonkeyAnimCliffQuick_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffQuick_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimCliffQuick_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimCliffQuick_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimCliffQuick_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffQuick_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTDonkeyAnimCliffQuick_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffQuick_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffQuick_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTDonkeyAnimCliffQuick_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffQuick_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimCliffQuick_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -3004, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), -868, 2403,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimCliffQuick_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 1032,
	ftAnimSetValRate(FT_ANIM_TRAZ), -399, -22,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), -24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1048, 113, -274, 117,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTDonkeyAnimCliffQuick_joint3[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 135, -52, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 17, 93, -53, 0, -28, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimCliffQuick_joint5[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -230, 17, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 414, 35, 15, 0, 7, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimCliffQuick_joint6[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -42, -17, -195, -10, -673, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -360, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -196, -72, -151, 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -258, 1, 189, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -194, 69, 312, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -119, 75, -305, 54, 294, -18,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimCliffQuick_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -911, -45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1108, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1003, 105,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimCliffQuick_joint8[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -258, -178, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -145, 8, -63, 5, -98, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimCliffQuick_joint9[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 393, 144, 74,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimCliffQuick_joint11[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -822, -174, 94,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -724, -183, 91,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimCliffQuick_joint12[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 52, -11, 107, 32, -656, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -225, 231,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -31, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 288, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 504, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 428, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 9, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 121, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -95, -63, 375, -53, 147, 26,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimCliffQuick_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -904, -41,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1135, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1061, 73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimCliffQuick_joint14[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, 178, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 893, 75, 446, 21, 178, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimCliffQuick_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTDonkeyAnimCliffQuick_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -72, -5, -543, -16, 2343, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 155, 187, -716, 1, 1974, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 348, 192, -691, 25, 1800, -174,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimCliffQuick_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1049, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1180, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1189, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimCliffQuick_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 158, 22, 9, 0, 41, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 387, 10, 9, 0, 50, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 377, -10, 9, 0, 41, -9,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimCliffQuick_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -196, -1, 248, 0, 2205, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -265, -41, 231, -24, 2026, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -50, 198, -33, 2024, -1,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimCliffQuick_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1083, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1166, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1190, 24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimCliffQuick_joint26[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1638, -5, 1738, 0, -1270, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1597, 10, 1741, -1, -1259, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1619, 21, 1738, -3, -1270, -11,
	ftAnimEnd(),
	0x0000, 0x0000,
};
