/* AnimJoint data for relocData file 827 (FTDonkeyAnimDamageX1) */
/* 1664 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDamageX1_joint1[74];
extern u16 dFTDonkeyAnimDamageX1_joint2[10];
extern u16 dFTDonkeyAnimDamageX1_joint4[38];
extern u16 dFTDonkeyAnimDamageX1_joint5[64];
extern u16 dFTDonkeyAnimDamageX1_joint6[36];
extern u16 dFTDonkeyAnimDamageX1_joint7[12];
extern u16 dFTDonkeyAnimDamageX1_joint8[34];
extern u16 dFTDonkeyAnimDamageX1_joint10[8];
extern u16 dFTDonkeyAnimDamageX1_joint11[54];
extern u16 dFTDonkeyAnimDamageX1_joint12[32];
extern u16 dFTDonkeyAnimDamageX1_joint13[18];
extern u16 dFTDonkeyAnimDamageX1_joint14[8];
extern u16 dFTDonkeyAnimDamageX1_joint16[20];
extern u16 dFTDonkeyAnimDamageX1_joint17[68];
extern u16 dFTDonkeyAnimDamageX1_joint19[28];
extern u16 dFTDonkeyAnimDamageX1_joint21[88];
extern u16 dFTDonkeyAnimDamageX1_joint22[80];
extern u16 dFTDonkeyAnimDamageX1_joint24[110];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimDamageX1_joints[] = {
	(u32)dFTDonkeyAnimDamageX1_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimDamageX1_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimDamageX1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimDamageX1_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimDamageX1_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimDamageX1_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimDamageX1_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimDamageX1_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimDamageX1_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimDamageX1_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimDamageX1_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimDamageX1_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimDamageX1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimDamageX1_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimDamageX1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimDamageX1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimDamageX1_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimDamageX1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0179, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimDamageX1_joint1[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 86, 0, -215, 0, -59,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -29, 1031, -400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 66, 31, -155, -71, -44, -21, -27, 9, 956, -471, -602, -1483,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 95, 10, -214, -23, -63, -7, -25, 1, 854, -190, -957, -339,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 1, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 95, 0, -214, 0, -63, 0, -25, -3, 854, -1, -957, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 141, 445,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 0, -29, 1031, -400,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimDamageX1_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -265, -41, -16, 0, -214, -154,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimDamageX1_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 750, 24, 41,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 698, -56, 127, 52, -53, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 580, -14, 180, 6, -429, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 580, 18, 180, -17, -429, 52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimDamageX1_joint5[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -208, -84, 126, -473, 645,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 24, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -270, -81, 171, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -226, 75, 175, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -27, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 48, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 44, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -246, -194,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 31, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -35, -52,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -78, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 16, -84, -49, -473, -227,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimDamageX1_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -902,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1310, -480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1367, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1289, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1288, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1106, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -891, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 483,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimDamageX1_joint7[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -445,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimDamageX1_joint8[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 429, 6, 10, 13, -36, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 195, -29, -25, -4, -213, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 195, -2, -25, -4, -213, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimDamageX1_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimDamageX1_joint11[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -115, 4, 172, -33, -479, 163,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 237, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -199, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 42, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 42, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -76, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 233, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 195, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -205, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -374, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, -39, 172, -23, -479, -104,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDamageX1_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -338,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1069, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1096, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1069, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -916, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -628, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 211,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimDamageX1_joint13[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 98,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 733, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 733, -57,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 98,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimDamageX1_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimDamageX1_joint16[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1046, 573,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -352, -217, -238,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -404, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimDamageX1_joint17[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1547, 182, -1215, -29, 1279, -292,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1923, -1, -1498, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 830, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 835, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 821, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1922, -1, -1496, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1773, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1485, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1480, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1256, 130, 810, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1625, -112, -1219, 20, 1100, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1547, -77, -1215, 3, 1279, 178,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimDamageX1_joint19[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1026, 62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 981, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 981, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1045, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1058, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimDamageX1_joint21[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 21, 14, -168, -369, 95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -343, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -106, -90, -75, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -272, -80, 146, 109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 141, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -256, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -342, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -337, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 138, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 130, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -249, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -233, 139,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -334, 93, 126, -132,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -42, 82, -303, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 36, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -60, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, -52, 14, 57, -369, -66,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimDamageX1_joint22[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 104, 327, 217, 122, -295, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 553, 3, -406, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 339, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 243, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 438, -48, 92, -70, -536, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 482, 5, -510, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 102, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 116, 49,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 486, 4, -507, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 384, -172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -437, 102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 215, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 144, -140, 204, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, -40, 217, 12, -295, 141,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimDamageX1_joint24[110] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 994, -67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 667, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 668, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 667, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 667, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 985, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 9,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0007, 0xFEF2, 0x0067, 0xFEDF, 0xFE7D, 0x00DE, 0x2803, 0x0002, 0xFE3B, 0xFFCA, 0x2809, 0x0004, 0x0039, 0x0000, 0x2005, 0x0001, 0xFF47, 0xFF87, 0x2005, 0x0001, 0xFF76, 0x006C, 0x2007, 0x0001, 0xFE8D, 0x0022, 0x001E, 0x004C, 0x2803, 0x0006, 0xFE74, 0x0014, 0x2005, 0x0001, 0x000F, 0xFFF4, 0x2805, 0x0005, 0xFFF6, 0xFFF7, 0x2009, 0x0001, 0x0039, 0x0000, 0x2809, 0x0005, 0xFFB5, 0xFF55, 0x0801, 0x0004, 0x2007, 0x0001, 0xFE9E, 0x009F, 0xFFE6, 0x0028, 0x200F, 0x0001, 0xFFB3, 0x00B5, 0x0047, 0x0041, 0xFEE3, 0xFF65, 0x200F, 0x0001, 0x0007, 0x0055, 0x0067, 0x0020, 0xFE7D, 0xFF9B, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
