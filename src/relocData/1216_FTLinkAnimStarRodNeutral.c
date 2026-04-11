/* AnimJoint data for relocData file 1216 (FTLinkAnimStarRodNeutral) */
/* 1872 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimStarRodNeutral_joint1[22];
extern u16 dFTLinkAnimStarRodNeutral_joint2[30];
extern u16 dFTLinkAnimStarRodNeutral_joint4[46];
extern u16 dFTLinkAnimStarRodNeutral_joint5[80];
extern u16 dFTLinkAnimStarRodNeutral_joint6[32];
extern u16 dFTLinkAnimStarRodNeutral_joint9[8];
extern u16 dFTLinkAnimStarRodNeutral_joint10[140];
extern u16 dFTLinkAnimStarRodNeutral_joint11[64];
extern u16 dFTLinkAnimStarRodNeutral_joint12[42];
extern u16 dFTLinkAnimStarRodNeutral_joint13[10];
extern u16 dFTLinkAnimStarRodNeutral_joint16[8];
extern u16 dFTLinkAnimStarRodNeutral_joint17[26];
extern u16 dFTLinkAnimStarRodNeutral_joint18[26];
extern u16 dFTLinkAnimStarRodNeutral_joint20[34];
extern u16 dFTLinkAnimStarRodNeutral_joint21[54];
extern u16 dFTLinkAnimStarRodNeutral_joint23[24];
extern u16 dFTLinkAnimStarRodNeutral_joint25[64];
extern u16 dFTLinkAnimStarRodNeutral_joint26[66];
extern u16 dFTLinkAnimStarRodNeutral_joint28[102];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimStarRodNeutral_joints[] = {
	(u32)dFTLinkAnimStarRodNeutral_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimStarRodNeutral_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimStarRodNeutral_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimStarRodNeutral_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimStarRodNeutral_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimStarRodNeutral_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimStarRodNeutral_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimStarRodNeutral_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimStarRodNeutral_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimStarRodNeutral_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimStarRodNeutral_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimStarRodNeutral_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimStarRodNeutral_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimStarRodNeutral_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimStarRodNeutral_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimStarRodNeutral_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimStarRodNeutral_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimStarRodNeutral_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimStarRodNeutral_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF01AF, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimStarRodNeutral_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 901, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 882, -93, -77, 52,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 760, 8, 79, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 901, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimStarRodNeutral_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -105, 27, -21, -8, 2, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 164, 0, 187, 15, 40, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimStarRodNeutral_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 94, -48, -240, -101, -44, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -28, 87, -441, 92, -60, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 532, 55, 222, 67, 213, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 530, -18, 234, -3, 232, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimStarRodNeutral_joint5[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1888, -40, -1281, 14, -1694, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1435, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1133, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1418, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1336, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1616, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1432, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1647, -50,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1079, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1272, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1679, 37, -1672, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1794, 34, -1607, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1827, 29, -1629, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1887, 3, -1691, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, 1, -1281, -8, -1694, -3,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimStarRodNeutral_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -527, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -467, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -317, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -374, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -506, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimStarRodNeutral_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimStarRodNeutral_joint10[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2024, 44, 1484, 11, 1557, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 2531, 295, 1355, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1702, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1667, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2826, 575, 1038, -207, 1754, 449,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1403, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3683, 721, 2566, 696,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4269, 418, 3147, 441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4519, 199, 3448, 470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4668, 12, 4088, 234,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4426, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1412, 27, 3916, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1705, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4024, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4332, -86, 4047, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 4151, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 4134, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4262, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4558, 240, 1709, -56, 4346, 262,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1527, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4742, 195, 4676, 228,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 5227, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4803, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 4779, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1518, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1489, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5241, 14, 1484, -4, 4774, -4,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimStarRodNeutral_joint11[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -123,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -972, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -821, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -375, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -262, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -429, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -349, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -439, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -507, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -566, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimStarRodNeutral_joint12[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 69, -209, -38, 0, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 486, 110, -477, -90, 265, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 331, -12, -482, -9, 466, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 424, -20, -525, 17, 298, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimStarRodNeutral_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, -804, 804, 83, 0, 12,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimStarRodNeutral_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimStarRodNeutral_joint17[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -8, 465, 9, 0, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -73, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -81, 119,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimStarRodNeutral_joint18[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 92, -24, -199, -3, 0, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -244, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -232, -69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimStarRodNeutral_joint20[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -199, 13, 0, -24, 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 131, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -243, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -163, -9, 0, 17, 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimStarRodNeutral_joint21[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, -5, -244, 5, 108, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -292, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -250, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -31, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -125, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 100, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -332, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -247, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -212, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -239, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -2, -244, 3, 108, 8,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimStarRodNeutral_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 579, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 564, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 260, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimStarRodNeutral_joint25[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, -5, -161, -24, -34, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -289, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -134, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 363, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 461, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 375, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -200, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -161, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 360, -13, -163, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 329, 0, -161, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -120, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -39, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 0, -161, 0, -34, 5,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimStarRodNeutral_joint26[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -10, 269, -7, -125, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 242, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 268, 60, -439, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 332, 59, -527, -74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 338, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -133, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 240, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 78, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 87, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 267, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 336, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 272, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 3, 269, -2, -125, 8,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimStarRodNeutral_joint28[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 509, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 585, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 462, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 435, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -10,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFE55, 0xFFE3, 0x0C46, 0xFFEF, 0xFFBB, 0x000D, 0x2809, 0x0007, 0x001B, 0xFFCF, 0x2805, 0x0009, 0x0B90, 0x0031, 0x2003, 0x0006, 0xFDEE, 0x001F, 0x2003, 0x0001, 0xFE06, 0x0009, 0x2803, 0x0010, 0xFE59, 0xFFFA, 0x2009, 0x0001, 0xFFE7, 0xFFCA, 0x2809, 0x0009, 0xFF40, 0x0011, 0x0801, 0x0001, 0x2005, 0x0001, 0x0BE5, 0x0048, 0x2805, 0x0009, 0x0C4A, 0x0000, 0x0801, 0x0007, 0x2009, 0x0001, 0xFF53, 0x0014, 0x2809, 0x0005, 0xFFB5, 0x0009, 0x0801, 0x0001, 0x2005, 0x0001, 0x0C4A, 0x0000, 0x2005, 0x0003, 0x0C47, 0x0000, 0x200F, 0x0001, 0xFE55, 0xFFFC, 0x0C46, 0x0000, 0xFFBB, 0x0005, 0x0000,
};
