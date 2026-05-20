/* AnimJoint data for relocData file 2026 (FTPikachuAnimAttackAirN) */
/* 2928 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimAttackAirN_joint1[10];
extern u16 dFTPikachuAnimAttackAirN_joint2[46];
extern u16 dFTPikachuAnimAttackAirN_joint3[40];
extern u16 dFTPikachuAnimAttackAirN_joint5[32];
extern u16 dFTPikachuAnimAttackAirN_joint6[132];
extern u16 dFTPikachuAnimAttackAirN_joint7[46];
extern u16 dFTPikachuAnimAttackAirN_joint8[40];
extern u16 dFTPikachuAnimAttackAirN_joint9[10];
extern u16 dFTPikachuAnimAttackAirN_joint10[38];
extern u16 dFTPikachuAnimAttackAirN_joint11[38];
extern u16 dFTPikachuAnimAttackAirN_joint13[32];
extern u16 dFTPikachuAnimAttackAirN_joint14[148];
extern u16 dFTPikachuAnimAttackAirN_joint16[60];
extern u16 dFTPikachuAnimAttackAirN_joint17[154];
extern u16 dFTPikachuAnimAttackAirN_joint19[64];
extern u16 dFTPikachuAnimAttackAirN_joint21[152];
extern u16 dFTPikachuAnimAttackAirN_joint22[132];
extern u16 dFTPikachuAnimAttackAirN_joint24[56];
extern u16 dFTPikachuAnimAttackAirN_joint25[118];
extern u16 dFTPikachuAnimAttackAirN_joint26[64];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTPikachuAnimAttackAirN_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimAttackAirN_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimAttackAirN_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimAttackAirN_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimAttackAirN_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPikachuAnimAttackAirN_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPikachuAnimAttackAirN_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimAttackAirN_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimAttackAirN_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimAttackAirN_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimAttackAirN_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimAttackAirN_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPikachuAnimAttackAirN_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPikachuAnimAttackAirN_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPikachuAnimAttackAirN_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTPikachuAnimAttackAirN_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTPikachuAnimAttackAirN_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPikachuAnimAttackAirN_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTPikachuAnimAttackAirN_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTPikachuAnimAttackAirN_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTPikachuAnimAttackAirN_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimAttackAirN_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -26, 33, -28, 0, 1114, -108,
	ftAnimBlock(0, 37),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimAttackAirN_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 999, -124, 300,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 498, -609, 55, 251, 202, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -219, -421, 378, 264, 26, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -343, -15, 584, 8, -100, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -341, 35, 593, -20, -89, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 999, -124, 300,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimAttackAirN_joint3[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -173, 58, -73,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 277, 122, 16, -19, -20, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 194, -3, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 194, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 1, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -173, 58, -73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPikachuAnimAttackAirN_joint5[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 199, -70, 479,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 484, 84, -17, 15, 116, -107,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 484, -17, 116,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -67, -12, 85,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 199, -70, 479,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPikachuAnimAttackAirN_joint6[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1620, -28, -1551, -76, -2419, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1592, 276, -1627, -20, -2351, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2174, 51, -1592, 492, -2432, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1694, -174, -642, 487, -1510, 396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1824, 93, -618, 27, -1638, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -382, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 1931, 0, -1608, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1933, 1, -1594, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 1834, -43, -1644, 35,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -423, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -607, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1788, -67, -1602, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1390, -249, -1354, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1072, -582, -605, -18, -1327, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 225, -561, -644, 66, -875, 280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -49, -151, -472, 157, -767, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -75, 35, -807, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -20, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 11, 8, -56, 18, -811, -3,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimAttackAirN_joint7[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -758, 260,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -498, 374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 24), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -115, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -771, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -758, 12,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimAttackAirN_joint8[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -478, -335, -28,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 202, 228, -206, 59, -40, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 206, 0, -157, 1, -45, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 206, -157, -45,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -20, -5, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -478, -335, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimAttackAirN_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1598, -1559, 4035, 39, 48, 495,
	ftAnimBlock(0, 37),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimAttackAirN_joint10[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -132, 170, 229,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -132, 33, 170, -12, 229, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 199, -20, 47, -3, 282, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -472, -12, 110, 4, 316, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -132, 170, 229,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimAttackAirN_joint11[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, -171, -270,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -3, 3, -171, 43, -270, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 30, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 264, -384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -305, -1, -171, -16, -270, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -3, -171, -270,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimAttackAirN_joint13[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -469, 245, 91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -460, 2, 37, -61, 105, 4,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), -460, 37, 105,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -2, 48, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -469, 245, 91,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimAttackAirN_joint14[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, 360, 1485, -245, 717, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1164, -58, 1239, 38, 856, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 687, -575, 1563, -145, 1096, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13, -359, 948, -300, 362, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -31, -52, 961, 15, 318, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1231, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -273, -7, 60, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -274, 3, 56, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 8, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -370, -59,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1232, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1011, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -81, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -138, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -419, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -107, 285,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1010, 42, 247, 320,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1431, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 238, 182, 640, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 300, 66, 690, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 389, 103, 705, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 793, 20, 717, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1451, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1478, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 803, 9, 1485, 7, 717, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimAttackAirN_joint16[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -235, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -89, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -123, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -309, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -442, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -323, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 10,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimAttackAirN_joint17[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1606, -311, -1367, 9, 629, 396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1295, 163, -1358, 175, 1026, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1934, -61, -1016, -140, 1013, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1173, -377, -1640, -330, 1356, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1178, 5, -1678, -37, 1391, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1837, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 982, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1613, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1620, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1437, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1832, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1260, 59,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 988, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1199, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1200, 98, 1406, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1058, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1247, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1719, 324, 905, -182,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1729, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1035, 39, 882, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1037, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 832, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 797, -77,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1623, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1605, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1165, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1346, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 712, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1606, 1, -1367, -20, 629, -22,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimAttackAirN_joint19[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 932, -392,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 540, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 819, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 432, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 366, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 133, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 167, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 242, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 799, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 893, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 945, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimAttackAirN_joint21[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 230, 17, 39, 185, 585, -353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 248, -394, 225, 17, 232, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -558, -11, 75, -162, 195, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -109, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 425, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 224, 386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 213, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -93, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -116, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -142, -3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 430, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 283, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 253, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 41, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -76, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -63, -100,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -146, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -141, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -249, -146,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -267, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -163, 198, 50, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 255, 136, -215, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -155, 63, 110, -159, -96, 175,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 498, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -152, 95, -103, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 50, 175, -44, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 198, 90, 15, 42, 564, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 230, 32, 39, 23, 585, 21,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimAttackAirN_joint22[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 203, -265, 533, -61, 2436, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, -298, 472, -110, 2486, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -393, 100, 313, 70, 1960, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 139, 252, 612, 156, 2652, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 111, -31, 626, 13, 2634, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 600, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -512, 9, 2083, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -498, 18, 2090, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -229, 65, 2259, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -162, -93, 583, -60, 2295, -129,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -595, -88, 1813, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 479, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 234, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 636, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -593, 187, 1906, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -220, 297, 2270, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1, 146, 628, -15, 2412, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 543, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 134, 40, 2393, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 180, 34, 2418, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 203, 23, 533, -9, 2436, 17,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimAttackAirN_joint24[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 595, 361,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 957, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1053, -475,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -523,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 356, 493,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, 441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1157, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1108, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 653, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, -57,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimAttackAirN_joint25[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1866, 802, 1682, -98, -1330, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1063, 34, 1584, 168, -1522, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1797, -272, 2020, 30, -1655, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 101, 1645, -187, -1152, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1595, 12, 1644, 0, -1132, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -1615, -30, 1640, 5, -987, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1647, 26, 1646, 74, -1020, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 2024, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1286, 238, -1522, -457,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1085, -79, -2091, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1444, -205, 1754, -158, -1690, 240,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1694, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1497, -100, -1610, 84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1350, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1859, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1891, -7, 1693, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1874, 12, 1686, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1866, 8, 1682, -3, -1330, 20,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimAttackAirN_joint26[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -543, -164, -504,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 152, 94, -29, 18, -115, 52,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 25, -51, -190,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1, 15, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 144, 13, 77, 26, 27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 146, 5, 188, 0, -197, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 201, 0, 71, -18, -109, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 152, -43, -29, -13, -115, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -543, -164, -504,
	ftAnimEnd(),
	0x0000,
};
