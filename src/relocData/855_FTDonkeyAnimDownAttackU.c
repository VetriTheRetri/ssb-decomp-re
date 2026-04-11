/* AnimJoint data for relocData file 855 (FTDonkeyAnimDownAttackU) */
/* 4448 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDownAttackU_joint1[106];
extern u16 dFTDonkeyAnimDownAttackU_joint2[88];
extern u16 dFTDonkeyAnimDownAttackU_joint4[92];
extern u16 dFTDonkeyAnimDownAttackU_joint5[232];
extern u16 dFTDonkeyAnimDownAttackU_joint6[88];
extern u16 dFTDonkeyAnimDownAttackU_joint7[44];
extern u16 dFTDonkeyAnimDownAttackU_joint8[64];
extern u16 dFTDonkeyAnimDownAttackU_joint9[48];
extern u16 dFTDonkeyAnimDownAttackU_joint10[8];
extern u16 dFTDonkeyAnimDownAttackU_joint11[194];
extern u16 dFTDonkeyAnimDownAttackU_joint12[80];
extern u16 dFTDonkeyAnimDownAttackU_joint13[46];
extern u16 dFTDonkeyAnimDownAttackU_joint14[8];
extern u16 dFTDonkeyAnimDownAttackU_joint16[24];
extern u16 dFTDonkeyAnimDownAttackU_joint17[276];
extern u16 dFTDonkeyAnimDownAttackU_joint19[78];
extern u16 dFTDonkeyAnimDownAttackU_joint21[208];
extern u16 dFTDonkeyAnimDownAttackU_joint22[252];
extern u16 dFTDonkeyAnimDownAttackU_joint24[238];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimDownAttackU_joints[] = {
	(u32)dFTDonkeyAnimDownAttackU_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimDownAttackU_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimDownAttackU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimDownAttackU_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimDownAttackU_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimDownAttackU_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimDownAttackU_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimDownAttackU_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimDownAttackU_joint10, /* [9] joint 10 */
	(u32)dFTDonkeyAnimDownAttackU_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimDownAttackU_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimDownAttackU_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimDownAttackU_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimDownAttackU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimDownAttackU_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimDownAttackU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimDownAttackU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimDownAttackU_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimDownAttackU_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF040B, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimDownAttackU_joint1[106] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, -80, 14, 384, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 30), 0, 22, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 14, 0, 384, 338, -19, -408,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 722, 1341, -428, -1153,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 14,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 14, 1, 1222, 1441, -740, -1001,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1623, 798, -1054, -839,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 14, -1, 1721, 112, -1265, -318,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 14, -18, 1721, -291, -1333, 1295,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -9, -34, 1357, -1053, 353, 1700,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -29, -15, 404, -762, 792, 148,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 404, -7, 540, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX, 5), 0, 0, -29,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 250, -376,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 0, -29, 1031, -400,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimDownAttackU_joint2[88] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -214, -154,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -214, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -131, 0, -8, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1315, -180, -81, -8, 31, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1802, -74,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -81, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -2063, 108, -81, 2, 31, -2, -214, 0, -154, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -214, 0, -154, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -720, 142, -61, 4, 7, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -634, 8, -41, 2, -16, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -634, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -41, -16, -214, -154,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -265, -41, -16, -214, -154,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimDownAttackU_joint4[92] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 53, -80, 156, 0, 319, -157,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 376, 81, -80, 9, 156, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 864, 48, 16, 9, 19, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 864, 16, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 864, -67, 16, 0, 19, 1, 0, 0, 319, 0, -157, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 319, 0, -157, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 188, -37, 20, 0, 31, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 484, 47, 24, 0, 41, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 663, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 24, 41, 0, 319, -157,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 750, 24, 41, 0, 319, -157,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimDownAttackU_joint5[232] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, -215, -538, -19, -1649, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 410, -264, -557, 127, -1405, 396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 96, -70, -282, 209, -856, 515,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -84, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 269, 145, -375, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 388, 77, -326, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -336, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 161, -138,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -104, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -321, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -793, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 29, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 7, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -348, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 8, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -823, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -713, -40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -19, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -35, 14,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -48, -95, -795, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -17, 249, -182, -246, -1065, -475,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 463, -136, -541, -237, -1747, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -291, -422, -658, 343, -919, 854,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 190, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, 166, -37, 517,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -104, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -325, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -427, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -422, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 325, 104, -184, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 209, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 266, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 122, -117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 47, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 329, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 56, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -371, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -127, 21,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 37, -13, -16, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -62, -1, -464, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -109, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -85, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 0, -84, 0, -473, -8,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimDownAttackU_joint6[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -816, -145,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -962, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1219, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1242, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -986, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -837, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1001, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1099, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1051, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1082, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1069, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1115, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1098, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -891, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1224, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1504, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1188, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -976, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -969, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -414, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimDownAttackU_joint7[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 15, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -28, 0, -2, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -285, -39, -28, -5, -36, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -983, 9, -148, 0, 196, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimDownAttackU_joint8[64] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 237, 45, -69, 26, -126, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 184, 0, -2, 6, 11, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 235, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -2, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 235, 21, -2, -4, 11, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 553, 21, -67, -4, -44, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 553, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -67, -44,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 466, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 174,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTDonkeyAnimDownAttackU_joint9[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -74, 0, 3, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -823, -39, 43, 7, 18, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -398, 47, 70, 3, 29, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -398, 70, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -398, 70, 29,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimDownAttackU_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -589, 922, 126,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimDownAttackU_joint11[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2083, 21, 1665, -43, 1480, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1451, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1430, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1688, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1560, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1433, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1460, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1278, 43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1199, -212,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 971, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1507, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1420, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1334, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1553, 33,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 982, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1004, -62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1410, 9, 1580, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1484, -184, 1375, -140,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 889, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 554, -433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1767, -32, 1235, -88, 22, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1013, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1550, 169, 1199, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1429, 11, 1405, 130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1579, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1235, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1165, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1242, 111,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1595, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -1723, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1386, 165,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1935, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1154, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1227, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1931, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1142, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1230, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 1432, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1724, -1, 1436, 3, 1129, -12,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDownAttackU_joint12[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -569, -64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1038, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1123, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1157, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1117, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1211, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1207, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1155, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -903, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1149, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1256, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -864, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -855, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -979, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -932, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -646, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -586, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -432, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimDownAttackU_joint13[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 18, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 459, 111, 114, -5, 259, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 654, 1, -26, -2, 152, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 486, 5, 76, 0, 55, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 834, -12, -48, -2, 258, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimDownAttackU_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimDownAttackU_joint16[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 1046, 573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -404, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), -1070, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -406, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 19), -404,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimDownAttackU_joint17[276] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1693, 11, -947, -81, 877, -13,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1500, 180, 867, 43,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 4096, 122, 4096, 122, 4096, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1029, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1380, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1321, -58, -1614, 96, 951, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1617, -198, -1188, 332, 861, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -956, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1718, -11, 903, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 700, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1486, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1453, 24, -976, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -1259, -92, -1074, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 691, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 589, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1403, -523, -993, -26, 655, 413,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 5324, 491, 5324, 491, 5324, 491,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2305, -474, -1128, -294, 1417, 380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2352, 55, -1583, -234, 1416, -98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 919, -191,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 5324, -491, 5324, -491, 5324, -491,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2194, 67, -1596, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2217, -18, -1607, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1501, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2230, -143, 837, -80,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 699, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2504, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2883, 368,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 5324, 5324, 5324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1766, 565, 949, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1751, 13, -1554, -16, 1296, 201,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1458, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1739, 21, 1352, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1655, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1312, -1,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -111, 4096, -111, 4096, -111,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1462, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1214, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1681, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1634, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1301, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1109, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1075, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1107, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1189, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1658, -17, 1253, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1669, -10, -1215, 0, 1279, 25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTDonkeyAnimDownAttackU_joint19[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 923, -21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 853, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 910, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1211, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1185, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 736, -561,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 4, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 95, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 57, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 363, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 517, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1035, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -8,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTDonkeyAnimDownAttackU_joint21[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 199, -38, -41, -1, 243, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -180, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 342, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 160, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -217, -347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -534, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 11, 365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 161, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 140, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -105, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -167, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -188, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -255, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -330, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -163, 421, 418, 133, -403, 448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 654, 406, 609, -27, 566, 620,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 648, -95, 362, -98, 837, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 464, -37, 411, -50, 717, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 572, 120, 262, -71, 807, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 838, 222, 269, 2, 1170, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1152, 299, 274, 577, 1243, 240,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2001, 154,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1589, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1425, 665,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1605, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1461, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1962, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1932, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1491, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1587, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1444, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1593, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2033, 105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2122, -86,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1584, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1774, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2027, -101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1251, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1740, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1504, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1494, -9, 1593, 0, 1238, -12,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimDownAttackU_joint22[252] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 585, -2, 373, -2, -217, -62,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 547, -67, 452, 92,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 4096, 122, 4096, 122, 4096, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -331, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -214, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -485, -205,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 451, -143, 552, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -106, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 627, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -712, -176,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1028, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -184, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -320, 122,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1061, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1012, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -150, 407, 648, -43, -884, 338,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 5324, 491, 5324, 491, 5324, 491,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 493, 383, 541, -201, -336, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 617, 42, 245, -151, -235, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), -783, -20, 5324, -491, 5324, -491, 5324, -491,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 579, 61, 238, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 739, -27, 87, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 524, -168, 503, 143,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 402, -60, 374, -156, -719, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 404, -72, 191, -67, -554, 25,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 5324, 5324, 5324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 258, -153, 238, 17, -668, -123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -802, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 72, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -107, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -111, 4096, -111, 4096, -111,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -712, 5,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 72, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 217, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -97, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 98, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -702, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -310, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, 6, 217, 0, -295, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTDonkeyAnimDownAttackU_joint24[238] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1083, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1040, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1074, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1143, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1163, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1153, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1104, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 800, -408,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 287, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 285, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 753, 354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 709, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 436, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 693, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1050, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 999, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 1027, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, -9,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF8F9, 0xFFED, 0xF9C5, 0xFFFE, 0x0665, 0x0001, 0x2809, 0x000E, 0x0526, 0xFFD2, 0x2805, 0x0011, 0xFB58, 0x002C, 0x2003, 0x0006, 0xF918, 0x0021, 0x2003, 0x0001, 0xF93B, 0x0020, 0x2003, 0x0007, 0xFA78, 0x0035, 0x200B, 0x0001, 0xFAA4, 0x001E, 0x04F8, 0xFFD6, 0x200B, 0x0002, 0xFAAC, 0xFFEE, 0x04B2, 0xFFEB, 0x200F, 0x0001, 0xFA91, 0xFEE2, 0xFB84, 0x0015, 0x04A6, 0x0116, 0x200F, 0x0001, 0xF870, 0xFEA4, 0xFB83, 0xFFBB, 0x06DF, 0x01CB, 0x200F, 0x0001, 0xF7D9, 0xFFC0, 0xFAF9, 0xFFD6, 0x083D, 0x0090, 0x2807, 0x0002, 0xF7D9, 0xFFA7, 0xFB16, 0xFFDE, 0x2009, 0x0001, 0x0800, 0x0018, 0x2009, 0x0001, 0x086D, 0xFFD5, 0x200F, 0x0001, 0xF73D, 0x000B, 0xFAEA, 0xFFE3, 0x07A9, 0xFFAB, 0x2807, 0x0002, 0xF918, 0x007E, 0xFAD7, 0xFFC2, 0x2009, 0x0001, 0x07C2, 0x0007, 0x2809, 0x000B, 0x07AE, 0xFFEF, 0x0801, 0x0001, 0x2007, 0x0001, 0xF8EB, 0xFFE7, 0xFA5D, 0xFFA5, 0x2805, 0x0007, 0xF9FE, 0x0003, 0x2003, 0x0005, 0xF99B, 0x0005, 0x2003, 0x0001, 0xF9A1, 0x0005, 0x2803, 0x0011, 0xF9BE, 0x0003, 0x0801, 0x0001, 0x2005, 0x0001, 0xFA01, 0x0001, 0x2805, 0x000F, 0xF951, 0xFFFE, 0x0801, 0x0001, 0x2009, 0x0001, 0x0795, 0xFFE1, 0x2009, 0x000D, 0x04CC, 0xFFF2, 0x200F, 0x0001, 0xF9C0, 0x0001, 0xF950, 0xFFFF, 0x04C5, 0xFFF9, 0x0000, 0x0000, 0x0000,
};
