/* AnimJoint data for relocData file 886 (FTDonkeyAnimCliffEscapeQuick1) */
/* 848 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCliffEscapeQuick1_joint1[14];
extern u16 dFTDonkeyAnimCliffEscapeQuick1_joint2[28];
extern u16 dFTDonkeyAnimCliffEscapeQuick1_joint3[20];
extern u16 dFTDonkeyAnimCliffEscapeQuick1_joint5[18];
extern u16 dFTDonkeyAnimCliffEscapeQuick1_joint6[24];
extern u16 dFTDonkeyAnimCliffEscapeQuick1_joint7[16];
extern u16 dFTDonkeyAnimCliffEscapeQuick1_joint8[18];
extern u16 dFTDonkeyAnimCliffEscapeQuick1_joint9[12];
extern u16 dFTDonkeyAnimCliffEscapeQuick1_joint11[12];
extern u16 dFTDonkeyAnimCliffEscapeQuick1_joint12[24];
extern u16 dFTDonkeyAnimCliffEscapeQuick1_joint13[16];
extern u16 dFTDonkeyAnimCliffEscapeQuick1_joint14[18];
extern u16 dFTDonkeyAnimCliffEscapeQuick1_joint15[8];
extern u16 dFTDonkeyAnimCliffEscapeQuick1_joint17[12];
extern u16 dFTDonkeyAnimCliffEscapeQuick1_joint18[24];
extern u16 dFTDonkeyAnimCliffEscapeQuick1_joint20[16];
extern u16 dFTDonkeyAnimCliffEscapeQuick1_joint22[24];
extern u16 dFTDonkeyAnimCliffEscapeQuick1_joint23[24];
extern u16 dFTDonkeyAnimCliffEscapeQuick1_joint25[16];
extern u16 dFTDonkeyAnimCliffEscapeQuick1_joint26[28];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimCliffEscapeQuick1_joints[] = {
	(u32)dFTDonkeyAnimCliffEscapeQuick1_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimCliffEscapeQuick1_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimCliffEscapeQuick1_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimCliffEscapeQuick1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimCliffEscapeQuick1_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimCliffEscapeQuick1_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimCliffEscapeQuick1_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimCliffEscapeQuick1_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimCliffEscapeQuick1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimCliffEscapeQuick1_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimCliffEscapeQuick1_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimCliffEscapeQuick1_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimCliffEscapeQuick1_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimCliffEscapeQuick1_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimCliffEscapeQuick1_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimCliffEscapeQuick1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimCliffEscapeQuick1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimCliffEscapeQuick1_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimCliffEscapeQuick1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTDonkeyAnimCliffEscapeQuick1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimCliffEscapeQuick1_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -868, 2670, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 115, 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimCliffEscapeQuick1_joint2[28] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1032, -992, -275, 735,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), -24,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -77, 1022,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 908, -1068,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1068,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 970, 968,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1150, 1401, 108, 541,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTDonkeyAnimCliffEscapeQuick1_joint3[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, 114, -53, -5, -28, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -128, -1, 209, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 1593, 50,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimCliffEscapeQuick1_joint5[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 414, 71, 15, 3, 7, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 774, 35, 67, 3, 191, 11,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimCliffEscapeQuick1_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1805, 119, -1321, 14, 2025, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1542, 140, -1306, -21, 1718, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1404, 138, -1350, -43, 1520, -197,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimCliffEscapeQuick1_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1100, 99,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -870, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, 162,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimCliffEscapeQuick1_joint8[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -145, -19, -63, -1, -98, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -822, -27, -218, -6, -82, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTDonkeyAnimCliffEscapeQuick1_joint9[12] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 44), 174, -67, -44,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimCliffEscapeQuick1_joint11[12] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -724, -183, 91,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -286, -140, 81,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimCliffEscapeQuick1_joint12[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1579, -3, 1217, -33, 1858, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1605, 52, 1124, -78, 1862, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1680, 74, 1027, -96, 1844, -17,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimCliffEscapeQuick1_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1134, -26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1215, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1273, -58,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimCliffEscapeQuick1_joint14[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, 73, 446, 18, 178, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1323, 0, 428, -14, 253, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTDonkeyAnimCliffEscapeQuick1_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimCliffEscapeQuick1_joint17[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -404, 4,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTDonkeyAnimCliffEscapeQuick1_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1260, -45, -917, -10, 192, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1381, -82, -936, -8, 375, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1471, -90, -945, -8, 500, 124,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimCliffEscapeQuick1_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1189, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1169, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1147, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimCliffEscapeQuick1_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 377, -36, 9, 3, 41, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 299, -42, 17, 4, 47, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 256, -42, 22, 4, 50, 2,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimCliffEscapeQuick1_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1924, -3, -1807, 2, 416, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1929, 0, -1806, -3, 404, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1927, 2, -1811, -4, 402, -2,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimCliffEscapeQuick1_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1190, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1190, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1184, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimCliffEscapeQuick1_joint26[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1597, 1, -1478, 5, -1270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1596, 0, -1466, 7, -1269, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1596, 0, -1457, 8, -1267, 1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
