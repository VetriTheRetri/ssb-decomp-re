/* AnimJoint data for relocData file 1769 (FTNessAnimHammerLanding) */
/* 2384 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimHammerLanding_joint1[20];
extern u16 dFTNessAnimHammerLanding_joint2[18];
extern u16 dFTNessAnimHammerLanding_joint4[40];
extern u16 dFTNessAnimHammerLanding_joint5[28];
extern u16 dFTNessAnimHammerLanding_joint6[14];
extern u16 dFTNessAnimHammerLanding_joint7[12];
extern u16 dFTNessAnimHammerLanding_joint8[18];
extern u16 dFTNessAnimHammerLanding_joint10[24];
extern u16 dFTNessAnimHammerLanding_joint11[22];
extern u16 dFTNessAnimHammerLanding_joint12[14];
extern u16 dFTNessAnimHammerLanding_joint13[36];
extern u16 dFTNessAnimHammerLanding_joint15[64];
extern u16 dFTNessAnimHammerLanding_joint16[132];
extern u16 dFTNessAnimHammerLanding_joint18[72];
extern u16 dFTNessAnimHammerLanding_joint19[126];
extern u16 dFTNessAnimHammerLanding_joint21[100];
extern u16 dFTNessAnimHammerLanding_joint22[136];
extern u16 dFTNessAnimHammerLanding_joint24[72];
extern u16 dFTNessAnimHammerLanding_joint25[138];
extern u16 dFTNessAnimHammerLanding_joint26[54];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimHammerLanding_joints[] = {
	(u32)dFTNessAnimHammerLanding_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimHammerLanding_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimHammerLanding_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimHammerLanding_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimHammerLanding_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimHammerLanding_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimHammerLanding_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimHammerLanding_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimHammerLanding_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimHammerLanding_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimHammerLanding_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimHammerLanding_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimHammerLanding_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimHammerLanding_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimHammerLanding_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimHammerLanding_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimHammerLanding_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimHammerLanding_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimHammerLanding_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimHammerLanding_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimHammerLanding_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 8), 0, 540,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 8), 0, 600,
	ftAnimLoop(0x6800, -38),
};

/* Joint 2 */
u16 dFTNessAnimHammerLanding_joint2[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 184,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -178,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimHammerLanding_joint4[40] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -432, 69, 0, 16, 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 555, 136,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 130, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 658, -66, 0, -15, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimHammerLanding_joint5[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1359, 0, 117, 2, 2138, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -1359, 0, 117, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 2138,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1359, 0, 117, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 2138,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimHammerLanding_joint6[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 7 */
u16 dFTNessAnimHammerLanding_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimHammerLanding_joint8[18] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 288, 0, -54, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 288, -54,
	ftAnimLoop(0x6800, -34),
};

/* Joint 10 */
u16 dFTNessAnimHammerLanding_joint10[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -156, -6, 117, 5, -87, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -165, 124, -93,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -156, 117, -87,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimHammerLanding_joint11[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1127, 0, 1742, 3, -2767, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -1127, 1742, -2767,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -1127, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1742, -2767,
	ftAnimLoop(0x6800, -42),
};

/* Joint 12 */
u16 dFTNessAnimHammerLanding_joint12[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 13 */
u16 dFTNessAnimHammerLanding_joint13[36] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -61, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -61, 27, -108,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -64, -261, -37,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -37, 111, 63,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 178, 0, 402,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -61, 0, 0,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimHammerLanding_joint15[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1215, -396, -2600,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 71, 0, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1228, 64, -412, -6, -2631, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1471, 9, -420, -8, -2650, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1276, -34, -452, 0, -2741, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1300, -50, -422, 55, -2774, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1175, -78, -341, 63, -2812, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1143, 6, -296, -9, -2850, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1215, -396, -2600,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimHammerLanding_joint16[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, -138, -11, -112, -1026, 131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -213, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -123, -28, -895, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -68, 25, -605, 263,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -194, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -88, 86, -422, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -40, -3, -146, 27, -99, 444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -95, 71, -139, -79, 466, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 101, 63, -306, 29, -477, -680,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 32, -27, -79, 118, -893, -230,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 61, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -68, 15, -937, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -61, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -858, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -538, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 169, 6, 6, 0, -410, 320,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -62, 13, -88, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 102, 629,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 848, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 101, 162, -196, 4, 282, -931,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 262, 161, -80, 116, -1013, -1296,
	ftAnimLoop(0x6800, -260),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimHammerLanding_joint18[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 825, -289,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 535, -412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 650, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 618, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1177, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 196, -584,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 648, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 103, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1081, 587,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1279, 197,
	ftAnimLoop(0x6800, -142),
};

/* Joint 19 */
u16 dFTNessAnimHammerLanding_joint19[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -195, -53, -31, 168, 185, -139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 128, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -249, 96, 46, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2, 111, 294, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -367, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -105, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -93, -9, -20, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -123, 155, -49, 105, -365, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 216, 47, 191, -162, 270, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -28, 337, -374, -138, 322, 387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 892, 682, -85, 156, 1045, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -151, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1335, -490, 445, -419,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -88, -656, 206, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 23, 123, -132, -272,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -321, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 158, 54, -153, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 131, 8, -136, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, -104, 272, 231, -24, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -77, -252, 325, 52, 181, 206,
	ftAnimLoop(0x6800, -248),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimHammerLanding_joint21[100] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -793, 73, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -508, 170, 74, 7, 76, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -280, 191, 94, -15, 77, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 449, 85, 0, -26, 144, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 63, -529, -12, -1, 341, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -610, -263, -3, 24, 107, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -726, 112, 62, 32, 61, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -273, 255, 93, 14, 64, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -216, 288, 92, -26, 172, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 303, 492, 40, -161, 253, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 768, 52, -231, -68, 98, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 407, -552, -96, 221, 178, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -336, 211, 79,
	ftAnimLoop(0x6800, -196),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimHammerLanding_joint22[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 143, 1368, -3013, -73, -98, 815,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1511, 766, -3087, -58, 717, 495,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1677, -52, -3131, -806, 892, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1405, -182, -4700, -755, 1332, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1311, -139, -4641, -98, 435, -280,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 778, -318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4897, -118, 771, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4878, 6, 747, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 489, -69, -4883, 156, 920, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 639, 405, -4564, 79, 1463, 301,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -4867, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1300, 429, 1523, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1498, 76, 2075, 104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1080, -423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1453, -400, -4849, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 697, -39, -4351, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1374, 436, -4961, -280, 885, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1631, 59, 1386, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -4911, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -4897, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1689, 57, -4979, -82, 1439, 53,
	ftAnimLoop(0x6800, -268),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimHammerLanding_joint24[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 559, -218,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 340, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1072, 438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 885, -536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -438,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 405, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1141, 446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1299, -570,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -649,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 507, 499,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimHammerLanding_joint25[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 92, -45, 3007, -1276, -195, 258,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 410, 434,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 47, -4, 1730, -727,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 83, 804, 1552, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1656, 863, 1437, 207, 932, 939,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1809, 163, 1967, -85, 2289, 551,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1983, 318, 1266, -436, 2035, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2837, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2446, 481, 1094, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2946, 234, 1189, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2916, 145, 946, -441, 2415, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3237, 159, 306, -426, 2763, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3235, 32, 92, -120, 2743, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3301, 435, 66, -142, 2441, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4106, 85, -192, 29, 3107, 555,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3472, -415, 125, 110, 3553, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3275, -99, 29, -67, 3426, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3273, 6, -8, -85, 3324, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3287, 14, -141, -133, 3129, -195,
	ftAnimLoop(0x6800, -272),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimHammerLanding_joint26[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 56,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 814, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -72, -850,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -886, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -434, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -40, 565,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 695, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 607, -568,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -440, -362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -481, 124,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 56,
	ftAnimLoop(0x6800, -96),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
