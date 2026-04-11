/* AnimJoint data for relocData file 2014 (FTPikachuAnimHammerLanding) */
/* 2048 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimHammerLanding_joint1[18];
extern u16 dFTPikachuAnimHammerLanding_joint2[22];
extern u16 dFTPikachuAnimHammerLanding_joint3[22];
extern u16 dFTPikachuAnimHammerLanding_joint5[12];
extern u16 dFTPikachuAnimHammerLanding_joint6[22];
extern u16 dFTPikachuAnimHammerLanding_joint7[14];
extern u16 dFTPikachuAnimHammerLanding_joint8[22];
extern u16 dFTPikachuAnimHammerLanding_joint9[22];
extern u16 dFTPikachuAnimHammerLanding_joint10[32];
extern u16 dFTPikachuAnimHammerLanding_joint11[32];
extern u16 dFTPikachuAnimHammerLanding_joint13[12];
extern u16 dFTPikachuAnimHammerLanding_joint14[26];
extern u16 dFTPikachuAnimHammerLanding_joint16[16];
extern u16 dFTPikachuAnimHammerLanding_joint17[134];
extern u16 dFTPikachuAnimHammerLanding_joint19[60];
extern u16 dFTPikachuAnimHammerLanding_joint21[136];
extern u16 dFTPikachuAnimHammerLanding_joint22[134];
extern u16 dFTPikachuAnimHammerLanding_joint24[64];
extern u16 dFTPikachuAnimHammerLanding_joint25[172];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimHammerLanding_joints[] = {
	(u32)dFTPikachuAnimHammerLanding_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimHammerLanding_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimHammerLanding_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimHammerLanding_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimHammerLanding_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimHammerLanding_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimHammerLanding_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimHammerLanding_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimHammerLanding_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimHammerLanding_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimHammerLanding_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimHammerLanding_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimHammerLanding_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimHammerLanding_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimHammerLanding_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimHammerLanding_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimHammerLanding_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimHammerLanding_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimHammerLanding_joint25, /* [24] joint 25 */
	0xFFFF01EE, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimHammerLanding_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 782, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 790, 193,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 782, 108,
	ftAnimLoop(0x6800, -34),
};

/* Joint 2 */
u16 dFTPikachuAnimHammerLanding_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -220,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -34, 37, 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -369, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 467, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -220,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimHammerLanding_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -128,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -296, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 114, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -128,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimHammerLanding_joint5[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 175, 0, 400,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimHammerLanding_joint6[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 746, 0, 258, -4, 2037, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 746, 258, 2037,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 258, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 746, 2037,
	ftAnimLoop(0x6800, -42),
};

/* Joint 7 */
u16 dFTPikachuAnimHammerLanding_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 8 */
u16 dFTPikachuAnimHammerLanding_joint8[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -148,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -122, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 125, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -148,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimHammerLanding_joint9[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 279,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 7, 3205, 8, 32, 508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 166, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 115, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 279,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimHammerLanding_joint10[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 280, -47, -208, 20, 293, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -471, -23, 203, 17, 257, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimHammerLanding_joint11[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 272, -53, 249, -13, -276, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -538, -22, -139, -20, -247, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimHammerLanding_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, 0, 0, -205, 22, 425,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimHammerLanding_joint14[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 889, 0, 1974, 4, 476, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 889, 0, 1974, 0, 476, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 889, 0, 1974, 0, 476, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimHammerLanding_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 17 */
u16 dFTPikachuAnimHammerLanding_joint17[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -52, 3, -1, 155, 526,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2, -172, 920, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -54, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -312, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -292, 128, -343, -143, 465, -747,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -55, -40, -289, 38, -574, -521,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -373, -236, -267, 144, -578, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -527, 57, 0, -11, -518, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -258, 126, -290, -94, -787, 99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -274, -53, -319, 442,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -404, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 97, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 169, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -141, 195, -293, -194, -430, -834,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -312, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -12, -429, -1498, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1000, -579, -662, 450,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -529, 376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1171, 490, 0, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -19, 584, -19, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 16, 3, 22, 155, 685,
	ftAnimLoop(0x6800, -264),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimHammerLanding_joint19[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 466, -466,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, 431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 863, 584,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1175, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 643, -587,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 832, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1016, 626,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1259, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 815, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 466, -349,
	ftAnimLoop(0x6800, -118),
};

/* Joint 21 */
u16 dFTPikachuAnimHammerLanding_joint21[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, 31, -3215, 58, -225, 296,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -2951, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 37, 142, 70, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 291, 55, 338, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 148, 3, -2789, -106, -190, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 299, 157, -3163, -229, 274, 372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 463, -2, -3248, 203, 554, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 294, -200, -2757, 198, 348, -416,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -26, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2851, -66, -279, -342,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2834, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -335, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 104, 109, 127, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 192, -31, 247, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 42, 102, -2888, -217, -368, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 970, 446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3270, -218, 400, 442,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3324, 191, 515, 378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1291, 322, -2886, 847, 1156, 409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1615, 161, -1628, 638, 1334, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, -1, -1610, 18, 1383, 48,
	ftAnimLoop(0x6800, -268),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimHammerLanding_joint22[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 276, 209, 328, -11, -598, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 507, -113, -280, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 317, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 62, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 259, -142, 96, -34, -116, 350,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 285, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, -73, 420, 441,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -49, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 766, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 437, -38, 816, -349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 208, -102, 147, 185, 68, -1013,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 313, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 232, 227, -1210, -579,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 663, 276, -1090, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 785, -195, 136, -66, -1070, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 272, -309, 180, -33, -1118, 266,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 252, 648,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 166, -30, 68, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 289, -20, -52, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 759, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 172, -8, 120, 190, 114, -678,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 273, 101, 327, 207, -598, -712,
	ftAnimLoop(0x6800, -264),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimHammerLanding_joint24[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1115, -307,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, -428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 258, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 563, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 203, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 457,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 922, 608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1217, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 352, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 789, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 319, -366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1056, 559,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1118, 62,
	ftAnimLoop(0x6800, -126),
};

/* Joint 25 */
u16 dFTPikachuAnimHammerLanding_joint25[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1166, -121, -1706, 71, 1744, 101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1112, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1635, 145, 1846, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1414, 73, 1923, -174,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1520, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1377, 198, 1497, -243,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1569, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1437, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1481, 90, 1637, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1415, -79, -1338, 3, 1876, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1410, -192, -1475, -210, 1134, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1031, -325, -1760, -71, 1731, 387,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 726, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1618, 221, 1908, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1316, 56, 2038, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1262, 380, -1504, -129, 1544, -362,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1936, 786, -1547, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1313, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1371, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3059, -106, -1459, -1, 1756, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1722, -945, -1551, -123, 1165, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1169, -553, -1705, -154, 1741, 575,
	ftAnimLoop(0x6800, -268),
	ftAnimEnd(),
	0x400E, 0xFFEC, 0x0184, 0xFFEE, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0004, 0xFF89, 0xFFC5, 0x026F, 0xFFC4, 0xFF1A, 0xFFA9, 0x200F, 0x0006, 0xFD99, 0x0008, 0xFF26, 0xFFED, 0xFC88, 0x0011, 0x380F, 0x0006, 0xFFEC, 0x0184, 0xFFEE, 0x6800, 0xFFC4, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
