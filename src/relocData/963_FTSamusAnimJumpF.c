/* AnimJoint data for relocData file 963 (FTSamusAnimJumpF) */
/* 1056 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimJumpF_joint1[10];
extern u16 dFTSamusAnimJumpF_joint2[10];
extern u16 dFTSamusAnimJumpF_joint4[26];
extern u16 dFTSamusAnimJumpF_joint5[70];
extern u16 dFTSamusAnimJumpF_joint6[36];
extern u16 dFTSamusAnimJumpF_joint7[16];
extern u16 dFTSamusAnimJumpF_joint8[16];
extern u16 dFTSamusAnimJumpF_joint11[10];
extern u16 dFTSamusAnimJumpF_joint12[86];
extern u16 dFTSamusAnimJumpF_joint14[42];
extern u16 dFTSamusAnimJumpF_joint15[28];
extern u16 dFTSamusAnimJumpF_joint17[24];
extern u16 dFTSamusAnimJumpF_joint19[18];
extern u16 dFTSamusAnimJumpF_joint20[32];
extern u16 dFTSamusAnimJumpF_joint22[24];
extern u16 dFTSamusAnimJumpF_joint23[34];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimJumpF_joints[] = {
	(AObjEvent32 *)dFTSamusAnimJumpF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimJumpF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimJumpF_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimJumpF_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimJumpF_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimJumpF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimJumpF_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimJumpF_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimJumpF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimJumpF_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimJumpF_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimJumpF_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimJumpF_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimJumpF_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimJumpF_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimJumpF_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimJumpF_joint1[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1618, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 0, 1618, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimJumpF_joint2[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimJumpF_joint4[26] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTY), -151,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 40), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 10), -151,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 20), 151, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 151, -15,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimJumpF_joint5[70] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1005, -1587, 1187,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 1399, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), -1141, -22, -1434, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1163, -21, -1405, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1347, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1574, -25,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1444, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 2009, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1336, 9, 2034, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1381, -12, 2102, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1599, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1479, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1459, 19, -1390, -9, 2112, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimJumpF_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -877, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 40), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -962, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -979, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1136, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1151, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1169, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1171, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimJumpF_joint7[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -268, 0, 0, 425, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), -268, 0, 0, 425, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimJumpF_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimJumpF_joint11[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimJumpF_joint12[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -121, 0, 222, 0, 358, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -252, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 165, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 358, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 310, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -534, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -295, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -704, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 166, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 130, -17,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -533, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -450, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -707, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -732, 3,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -458, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -446, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -730, 2, 111, -18, -444, 2,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimJumpF_joint14[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -1157,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 40), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1156, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1132, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -871, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -893, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -882, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -847, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -883, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -878, 5,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimJumpF_joint15[28] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 2, 0, -280, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 29,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), 17, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -408, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, -42,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), -832,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 17, -9, -832,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimJumpF_joint17[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 1225,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 40), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 1087, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1063, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 1063,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1063,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTSamusAnimJumpF_joint19[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -8, 0, 12, 0, 288, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -4, 3, 328,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 3, 328,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimJumpF_joint20[32] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 0, -839, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -19,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), -17, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -706, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -685, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), -415,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -415,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -17, -3,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimJumpF_joint22[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 1066,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 40), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 802, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 782,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 782,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimJumpF_joint23[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 0, 23, 0, 342, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), -10, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 229, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 205, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 24), -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -10, 26, -15,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
