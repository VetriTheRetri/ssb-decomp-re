/* AnimJoint data for relocData file 1548 (FTCaptainAnimDamageFlyX1) */
/* 3088 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDamageFlyX1_joint1[60];
extern u16 dFTCaptainAnimDamageFlyX1_joint2[46];
extern u16 dFTCaptainAnimDamageFlyX1_joint4[62];
extern u16 dFTCaptainAnimDamageFlyX1_joint5[206];
extern u16 dFTCaptainAnimDamageFlyX1_joint6[92];
extern u16 dFTCaptainAnimDamageFlyX1_joint7[44];
extern u16 dFTCaptainAnimDamageFlyX1_joint8[42];
extern u16 dFTCaptainAnimDamageFlyX1_joint10[16];
extern u16 dFTCaptainAnimDamageFlyX1_joint11[160];
extern u16 dFTCaptainAnimDamageFlyX1_joint12[64];
extern u16 dFTCaptainAnimDamageFlyX1_joint13[30];
extern u16 dFTCaptainAnimDamageFlyX1_joint14[16];
extern u16 dFTCaptainAnimDamageFlyX1_joint16[22];
extern u16 dFTCaptainAnimDamageFlyX1_joint17[142];
extern u16 dFTCaptainAnimDamageFlyX1_joint19[72];
extern u16 dFTCaptainAnimDamageFlyX1_joint21[106];
extern u16 dFTCaptainAnimDamageFlyX1_joint22[130];
extern u16 dFTCaptainAnimDamageFlyX1_joint24[64];
extern u16 dFTCaptainAnimDamageFlyX1_joint25[118];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimDamageFlyX1_joints[] = {
	(u32)dFTCaptainAnimDamageFlyX1_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimDamageFlyX1_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimDamageFlyX1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimDamageFlyX1_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimDamageFlyX1_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimDamageFlyX1_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimDamageFlyX1_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimDamageFlyX1_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimDamageFlyX1_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimDamageFlyX1_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimDamageFlyX1_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimDamageFlyX1_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimDamageFlyX1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimDamageFlyX1_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimDamageFlyX1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimDamageFlyX1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimDamageFlyX1_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimDamageFlyX1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimDamageFlyX1_joint25, /* [24] joint 25 */
};

/* 4-byte alignment padding */
static u32 dFTCaptainAnimDamageFlyX1_pad[1] = { 0 };

