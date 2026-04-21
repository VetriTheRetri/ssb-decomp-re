/* AnimJoint data for relocData file 1574 (FTCaptainAnimCatch) */
/* 2096 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCatch_joint1[44];
extern u16 dFTCaptainAnimCatch_joint2[38];
extern u16 dFTCaptainAnimCatch_joint4[38];
extern u16 dFTCaptainAnimCatch_joint5[96];
extern u16 dFTCaptainAnimCatch_joint6[44];
extern u16 dFTCaptainAnimCatch_joint7[48];
extern u16 dFTCaptainAnimCatch_joint8[36];
extern u16 dFTCaptainAnimCatch_joint10[34];
extern u16 dFTCaptainAnimCatch_joint11[102];
extern u16 dFTCaptainAnimCatch_joint12[40];
extern u16 dFTCaptainAnimCatch_joint13[34];
extern u16 dFTCaptainAnimCatch_joint14[10];
extern u16 dFTCaptainAnimCatch_joint16[14];
extern u16 dFTCaptainAnimCatch_joint17[88];
extern u16 dFTCaptainAnimCatch_joint19[36];
extern u16 dFTCaptainAnimCatch_joint21[84];
extern u16 dFTCaptainAnimCatch_joint22[84];
extern u16 dFTCaptainAnimCatch_joint24[32];
extern u16 dFTCaptainAnimCatch_joint25[72];
extern u16 dFTCaptainAnimCatch_joint26[22];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimCatch_joints[] = {
	(u32)dFTCaptainAnimCatch_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimCatch_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimCatch_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimCatch_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimCatch_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimCatch_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimCatch_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimCatch_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimCatch_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimCatch_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimCatch_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimCatch_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimCatch_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimCatch_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimCatch_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimCatch_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimCatch_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimCatch_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimCatch_joint25, /* [24] joint 25 */
	(u32)dFTCaptainAnimCatch_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimCatch_joint1[44] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1406, -42, -211, 1036,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1557, 113, 188, 486,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), -104,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1548, 325, 397, 85,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1600, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimCatch_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 107, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 17, 711, -43, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 107, 0, -153, -101, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -10, -307, 26, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 107, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimCatch_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 189, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 194, 23, 119, -28, 47, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 329, 6, -172, -37, -197, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 264, -14, -259, 17, -51, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 189, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimCatch_joint5[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, -256, 5, -403, -524, 470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -17, -114, -397, -135, -53, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 11, 64, -264, 123, -9, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -442, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -351, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 72, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -83, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -128, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -259, -117, -448, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -274, 186, -505, -103,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -451, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -446, 179,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -42, 216, -611, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 239, 9, -496, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -189, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -29, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, 0, 5, 35, -524, -27,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimCatch_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -99,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -919, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -771, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -955, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1077, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1158, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1123, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -928, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 131,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimCatch_joint7[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2435, -89, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2435, -18, -89, 20, -388, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2326, -6, 33, 10, 731, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2366, 13, 14, -107, 808, -330,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -1560,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2420, 13, -60, -4, -356, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -89, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2435, -388,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimCatch_joint8[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 22, -604, 31, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 189, 99, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -13, 394, -18, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimCatch_joint10[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -49, -143, 8, 0, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -296, -23, 53, 28, -92, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -237, 29, 144, -5, -151, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimCatch_joint11[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1479, 246, 1464, -108, 2200, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1208, -44, 2072, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1725, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1739, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1687, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1485, -154, 1209, 42, 1826, -159,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1257, -149, 1640, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1276, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1168, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1057, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1042, -231, 1413, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 686, 176, 1130, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1019, 352, 1031, 51, 1499, 392,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1433, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1392, 237, 1915, 296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1493, 49, 2092, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1491, -7, 2176, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1479, -11, 1464, 31, 2200, 23,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimCatch_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, 522,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -502, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -750, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1215, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1206, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -988, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1015, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1025, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimCatch_joint13[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 49, 275, -21, 62, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 565, 38, 145, 3, -538, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 653, -29, 310, 13, -326, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimCatch_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimCatch_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 18, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), 0, 18, 0, -3,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimCatch_joint17[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -184, 70, 300, -472, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -596, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 6, -28, 370, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 134, 152, 355, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 349, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -266, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -566, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -449, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 169, -171,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 80, 81,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -254, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 54, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -475, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 149, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 182, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 8, 70, 15, -472, 3,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimCatch_joint19[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, -46,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 399, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 487, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 613, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 683, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 578, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 490, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimCatch_joint21[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1735, 249, 1650, -243, -1528, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1485, 23, 1407, -79, -1294, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1687, -188, 1491, 110, -1413, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1633, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1885, 93, 1798, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1751, 116, 1721, -85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1660, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1726, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1690, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1620, 65,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1687, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1663, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1737, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1737, 1, -1557, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1735, 2, 1650, -13, -1528, 28,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimCatch_joint22[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, 399, 110, 91, -76, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -157, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 560, 194, 201, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 548, -41, 158, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 131, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -189, -45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -249, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -49, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 109, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 179, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -213, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 144, 30,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, -30, -53, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 119, -17, -68, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 15, 110, -8, -76, -8,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimCatch_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 242,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 784, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 756, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 706, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 692, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 548, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimCatch_joint25[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 161, -53, 365, -102, 2937, -155,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 8, 41, -125, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2781, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2828, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2977, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 62, 54, -107, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 242, -4, 122, 97,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2968, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2946, -13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 223, -29, 232, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 184, -30, 326, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, -22, 365, 38, 2937, -9,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTCaptainAnimCatch_joint26[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 128, 698,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 1608, 0, 347,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -445, 1028,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 128, 698,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
