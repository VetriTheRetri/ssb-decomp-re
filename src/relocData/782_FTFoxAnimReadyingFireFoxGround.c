/* AnimJoint data for relocData file 782 (FTFoxAnimReadyingFireFoxGround) */
/* 976 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimReadyingFireFoxGround_joint1[18];
extern u16 dFTFoxAnimReadyingFireFoxGround_joint2[18];
extern u16 dFTFoxAnimReadyingFireFoxGround_joint4[20];
extern u16 dFTFoxAnimReadyingFireFoxGround_joint5[32];
extern u16 dFTFoxAnimReadyingFireFoxGround_joint6[16];
extern u16 dFTFoxAnimReadyingFireFoxGround_joint7[18];
extern u16 dFTFoxAnimReadyingFireFoxGround_joint8[20];
extern u16 dFTFoxAnimReadyingFireFoxGround_joint10[14];
extern u16 dFTFoxAnimReadyingFireFoxGround_joint11[26];
extern u16 dFTFoxAnimReadyingFireFoxGround_joint12[16];
extern u16 dFTFoxAnimReadyingFireFoxGround_joint13[12];
extern u16 dFTFoxAnimReadyingFireFoxGround_joint15[12];
extern u16 dFTFoxAnimReadyingFireFoxGround_joint16[26];
extern u16 dFTFoxAnimReadyingFireFoxGround_joint18[16];
extern u16 dFTFoxAnimReadyingFireFoxGround_joint20[26];
extern u16 dFTFoxAnimReadyingFireFoxGround_joint21[26];
extern u16 dFTFoxAnimReadyingFireFoxGround_joint23[16];
extern u16 dFTFoxAnimReadyingFireFoxGround_joint24[26];
extern u16 dFTFoxAnimReadyingFireFoxGround_joint25[36];
extern u16 dFTFoxAnimReadyingFireFoxGround_joint26[42];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimReadyingFireFoxGround_joints[] = {
	(AObjEvent32 *)dFTFoxAnimReadyingFireFoxGround_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimReadyingFireFoxGround_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimReadyingFireFoxGround_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimReadyingFireFoxGround_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimReadyingFireFoxGround_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimReadyingFireFoxGround_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimReadyingFireFoxGround_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimReadyingFireFoxGround_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimReadyingFireFoxGround_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimReadyingFireFoxGround_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimReadyingFireFoxGround_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimReadyingFireFoxGround_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimReadyingFireFoxGround_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimReadyingFireFoxGround_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimReadyingFireFoxGround_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimReadyingFireFoxGround_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimReadyingFireFoxGround_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimReadyingFireFoxGround_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimReadyingFireFoxGround_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimReadyingFireFoxGround_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimReadyingFireFoxGround_joint1[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 912, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 912,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 912,
	ftAnimLoop(0x6800, -34),
};

/* Joint 2 */
u16 dFTFoxAnimReadyingFireFoxGround_joint2[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 0,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimReadyingFireFoxGround_joint4[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 156, 81,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -86, 185, 77,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -75, 156, 81,
	ftAnimLoop(0x6800, -38),
};

/* Joint 5 */
u16 dFTFoxAnimReadyingFireFoxGround_joint5[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1014, 3, -358, -26, 645, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1011, -3, 636, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -443, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -385, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1014, -3, -358, 26, 645, 8,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimReadyingFireFoxGround_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -251, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -248, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -251, -2,
	ftAnimLoop(0x6800, -30),
};

/* Joint 7 */
u16 dFTFoxAnimReadyingFireFoxGround_joint7[18] = {
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 269, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 31), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 8,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimReadyingFireFoxGround_joint8[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -228, 156, 75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -252, 118, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -228, 156, 75,
	ftAnimLoop(0x6800, -38),
};

/* Joint 10 */
u16 dFTFoxAnimReadyingFireFoxGround_joint10[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	_FT_ANIM_CMD(11, 0, 1), 8,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimReadyingFireFoxGround_joint11[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2462, -29, 1277, -2, 2238, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2432, 40, 1275, 3, 2214, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2462, 29, 1277, 2, 2238, 24,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimReadyingFireFoxGround_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -840, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -826, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -840, -14,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTFoxAnimReadyingFireFoxGround_joint13[12] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTZ), 268, 268,
	ftAnimSetValAfter(FT_ANIM_ROTY), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 268, 268,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimReadyingFireFoxGround_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimReadyingFireFoxGround_joint16[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1243, -2, -1376, -3, -1610, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1240, 3, -1380, 5, -1606, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1243, 2, -1376, 3, -1610, -4,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimReadyingFireFoxGround_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 349, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 337, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 349, 12,
	ftAnimLoop(0x6800, -30),
};

/* Joint 20 */
u16 dFTFoxAnimReadyingFireFoxGround_joint20[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, 0, 95, 0, -70, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -4, 0, 96, 0, -64, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 0, 95, 0, -70, -6,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimReadyingFireFoxGround_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1969, 1, -1717, 4, -1428, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1970, -1, -1713, -6, -1424, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1969, -1, -1717, -4, -1428, -4,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimReadyingFireFoxGround_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 294, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 280, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, 14,
	ftAnimLoop(0x6800, -30),
};

/* Joint 24 */
u16 dFTFoxAnimReadyingFireFoxGround_joint24[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 0, -98, 0, -242, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 23, 0, -98, 0, -234, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, 0, -98, 0, -242, -7,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimReadyingFireFoxGround_joint25[36] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 268, 73, 357, 15,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 223, 363,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 268, 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 223, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 268, -11, 357, -9, 0, 0,
	ftAnimLoop(0x6800, -70),
};

/* Joint 26 */
u16 dFTFoxAnimReadyingFireFoxGround_joint26[42] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 244, 0, 17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 168, -64,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -194, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 168, 64,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, -4, 0, 0,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
