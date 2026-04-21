/* AnimJoint data for relocData file 1542 (FTCaptainAnimDamaged3) */
/* 1808 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDamaged3_joint1[40];
extern u16 dFTCaptainAnimDamaged3_joint2[48];
extern u16 dFTCaptainAnimDamaged3_joint4[48];
extern u16 dFTCaptainAnimDamaged3_joint5[68];
extern u16 dFTCaptainAnimDamaged3_joint6[40];
extern u16 dFTCaptainAnimDamaged3_joint7[16];
extern u16 dFTCaptainAnimDamaged3_joint8[28];
extern u16 dFTCaptainAnimDamaged3_joint10[10];
extern u16 dFTCaptainAnimDamaged3_joint11[66];
extern u16 dFTCaptainAnimDamaged3_joint12[28];
extern u16 dFTCaptainAnimDamaged3_joint13[38];
extern u16 dFTCaptainAnimDamaged3_joint14[10];
extern u16 dFTCaptainAnimDamaged3_joint16[34];
extern u16 dFTCaptainAnimDamaged3_joint17[72];
extern u16 dFTCaptainAnimDamaged3_joint19[32];
extern u16 dFTCaptainAnimDamaged3_joint21[80];
extern u16 dFTCaptainAnimDamaged3_joint22[76];
extern u16 dFTCaptainAnimDamaged3_joint24[36];
extern u16 dFTCaptainAnimDamaged3_joint25[84];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimDamaged3_joints[] = {
	(u32)dFTCaptainAnimDamaged3_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimDamaged3_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimDamaged3_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimDamaged3_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimDamaged3_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimDamaged3_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimDamaged3_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimDamaged3_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimDamaged3_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimDamaged3_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimDamaged3_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimDamaged3_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimDamaged3_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimDamaged3_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimDamaged3_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimDamaged3_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimDamaged3_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimDamaged3_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimDamaged3_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimDamaged3_joint1[40] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 1600, 110,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1732, 429, 7, 2,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -28,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -7, 20, 1866, -96, 2, -5,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 1600, 110,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimDamaged3_joint2[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 107, 0, 4, -76, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 149, 246, 0, 88, 0, 166,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 492, 62, 285, 51, 332, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 492, -48, 285, -17, 332, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 107, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimDamaged3_joint4[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, 0, -31, 47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 122, 34, 0, 144, 0, 192,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 258, 1, 0, 0, 4, 18, 96, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 136, -6, 19, -28, 64, -38,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 189, 0, -31, 47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimDamaged3_joint5[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1368, -402, -1614, 169, 1084, 378,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1296, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1771, -17, 1462, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1403, 187, 1170, -122,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1425, -32, 1321, 102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1278, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1408, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1459, -24, 1422, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1412, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1392, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1447, -102, 1375, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1368, 43, -1614, -166, 1084, -291,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDamaged3_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -180,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -977, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -495, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -499, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -523, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -575, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -641, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -966, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 168,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimDamaged3_joint7[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -515, -2, -333,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -460, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -515, -2, -333,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimDamaged3_joint8[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 360, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 97, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -165, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -54, 45,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimDamaged3_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 120, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimDamaged3_joint11[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -129, 149, 144, 142, 592, -540,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 511, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 291, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 51, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 14, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 29, 68,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 548, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 383, 110, 575, 12, 128, 131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 537, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 511, -78, 573, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 225, -320, 164, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, -354, 144, -20, 592, 54,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDamaged3_joint12[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1061, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1074, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1199, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1318, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 293,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimDamaged3_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 388, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 376, 43, 194, -24, 216, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 617, 9, 79, -12, 347, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 466, -94, 75, 53, 343, -77,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimDamaged3_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimDamaged3_joint16[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 107, 0, -79, 0, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 374, 0, -177, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -352, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -348, 25,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -174, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimDamaged3_joint17[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -369, 70, -408, -472, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, -173, -338, -114, -447, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -155, 98, -158, 136, -705, -160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -794, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 128, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 164, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 98, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -815, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -561, 96,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 137, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 168, 26, 63, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 22, 70, 6, -472, 89,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimDamaged3_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 578,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1023, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 811, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 728, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 588, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -142,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimDamaged3_joint21[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, 93, -42, 186, 80, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -55, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 27, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 143, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 100, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -22, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -227, -137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -235, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 148, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 84, -92,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -151, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -153, 44, -21, -27, 0, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -90, 17, 33, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -62, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -132, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, 5, -42, 48, 80, 46,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimDamaged3_joint22[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, -52, 110, -74, -76, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 107, 61, 35, 100, -38, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 283, 100, 311, 168, -294, -149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 365, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 443, 23, -327, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 462, 8, -301, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -183, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 354, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 394, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 223, -73,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -181, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 163, -122, -94, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, -62, 110, -53, -76, 17,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimDamaged3_joint24[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, -537,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 868, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 962, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 754, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 504, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, 37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimDamaged3_joint25[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 161, -204, 365, -283, -279, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -43, -42, 82, -190, -43, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 77, 71, -15, -158, 32, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -111, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -234, -111, 188, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -237, 4, 158, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -96, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -37, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -121, -6, -43, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -29, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 104, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 205, -181, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -39, 95, 314, 193, -249, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, 201, 365, 50, -279, -30,
	ftAnimEnd(),
};
