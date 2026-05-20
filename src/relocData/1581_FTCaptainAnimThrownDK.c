/* AnimJoint data for relocData file 1581 (FTCaptainAnimThrownDK) */
/* 1776 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimThrownDK_joint1[12];
extern u16 dFTCaptainAnimThrownDK_joint2[12];
extern u16 dFTCaptainAnimThrownDK_joint3[30];
extern u16 dFTCaptainAnimThrownDK_joint5[20];
extern u16 dFTCaptainAnimThrownDK_joint6[146];
extern u16 dFTCaptainAnimThrownDK_joint7[64];
extern u16 dFTCaptainAnimThrownDK_joint11[16];
extern u16 dFTCaptainAnimThrownDK_joint12[152];
extern u16 dFTCaptainAnimThrownDK_joint13[76];
extern u16 dFTCaptainAnimThrownDK_joint14[8];
extern u16 dFTCaptainAnimThrownDK_joint15[12];
extern u16 dFTCaptainAnimThrownDK_joint17[20];
extern u16 dFTCaptainAnimThrownDK_joint18[58];
extern u16 dFTCaptainAnimThrownDK_joint20[36];
extern u16 dFTCaptainAnimThrownDK_joint22[38];
extern u16 dFTCaptainAnimThrownDK_joint23[62];
extern u16 dFTCaptainAnimThrownDK_joint25[32];
extern u16 dFTCaptainAnimThrownDK_joint26[42];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTCaptainAnimThrownDK_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimThrownDK_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimThrownDK_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimThrownDK_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTCaptainAnimThrownDK_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTCaptainAnimThrownDK_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimThrownDK_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimThrownDK_joint11, /* [7] joint 11 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTCaptainAnimThrownDK_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimThrownDK_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimThrownDK_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimThrownDK_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTCaptainAnimThrownDK_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTCaptainAnimThrownDK_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTCaptainAnimThrownDK_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTCaptainAnimThrownDK_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTCaptainAnimThrownDK_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTCaptainAnimThrownDK_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTCaptainAnimThrownDK_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimThrownDK_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 1715, 541,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimThrownDK_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 1608, 0, 79, 58,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimThrownDK_joint3[30] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 101, 0, -15, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), -78,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -101, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 101, 0, -15, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -101, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 101, 0, -15, 0,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimThrownDK_joint5[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 168, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY), -51, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 1, 34,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 1, 0, -51, 1, 34, 0,
	ftAnimLoop(0x6800, -38),
};

/* Joint 6 */
u16 dFTCaptainAnimThrownDK_joint6[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1356, -32, -1108, 15, 1159, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1177, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -986, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1389, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1449, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1467, 70, 1137, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1308, 475, -898, 52, 936, -503,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -516, 559, -882, -36, 131, -560,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -189, 237, -971, -77, -184, -226,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1067, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -40, 167, -322, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 146, 212, -515, -222,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 602, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1109, -63, -767, -236,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1135, -115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1373, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 766, 138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1179, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1219, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1576, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1401, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1296, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1324, 170, -1214, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1116, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1520, 206, -1757, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1738, 169, -1952, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1860, 121, -1108, 8, -2057, -104,
	ftAnimLoop(0x6800, -288),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimThrownDK_joint7[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -479, -36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -516, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -590, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -654, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -619, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -686, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -898, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -929, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -859, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -844, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -756, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -649, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -533, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -479, 53,
	ftAnimLoop(0x6800, -126),
};

/* Joint 11 */
u16 dFTCaptainAnimThrownDK_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -965, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -965, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimThrownDK_joint12[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -131, -88, 1033, 10, -522, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1093, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -219, -128, -616, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -387, -156, -805, -175,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -629, -83, -1068, -84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1107, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1132, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -700, -77, -1135, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1321, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1111, -75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1196, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1227, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1363, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1458, -72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1182, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1437, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1553, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1123, -83, -1762, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1733, -287, 1059, -34, -2094, -309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2013, -231, 1054, -16, -2382, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2195, -208, 1026, -47, -2556, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2430, -341, 959, -50, -2792, -348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2877, -398, 924, 6, -3252, -413,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3227, -235, 973, 54, -3619, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3348, -120, 1033, 60, -3739, -120,
	ftAnimLoop(0x6800, -300),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimThrownDK_joint13[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -560, 35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -524, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -354, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -246, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -269, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -489, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -580, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -820, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -829, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -651, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -626, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -666, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, 76,
	ftAnimLoop(0x6800, -150),
};

/* Joint 14 */
u16 dFTCaptainAnimThrownDK_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 857, -125, 11,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -14),
};

/* Joint 15 */
u16 dFTCaptainAnimThrownDK_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimThrownDK_joint17[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 402,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 402,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 268,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimThrownDK_joint18[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1685, 0, 1632, 0, 1049, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1674, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1631, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 987, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1017, 15,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1677, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1685, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1032, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1044, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1685, 0, 1632, 0, 1049, 4,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimThrownDK_joint20[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 807, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 649, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 598, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 514, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 550, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 790, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 802, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, 4,
	ftAnimLoop(0x6800, -70),
};

/* Joint 22 */
u16 dFTCaptainAnimThrownDK_joint22[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1669, 0, 1580, 0, -1420, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 19), 1580,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -1420, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), -1663, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1666, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1668, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1669, 0, -1420, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1580,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimThrownDK_joint23[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -30, 0, 38, 0, -678, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -12, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 38, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -597, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -526, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -678, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -16, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -27, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -679, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -30, -2, 38, 0, -678, 0,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimThrownDK_joint25[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 521, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 726, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 729, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 655, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 612, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 535, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 521, -13,
	ftAnimLoop(0x6800, -62),
};

/* Joint 26 */
u16 dFTCaptainAnimThrownDK_joint26[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, 0, 64, 0, 219, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 19), 219,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 64, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 5, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 1, 64, 0, 219, 0,
	ftAnimLoop(0x6800, -70),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
