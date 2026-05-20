/* AnimJoint data for relocData file 1082 (FTSamusAnimAttackAirB) */
/* 2752 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimAttackAirB_joint1[62];
extern u16 dFTSamusAnimAttackAirB_joint2[56];
extern u16 dFTSamusAnimAttackAirB_joint4[92];
extern u16 dFTSamusAnimAttackAirB_joint5[156];
extern u16 dFTSamusAnimAttackAirB_joint6[58];
extern u16 dFTSamusAnimAttackAirB_joint7[54];
extern u16 dFTSamusAnimAttackAirB_joint8[16];
extern u16 dFTSamusAnimAttackAirB_joint11[22];
extern u16 dFTSamusAnimAttackAirB_joint12[152];
extern u16 dFTSamusAnimAttackAirB_joint14[44];
extern u16 dFTSamusAnimAttackAirB_joint15[136];
extern u16 dFTSamusAnimAttackAirB_joint17[58];
extern u16 dFTSamusAnimAttackAirB_joint19[76];
extern u16 dFTSamusAnimAttackAirB_joint20[162];
extern u16 dFTSamusAnimAttackAirB_joint22[76];
extern u16 dFTSamusAnimAttackAirB_joint23[110];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimAttackAirB_joints[] = {
	(AObjEvent32 *)dFTSamusAnimAttackAirB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimAttackAirB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimAttackAirB_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimAttackAirB_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimAttackAirB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimAttackAirB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimAttackAirB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimAttackAirB_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimAttackAirB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimAttackAirB_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimAttackAirB_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimAttackAirB_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimAttackAirB_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimAttackAirB_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimAttackAirB_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimAttackAirB_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimAttackAirB_joint1[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 3216, 1300, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, -4,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1300, -408, 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_TRAX, 40), 0, -4,
	ftAnimSetValAfterT(FT_ANIM_ROTZ, 50), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3736, -99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 2422, -93,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 891, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 891, 3,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 32), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 7), 2422,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_TRAY), -75, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 25), 0, -68, 1300, 19,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), 33,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimAttackAirB_joint2[56] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX, 16), 0,
	ftAnimSetValT(FT_ANIM_ROTY, 40), 0,
	ftAnimSetValAfterT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -670, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -158, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -158, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 0, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_ROTX, 14), 302,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 23, -145,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), -7,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimAttackAirB_joint4[92] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -21, 56,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 240, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 89, 0, -30, 0, 27, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 55, 363, 26,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 46, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 238, 0, 354, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 238, 0, 354, 1, 89, 0, -30, 0, 27, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 232, 0, -659, -14, -105, -28, -46, 2, -14, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 13), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 240, -2, 0, 38, 0, 0, 0, 54, -21, 17, 56, 23,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 176, 177, 3,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 43, 2, 49,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimAttackAirB_joint5[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -27, -5, 29, -105, 65, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 61, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 78, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -76, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -340, -232,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -598, 146,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -68, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 245, 92, -248, 135, -437, -159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -446, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 243, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -386, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -272, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -504, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -537, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 243, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 245, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 255, -37, -282, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -36, -53, 56, 59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -558, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -744, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -87, -48, 111, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -330, 21, 358, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -285, 94, 313, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 45, 19, -31, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -738, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -14, 57,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 38, -17, -38, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -29, 0, 43, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, 2, 29, 43, 65, 21,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimAttackAirB_joint6[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1046, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 40), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -888, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -689, 444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 344,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -376, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1093, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1090, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1060, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, 13,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimAttackAirB_joint7[54] = {
	ftAnimSetValAfter(FT_ANIM_ROTY), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 536, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 348, -268,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 424, 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY, 50), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -536, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -536, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 536, 35, 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 452, -11, -14,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 697, -168,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimAttackAirB_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimAttackAirB_joint11[22] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 47, -265, -23,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 38), 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 409, 114, -24,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimAttackAirB_joint12[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -562, -192, 279, 365, -258, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -755, -84, 645, 178, -581, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -731, -6, 636, -21, -570, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -710, 25, -532, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 514, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 582, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 630, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -670, 22, -479, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -438, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -665, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -647, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -612, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 631, -1, -451, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -408, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 293, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -626, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -689, 21, -452, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -365, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -584, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -582, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -300, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -594, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -577, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -578, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -596, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -603, 26, -300, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -542, 20, -249, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -562, -20, 279, -13, -258, -8,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimAttackAirB_joint14[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -985, 158,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 40), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -529, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -270, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -470, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -605, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -820, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -989, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimAttackAirB_joint15[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 31, -197, -51, -201, -566, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -165, -245, -253, 8, -809, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -459, -130, -35, 44, -444, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -426, 58, -164, -140, -516, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -342, 271, -315, -179, -602, -182,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1108, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 115, 175, -524, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 7, -133, -501, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -285, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -418, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1049, 90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -926, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -285, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 2, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -926, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1166, -28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -419, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -283, 55,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1193, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -624, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 52, -22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -228, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -70, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, -20, -51, 18, -566, 57,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimAttackAirB_joint17[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1329, -357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 40), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 971, -664,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -485,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 348, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 578, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 578, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 956, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1005, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1337, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimAttackAirB_joint19[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1573, 179, -1630, 23, 1657, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -1589, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), 1653, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1394, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1567, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1516, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1548, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1534, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1770, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1792, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1792, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), -1806, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1817, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1614, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1594, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1623, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1573, 41, -1630, -6, 1657, 3,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimAttackAirB_joint20[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, 179, 1569, -34, -2200, -394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1429, 7, 1534, 102, -2594, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1593, -167, 1775, 74, -2578, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1764, -422, 1684, -52, -2775, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2438, -114, 1669, -344, -2285, 377,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1381, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 994, -367, -2019, 418,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 934, -11, -1447, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1030, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1738, -88, -1917, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1558, 89, -1841, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1841, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1558, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1558, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1030, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1207, 115,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1558, -100, -1841, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1823, 27, -2254, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1704, 142, 1310, 81, -2320, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2293, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1427, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1472, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1479, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1606, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2298, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -2210, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1433, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 1559, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, -2, 1569, 9, -2200, 10,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimAttackAirB_joint22[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1100, -75,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 40), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1025, -309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 481, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 911, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 944, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 473, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 468, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 219, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 219, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 219, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 219, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 219, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 791, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 784, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 1094, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimAttackAirB_joint23[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1679, 267, 1544, -35, 1667, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1655, 172, 1693, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1411, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1661, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1796, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1380, 127, 1847, -20, 1790, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1587, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1542, 20, 1613, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1340, 62, 1438, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1528, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1454, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1571, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), 1650, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1533, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1494, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1458, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 1539, 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1504, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1702, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1691, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), -1686, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1679, 7, 1544, 4, 1667, 17,
	ftAnimEnd(),
};
