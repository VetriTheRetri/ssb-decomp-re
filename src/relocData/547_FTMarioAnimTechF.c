/* AnimJoint data for relocData file 547 (FTMarioAnimTechF) */
/* 2848 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimTechF_joint1[18];
extern u16 dFTMarioAnimTechF_joint2[112];
extern u16 dFTMarioAnimTechF_joint3[46];
extern u16 dFTMarioAnimTechF_joint5[56];
extern u16 dFTMarioAnimTechF_joint6[132];
extern u16 dFTMarioAnimTechF_joint7[42];
extern u16 dFTMarioAnimTechF_joint8[24];
extern u16 dFTMarioAnimTechF_joint9[76];
extern u16 dFTMarioAnimTechF_joint11[74];
extern u16 dFTMarioAnimTechF_joint12[152];
extern u16 dFTMarioAnimTechF_joint13[78];
extern u16 dFTMarioAnimTechF_joint14[62];
extern u16 dFTMarioAnimTechF_joint16[10];
extern u16 dFTMarioAnimTechF_joint17[114];
extern u16 dFTMarioAnimTechF_joint19[48];
extern u16 dFTMarioAnimTechF_joint21[106];
extern u16 dFTMarioAnimTechF_joint22[98];
extern u16 dFTMarioAnimTechF_joint24[126];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimTechF_joints[] = {
	(u32)dFTMarioAnimTechF_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimTechF_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimTechF_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimTechF_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimTechF_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimTechF_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimTechF_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimTechF_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimTechF_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimTechF_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimTechF_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimTechF_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimTechF_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimTechF_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimTechF_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimTechF_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimTechF_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimTechF_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF029D, /* [24] END */
};

/* Joint 1 */
u16 dFTMarioAnimTechF_joint1[18] = {
	ftAnimSetVal(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 4000,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 24), 4800,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 4800,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimTechF_joint2[112] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -5013, 0, 0, 0, 780, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 720, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -5013, 58, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 29), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), -1, -102,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 21, 720, -639, 0, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -4423, 475, 0, 0, 14, 17, 240, 68, -9, -11,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1206, 714,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 14, 780, -9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 14, 0, 240, 120, -9, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2010, 294,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 14, 840, -9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 14, 7, 240, -582, -9, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 3216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 21, 7, 330, 114, -11, -1,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 16), 540,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 24, -10, -11, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 11), 3216, 223, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTMarioAnimTechF_joint3[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 29), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 7, 0, 9, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 7, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 7, 0, 9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, -3, 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -71, -790, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimTechF_joint5[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 52, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 522, 65, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 522, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 522, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 21), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 536, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 208, 258, 110,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimTechF_joint6[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 815, 11, -46, 0, -1410, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -153, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1427, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 872, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 815, -124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 170, -104,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -212, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -309, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 119, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 119, -19,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1422, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 82, -169, -1297, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -219, -224, -309, 36, -782, 377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -81, -236, 3, -543, 115,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -297, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -303, 0, -552, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -238, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -422, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -425, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -382, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -238, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -269, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -259, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 150, 10,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -375, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, -17, -300, -30, -272, 103,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimTechF_joint7[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -493, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 242,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -182,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimTechF_joint8[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -1072,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1072, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, 134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 26), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTMarioAnimTechF_joint9[76] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -375, 0, 0, 0, 288, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -375, 107, 0, 0, 288, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 288, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 484, 107,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 484,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 484, -8, 0, 0, 288, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 402, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -187, -12, 0, 0, 0, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimTechF_joint11[74] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -221, 139, -209, 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -221, 13, 139, -15, -209, 23, 0, 0, 54, 0, -17, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -83, 17, -13, -19, 20, 28, 0, 0, 54, 0, -17, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -83, -13, 20, 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -83, -5, -13, 0, 20, -1, 0, 0, 54, 0, -17, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), -221, 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 7, 0, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 139, -209,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimTechF_joint12[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 738, -12, 1561, 3, 181, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 915, 208,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 185, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1561, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1512, -54,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), 1361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1155, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1353, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1351, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1351, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1363, -26, 181, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1249, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1385, 187, 290, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1726, 249, 855, 435,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1287, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1883, 85, 1347, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1767, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1383, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1190, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1190, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1744, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1763, 34,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1383,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1108, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1183, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1447, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1792, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1986, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1477, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1610, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2052, 65, 1056, -52, 1674, 63,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimTechF_joint13[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -60, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -90, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -694, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -516, 347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -399, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -805, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimTechF_joint14[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1072, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1072, -134, 0, -107, 0, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -268, -153, 714, -80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -1072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 55, 0, 85, -563, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 508, 28, 117, 2, -761, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 507, -1, 47, -10, -699, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 487, 13, 0, -5, 0, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 625, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimTechF_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimTechF_joint17[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, -3, -230, 3, 45, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -27, 71, -293, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -74, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -237, -164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -560, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 48, 66, -301, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 108, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -167, 37,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -641, -40,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 107, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 98, 32,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -132, 32, -680, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -134, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -240, 104,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 128, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -92, -49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -173, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -224, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -136, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 19, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -42, -230, -6, 45, 26,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimTechF_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 580, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 787, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1052, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1050, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 783, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 712, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 508, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 458, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 417, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimTechF_joint21[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1820, 1, -1597, 1, 1452, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1360, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1842, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -1739, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1790, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1790, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1360, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1500, 34,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1827, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1752, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1772, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1610, 18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1534, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1601, -62,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1592, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1740, 61,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1791, -25, 1524, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1816, -2, 1449, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1681, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1575, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1820, -3, -1597, -22, 1452, 3,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimTechF_joint22[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1808, 4, 1421, 3, 1644, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 1641, -106, 1360, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1525, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1358, -169,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1024, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1529, -99, 1358, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1424, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1472, 23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1048, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1193, 52,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1415, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1872, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1247, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1645, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1496, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1425, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1878, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1811, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1808, -2, 1421, -4, 1644, -1,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimTechF_joint24[126] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 621, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 836, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1113, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1114, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 544, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 440, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -2,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0059, 0x0000, 0xFFA3, 0x0000, 0xFF2C, 0x0000, 0x2805, 0x0012, 0xFF97, 0x0000, 0x200B, 0x000A, 0x00B4, 0x001D, 0xFED2, 0xFFF1, 0x200B, 0x0001, 0x00C4, 0x0007, 0xFED2, 0x0000, 0x280B, 0x000D, 0x0000, 0xFFDF, 0xFE5B, 0xFFED, 0x0801, 0x0007, 0x2005, 0x0001, 0xFF97, 0x002C, 0x2005, 0x0005, 0x0105, 0x0030, 0x200F, 0x0001, 0xFFDF, 0xFFE1, 0x0132, 0x0028, 0xFE48, 0xFFEE, 0x2807, 0x0008, 0xFFB9, 0x0020, 0x00F0, 0xFFBF, 0x2009, 0x0007, 0xFE79, 0x0025, 0x2009, 0x0001, 0xFE9E, 0x0023, 0x2809, 0x0006, 0xFF28, 0x0006, 0x2007, 0x0001, 0xFFDA, 0x0021, 0x00AC, 0xFFBD, 0x2007, 0x0005, 0x0052, 0x0009, 0xFFAE, 0xFFED, 0x200F, 0x0001, 0x0059, 0x0006, 0xFFA3, 0xFFF5, 0xFF2C, 0x0003, 0x0000,
};
