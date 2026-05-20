/* AnimJoint data for relocData file 1585 (FTCaptainAnimCliffCatch) */
/* 848 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCliffCatch_joint1[30];
extern u16 dFTCaptainAnimCliffCatch_joint2[16];
extern u16 dFTCaptainAnimCliffCatch_joint3[18];
extern u16 dFTCaptainAnimCliffCatch_joint5[10];
extern u16 dFTCaptainAnimCliffCatch_joint6[38];
extern u16 dFTCaptainAnimCliffCatch_joint7[16];
extern u16 dFTCaptainAnimCliffCatch_joint8[14];
extern u16 dFTCaptainAnimCliffCatch_joint11[10];
extern u16 dFTCaptainAnimCliffCatch_joint12[32];
extern u16 dFTCaptainAnimCliffCatch_joint13[16];
extern u16 dFTCaptainAnimCliffCatch_joint14[14];
extern u16 dFTCaptainAnimCliffCatch_joint15[10];
extern u16 dFTCaptainAnimCliffCatch_joint17[14];
extern u16 dFTCaptainAnimCliffCatch_joint18[24];
extern u16 dFTCaptainAnimCliffCatch_joint20[16];
extern u16 dFTCaptainAnimCliffCatch_joint22[24];
extern u16 dFTCaptainAnimCliffCatch_joint23[24];
extern u16 dFTCaptainAnimCliffCatch_joint25[16];
extern u16 dFTCaptainAnimCliffCatch_joint26[30];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTCaptainAnimCliffCatch_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimCliffCatch_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimCliffCatch_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimCliffCatch_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTCaptainAnimCliffCatch_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTCaptainAnimCliffCatch_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimCliffCatch_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimCliffCatch_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimCliffCatch_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTCaptainAnimCliffCatch_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimCliffCatch_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimCliffCatch_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimCliffCatch_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTCaptainAnimCliffCatch_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTCaptainAnimCliffCatch_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTCaptainAnimCliffCatch_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTCaptainAnimCliffCatch_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTCaptainAnimCliffCatch_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTCaptainAnimCliffCatch_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTCaptainAnimCliffCatch_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimCliffCatch_joint1[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -2457, -758,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -2536, -972, -687, 884,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -2700, -1240, -537, 1195,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -2846, -626, -388, 935,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -2857, 29, -303, 11,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimCliffCatch_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1582, -8, 0, -15,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTCaptainAnimCliffCatch_joint3[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, -241, -151,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -14, -241, 0, 357, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimCliffCatch_joint5[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimCliffCatch_joint6[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 49, 64, 199, -48, 1767, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -6, -179,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1577, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 114, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 360, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 557, 127, -208, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 615, 58, -304, -96, 1542, -35,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimCliffCatch_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimCliffCatch_joint8[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 828, -8, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 453, 0, 277, 4, 293, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimCliffCatch_joint11[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -268, -4,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimCliffCatch_joint12[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 137, -67, 76, 71, 635, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 429, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -126, -219, 373, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -369, -165, 48, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -456, -86, 441, 11, -86, -135,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimCliffCatch_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1102, -32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1114, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1070, 43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimCliffCatch_joint14[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 270, 12, 275, -2, 62, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTCaptainAnimCliffCatch_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimCliffCatch_joint17[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -15, 79, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -89, -5, 0, -13, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTCaptainAnimCliffCatch_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -104, -27, -9, -389, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -244, -40, 65, 70, -149, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -251, -7, 121, 56, -67, 82,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimCliffCatch_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 438, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 338, -99,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimCliffCatch_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 64, -48, 14, 259, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 39, -16, 31, 24, 259, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, -32, 48, 16, 259, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimCliffCatch_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 223, -136, 158, -16, -46, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -251, -69, 137, 33, -275, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -276, -24, 173, 36, -276, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimCliffCatch_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 439, 43,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 424, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 341, -82,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimCliffCatch_joint26[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -32, 62, 41, 6, 241, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 96, -20, 75, 9, 298, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 69, -27, 81, 6, 308, 10,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
