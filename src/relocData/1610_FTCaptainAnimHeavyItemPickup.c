/* AnimJoint data for relocData file 1610 (FTCaptainAnimHeavyItemPickup) */
/* 2432 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimHeavyItemPickup_joint1[42];
extern u16 dFTCaptainAnimHeavyItemPickup_joint2[46];
extern u16 dFTCaptainAnimHeavyItemPickup_joint4[50];
extern u16 dFTCaptainAnimHeavyItemPickup_joint5[154];
extern u16 dFTCaptainAnimHeavyItemPickup_joint6[48];
extern u16 dFTCaptainAnimHeavyItemPickup_joint7[26];
extern u16 dFTCaptainAnimHeavyItemPickup_joint8[24];
extern u16 dFTCaptainAnimHeavyItemPickup_joint10[8];
extern u16 dFTCaptainAnimHeavyItemPickup_joint11[132];
extern u16 dFTCaptainAnimHeavyItemPickup_joint12[56];
extern u16 dFTCaptainAnimHeavyItemPickup_joint13[46];
extern u16 dFTCaptainAnimHeavyItemPickup_joint14[10];
extern u16 dFTCaptainAnimHeavyItemPickup_joint16[14];
extern u16 dFTCaptainAnimHeavyItemPickup_joint17[90];
extern u16 dFTCaptainAnimHeavyItemPickup_joint19[40];
extern u16 dFTCaptainAnimHeavyItemPickup_joint21[84];
extern u16 dFTCaptainAnimHeavyItemPickup_joint22[88];
extern u16 dFTCaptainAnimHeavyItemPickup_joint24[40];
extern u16 dFTCaptainAnimHeavyItemPickup_joint25[166];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimHeavyItemPickup_joints[] = {
	(u32)dFTCaptainAnimHeavyItemPickup_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimHeavyItemPickup_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimHeavyItemPickup_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimHeavyItemPickup_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimHeavyItemPickup_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimHeavyItemPickup_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimHeavyItemPickup_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimHeavyItemPickup_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimHeavyItemPickup_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimHeavyItemPickup_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimHeavyItemPickup_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimHeavyItemPickup_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimHeavyItemPickup_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimHeavyItemPickup_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimHeavyItemPickup_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimHeavyItemPickup_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimHeavyItemPickup_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimHeavyItemPickup_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimHeavyItemPickup_joint25, /* [24] joint 25 */
	0xFFFF0240, /* [25] END */
};

/* Joint 1 */
u16 dFTCaptainAnimHeavyItemPickup_joint1[42] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, -899, 0, 710,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1155, 403, 400, 5,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 1175, -328, 240, 3,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 16), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -340,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 1094, 117, 240, -2,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 20), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimHeavyItemPickup_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY), 107, -24,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 384, -36, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 16), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 214,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 447, 0,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 447, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimHeavyItemPickup_joint4[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, 17, -31, -35, 47, 84,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 250, 0, -47, 0, 86, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 16), -23,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 16), 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 92, -4,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 214,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 20), -23,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 20), 40, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 215, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimHeavyItemPickup_joint5[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1368, 85, -1614, 202, 1084, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1202, 48, 964, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1412, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1085, 236,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -904, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1186, 44, 929, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1114, -9, 826, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1205, -115, 868, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1598, -97, 967, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -911, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1140, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1681, -71, 919, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1814, 8, 542, -53,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1150, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -896, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1801, 22, 484, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1607, 45, 131, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1562, 54, 50, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1303, 14, -363, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1303, -10, -907, -12, -404, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -450, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1051, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1530, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1543, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1537, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -467, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -492, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1516, 20, -1055, -4, -526, -34,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimHeavyItemPickup_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -87,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -888, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -699, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -637, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -551, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -546, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -527, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimHeavyItemPickup_joint7[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -781, -89, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -486, 27, 0, 4, 0, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -241, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -241, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimHeavyItemPickup_joint8[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -45, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), 151, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 151, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimHeavyItemPickup_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimHeavyItemPickup_joint11[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -129, 141, 144, 50, 592, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 347, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 12, 263, 598, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 396, 137, 392, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 288, -287, 602, 139, -31, -499,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 604, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -177, -277, -606, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -266, -62, -740, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -302, -16, 584, -17, -822, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 142, 42, 485, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -918, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -952, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1268, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 176, 32, 472, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 628, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 201, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 146, -53, -1377, -103,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -149, -21, -1897, -48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 645, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 591, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -169, -16, -1943, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -163, -16, -2128, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -183, -20, 589, -2, -2159, -30,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimHeavyItemPickup_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, -131,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1156, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1183, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -846, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -507, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -470, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -588, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -600, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -674, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -660, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -528, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -518, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimHeavyItemPickup_joint13[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 613, 180, 271, -52, 207, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 811, 13, 117, -97, 362, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 640, -28, 77, -11, 414, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 318, -6, -74, -3, -30, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 397, 3, -36, 1, -84, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimHeavyItemPickup_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimHeavyItemPickup_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 18, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 40), 131, -2, -100, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimHeavyItemPickup_joint17[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -10, 70, 16, -472, -173,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -36, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 74, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -876, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1081, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1022, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1000, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -46, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 49, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 66, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 150, -2,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1042, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1148, 9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 55, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 36, -3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 148, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 138, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 136, -2, 33, -3, -1138, 9,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimHeavyItemPickup_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 223,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 910, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 927, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 829, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 824, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 1032, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1034, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 977, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 964, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimHeavyItemPickup_joint21[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, -25, -42, -8, 80, -108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 35, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -169, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -116, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -84, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -52, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 41, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -36, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -167, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -213, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -56, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -190, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -189, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -189, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -190, -1, -35, 0, -211, 1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimHeavyItemPickup_joint22[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, -24, 110, 22, -76, -85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 121, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 31, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -162, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -316, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -462, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 119, -1, -413, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -552, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 176, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 37, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 17, 3,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -678, 2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 176, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 175, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 20, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 28, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, 3, 175, 0, -676, 2,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimHeavyItemPickup_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 127,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 798, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 779, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 687, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 706, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 985, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 989, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 924, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 912, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimHeavyItemPickup_joint25[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 161, -47, 365, -53, -279, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 215, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -613, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 113, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 16, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 16, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 116, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 78, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -557, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 24, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -22, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 80, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 301, 1,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -562, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -471, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -32, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 4, 6,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 10, 6, 301, 0, -463, 7,
	ftAnimEnd(),
	0x4002, 0x0000, 0x28C0, 0xFD3D, 0x0475, 0x0437, 0xFC13, 0x482C, 0x0000, 0x0000, 0x0000, 0x20C3, 0x0004, 0x0000, 0x0000, 0xFF4D, 0x0469, 0x0244, 0xFFFB, 0x3002, 0x0035, 0x3040, 0x045D, 0x2841, 0x0006, 0x020C, 0x02B9, 0x3080, 0x024D, 0x2881, 0x0010, 0x003B, 0xFF4F, 0x2003, 0x0004, 0x0000, 0xFFD5, 0x2803, 0x0007, 0xFD09, 0xFF8D, 0x0801, 0x0002, 0x2041, 0x0005, 0x02EF, 0x0058, 0x3002, 0xFFF2, 0x2043, 0x0005, 0xFCDC, 0x0000, 0x0294, 0xFE0D, 0x20C3, 0x0014, 0xFCDC, 0x0000, 0x01E0, 0x0001, 0xFF9D, 0xFFB3, 0x0000,
};
