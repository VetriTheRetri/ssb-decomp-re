/* AnimJoint data for relocData file 1359 (FTKirbyAnimItemThrowDash) */
/* 2672 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimItemThrowDash_joint1[18];
extern u16 dFTKirbyAnimItemThrowDash_joint2[26];
extern u16 dFTKirbyAnimItemThrowDash_joint3[20];
extern u16 dFTKirbyAnimItemThrowDash_joint4[104];
extern u16 dFTKirbyAnimItemThrowDash_joint6[70];
extern u16 dFTKirbyAnimItemThrowDash_joint7[194];
extern u16 dFTKirbyAnimItemThrowDash_joint8[8];
extern u16 dFTKirbyAnimItemThrowDash_joint10[82];
extern u16 dFTKirbyAnimItemThrowDash_joint11[204];
extern u16 dFTKirbyAnimItemThrowDash_joint12[22];
extern u16 dFTKirbyAnimItemThrowDash_joint14[10];
extern u16 dFTKirbyAnimItemThrowDash_joint15[94];
extern u16 dFTKirbyAnimItemThrowDash_joint17[22];
extern u16 dFTKirbyAnimItemThrowDash_joint19[102];
extern u16 dFTKirbyAnimItemThrowDash_joint20[134];
extern u16 dFTKirbyAnimItemThrowDash_joint22[46];
extern u16 dFTKirbyAnimItemThrowDash_joint23[134];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimItemThrowDash_joints[] = {
	(u32)dFTKirbyAnimItemThrowDash_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimItemThrowDash_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimItemThrowDash_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimItemThrowDash_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimItemThrowDash_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimItemThrowDash_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimItemThrowDash_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimItemThrowDash_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimItemThrowDash_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimItemThrowDash_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimItemThrowDash_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimItemThrowDash_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimItemThrowDash_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimItemThrowDash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimItemThrowDash_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimItemThrowDash_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimItemThrowDash_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimItemThrowDash_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 960, 640,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 26), 2400, 320,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 2400,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimItemThrowDash_joint2[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 720,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 720, -239,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 600, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 16), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 20), 600,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimItemThrowDash_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -268, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimItemThrowDash_joint4[104] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 89, 89, 312, 0, 4300, 3686, 4300,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 20), 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), -178, 67, -268, 67, 4300, -102, 3686, 204, 4300, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 357, 44, 357, 89, 4096, -22, 4096, 45, 4096, -22,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 16), 0, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 268, -5, 625, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 268, -14, 536, -34,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 12), 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 0, -5, 0, -26, 312, -38, 4096, 27, 4096, -109, 4096, 27,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 178, 240, 4300, 3276, 4300,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 8), 0,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 0, 312, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimItemThrowDash_joint6[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -89, -134, 178, -180, -180, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, 22, -357, 78,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -89, -180, 0, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 2), 178, 29, 178, 14, 0, 80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, -120, -180,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 16), 178, -6, 178, -6, -60, 55,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 36), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 16), -120, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -8, 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimItemThrowDash_joint7[194] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -784, -61, -435, 142, -1734, 127,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -784, 20, -223, 88, -1558, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 87, -116, -199, -1764, -172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1706, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -610, 78, -623, -277,
	ftAnimSetValRateT(FT_ANIM_SCAX, 16), 3072, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -648, -74, -671, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1050, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -684, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1538, 146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1629, -185,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1047, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -455, 116,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -675, 15, -1837, -203,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -419, 15, -2541, -90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -374, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -202, 126,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_SCAX, 10), 3686, 102,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -64, 120, -394, 35, -2633, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -283, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 416, 211, -2838, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 627, 152, -2968, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 717, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2983, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -320, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -222, -5,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 719, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 795, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2999, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3197, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -227, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -220, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 8, -217, 3, -3216, -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimItemThrowDash_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimItemThrowDash_joint10[82] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -89, -134, -178, 180, -180, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 2), 0, 22, -268, 134, -268, 67, -120, 239,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 120, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 402, 71, 89, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 120, -60, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 446, -2,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 36), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 134, 60, -60, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 8), 357, -24, 89, -7, -60, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 8), 60, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -17, 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimItemThrowDash_joint11[204] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -793, 58, 1131, -17, -114, 126,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1034, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -734, -109, 11, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1011, 659, -402, 121,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 584, 324, 1112, 40, 254, 151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 882, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -361, -527, -99, -242,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -322, 3,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -469, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -510, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -472, 74,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -308, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -355, 342, -208, 327,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 822, 342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 830, -15, 345, 578,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1247, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 947, 337,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 897, 27, 1020, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 782, 8, 896, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 799, 27, 915, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 913, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1261, 58,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3686,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1275, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1319, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 890, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 981, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1335, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1770, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 927, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 809, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1272, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1384, 12,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1786, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1672, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1626, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -4, 1391, 6, 1608, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimItemThrowDash_joint12[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimItemThrowDash_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimItemThrowDash_joint15[94] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1627, 34, -1348, 25, -1003, -5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1593, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1285, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1025, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1205, -172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1456, -13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1598, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 1584, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1466, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -1371, 25,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1284, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1336, -1,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1573, -7, -1348, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 1585, 2, -1372, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1336, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1307, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1584, -1, -1305, 1, -1371, 1,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimItemThrowDash_joint17[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimItemThrowDash_joint19[102] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1496, -53, -1789, -30, -1033, -13,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1439, -73, -1811, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1047, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1055, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1295, -70, -1480, 189, -1502, -324,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1436, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1704, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1696, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1439, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -1432, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1690, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -1730, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1301, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 1323, 6,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1748, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1711, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1327, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1300, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1298, -1, -1431, 0, -1704, 6,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimItemThrowDash_joint20[134] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -11, 4, 243, -31, -527, -66,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -38, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 225, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 159, 778,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 46, 42, 999, 435,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 52, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1029, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1052, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1055, -22,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 53, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 39, -30,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 245, 24, 1025, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 268, -133,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -12, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -190, 73,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 168, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 290, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -82, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 32, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 246, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 237, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 31, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 24, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -3, 302, 0, 233, -4,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimItemThrowDash_joint22[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 143, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 441, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 496, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 240, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -116,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTKirbyAnimItemThrowDash_joint23[134] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -34, 70, -25, 255, 83,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 221, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 54, 112, 310, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 15, -15, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 323, 41, 84, -96, 261, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 274, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 78, -5, 258, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 126, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 122, 24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 271, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 499, 36,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 101, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -360, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 153, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 282, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 528, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 303, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 234, -40, -273, 111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 176, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -96, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -90, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -95, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 300, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 308, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 0, 176, 0, -99, -4,
	ftAnimEnd(),
	0x0000, 0x0000,
};