/* Joint 1 */
u16 dFTCaptainAnimDamageFlyX1_joint1[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 1600, 0,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValT(FT_ANIM_ROTZ, 24), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), -72, -27, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 1709, 196, 0, -49,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), 0, 0, -49, -54,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 7), 1796,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 16), 0, 6, -156, 78,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 16), 1769,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -196,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -6, 17, 1280, 156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -804, 10,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 5), -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimDamageFlyX1_joint2[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 107, 0, 4, -76, 9,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 0, -84, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 114, -48, 0, -12, 2, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -386, -21, 3, 0, 99, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 3, -3,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), -386, 99,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 18, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -66, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimDamageFlyX1_joint4[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, 0, 0, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 508, -72, 1, 71, 0, -28, -5, 21, -150, 66, 139, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -389, -24, 573, 13, -226, 0, 21, 3, 34, 46, -102, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), -457, 1, 661, 0, -267, 3, 4, -8, -16, -13, -65, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -415, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -221, 75, -1, 0, -76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimDamageFlyX1_joint5[206] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, -115, 5, -200, -524, -335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 124, -84, -194, -164, -859, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 70, -107, -324, -105, -698, 215,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -113, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -91, -170, -406, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -269, -86, -412, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -263, 244, -478, -138, 187, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 219, 398, -690, -120, 222, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 534, 97, -719, -27, 104, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 414, -30, -744, -11, 285, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -676, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 473, 60, 245, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 61, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 534, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 696, 30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -644, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 728, 16, -579, 33, 30, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 25, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 732, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -577, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -570, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 20, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 53, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 731, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 676, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -592, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -660, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 601, -131, -706, -42, 116, 116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -720, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 414, -523, 285, 482,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -446, -508, 1081, 375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -603, -90, -572, 129, 1037, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -627, -3, -460, 33, 727, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -610, 46, -505, -61, 485, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -534, 75, -583, -77, 342, -143,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDamageFlyX1_joint6[92] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, 336,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -460, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -638, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -819, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -430, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -375, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -347, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -214, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -146, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -47, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -298, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -394, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1107, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1256, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1309, -53,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimDamageFlyX1_joint7[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), -781, -89, -388, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 424,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 101, 3, 0, 47, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -751, -32, 287, 1, -420, -2,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -653, 36, -67,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, -5, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -402, 178, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimDamageFlyX1_joint8[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, -108,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 360,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 29), 0, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -32, 1, 68, 0, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -259, -11, 545, 23, -171, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -259, 0, 545, -4, -171, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -274, 446, -71,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimDamageFlyX1_joint10[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 0, 0, 0, 120, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimDamageFlyX1_joint11[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1737, 44, 1464, 37, -1016, -1055,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1412, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1502, 9, -2071, -536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1483, -23, -2088, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1406, -77, -1992, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1276, 176, 1300, -114, -1845, 266,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -880, 106, -1077, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1177, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1207, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -845, 22, 1252, 14, -944, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -812, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1237, -6, -906, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1266, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -855, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -749, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -785, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -710, 18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1264, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1288, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -691, 17, -739, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -840, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -689, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -721, -57, 1316, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1146, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1400, 99, -907, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1514, 47, -924, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1495, -101, -842, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1447, -233, 1312, -128, -798, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1612, -165, 1238, -73, -849, -51,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDamageFlyX1_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, 174,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -849, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -854, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1072, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1081, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -939, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -951, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1012, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1128, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1141, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1067, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -910, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -728, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, 93,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimDamageFlyX1_joint13[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 267, -2, 271, -16, 60, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 236, -1, 102, -1, 336, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 236, 4, 102, -1, 336, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 592, -35, -292,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimDamageFlyX1_joint14[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1530, -999, 126, 85, 49, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 1538, -1003, 119, 85, 49, 38,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimDamageFlyX1_joint16[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 223,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -68, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -73, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -446, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 223, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimDamageFlyX1_joint17[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -169, 70, -130, -472, -324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -91, -59, -64, -797, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, -14, -58, 2, -823, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 23, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -86, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -656, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -525, 132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -229, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 34, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 27, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -92, -6, -252, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -80, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -312, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -167, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 29, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -31, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -153, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -386, -76,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -79, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 40, 49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -58, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -132, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -462, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -621, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 89, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 121, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 130, 8, -152, -19, -639, -18,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimDamageFlyX1_joint19[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, -71,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 373, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 484, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 677, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 624, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 314, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 304, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 296, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 269, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 89, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 76, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 200, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 288, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 829, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 919, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 976, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 996, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimDamageFlyX1_joint21[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, 142, -42, 43, 80, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 389, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 15, 76, 1, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 25, 4, 2, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -3, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 569, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 11, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 78, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 574, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 563, -10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 12, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 10, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 337, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 57, 39, 88, 6, 245, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 90, 32, 91, 3, 206, -39,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimDamageFlyX1_joint22[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, -101, 110, -17, -76, -375,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 40, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 58, -115, -452, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -70, -89, -620, -136,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -127, 9, -865, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 7, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -85, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -113, 16, -907, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -70, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -993, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1025, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1033, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -76, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -139, -9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1027, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -988, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -84, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -2, 41,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -152, -15, -963, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -153, 42, -826, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -85, 77, 42, 34, -624, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 96, 73, 78, 3, -179, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 149, 53, 74, -4, -80, 98,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimDamageFlyX1_joint24[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, -537,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 291, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 670, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 823, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1141, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1121, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1043, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1032, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 987, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 986, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 969, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 805, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 462, -126,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimDamageFlyX1_joint25[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 161, -193, 365, -429, -279, 918,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -31, -70, -64, -220, 639, 464,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, 27, -74, -4, 650, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 546, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -43, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -52, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -39, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, -2, 543, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 516, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -84, -12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -37, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -48, -17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 469, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -99, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 87, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -72, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -186, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 482, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 512, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -179, 7, 104, 16, 517, 5,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
