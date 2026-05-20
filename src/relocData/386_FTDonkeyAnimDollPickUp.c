/* AnimJoint data for relocData file 386 (FTDonkeyAnimDollPickUp) */
/* 1280 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDollPickUp_joint1[10];
extern u16 dFTDonkeyAnimDollPickUp_joint2[40];
extern u16 dFTDonkeyAnimDollPickUp_joint3[44];
extern u16 dFTDonkeyAnimDollPickUp_joint5[20];
extern u16 dFTDonkeyAnimDollPickUp_joint6[60];
extern u16 dFTDonkeyAnimDollPickUp_joint7[24];
extern u16 dFTDonkeyAnimDollPickUp_joint8[16];
extern u16 dFTDonkeyAnimDollPickUp_joint9[10];
extern u16 dFTDonkeyAnimDollPickUp_joint11[12];
extern u16 dFTDonkeyAnimDollPickUp_joint12[66];
extern u16 dFTDonkeyAnimDollPickUp_joint13[16];
extern u16 dFTDonkeyAnimDollPickUp_joint15[16];
extern u16 dFTDonkeyAnimDollPickUp_joint17[14];
extern u16 dFTDonkeyAnimDollPickUp_joint18[52];
extern u16 dFTDonkeyAnimDollPickUp_joint20[14];
extern u16 dFTDonkeyAnimDollPickUp_joint22[34];
extern u16 dFTDonkeyAnimDollPickUp_joint23[82];
extern u16 dFTDonkeyAnimDollPickUp_joint25[16];
extern u16 dFTDonkeyAnimDollPickUp_joint26[42];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTDonkeyAnimDollPickUp_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimDollPickUp_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimDollPickUp_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimDollPickUp_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTDonkeyAnimDollPickUp_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDollPickUp_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimDollPickUp_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimDollPickUp_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimDollPickUp_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTDonkeyAnimDollPickUp_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDollPickUp_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimDollPickUp_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimDollPickUp_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDollPickUp_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDollPickUp_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTDonkeyAnimDollPickUp_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDollPickUp_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDollPickUp_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTDonkeyAnimDollPickUp_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDollPickUp_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimDollPickUp_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimDollPickUp_joint2[40] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 3481, 3481, 3481,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 595, 65, -2934,
	ftAnimSetValBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValT(FT_ANIM_TRAY, 100), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 595, 3, 65, 5, -2934, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 668, 5, 167, 5, -2941, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 80), 1089, -2, 594, -1, -2558, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTDonkeyAnimDollPickUp_joint3[44] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 12, -297,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -158, -588, -273,
	ftAnimSetValBlock(FT_ANIM_ROTX), -8,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -681, -82, -589, -54, -392, -125,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), -8,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 114), 109, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), -826, -16, -791, -19, -743, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 70), -186, 54, -825, 26, -634, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimDollPickUp_joint5[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 821, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 319, -157,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 120), 821, 2, 0, 0, 0, 0,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimDollPickUp_joint6[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1635, 0, -1603, 0, -2877, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 82), 1709, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 84), -2833, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 81), -1510, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1507, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1686, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1710, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1532, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2832, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -2888, -4,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1709, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1512, -20, -1728, -19, -2894, -5,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimDollPickUp_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 70), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimDollPickUp_joint8[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 15, 17,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 165), -744, -412, -43,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTDonkeyAnimDollPickUp_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 1354, 213,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimDollPickUp_joint11[12] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX, 120), 0,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTDonkeyAnimDollPickUp_joint12[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2043, 0, 1563, 0, -3081, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 82), 1660, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 90), -3040, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 80), -1855, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1849, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -2000, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1663, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1468, -18,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3040, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -3072, -3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2022, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2042, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2057, -15, 1451, -17, -3075, -3,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimDollPickUp_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -4, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 99), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTDonkeyAnimDollPickUp_joint15[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 103, 0, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 18, -13,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 165), 556, -66, -457,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimDollPickUp_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 1046, 573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 100), -404, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTDonkeyAnimDollPickUp_joint18[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -611, 0, -106, 0, -302, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 85), -395, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 98), 53, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 75), -779, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -790, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -780, 9,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -398, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -353, 6,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 55, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -771, 8, 60, 4, -347, 5,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimDollPickUp_joint20[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 99), 5, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimDollPickUp_joint22[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 410, 0, 65, 0, 665, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 99), -168, -3, 388, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 74), 549, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 559, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), 483, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 471, -11, -172, -3, 383, -5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimDollPickUp_joint23[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1463, 0, 1390, 0, -1822, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 80), 1546, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 88), -1908, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 61), -1454, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1441, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -960, 4,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1553, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1419, -34,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -956, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1421, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1909, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1872, 4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1386, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1331, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1592, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1730, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1823, -92, 1310, -20, -1867, 4,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimDollPickUp_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 99), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimDollPickUp_joint26[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -29, 0, -69, 0, 552, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 99), -87, 0, 390, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 64), -345, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -359, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), -696, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -675, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -288, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -248, 40, -87, 0, 386, -3,
	ftAnimEnd(),
};
