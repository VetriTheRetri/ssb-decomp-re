/* AnimJoint data for relocData file 816 (FTDonkeyAnimCrouch) */
/* 768 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCrouch_joint1[10];
extern u16 dFTDonkeyAnimCrouch_joint2[10];
extern u16 dFTDonkeyAnimCrouch_joint4[10];
extern u16 dFTDonkeyAnimCrouch_joint5[40];
extern u16 dFTDonkeyAnimCrouch_joint6[16];
extern u16 dFTDonkeyAnimCrouch_joint7[10];
extern u16 dFTDonkeyAnimCrouch_joint8[10];
extern u16 dFTDonkeyAnimCrouch_joint10[10];
extern u16 dFTDonkeyAnimCrouch_joint11[40];
extern u16 dFTDonkeyAnimCrouch_joint12[16];
extern u16 dFTDonkeyAnimCrouch_joint13[18];
extern u16 dFTDonkeyAnimCrouch_joint16[10];
extern u16 dFTDonkeyAnimCrouch_joint17[30];
extern u16 dFTDonkeyAnimCrouch_joint19[16];
extern u16 dFTDonkeyAnimCrouch_joint21[24];
extern u16 dFTDonkeyAnimCrouch_joint22[24];
extern u16 dFTDonkeyAnimCrouch_joint24[16];
extern u16 dFTDonkeyAnimCrouch_joint25[24];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimCrouch_joints[] = {
	(u32)dFTDonkeyAnimCrouch_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimCrouch_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimCrouch_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimCrouch_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimCrouch_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimCrouch_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimCrouch_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimCrouch_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimCrouch_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimCrouch_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimCrouch_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimCrouch_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimCrouch_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimCrouch_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimCrouch_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimCrouch_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimCrouch_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimCrouch_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimCrouch_joint1[10] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1032, -402,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 689, -524,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimCrouch_joint2[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -139, -35, -26,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimCrouch_joint4[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 750, 24, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 907, 22, 40,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimCrouch_joint5[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1671, -15, -1523, 25, 1134, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1855, -74, -1415, 17, 1367, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1901, 83, -1404, 79, 1300, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1687, 208, -1256, 64, 828, -401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1484, 203, -1275, -19, 498, -329,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimCrouch_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -170,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1299, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1222, 77,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimCrouch_joint7[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -822, -326, 86,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimCrouch_joint8[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -199, -78, 6,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimCrouch_joint10[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 61, 70, 29,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimCrouch_joint11[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1724, 41, 1436, -51, 1129, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1395, 123, 1295, 1, 1435, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1309, -95, 1310, -53, 1392, -318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1587, -254, 1188, -19, 799, -485,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1819, -231, 1272, 84, 422, -376,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimCrouch_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1352, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1269, 82,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimCrouch_joint13[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 623, 132, 278, 74, 210, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 893, 446, 268,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimCrouch_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -916, -1286, 2462, 127, 93, 134,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimCrouch_joint17[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -86, 24, -394, -4, -304, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 280, 62, -389, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -875, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1069, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 321, 40, -396, -6, -1166, -96,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimCrouch_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1004, 29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1310, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1327, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimCrouch_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -4, 24, -12, -377, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 37, 67, -204, -33, -258, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 95, 58, -218, -13, -251, 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimCrouch_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1508, -6, 1391, -5, -1906, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1608, -21, 1233, -56, -2465, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1625, -16, 1187, -46, -2533, -67,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimCrouch_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 993, 29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1287, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1306, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimCrouch_joint25[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1607, -13, -1713, -8, 1224, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1770, -36, -1793, 7, 1256, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1799, -28, -1779, 13, 1258, 1,
	ftAnimEnd(),
};
