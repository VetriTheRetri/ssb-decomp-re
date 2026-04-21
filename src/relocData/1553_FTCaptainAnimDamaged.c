/* AnimJoint data for relocData file 1553 (FTCaptainAnimDamaged) */
/* 1504 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDamaged_joint1[44];
extern u16 dFTCaptainAnimDamaged_joint2[16];
extern u16 dFTCaptainAnimDamaged_joint4[26];
extern u16 dFTCaptainAnimDamaged_joint5[36];
extern u16 dFTCaptainAnimDamaged_joint6[24];
extern u16 dFTCaptainAnimDamaged_joint7[28];
extern u16 dFTCaptainAnimDamaged_joint8[16];
extern u16 dFTCaptainAnimDamaged_joint10[8];
extern u16 dFTCaptainAnimDamaged_joint11[120];
extern u16 dFTCaptainAnimDamaged_joint12[40];
extern u16 dFTCaptainAnimDamaged_joint13[12];
extern u16 dFTCaptainAnimDamaged_joint14[12];
extern u16 dFTCaptainAnimDamaged_joint16[8];
extern u16 dFTCaptainAnimDamaged_joint17[74];
extern u16 dFTCaptainAnimDamaged_joint19[32];
extern u16 dFTCaptainAnimDamaged_joint21[38];
extern u16 dFTCaptainAnimDamaged_joint22[64];
extern u16 dFTCaptainAnimDamaged_joint24[32];
extern u16 dFTCaptainAnimDamaged_joint25[72];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimDamaged_joints[] = {
	(u32)dFTCaptainAnimDamaged_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimDamaged_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimDamaged_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimDamaged_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimDamaged_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimDamaged_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimDamaged_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimDamaged_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimDamaged_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimDamaged_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimDamaged_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimDamaged_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimDamaged_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimDamaged_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimDamaged_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimDamaged_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimDamaged_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimDamaged_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimDamaged_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimDamaged_joint1[44] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), -6, -19,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 17, 1280, 156,
	ftAnimSetValBlock(FT_ANIM_ROTX), 2412,
	ftAnimSetValT(FT_ANIM_ROTX, 29), -804,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, -9, 1026, 0, 231, 135,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), 397, 90,
	ftAnimSetValRateT(FT_ANIM_TRAY, 14), 1324, 46,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), 0, 9, 387, -97,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 17, 1280, 156,
	ftAnimLoop(0x6800, -86),
};

/* Joint 2 */
u16 dFTCaptainAnimDamaged_joint2[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -66, 0, -84, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, -64,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimDamaged_joint4[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -415, -221, 75, -1, 0, -76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 538, 165, -44, 80, -147, 183,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -415, -221, 75, -1, 0, -76,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimDamaged_joint5[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1073, -1, -1025, -1, -1266, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 28), 1072, 2, -1026, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -1387, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1368, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1268, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1073, 1, -1025, 1, -1266, 1,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDamaged_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1309, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -1203, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1220, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1307, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1309, -1,
	ftAnimLoop(0x6800, -46),
};

/* Joint 7 */
u16 dFTCaptainAnimDamaged_joint7[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), -402, 178, 0, 424, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 29), 424, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -555, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -402, 178, 0,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimDamaged_joint8[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -274, 446, -71,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -27, 24, 173,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -274, 446, -71,
	ftAnimLoop(0x6800, -30),
};

/* Joint 10 */
u16 dFTCaptainAnimDamaged_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTCaptainAnimDamaged_joint11[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1612, 11, 1238, -3, -849, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1031, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1310, 30, 1271, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1312, -60, 1246, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1756, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1257, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1310, -290,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2036, -61,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1829, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1780, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1301, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1174, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2080, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1436, 272,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1673, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1299, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1164, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1263, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1151, 253,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -836, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1331, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1602, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1234, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1236, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1612, -10, 1238, 2, -849, -12,
	ftAnimLoop(0x6800, -236),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDamaged_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -635, -30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1237, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1158, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -980, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1052, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1155, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1050, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -662, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, 26,
	ftAnimLoop(0x6800, -78),
};

/* Joint 13 */
u16 dFTCaptainAnimDamaged_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 592, -35, -292, 424, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimDamaged_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimDamaged_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 223, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTCaptainAnimDamaged_joint17[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 130, -1, -152, -3, -639, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -56, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -239, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -258, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -168, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -59, -62,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -76, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 125, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -232, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -153, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -123, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -538, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -590, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -626, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 130, 4, -152, 1, -639, -13,
	ftAnimLoop(0x6800, -144),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimDamaged_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 996, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1083, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1051, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 862, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 843, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 992, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 996, 4,
	ftAnimLoop(0x6800, -62),
};

/* Joint 21 */
u16 dFTCaptainAnimDamaged_joint21[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -1517, -6, -1699, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -1402,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 28), -1699,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -1402, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), -1608, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1595, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -1523, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1517, 5, -1402, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1699,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimDamaged_joint22[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 149, -7, 74, 1, -80, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -178, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 84, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -416, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -417, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -108, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -171, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 143, 12,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 82, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 75, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 149, 6, 74, 0, -80, 7,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimDamaged_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 462, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 540, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 519, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 535, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 468, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 462, -6,
	ftAnimLoop(0x6800, -62),
};

/* Joint 25 */
u16 dFTCaptainAnimDamaged_joint25[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1787, 11, 1504, 0, -1090, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -1223, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 1532, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -1418, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1416, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1642, -61,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1201, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1092, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1525, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1504, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1702, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1777, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1787, -10, 1504, 0, -1090, 1,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
