/* AnimJoint data for relocData file 660 (FTFoxAnimCrouchEnd) */
/* 1296 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCrouchEnd_joint1[18];
extern u16 dFTFoxAnimCrouchEnd_joint2[12];
extern u16 dFTFoxAnimCrouchEnd_joint4[14];
extern u16 dFTFoxAnimCrouchEnd_joint5[62];
extern u16 dFTFoxAnimCrouchEnd_joint6[32];
extern u16 dFTFoxAnimCrouchEnd_joint7[10];
extern u16 dFTFoxAnimCrouchEnd_joint8[82];
extern u16 dFTFoxAnimCrouchEnd_joint10[8];
extern u16 dFTFoxAnimCrouchEnd_joint11[74];
extern u16 dFTFoxAnimCrouchEnd_joint12[40];
extern u16 dFTFoxAnimCrouchEnd_joint13[10];
extern u16 dFTFoxAnimCrouchEnd_joint15[10];
extern u16 dFTFoxAnimCrouchEnd_joint16[30];
extern u16 dFTFoxAnimCrouchEnd_joint18[24];
extern u16 dFTFoxAnimCrouchEnd_joint20[38];
extern u16 dFTFoxAnimCrouchEnd_joint21[42];
extern u16 dFTFoxAnimCrouchEnd_joint23[24];
extern u16 dFTFoxAnimCrouchEnd_joint24[34];
extern u16 dFTFoxAnimCrouchEnd_joint25[32];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimCrouchEnd_joints[] = {
	(u32)dFTFoxAnimCrouchEnd_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimCrouchEnd_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimCrouchEnd_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimCrouchEnd_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimCrouchEnd_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimCrouchEnd_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimCrouchEnd_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimCrouchEnd_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimCrouchEnd_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimCrouchEnd_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimCrouchEnd_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimCrouchEnd_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimCrouchEnd_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimCrouchEnd_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimCrouchEnd_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimCrouchEnd_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimCrouchEnd_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimCrouchEnd_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimCrouchEnd_joint25, /* [24] joint 25 */
	0xFFFF013E, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimCrouchEnd_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 483, 1342,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), -22, 58,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 48, -20,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 866, 194,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 912,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimCrouchEnd_joint2[12] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 101, -117,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -267, 159,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimCrouchEnd_joint4[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 792, -116, 227, -126,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 186,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimCrouchEnd_joint5[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1429, -61, -1450, 28, -1461, 125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1246, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1463, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1335, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1132, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1110, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1264, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1479, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1037, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1300, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1485, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1442, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 19, -1442, 0, -1349, -49,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimCrouchEnd_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -657, 210,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -447, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -391, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -291, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -470, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -592, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimCrouchEnd_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimCrouchEnd_joint8[82] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -283, -418, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -217, 37, -266, 143, 28, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, 6, -131, 118, -25, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -204, 4, -29, 87, -44, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -200, 6, 43, 60, -50, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -192, 13, 91, 39, -53, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -173, 19, 122, 23, -56, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -153, 19, 139, 12, -61, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, 15, 147, 5, -67, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -121, 10, 149, -5, -73, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimCrouchEnd_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimCrouchEnd_joint11[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1715, -69, 1106, 221, 1085, -107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1767, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1328, 69, 977, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1246, 8, 1055, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1844, 12, 1344, 35, 949, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1534, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1317, -32, 1187, 257,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1921, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1334, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1489, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1467, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1949, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, -8, 1336, 2, 1945, -4,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCrouchEnd_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -571, 303,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -267, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -243, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -299, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -807, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -754, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -654, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 59,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimCrouchEnd_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimCrouchEnd_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimCrouchEnd_joint16[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -183, 23, 18, -13, -351, 124,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -217, -10, -24, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -398, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -403, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -1, -223, -5, -26, -2,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimCrouchEnd_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1081, -210,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 389, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 364, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 351, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimCrouchEnd_joint20[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, -42, 148, -54, -380, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 124, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 2, 4, -69, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 10, 16, -60, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 35, 18, -57, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 11, 125, 1, -56, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimCrouchEnd_joint21[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 162, -10, -2942, 14, 6, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -3095, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 303, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 20, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 41, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 96, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3089, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 51, -3079, 10, 134, 38,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimCrouchEnd_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1262, -196,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 559, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 503, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 373, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimCrouchEnd_joint24[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -124, -123, 436, -59, -704, 166,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -46, -55, -232, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -189, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -147, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -82, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 98, -102, -56, -226, 5,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimCrouchEnd_joint25[32] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 219, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -286, 0, -2,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -364, 0, -5,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 219, 0,
	ftAnimEnd(),
	0x380E, 0x001B, 0xFFEC, 0x00BA, 0x380F, 0x000A, 0xFF4E, 0xFF86, 0x0000, 0x0000, 0x0000, 0x0000,
};
