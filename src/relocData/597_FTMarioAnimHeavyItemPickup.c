/* AnimJoint data for relocData file 597 (FTMarioAnimHeavyItemPickup) */
/* 3504 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimHeavyItemPickup_joint1[56];
extern u16 dFTMarioAnimHeavyItemPickup_joint2[84];
extern u16 dFTMarioAnimHeavyItemPickup_joint4[74];
extern u16 dFTMarioAnimHeavyItemPickup_joint5[168];
extern u16 dFTMarioAnimHeavyItemPickup_joint6[42];
extern u16 dFTMarioAnimHeavyItemPickup_joint7[8];
extern u16 dFTMarioAnimHeavyItemPickup_joint8[98];
extern u16 dFTMarioAnimHeavyItemPickup_joint10[34];
extern u16 dFTMarioAnimHeavyItemPickup_joint11[158];
extern u16 dFTMarioAnimHeavyItemPickup_joint12[66];
extern u16 dFTMarioAnimHeavyItemPickup_joint13[8];
extern u16 dFTMarioAnimHeavyItemPickup_joint15[10];
extern u16 dFTMarioAnimHeavyItemPickup_joint16[182];
extern u16 dFTMarioAnimHeavyItemPickup_joint18[68];
extern u16 dFTMarioAnimHeavyItemPickup_joint20[148];
extern u16 dFTMarioAnimHeavyItemPickup_joint21[170];
extern u16 dFTMarioAnimHeavyItemPickup_joint23[60];
extern u16 dFTMarioAnimHeavyItemPickup_joint24[146];
extern u16 dFTMarioAnimHeavyItemPickup_joint25[122];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTMarioAnimHeavyItemPickup_joints[] = {
	(AObjEvent32 *)dFTMarioAnimHeavyItemPickup_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimHeavyItemPickup_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimHeavyItemPickup_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimHeavyItemPickup_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimHeavyItemPickup_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimHeavyItemPickup_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimHeavyItemPickup_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimHeavyItemPickup_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimHeavyItemPickup_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimHeavyItemPickup_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimHeavyItemPickup_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimHeavyItemPickup_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimHeavyItemPickup_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimHeavyItemPickup_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimHeavyItemPickup_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimHeavyItemPickup_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimHeavyItemPickup_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimHeavyItemPickup_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTMarioAnimHeavyItemPickup_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimHeavyItemPickup_joint1[56] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 540, -12,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_TRAZ), 223, 0,
	ftAnimSetValT(FT_ANIM_TRAZ, 7), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), 0, 0, 535, -4,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetValT(FT_ANIM_ROTY, 36), 0,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -244,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 535, -1, -305, 59,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 0, 0, 531, -1, 209, 137,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 1, 531, 0, 209, -29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimHeavyItemPickup_joint2[84] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAZ), 0, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, 4, -790, 22, -95, 2,
	ftAnimSetValBlock(FT_ANIM_SCAY), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 35), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 2, 0, 22, 0, 2, -120, -137, 300, 400,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), -120, 53,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 300,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 300, -81,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 26, 24, 96, -151,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -44, -129, -174, -285,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -120, -383, -223, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -3, 0, -19, 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY, 2), -284, -223, 2293,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY, 3), -120, -223, 4096,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimHeavyItemPickup_joint4[74] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 14, 258, -5, 110, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 17), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 598, 38, 0, -25, 0, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 598, -36, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -9, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -169, -2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 9), 0, -46,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 534, 46, 0, 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), -104, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 534, -10, 0, 4, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), -104,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimHeavyItemPickup_joint5[168] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, 178, -300, 41, -272, -310,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -976, -81,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 5120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -93, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 449, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 386, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 307, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1021, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -849, 52,
	ftAnimSetValT(FT_ANIM_SCAX, 36), 5120,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -90, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -174, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 233, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 21, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -812, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -713, -23,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 8, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 189, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -165, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -125, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -754, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1421, -82,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 266, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 452, 505, -135, -63, -1508, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1276, 609, -252, -8, -1868, -519,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1699, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -152, 79, -2548, -409,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -91, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2687, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2739, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2712, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1723, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1694, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1687, -6, -93, -1, -2692, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimHeavyItemPickup_joint6[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, 173,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -143, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimHeavyItemPickup_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimHeavyItemPickup_joint8[98] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -32, -4, 0, 176, -2,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 293, -72, 8, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -697, -87, 0, 0, 0, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -670, 18, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 153, -2, -138, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -442, 4, 1, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), -1,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 0, 288, 54, 0, 55,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -595, 45, 3, 0, 1, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 327, 65, 4, 0, 2, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 288, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 327, -2, 4, 0, 2, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 288, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimHeavyItemPickup_joint10[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 11, 139, -8, -209, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 22, 0, -13, 0, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -9, 0, 7, 0, -4,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimHeavyItemPickup_joint11[158] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2773, -702, 551, -25, -3151, -763,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 5120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3475, -423, 526, -174, -3914, -534,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3619, -36, 202, -198, -4220, -158,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 94, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3514, 20, -4238, -3,
	ftAnimSetValT(FT_ANIM_SCAX, 36), 5120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3507, 1, -4237, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -3441, 38, -4139, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 88, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 165, -11,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3404, 27, -4062, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -3387, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -3928, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3924, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -4638, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 155, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 123, 6,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3432, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3536, -464, 133, 70, -4725, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4360, -660, 263, 9, -5076, -519,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4858, -259, 152, -84, -5765, -414,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 92, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4880, -16, -5904, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -4882, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5956, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -5929, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4881, 0, 93, 1, -5908, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimHeavyItemPickup_joint12[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 324,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, 405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 238,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -150, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimHeavyItemPickup_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimHeavyItemPickup_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 72, 0, 36,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimHeavyItemPickup_joint16[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, 64, -230, -25, 45, -134,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 26, 105, -288, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -323, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -452, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -76, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 189, 70, -206, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -54, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -276, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 149, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -331, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 36, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 224, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -214, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -252, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -311, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 196, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -156, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -278, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 69, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -257, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -255, -9,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 118, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -383, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -141, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 164, 81,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -261, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -203, 52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -482, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 263, 2, -133, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -47, -109, -389, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -378, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -414, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -50, 71, -351, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 95, 110, -267, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 170, 75, -200, 66, -435, -20,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimHeavyItemPickup_joint18[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 124,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 777, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 730, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 616, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 721, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 713, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 146, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 63, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 474, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 707, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 803, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 555, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 655, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 717, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimHeavyItemPickup_joint20[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1396, 0, 1619, 1, -1764, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1442, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1940, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1555, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1520, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1324, -69, 1723, 128,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1314, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1776, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1693, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1948, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1738, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1314, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 1404, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1741, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1653, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1682, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1606, 11,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1619, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1717, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1714, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1793, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1391, -22, 1627, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1316, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1770, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1592, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1368, 14, 1391, -73, -1731, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1355, 6, -1786, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1445, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1595, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1359, 3, 1705, 109, -1804, -17,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimHeavyItemPickup_joint21[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, 72, 187, 18, 35, -111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 254, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -359, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 281, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -32, -249,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -178, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 174, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 255, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -286, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -162, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -41, 30, 44, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -352, -131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -419, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 146, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 199, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -24, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -363, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 116, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 217, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 342, 28,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -512, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 115, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 72, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 62, -77, 360, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -82, -193, 277, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -323, -9, 69, 28, -473, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 221, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 335, 185, -560, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 439, 32, -327, 134,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 345, -50, -443, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 209, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 7, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, -73, 298, -47, -512, -69,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimHeavyItemPickup_joint23[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 664, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 493, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 717, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 684, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 230, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 193, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 538, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 586, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 794, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 757, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 489, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 638, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 707, 68,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimHeavyItemPickup_joint24[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1519, -69, 1702, 58, -1821, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1956, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1612, 76, 1794, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1435, 149, 1568, -197,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1281, 70, 1362, -88,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1972, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1800, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1178, 26, 1241, -34, -1635, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1303, -28, 1392, 41, -1690, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1328, -21, 1430, 33, -1698, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1626, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1493, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1686, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1684, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1721, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1667, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1622, -203,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1504, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1433, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1268, 12, 1343, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1495, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1697, 269, -1731, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1740, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1881, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1687, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1448, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1435, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1441, -6, 1633, -54, -1752, -12,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTMarioAnimHeavyItemPickup_joint25[122] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -409, 367, 877,
	ftAnimSetValBlock(FT_ANIM_ROTY), -223,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 467, 369, 1, 984, 110,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 7), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 3), 369,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0, 974, -12,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 369, 139, 974, -358,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 33), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -246, -31, 0, 0, 560, 159, 481, -428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -375, -32, 0, 0, 607, 292, 331, -435,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -804, -23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 852, 639, 45, -344,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 1407, -533, -99, -226,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 251, -2456, -209, -211,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -127, -231,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 251, -209,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
