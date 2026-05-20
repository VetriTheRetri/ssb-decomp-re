/* AnimJoint data for relocData file 964 (FTSamusAnimJumpB) */
/* 2224 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimJumpB_joint1[76];
extern u16 dFTSamusAnimJumpB_joint2[14];
extern u16 dFTSamusAnimJumpB_joint4[56];
extern u16 dFTSamusAnimJumpB_joint5[138];
extern u16 dFTSamusAnimJumpB_joint6[68];
extern u16 dFTSamusAnimJumpB_joint7[36];
extern u16 dFTSamusAnimJumpB_joint8[16];
extern u16 dFTSamusAnimJumpB_joint11[20];
extern u16 dFTSamusAnimJumpB_joint12[152];
extern u16 dFTSamusAnimJumpB_joint14[50];
extern u16 dFTSamusAnimJumpB_joint15[62];
extern u16 dFTSamusAnimJumpB_joint17[50];
extern u16 dFTSamusAnimJumpB_joint19[98];
extern u16 dFTSamusAnimJumpB_joint20[72];
extern u16 dFTSamusAnimJumpB_joint22[52];
extern u16 dFTSamusAnimJumpB_joint23[106];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimJumpB_joints[] = {
	(AObjEvent32 *)dFTSamusAnimJumpB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimJumpB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimJumpB_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimJumpB_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimJumpB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimJumpB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimJumpB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimJumpB_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimJumpB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimJumpB_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimJumpB_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimJumpB_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimJumpB_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimJumpB_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimJumpB_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimJumpB_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimJumpB_joint1[76] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1322, -23, 0, 37,
	ftAnimSetValBlock(FT_ANIM_TRAX), 1,
	ftAnimSetValT(FT_ANIM_TRAX, 61), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 756, -4, 25, 116,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 417,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 9), 1166,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 201, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), -194, -2,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 11), 767,
	ftAnimBlock(0, 5),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -68,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 13), 194, -14,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_TRAY, 12), 1128, 198,
	ftAnimBlock(0, 7),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 12,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), -8, -334,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 1163, 155,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 22), 0, 3,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 21), 1618,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimJumpB_joint2[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -182,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 61), -6433,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 61), 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimJumpB_joint4[56] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 18, -33,
	ftAnimSetValBlock(FT_ANIM_ROTX), -140,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 14, 0, 66, 15,
	ftAnimSetValAfterT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 61), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 130,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 47), 0, 14, 66,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 44), 130,
	ftAnimSetValT(FT_ANIM_ROTX, 8), 130,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 14, 66,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimJumpB_joint5[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1592, 265, -1574, -35, 663, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2380, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1610, 50, 698, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1472, 35, 908, 149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1616, -38,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), 1098,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2391, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 43), 2399, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1616, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 32), -1616,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1098,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), 1098,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1616, 34, 1098, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1460, 4, 781, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1456, 2, 778, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1031, 95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1330, 16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2398, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2028, -58,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1113, 68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1773, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2013, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1770, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1320, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1375, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1913, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2090, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1757, -13, -1390, -15, 2117, 26,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimJumpB_joint6[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 61), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -588, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -684, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -684, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), -684, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -684, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -625, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -487, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -455, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -490, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1049, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1127, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1177, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1171, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimJumpB_joint7[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -174, -8,
	ftAnimSetValAfterT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 61), 424, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -43, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), -330, -1, 0, 0, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -268, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimJumpB_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 61), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimJumpB_joint11[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 479, 6,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 4, 11, 0, -1,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 61), 480, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 61), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimJumpB_joint12[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -30, -279, 34, -35, -945, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -758, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 52, -927, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 139, 42, -779, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 8, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), -683,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -771, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), -771, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 8, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 8, 0,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -683,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 26), -683,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8, 33, -683, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 148, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -826, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -783, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -799, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 154, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 208, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -817, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -655, 91,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -797, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -451, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -556, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -439, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -476, -27, 217, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -701, -25, 114, -8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -430, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -427, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -730, -28, 111, -2, -444, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTSamusAnimJumpB_joint14[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 61), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -803, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -803, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 31), -803,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -803, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -463, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -455, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -877, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -877, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimJumpB_joint15[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 8, 1, -4, 2, -257, -407,
	ftAnimSetValRateT(FT_ANIM_ROTY, 58), -22, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 60), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1284, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1278, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), -1278, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1278, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1036, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1017, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -806, 2,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -28, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -35, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, -2, -40, -4, -805, 1,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimJumpB_joint17[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 489,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 61), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 739, 365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 980, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1412, 88,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 1412, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1412, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1172, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1160, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 1071, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1070, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTSamusAnimJumpB_joint19[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2, 17, 12, 6, 528, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -35, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 358, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -37, -346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -334, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -334, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 42), -334, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -35, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), -12, -4,
	ftAnimBlock(0, 30),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 6, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -14, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -334, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -131, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -19, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 24, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 221, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 290, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, 7, -14, 0, 315, 25,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimJumpB_joint20[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1600, -16, -1631, -6, 1350, -408,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), -1706,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 32), -1611,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 321, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 325, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), 325, 0,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 29), -1706,
	ftAnimBlock(0, 23),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1611,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -1617, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1706, 11, 325, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1621, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 657, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 710, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1222, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1622, 0, -1616, 1, 1226, 4,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimJumpB_joint22[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 252, 488,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 61), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 741, 364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 981, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1409, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1409, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 1409, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1409, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1150, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1142, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 789, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 785, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimJumpB_joint23[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -30, -50, -3, -8, 529, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -19, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 46), -25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 414, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -12, -374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 42, 31, -335, -161,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 42, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -335, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 42), -335, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 42, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), 42, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 42, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -74, 5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -25, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 84, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -335, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -125, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -56, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -3, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -122, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -31, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, -1, 86, 2, -28, 3,
	ftAnimEnd(),
};
