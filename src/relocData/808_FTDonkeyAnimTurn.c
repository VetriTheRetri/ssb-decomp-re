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
extern u16 dFTDonkeyAnimTurn_joint24[106];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimTurn_joints[] = {
	(u32)dFTDonkeyAnimTurn_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimTurn_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimTurn_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimTurn_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimTurn_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimTurn_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimTurn_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimTurn_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimTurn_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimTurn_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimTurn_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimTurn_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimTurn_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimTurn_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimTurn_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimTurn_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimTurn_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimTurn_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF010F, /* [24] END */
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
u16 dFTDonkeyAnimTurn_joint24[106] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 994, -66,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 730, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 827, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 981, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 964, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1005, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, -11,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0007, 0x0000, 0x0067, 0x0024, 0xFE7D, 0x0005, 0x2805, 0x0005, 0x014B, 0xFFF5, 0x2803, 0x0006, 0xFF45, 0x0000, 0x2009, 0x0004, 0xFE21, 0xFF94, 0x2009, 0x0001, 0xFDA5, 0xFF99, 0x2809, 0x0002, 0xFDAC, 0x00A2, 0x2005, 0x0001, 0x0143, 0xFFFC, 0x2805, 0x0005, 0x0079, 0xFFE8, 0x2003, 0x0001, 0xFF60, 0xFFE2, 0x2803, 0x0002, 0xFEC7, 0x0031, 0x2009, 0x0001, 0xFE97, 0x00B7, 0x2809, 0x0003, 0xFEC9, 0xFFAD, 0x0801, 0x0001, 0x2003, 0x0001, 0xFF6A, 0x0092, 0x2003, 0x0001, 0xFFEB, 0x004F, 0x200F, 0x0001, 0x0007, 0x001D, 0x0067, 0xFFEF, 0xFE7D, 0xFFB5, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
