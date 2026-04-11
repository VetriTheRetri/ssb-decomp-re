/* AnimJoint data for relocData file 844 (FTDonkeyAnimStunLandD) */
/* 1824 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimStunLandD_joint2[38];
extern u16 dFTDonkeyAnimStunLandD_joint4[26];
extern u16 dFTDonkeyAnimStunLandD_joint5[104];
extern u16 dFTDonkeyAnimStunLandD_joint7[48];
extern u16 dFTDonkeyAnimStunLandD_joint10[52];
extern u16 dFTDonkeyAnimStunLandD_joint11[110];
extern u16 dFTDonkeyAnimStunLandD_joint12[44];
extern u16 dFTDonkeyAnimStunLandD_joint13[8];
extern u16 dFTDonkeyAnimStunLandD_joint14[8];
extern u16 dFTDonkeyAnimStunLandD_joint16[12];
extern u16 dFTDonkeyAnimStunLandD_joint17[100];
extern u16 dFTDonkeyAnimStunLandD_joint19[44];
extern u16 dFTDonkeyAnimStunLandD_joint21[100];
extern u16 dFTDonkeyAnimStunLandD_joint22[76];
extern u16 dFTDonkeyAnimStunLandD_joint24[92];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimStunLandD_joints[] = {
	(u32)dFTDonkeyAnimStunLandD_joint2, /* [0] joint 2 */
	0x00000000, /* [1] NULL */
	(u32)dFTDonkeyAnimStunLandD_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimStunLandD_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimStunLandD_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTDonkeyAnimStunLandD_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimStunLandD_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimStunLandD_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimStunLandD_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimStunLandD_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimStunLandD_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimStunLandD_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimStunLandD_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimStunLandD_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimStunLandD_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimStunLandD_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF01AC, /* [24] END */
};

/* Joint 2 */
u16 dFTDonkeyAnimStunLandD_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 12, 720, -136,
	ftAnimSetValRate(FT_ANIM_ROTX), 804, 29,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 22), 1340, -6, 0, 0, 0, 0, -720, -31,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 1834, -16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 12), 720, -1778,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 643, 0, 0, 600, -240,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimStunLandD_joint4[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 284, 14, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -680, -33, 270, 0, -537, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -437, 52, 0, -13, 0, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 357, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimStunLandD_joint5[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -158, -17, -50, -23, 3044, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -343, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -309, -401, 3193, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -978, -572, 3427, 208,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1949, -32, 4107, 45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -321, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -436, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1973, -20, 4144, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 4441, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -2336, -33,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -443, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -596, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4456, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4610, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2374, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2745, -245,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4935, 330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2974, -142, 5271, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3030, -55, -581, 14, 5390, 119,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimStunLandD_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1041, -85,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1313, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1399, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -733, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -639, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -745, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -873, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1017, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1119, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1152, -33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimStunLandD_joint10[52] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 268, 0, 0, 0, 1354, 213,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 22), 0, 0, 1354, -90, 213, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -402, -12, -268, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, -37, 0, -3, 0, 8,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -342, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -1072, -121, 0, -18, 1080, -64, -360, -664,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -523, -9, 1320, -145,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimStunLandD_joint11[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 141, 1, 179, -8, 3072, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 61, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 3082, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 364, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 524, 145,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1037, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 92, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 425, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3055, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 3071, 36,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 444, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 617, -56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1124, 130, 3127, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1658, 375, 3626, 366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2049, 302, 4011, 299,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2551, 246, 4542, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 542, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 560, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2885, 346, 4968, 455,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3243, 225, 5452, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3336, 92, 524, -35, 5605, 153,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimStunLandD_joint12[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -903, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -647, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -538, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -625, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -902, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -853, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1002, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1070, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1073, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimStunLandD_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimStunLandD_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimStunLandD_joint16[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -906,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 16), -404,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimStunLandD_joint17[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1702, 24, -1508, 7, 1092, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1516, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1392, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1485, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1698, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1583, -40, 1908, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1753, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1909, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1723, -24,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1379, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1128, 36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1774, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1825, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1807, 138, 1691, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1547, 307, -1094, -126, 1355, -500,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1193, 125, -1382, -134, 691, -531,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1297, -100, -1364, 101, 291, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1394, -97, -1178, 185, 217, -74,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimStunLandD_joint19[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 548, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 502, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 288, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 48, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 954, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1019, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1356, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1225, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1107, -117,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimStunLandD_joint21[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -53, -143, -10, -257, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 223, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 122, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -307, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -481, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -385, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 216, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -263, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -369, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 103, -21,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 202, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 298, -63,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 76, -27, -349, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -140, -128, -446, 75,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 194, -124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -36, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -289, -3, -361, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -147, 134, -311, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 126, -64, -27, -295, 16,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimStunLandD_joint22[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 41, -8, 27, 1, -760, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -172, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 338, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -581, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -528, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -154, -14,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -178, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -319, -60,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 336, -31, -173, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 222, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -357, 79, -826, -452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -160, 175, 499, 16, -1254, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 154, 254, -245, -1160, 94,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimStunLandD_joint24[92] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 667, 35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 933, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 937, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 798, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 823, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1202, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1223, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1158, -64,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFFB6, 0x0018, 0x013F, 0xFFFD, 0xFF8D, 0x0001, 0x280D, 0x0015, 0xFF85, 0x0004, 0xFF53, 0xFFE8, 0x2003, 0x0007, 0x0096, 0xFFE3, 0x2003, 0x0001, 0x0077, 0xFFE2, 0x2003, 0x000D, 0x0040, 0x0014, 0x200F, 0x0001, 0x0056, 0x0033, 0xFF8B, 0x0028, 0xFF3A, 0xFFBF, 0x280D, 0x0003, 0x008E, 0x002C, 0xFDE8, 0xFFC6, 0x2003, 0x0002, 0x007E, 0xFEFF, 0x2003, 0x0001, 0xFEA4, 0xFF20, 0x200F, 0x0001, 0xFEBE, 0x001A, 0x00A2, 0x0014, 0xFDCB, 0xFFE3, 0x0000,
};
