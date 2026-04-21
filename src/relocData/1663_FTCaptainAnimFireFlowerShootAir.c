/* AnimJoint data for relocData file 1663 (FTCaptainAnimFireFlowerShootAir) */
/* 2400 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimFireFlowerShootAir_joint1[50];
extern u16 dFTCaptainAnimFireFlowerShootAir_joint2[42];
extern u16 dFTCaptainAnimFireFlowerShootAir_joint4[56];
extern u16 dFTCaptainAnimFireFlowerShootAir_joint5[46];
extern u16 dFTCaptainAnimFireFlowerShootAir_joint6[24];
extern u16 dFTCaptainAnimFireFlowerShootAir_joint7[10];
extern u16 dFTCaptainAnimFireFlowerShootAir_joint8[50];
extern u16 dFTCaptainAnimFireFlowerShootAir_joint10[8];
extern u16 dFTCaptainAnimFireFlowerShootAir_joint11[164];
extern u16 dFTCaptainAnimFireFlowerShootAir_joint12[92];
extern u16 dFTCaptainAnimFireFlowerShootAir_joint13[72];
extern u16 dFTCaptainAnimFireFlowerShootAir_joint14[30];
extern u16 dFTCaptainAnimFireFlowerShootAir_joint16[20];
extern u16 dFTCaptainAnimFireFlowerShootAir_joint17[90];
extern u16 dFTCaptainAnimFireFlowerShootAir_joint19[40];
extern u16 dFTCaptainAnimFireFlowerShootAir_joint21[70];
extern u16 dFTCaptainAnimFireFlowerShootAir_joint22[116];
extern u16 dFTCaptainAnimFireFlowerShootAir_joint24[56];
extern u16 dFTCaptainAnimFireFlowerShootAir_joint25[114];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimFireFlowerShootAir_joints[] = {
	(u32)dFTCaptainAnimFireFlowerShootAir_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimFireFlowerShootAir_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimFireFlowerShootAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimFireFlowerShootAir_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimFireFlowerShootAir_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimFireFlowerShootAir_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimFireFlowerShootAir_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimFireFlowerShootAir_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimFireFlowerShootAir_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimFireFlowerShootAir_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimFireFlowerShootAir_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimFireFlowerShootAir_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimFireFlowerShootAir_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimFireFlowerShootAir_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimFireFlowerShootAir_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimFireFlowerShootAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimFireFlowerShootAir_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimFireFlowerShootAir_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimFireFlowerShootAir_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimFireFlowerShootAir_joint1[50] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1225, -1,
	ftAnimSetValBlock(FT_ANIM_TRAX), -55,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1456, 205, -54, -47,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), 228,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1456, 0, -54, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), 228,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -266, -37,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1456, -88, -308, 20,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), 228,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 1225, -1,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 20), -55,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimFireFlowerShootAir_joint2[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 240, 95, 49,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -214, -50, -107, -22, 107, 6,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -214, -107, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -214, 21, -107, 9, 107, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 240, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 95, 49,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimFireFlowerShootAir_joint4[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 242, -182, -12, 0, 47,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 270, 3, -340, -17, -47, -3, 0, 0, 47, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 270, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), -340, -47, 0, 47,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 11), 270, -1, -340, 7, -47, 1, 0, 0, 47, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 242, -182, -12, 0, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimFireFlowerShootAir_joint5[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 274, 15, -120, -14, -606, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -258, 3, -512, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 567, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 557, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 274, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -253, 5, -510, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -121, 1, -605, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 274, 0, -120, 0, -606, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimFireFlowerShootAir_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1109, -38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1368, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1371, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -1111, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimFireFlowerShootAir_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 191, -97, -323, 424, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimFireFlowerShootAir_joint8[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 113, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 26, 19, 288, 19, -66, -3,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 26, 0, 288, 0, -66, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 59, -161, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 26, 0, 288, -36, -66, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 21, -17, -299, -17, -17, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -153, 113, -38,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimFireFlowerShootAir_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimFireFlowerShootAir_joint11[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1742, -85, 1358, -22, 2237, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1656, -366, 1335, -91, 2257, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1010, -331, 1175, 96, 1721, -429,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 993, 14, 1529, 299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1038, 20, 1774, 122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1038, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1773, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1773, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1612, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1224, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1224, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1033, 113, 1234, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1264, 146, 961, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1327, 30, 1439, -74, 797, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1571, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1379, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 928, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1019, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1377, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1625, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1701, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1580, -124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1219, 96,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1601, 225, 1468, 140,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2055, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1658, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2023, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1988, -119, 1344, 67, 2278, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1816, -123, 1354, 7, 2289, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1742, -73, 1358, 3, 2237, -52,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimFireFlowerShootAir_joint12[92] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -631, -216,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -847, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1068, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -848, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -439, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -438, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -868, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1022, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -893, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -906, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -740, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -605, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -554, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -752, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1114, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1118, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1026, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -784, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 153,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimFireFlowerShootAir_joint13[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 167, 63,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 61, 7, 246, 8, -3126, -354,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 61, 0, 246, 0, -3126, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 59, 575,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 339, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 419, 282, 325, 1773,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 98, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 421, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 265, -25, 134, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 426, -6, -36, -6, 288, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -5, 167, 63,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimFireFlowerShootAir_joint14[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1538, -1003, 119,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 85, 49, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1424, -12, -949, 5, 115, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1424, 4, -949, -2, 115, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 1538, -1003, 119,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimFireFlowerShootAir_joint16[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 255, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -191, -210, -79,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 259, -32, 94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 255, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimFireFlowerShootAir_joint17[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 55, -39, 81, 4, -557, -127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -28, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 6, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -753, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -605, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -605, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -28, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -5, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -605, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -605, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -809, -111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -836, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 43, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 14, 19, -837, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 91, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -627, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -602, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, 11, 81, -9, -557, 44,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimFireFlowerShootAir_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 237, 285,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1125, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1209, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1209, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1213, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 740, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 694, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 369, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, -132,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimFireFlowerShootAir_joint21[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -2, -2, -1, 513, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 483, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -42, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -257, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -362, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -362, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -362, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -160, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -220, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -237, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 14, -6,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 491, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 512, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -8, -2, 0, 513, 1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimFireFlowerShootAir_joint22[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 65, 289, 16, -825, 160,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 345, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 257, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -228, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -79, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -79, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 345, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 345, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -79, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 345, -109, 257, 57, -79, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 126, -123, 372, 65, -451, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 98, -26, 388, 17, -486, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -83, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 406, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -509, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -659, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -820, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -84, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -26, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 379, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 300, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, 13, 289, -11, -825, -5,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimFireFlowerShootAir_joint24[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 875, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 599, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 436, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 436, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 436, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 436, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 436, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 971, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1009, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1034, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1032, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 906, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, -31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimFireFlowerShootAir_joint25[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, 18, -57, -1, -154, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 178, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -58, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 47, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 47, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 47, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 178, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 178, 56,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -58, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -10, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 131, 41, 291, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 303, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -185, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -32, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -143, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 301, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 3, -54,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -161, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 10, -10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -117, 24, -48, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -62, 8, -146, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, -12, -57, 4, -154, -7,
	ftAnimEnd(),
	0x0000, 0x0000,
};
