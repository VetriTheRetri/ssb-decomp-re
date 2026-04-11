/* AnimJoint data for relocData file 1899 (FTYoshiAnimCliffEscapeQuick1) */
/* 1424 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCliffEscapeQuick1_joint1[30];
extern u16 dFTYoshiAnimCliffEscapeQuick1_joint2[28];
extern u16 dFTYoshiAnimCliffEscapeQuick1_joint3[36];
extern u16 dFTYoshiAnimCliffEscapeQuick1_joint4[46];
extern u16 dFTYoshiAnimCliffEscapeQuick1_joint5[36];
extern u16 dFTYoshiAnimCliffEscapeQuick1_joint7[14];
extern u16 dFTYoshiAnimCliffEscapeQuick1_joint8[60];
extern u16 dFTYoshiAnimCliffEscapeQuick1_joint9[14];
extern u16 dFTYoshiAnimCliffEscapeQuick1_joint11[18];
extern u16 dFTYoshiAnimCliffEscapeQuick1_joint12[44];
extern u16 dFTYoshiAnimCliffEscapeQuick1_joint13[14];
extern u16 dFTYoshiAnimCliffEscapeQuick1_joint14[16];
extern u16 dFTYoshiAnimCliffEscapeQuick1_joint15[20];
extern u16 dFTYoshiAnimCliffEscapeQuick1_joint16[30];
extern u16 dFTYoshiAnimCliffEscapeQuick1_joint18[18];
extern u16 dFTYoshiAnimCliffEscapeQuick1_joint19[48];
extern u16 dFTYoshiAnimCliffEscapeQuick1_joint21[26];
extern u16 dFTYoshiAnimCliffEscapeQuick1_joint23[46];
extern u16 dFTYoshiAnimCliffEscapeQuick1_joint24[48];
extern u16 dFTYoshiAnimCliffEscapeQuick1_joint26[66];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimCliffEscapeQuick1_joints[] = {
	(u32)dFTYoshiAnimCliffEscapeQuick1_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimCliffEscapeQuick1_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimCliffEscapeQuick1_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimCliffEscapeQuick1_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimCliffEscapeQuick1_joint5, /* [4] joint 5 */
	(u32)dFTYoshiAnimCliffEscapeQuick1_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimCliffEscapeQuick1_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimCliffEscapeQuick1_joint9, /* [8] joint 9 */
	(u32)dFTYoshiAnimCliffEscapeQuick1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimCliffEscapeQuick1_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimCliffEscapeQuick1_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimCliffEscapeQuick1_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimCliffEscapeQuick1_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimCliffEscapeQuick1_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimCliffEscapeQuick1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimCliffEscapeQuick1_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimCliffEscapeQuick1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimCliffEscapeQuick1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimCliffEscapeQuick1_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimCliffEscapeQuick1_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	0xFFFF0151, /* [26] END */
};

/* Joint 1 */
u16 dFTYoshiAnimCliffEscapeQuick1_joint1[30] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, -15, -608, 4870, -56, -3670,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, -720, 1589,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 0, 1376,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimCliffEscapeQuick1_joint2[28] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAY), -748, 374, 672, -1436,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 0, 124,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 312,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 672, 7,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimCliffEscapeQuick1_joint3[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -477, 332, 6, 1, -52, 46, 87, -51, 179, -140,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 32, 30, -35, 20, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 187, 82, -4, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 19, -15, 0, -12,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimCliffEscapeQuick1_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -83, 41, 38, -19, 292, -146,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 172,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 31), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 92, 0, -10, 0, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 288, 67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -4, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 337, -30, 0, 0, 0, 3,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTYoshiAnimCliffEscapeQuick1_joint5[36] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -5, 544, 331,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, -45, 284, -56, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -304, 11, 0, -21, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 9), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 78, 30, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimCliffEscapeQuick1_joint7[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 460,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 0, -9,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 18,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimCliffEscapeQuick1_joint8[60] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_SCAX), 4096, -386,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 4096,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX, 1), 1,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -15, 58, 1508, -1426, -792, 327,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 193, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 82, -622, -465, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 262, 83, -367, 183,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 215, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 453, 127, -97, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 449, -67, -78, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 319, -129, 213, -1, -173, -94,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTYoshiAnimCliffEscapeQuick1_joint9[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimCliffEscapeQuick1_joint11[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -394, -119,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1340, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 0, 43,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimCliffEscapeQuick1_joint12[44] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 453, -406, 1159, -1073, -194, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 47, -129, 85, -483, -450, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 195, 97, 191, 24, -286, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 196, -2, 73, -38, -81, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 238, 42, 57, -15, -19, 62,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimCliffEscapeQuick1_joint13[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -8,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimCliffEscapeQuick1_joint14[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -70,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1340,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 0, 43,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimCliffEscapeQuick1_joint15[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -42, -893, 0, 0, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1180, -27, -882, 0, 177, 15,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimCliffEscapeQuick1_joint16[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 120, 22,
	ftAnimSetValRate(FT_ANIM_ROTX), -102, 97,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 215, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -320, -8, -22, -1, -4, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -25, 37, -16, 0, -3, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimCliffEscapeQuick1_joint18[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -121, 44, 262, -1, -27, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -82, 9, -37, 0, 3, 0,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTYoshiAnimCliffEscapeQuick1_joint19[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1647, -369, 1416, 56, -1022, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1277, -690, 1473, 266, -1041, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 265, -793, 1949, 39, -485, 924,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, -1006, 1551, -64, 807, 504,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1746, -723, 1821, 134, 523, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1757, -10, 1821, 0, 682, 158,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimCliffEscapeQuick1_joint21[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 781, 599,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1206, -387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -599,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimCliffEscapeQuick1_joint23[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -305, 465, 1834, -732, 1955, -426,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 343, -81, 481, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1528, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2196, 534,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3, -526, 437, -248, 2597, 470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -710, -717, -15, -258, 3137, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1439, -728, -79, -64, 3152, 15,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimCliffEscapeQuick1_joint24[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1636, 71, 1623, -91, 2121, -336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1708, -4, 1532, -266, 1785, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1626, -448, 1091, 143, 1412, -639,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 812, -109, 1819, 104, 505, -362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1408, 424, 1301, -203, 686, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1660, 251, 1412, 111, 786, 99,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimCliffEscapeQuick1_joint26[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 463,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 470, 512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1031, 405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1281, -512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -640,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -6,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF850, 0x01DC, 0xFFC0, 0xFFEB, 0x016E, 0xFE78, 0x2805, 0x0004, 0x0017, 0x0033, 0x200B, 0x0002, 0xFBFE, 0x0170, 0xFE9F, 0xFF53, 0x200B, 0x0001, 0xFD0D, 0x014C, 0xFE8D, 0x0009, 0x200B, 0x0001, 0xFE97, 0xFE1B, 0xFEB2, 0x003B, 0x200F, 0x0001, 0xF941, 0xFAAB, 0x0050, 0x0039, 0xFF04, 0x0052, 0x0000,
};
