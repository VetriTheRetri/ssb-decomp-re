/* AnimJoint data for relocData file 528 (FTMarioAnimDamageX3) */
/* 3184 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDamageX3_joint1[74];
extern u16 dFTMarioAnimDamageX3_joint2[56];
extern u16 dFTMarioAnimDamageX3_joint4[72];
extern u16 dFTMarioAnimDamageX3_joint5[184];
extern u16 dFTMarioAnimDamageX3_joint6[54];
extern u16 dFTMarioAnimDamageX3_joint7[8];
extern u16 dFTMarioAnimDamageX3_joint8[44];
extern u16 dFTMarioAnimDamageX3_joint10[30];
extern u16 dFTMarioAnimDamageX3_joint11[162];
extern u16 dFTMarioAnimDamageX3_joint12[70];
extern u16 dFTMarioAnimDamageX3_joint13[66];
extern u16 dFTMarioAnimDamageX3_joint15[54];
extern u16 dFTMarioAnimDamageX3_joint16[144];
extern u16 dFTMarioAnimDamageX3_joint18[46];
extern u16 dFTMarioAnimDamageX3_joint20[98];
extern u16 dFTMarioAnimDamageX3_joint21[180];
extern u16 dFTMarioAnimDamageX3_joint23[68];
extern u16 dFTMarioAnimDamageX3_joint24[134];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimDamageX3_joints[] = {
	(u32)dFTMarioAnimDamageX3_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimDamageX3_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimDamageX3_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimDamageX3_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimDamageX3_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimDamageX3_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimDamageX3_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimDamageX3_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimDamageX3_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimDamageX3_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimDamageX3_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimDamageX3_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimDamageX3_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimDamageX3_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimDamageX3_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimDamageX3_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimDamageX3_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimDamageX3_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimDamageX3_joint1[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 223,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 3, 0, 540, -15, 39, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -268, -215, -16, -26, 477, -42, -172, -482,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -1072, -70, 509, 25, -322, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), -16,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 11), -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -1072, 56, 509, -72, -322, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -775, 22, 408, -69, -157, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -775, 76, -16, 12, 396, 81, -145, 120,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 3, 0, 540, -15, 39, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 223,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimDamageX3_joint2[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -95, 4,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -71, -790,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -455, 32, -333, 131, 0, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 125, 58, 0, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 125, -2, 0, -9, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 98, -2, -99, -7, 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 98, -13, -99, -53, 2, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -95, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -71, -790,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimDamageX3_joint4[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 0, 258, 0, 110, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 686, -81, 23, -108, -142, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -35, -217, -67, -4, -261, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -402, -24, 0, 8, -134, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -359, 68, 0, 5, -134, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 310, 43, 55, 6, -183, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 368, -3, 79, -2, -210, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 272, -26, 35, 29, -90, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 208, 0, 258, 0, 110, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimDamageX3_joint5[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1712, 374, -1375, 433, -1910, -310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2086, 532, -942, 250, -2220, -463,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2776, 612, -874, -1, -2837, -555,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1155, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3310, 338, -3330, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3453, 99, -3454, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 3549, 1, -3547, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1176, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1149, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3548, -9, -3543, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3499, -57, -3477, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3414, 21, -1137, -53, -3367, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3543, 12, -1256, -80, -3547, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3440, -108, -1298, -106, -3406, 219,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2898, 159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1858, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3325, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3456, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3359, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2789, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2936, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1871, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1704, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3330, -66, -1648, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3225, 49, -1480, 628, -2865, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3429, 29, -391, 594, -3527, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3283, -48, -291, 73, -3402, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3331, 23, -244, 30, -3526, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3331, -4, -231, 6, -3539, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3322, -8, -231, 0, -3523, 15,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDamageX3_joint6[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -609, -454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -909, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -757, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -709, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -872, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -827, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, 334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -158, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimDamageX3_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimDamageX3_joint8[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, 0, -4, 0, 176, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 228, -122, 320, 83, 76, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -534, -66, 498, 15, -325, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -439, 30, 472, -20, -259, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 201, 0, -4, 0, 176, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimDamageX3_joint10[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 20, 0, -12, 0, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -9, 0, 5, 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -221, 139, -209,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimDamageX3_joint11[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, -1242, 551, -337, 65, -564,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -799, -636, 214, -8, -498, -309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -828, 64, 534, 470, -554, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -379, 501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1154, 325, -561, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1185, 3, -811, 109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1140, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 332, 378, -342, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 377, 14, -362, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -306, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 361, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 204, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 220, -58, -259, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -29, 75, -528, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 112, 196, 1128, 7, -331, 260,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 877, 591, 521, 497,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1156, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1219, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1547, 371, 1764, 328, 988, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1620, 54, 1877, 67, 1006, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1718, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1656, 33, 981, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1376, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1570, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1562, 77, 1438, -276,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1967, 163, 1075, -54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1601, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2052, 84, 1056, -19, 1674, 73,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDamageX3_joint12[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 237,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -574, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1020, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1213, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -709, 606,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 354,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -703, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -916, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -580, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -432, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -940, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -974, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -878, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 67,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimDamageX3_joint13[66] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 85, -65, -74, 214,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 338,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 188, -48, -195, -25, 644, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 97, -11, -41, 19, 604, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 97, 9, -41, -23, 604, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 197, 0, -295, -7, 606, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 97, 32, -134, 22, 480, -46,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 625, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimDamageX3_joint15[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 71, 0, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 827, -90, -1389, -21, 758, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1062, 23, -935, 45, 681, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1062, 77, -935, 0, 681, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1914, -26, -926, -17, -98, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 722, -23, -1161, 9, 1230, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1608, -804, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimDamageX3_joint16[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1410, -339, 1793, 250, -1441, 356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1070, -157, 2043, 140, -1085, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1094, 44, 2074, 13, -1090, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1300, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1955, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1557, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1745, 131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1728, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1285, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1400, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1986, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 2015, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1705, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1551, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1427, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1582, -51, -1738, -181,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1369, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1790, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1669, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2087, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 2221, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1288, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1110, 90,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2175, -71, -1694, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1837, -77, -1521, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1216, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1382, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1410, 27, 1793, -43, -1441, 79,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimDamageX3_joint18[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 168, -168,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 475, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 618, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 723, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 734, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 303, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 168, -134,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimDamageX3_joint20[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -192, 130, 13, -227, -75, 241,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -83, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -213, -119, 165, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -224, -9, 194, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 69, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -56, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -103, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -271, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -324, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -439, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 14, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -45, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -431, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -127, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -92, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -181, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -35, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 0, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -57, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -66, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -192, -10, 13, 14, -75, -8,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimDamageX3_joint21[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1381, -516, -1767, 246, -1513, -139,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1567, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1898, -47, -1520, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1476, 292, -1509, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1250, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1312, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1485, -75, -1209, 183,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1215, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1401, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1310, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1331, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1252, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1269, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1400, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1355, 107,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1294, -47, -1344, -184,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1844, -161,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1992, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1187, 134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -990, 170,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1961, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1802, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -745, 150,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -629, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2019, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -2005, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -582, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -505, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1782, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1805, -61,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -604, -173,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1339, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2019, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1791, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1854, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1588, 113,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1389, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1381, 8, -1767, 24, -1513, 74,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimDamageX3_joint23[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 316, 432,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 749, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 796, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 543, -394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, 377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 761, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 939, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 948, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 542, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 395, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, -78,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimDamageX3_joint24[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1517, -58, -1519, 170, 1428, 86,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -1201, 0, 1882, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1575, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1952, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2166, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2029, 122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1927, -21,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1201, 0, 1882, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2084, 76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1300, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1952, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2158, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2410, -184,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2651, -57,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2171, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2270, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2682, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -2825, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2822, 135, 2286, -143,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1732, -196,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1809, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1292, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1497, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1590, -111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1461, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1623, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1538, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1517, 20, -1519, -22, 1428, -32,
	ftAnimEnd(),
};
