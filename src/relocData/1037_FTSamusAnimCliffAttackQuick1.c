/* AnimJoint data for relocData file 1037 (FTSamusAnimCliffAttackQuick1) */
/* 816 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCliffAttackQuick1_joint1[10];
extern u16 dFTSamusAnimCliffAttackQuick1_joint2[16];
extern u16 dFTSamusAnimCliffAttackQuick1_joint3[16];
extern u16 dFTSamusAnimCliffAttackQuick1_joint5[24];
extern u16 dFTSamusAnimCliffAttackQuick1_joint6[34];
extern u16 dFTSamusAnimCliffAttackQuick1_joint7[24];
extern u16 dFTSamusAnimCliffAttackQuick1_joint8[16];
extern u16 dFTSamusAnimCliffAttackQuick1_joint9[14];
extern u16 dFTSamusAnimCliffAttackQuick1_joint12[8];
extern u16 dFTSamusAnimCliffAttackQuick1_joint13[34];
extern u16 dFTSamusAnimCliffAttackQuick1_joint15[24];
extern u16 dFTSamusAnimCliffAttackQuick1_joint16[24];
extern u16 dFTSamusAnimCliffAttackQuick1_joint18[16];
extern u16 dFTSamusAnimCliffAttackQuick1_joint20[24];
extern u16 dFTSamusAnimCliffAttackQuick1_joint21[30];
extern u16 dFTSamusAnimCliffAttackQuick1_joint23[20];
extern u16 dFTSamusAnimCliffAttackQuick1_joint24[26];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTSamusAnimCliffAttackQuick1_joints[] = {
	(AObjEvent32 *)dFTSamusAnimCliffAttackQuick1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimCliffAttackQuick1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimCliffAttackQuick1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTSamusAnimCliffAttackQuick1_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffAttackQuick1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimCliffAttackQuick1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimCliffAttackQuick1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimCliffAttackQuick1_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimCliffAttackQuick1_joint12, /* [9] joint 12 */
	NULL, /* [10] NULL */
	NULL, /* [11] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffAttackQuick1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTSamusAnimCliffAttackQuick1_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffAttackQuick1_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTSamusAnimCliffAttackQuick1_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffAttackQuick1_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffAttackQuick1_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTSamusAnimCliffAttackQuick1_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffAttackQuick1_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTSamusAnimCliffAttackQuick1_joint1[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -795, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimCliffAttackQuick1_joint2[16] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1582, -240, 0, 83,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 15, 828, -665, 360, 155,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimCliffAttackQuick1_joint3[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 178, 42,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 419, -12,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimCliffAttackQuick1_joint5[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAX), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 178, -11, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 7), 0, -17, 0, -9, 0, -54,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 178, -11, 75,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimCliffAttackQuick1_joint6[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -137, 98, -207, -7, -258, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -79, 19, -202, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -294, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -135, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -17, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -54, 24, -210, -8, -69, -51,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimCliffAttackQuick1_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -67, 67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -45, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -352, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -440, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, 90,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimCliffAttackQuick1_joint8[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 290, -8, 0, -6, 0, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 42, -31, -7, -1, -97, 7,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimCliffAttackQuick1_joint9[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 69, 0, -1608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 68, 0, -5, 0, -1569, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimCliffAttackQuick1_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTSamusAnimCliffAttackQuick1_joint13[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 18, -131, -1, -282, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1, 22, -131, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -305, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -176, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -34, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 31, -138, -6, -120, -85,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimCliffAttackQuick1_joint15[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -5, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -269, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -454, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -266, 188,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimCliffAttackQuick1_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, 0, -41, 0, -171, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -17, -9, -59, -5, -208, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -28, -10, -65, -6, -193, 15,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimCliffAttackQuick1_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 100, 114,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 419, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 436, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimCliffAttackQuick1_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1559, 5, 1560, -1, -1348, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1573, 0, 1556, 0, -1540, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1572, -1, 1556, 0, -1577, -37,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimCliffAttackQuick1_joint21[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1611, 1, -1652, -4, 1482, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1708, -11, -1680, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 928, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 775, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1692, 16, -1655, 24, 468, -307,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimCliffAttackQuick1_joint23[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 338, 117,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1114, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1240, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1160, -79,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimCliffAttackQuick1_joint24[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1519, 12, -1690, 6, 1917, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1457, -50, -1595, 17, 1289, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1550, -92, -1580, 15, 1200, -89,
	ftAnimEnd(),
	0x0000, 0x0000,
};
