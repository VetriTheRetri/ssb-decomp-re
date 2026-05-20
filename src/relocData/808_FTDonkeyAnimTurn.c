/* AnimJoint data for relocData file 808 (FTDonkeyAnimTurn) */
/* 1232 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimTurn_joint1[36];
extern u16 dFTDonkeyAnimTurn_joint2[8];
extern u16 dFTDonkeyAnimTurn_joint4[16];
extern u16 dFTDonkeyAnimTurn_joint5[34];
extern u16 dFTDonkeyAnimTurn_joint6[32];
extern u16 dFTDonkeyAnimTurn_joint7[8];
extern u16 dFTDonkeyAnimTurn_joint8[18];
extern u16 dFTDonkeyAnimTurn_joint10[10];
extern u16 dFTDonkeyAnimTurn_joint11[32];
extern u16 dFTDonkeyAnimTurn_joint12[16];
extern u16 dFTDonkeyAnimTurn_joint13[12];
extern u16 dFTDonkeyAnimTurn_joint14[10];
extern u16 dFTDonkeyAnimTurn_joint16[20];
extern u16 dFTDonkeyAnimTurn_joint17[60];
extern u16 dFTDonkeyAnimTurn_joint19[32];
extern u16 dFTDonkeyAnimTurn_joint21[52];
extern u16 dFTDonkeyAnimTurn_joint22[64];
extern u16 dFTDonkeyAnimTurn_joint24[32];
extern u16 dFTDonkeyAnimTurn_joint25[74];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimTurn_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimTurn_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimTurn_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimTurn_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTurn_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimTurn_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimTurn_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimTurn_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimTurn_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTurn_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimTurn_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimTurn_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimTurn_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimTurn_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTurn_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimTurn_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTurn_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTurn_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimTurn_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTurn_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimTurn_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -29, 1031, -400,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 12), 1608, 400,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), -18, 14, 1292, 15,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 1043, 62,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), -18,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), -18, 63, 1339, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 29, 1031,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimTurn_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimTurn_joint4[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 750, 24, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 726, -7, -133,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 750, 24, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimTurn_joint5[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 0, -84, -4, -473, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), -66, 5, -82, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -524, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -366, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -451, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 3, -84, -2, -473, -22,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimTurn_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, 62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -185, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -147, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -685, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -786, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -447, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimTurn_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimTurn_joint8[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 210, 0, 231, 1, -243, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 166, -53, -76,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimTurn_joint10[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -356, 89, 54,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimTurn_joint11[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -115, 6, 172, 8, -479, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -93, -19, 202, -23, -449, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, -11, 180, -15, -470, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, -6, 172, -8, -479, -8,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimTurn_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -425, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimTurn_joint13[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 98, 0, 0, 700, 16, -9,
	_FT_ANIM_CMD(11, 0, 1), 290,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimTurn_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimTurn_joint16[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1046, 573,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -321, -264, -306,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -404, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimTurn_joint17[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -60, 64, -392, 37, -329, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -230, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 23, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 93, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 44, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -111, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -235, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -257, -80,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 59, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -217, -143,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -351, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, 50, -392, -41, -329, -111,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimTurn_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1026, 53,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1141, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1052, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 661, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 587, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 934, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, 91,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimTurn_joint21[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1721, -53, -1626, 28, 1238, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1898, 75, 1257, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1507, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1350, 102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1644, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1788, 82, 1187, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1728, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1251, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1226, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1721, 6, -1626, 18, 1238, 11,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimTurn_joint22[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 104, 31, 217, -17, -295, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 512, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 201, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -74, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -122, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -352, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 568, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 296, -164,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 270, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 236, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 145, -96, -336, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, -41, 217, -19, -295, 40,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimTurn_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 994, -66,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 730, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 827, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 981, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 964, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1005, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimTurn_joint25[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, 0, 103, 36, -387, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 331, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -187, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -479, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -603, -103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -596, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 323, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 121, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -160, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -313, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -361, 183,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -311, -83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -150, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -21, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 29, 103, -17, -387, -75,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
