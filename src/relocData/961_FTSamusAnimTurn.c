/* AnimJoint data for relocData file 961 (FTSamusAnimTurn) */
/* 1280 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimTurn_joint1[28];
extern u16 dFTSamusAnimTurn_joint2[18];
extern u16 dFTSamusAnimTurn_joint4[28];
extern u16 dFTSamusAnimTurn_joint5[24];
extern u16 dFTSamusAnimTurn_joint6[14];
extern u16 dFTSamusAnimTurn_joint7[8];
extern u16 dFTSamusAnimTurn_joint8[10];
extern u16 dFTSamusAnimTurn_joint9[8];
extern u16 dFTSamusAnimTurn_joint11[8];
extern u16 dFTSamusAnimTurn_joint12[24];
extern u16 dFTSamusAnimTurn_joint14[14];
extern u16 dFTSamusAnimTurn_joint15[84];
extern u16 dFTSamusAnimTurn_joint17[44];
extern u16 dFTSamusAnimTurn_joint19[82];
extern u16 dFTSamusAnimTurn_joint20[92];
extern u16 dFTSamusAnimTurn_joint22[40];
extern u16 dFTSamusAnimTurn_joint23[68];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimTurn_joints[] = {
	(AObjEvent32 *)dFTSamusAnimTurn_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimTurn_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimTurn_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimTurn_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimTurn_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimTurn_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimTurn_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimTurn_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimTurn_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimTurn_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimTurn_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimTurn_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimTurn_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimTurn_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimTurn_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimTurn_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimTurn_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimTurn_joint1[28] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, -1,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 1600,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 1761, 223,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 9), 1608,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 1795, -143,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 1600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimTurn_joint2[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 142, 221,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimTurn_joint4[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -142, 35, -10, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimTurn_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2084, 0, 1493, 0, 1376, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 2085, -1, 1493, -1, 1375, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2084, 0, 1493, 0, 1376, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimTurn_joint6[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -736,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -736, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -736, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimTurn_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimTurn_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimTurn_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTSamusAnimTurn_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimTurn_joint12[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, 0, -127, 0, -216, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 59, -1, -128, 0, -216, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, -1, -127, 0, -216, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimTurn_joint14[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -593, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), -593,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -593, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimTurn_joint15[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 86, 13, -27, -26, -390, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -44, -36, -121, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -41, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -137, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 83, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -142, -58, -32, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -285, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -53, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 94, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -77, -25, -239, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 43, -2, -290, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -83, -27, -197, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -368, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -11, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 56, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 88, 31, -27, 26, -389, -21,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimTurn_joint17[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, -54,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 166, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 246, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 327, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 177, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 287, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 395, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 456, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 479, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimTurn_joint19[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, -57, -28, 27, -41, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 12, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -80, 64, 107, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4, -35, 69, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -152, -1, 124, -45, -28, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, 89, -20, -76, 149, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 4, -94, 28, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 86, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -28, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -162, -50, -61, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -85, 9, -3, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -76, 4, -19, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, 0, -29, -10, -42, -13,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimTurn_joint20[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 225, -23, 161, -59, -50, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -123, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 85, -150, 18, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -98, -77, 103, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 124, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -69, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -92, 13, -75, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -95, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -42, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -113, -11, 112, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 32, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, -53, -97, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, 66, -335, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 143, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 39, 57, -269, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 146, 93, -131, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 80, 160, 17, -49, 82,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimTurn_joint22[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 443, 31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 92, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 44, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 132, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 138, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 621, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 623, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 521, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -79,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimTurn_joint23[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, -76, 194, -49, -213, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 43, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -65, -15, 134, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -68, 0, 162, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -28, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 19, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 77, 86, -1, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -230, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -54, 36, 191, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 119, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 144, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 160, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 22, 193, 33, -213, 16,
	ftAnimEnd(),
};
