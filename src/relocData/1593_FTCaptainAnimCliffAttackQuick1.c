/* AnimJoint data for relocData file 1593 (FTCaptainAnimCliffAttackQuick1) */
/* 1360 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCliffAttackQuick1_joint1[10];
extern u16 dFTCaptainAnimCliffAttackQuick1_joint2[36];
extern u16 dFTCaptainAnimCliffAttackQuick1_joint3[34];
extern u16 dFTCaptainAnimCliffAttackQuick1_joint5[40];
extern u16 dFTCaptainAnimCliffAttackQuick1_joint6[50];
extern u16 dFTCaptainAnimCliffAttackQuick1_joint7[24];
extern u16 dFTCaptainAnimCliffAttackQuick1_joint8[18];
extern u16 dFTCaptainAnimCliffAttackQuick1_joint9[26];
extern u16 dFTCaptainAnimCliffAttackQuick1_joint11[8];
extern u16 dFTCaptainAnimCliffAttackQuick1_joint12[34];
extern u16 dFTCaptainAnimCliffAttackQuick1_joint13[24];
extern u16 dFTCaptainAnimCliffAttackQuick1_joint14[12];
extern u16 dFTCaptainAnimCliffAttackQuick1_joint15[30];
extern u16 dFTCaptainAnimCliffAttackQuick1_joint17[26];
extern u16 dFTCaptainAnimCliffAttackQuick1_joint18[56];
extern u16 dFTCaptainAnimCliffAttackQuick1_joint20[32];
extern u16 dFTCaptainAnimCliffAttackQuick1_joint22[52];
extern u16 dFTCaptainAnimCliffAttackQuick1_joint23[52];
extern u16 dFTCaptainAnimCliffAttackQuick1_joint25[24];
extern u16 dFTCaptainAnimCliffAttackQuick1_joint26[40];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimCliffAttackQuick1_joints[] = {
	(u32)dFTCaptainAnimCliffAttackQuick1_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimCliffAttackQuick1_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimCliffAttackQuick1_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimCliffAttackQuick1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimCliffAttackQuick1_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimCliffAttackQuick1_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimCliffAttackQuick1_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimCliffAttackQuick1_joint9, /* [8] joint 9 */
	(u32)dFTCaptainAnimCliffAttackQuick1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimCliffAttackQuick1_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimCliffAttackQuick1_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimCliffAttackQuick1_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimCliffAttackQuick1_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimCliffAttackQuick1_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimCliffAttackQuick1_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimCliffAttackQuick1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimCliffAttackQuick1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimCliffAttackQuick1_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimCliffAttackQuick1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTCaptainAnimCliffAttackQuick1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimCliffAttackQuick1_joint1[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -795, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimCliffAttackQuick1_joint2[36] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 75, 1679, -600, 5, 147,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), 174, 264,
	ftAnimSetValRateT(FT_ANIM_TRAX, 7), 23, -35,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 1517, -761,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -761,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 1023, -1130,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1130, 264,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 880, -695, 206, -38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTCaptainAnimCliffAttackQuick1_joint3[34] = {
	ftAnimSetValAfter(FT_ANIM_TRAZ), 9,
	ftAnimSetValRate(FT_ANIM_ROTX), 178, 21,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 15, -68,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 328, -511,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -434, -10, 402, 6,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -865, -4,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimCliffAttackQuick1_joint5[40] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, -2, 0, 6, 0, -24,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 178, -11, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -55, -2, 154, 15,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 48, -31,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 11), -87,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 171,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 35, -74, -23, -43, 140, 4,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimCliffAttackQuick1_joint6[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1960, 15, -1592, 31, 1187, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1952, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1561, 65, 1207, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1461, 93, 1292, 85,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1255, 23, 1536, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1890, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1750, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1762, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1824, 62, -1234, 21, 1517, -18,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimCliffAttackQuick1_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -88, -73,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -161, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -392, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -739, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -694, 45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimCliffAttackQuick1_joint8[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 290, -2, 0, -9, 0, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 376, -33, 9, -2, -266, -12,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTCaptainAnimCliffAttackQuick1_joint9[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, 0, 0, 0, 0, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -253, 13, -51, -28, 173, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 28, 52, -260, -23, 126, 30,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimCliffAttackQuick1_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimCliffAttackQuick1_joint12[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1590, 6, 1540, -3, 1158, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1626, 3, 1504, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1191, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1265, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1309, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1631, 4, 1496, -8, 1316, 7,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimCliffAttackQuick1_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -120, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -330, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -630, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -633, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimCliffAttackQuick1_joint14[12] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -249, 118, -158,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 270, 275, 62,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTCaptainAnimCliffAttackQuick1_joint15[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, 0, -1003, 0, 119, 0, 85, 1, 49, 1, 38, -4,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 86, 0, 49, 0, 36, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 1538, -1003, 119,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimCliffAttackQuick1_joint17[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -312, -13, 83, -7, 38, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -391, 44, -166, 18, 72, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 88, 83, 251, 31, 330, 18,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimCliffAttackQuick1_joint18[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 12, 18, -41, -15, -171, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 41, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -149, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -224, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -251, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -923, -177,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 55, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 206, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -198, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -205, -3, -1041, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 357, 150, -205, 0, -1087, -46,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimCliffAttackQuick1_joint20[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 100, 235,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1115, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1267, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1330, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1354, 24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimCliffAttackQuick1_joint22[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1657, 29, -1656, 141, -1348, -228,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1959, -128,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1460, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1403, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1352, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1327, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2058, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2144, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1327, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1326, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1419, -92, -1332, -5, -2155, -10,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimCliffAttackQuick1_joint23[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 67, 44, 31, -146, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 112, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 140, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -273, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -366, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -707, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 114, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 124, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 124, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 36, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 183, 58, -62, -98, -870, -163,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimCliffAttackQuick1_joint25[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 377, 82,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 459, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 601, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1176, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1267, 91,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimCliffAttackQuick1_joint26[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1542, 9, 1526, -10, -1299, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1432, -21, -1518, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1568, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1554, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1567, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1569, 2, 1410, -21, -1585, -67,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
