/* AnimJoint data for relocData file 1620 (FTCaptainAnimJab2) */
/* 2096 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimJab2_joint1[44];
extern u16 dFTCaptainAnimJab2_joint2[34];
extern u16 dFTCaptainAnimJab2_joint4[42];
extern u16 dFTCaptainAnimJab2_joint5[100];
extern u16 dFTCaptainAnimJab2_joint6[48];
extern u16 dFTCaptainAnimJab2_joint7[18];
extern u16 dFTCaptainAnimJab2_joint8[34];
extern u16 dFTCaptainAnimJab2_joint10[26];
extern u16 dFTCaptainAnimJab2_joint11[154];
extern u16 dFTCaptainAnimJab2_joint12[54];
extern u16 dFTCaptainAnimJab2_joint13[42];
extern u16 dFTCaptainAnimJab2_joint14[12];
extern u16 dFTCaptainAnimJab2_joint16[18];
extern u16 dFTCaptainAnimJab2_joint17[56];
extern u16 dFTCaptainAnimJab2_joint19[32];
extern u16 dFTCaptainAnimJab2_joint21[96];
extern u16 dFTCaptainAnimJab2_joint22[82];
extern u16 dFTCaptainAnimJab2_joint24[32];
extern u16 dFTCaptainAnimJab2_joint25[74];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimJab2_joints[] = {
	(u32)dFTCaptainAnimJab2_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimJab2_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimJab2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimJab2_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimJab2_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimJab2_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimJab2_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimJab2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimJab2_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimJab2_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimJab2_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimJab2_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimJab2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimJab2_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimJab2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimJab2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimJab2_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimJab2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimJab2_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimJab2_joint1[44] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, -170, 18, 224,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1425, -95, 277, 66,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -78,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1481, 110, 100, -221,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 6), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1564, 95, 1, -80,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1600, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 6), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimJab2_joint2[34] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 114, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 502, 54, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 386, -34, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 158, -27, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 107, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimJab2_joint4[42] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 189, -7, -4, 57, -1, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 242, 1, 373, 20, 168, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 206, -4, 202, -34, 83, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 194, -1, 28, -20, 12, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 189, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimJab2_joint5[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2679, -63, -429, 231, 2521, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -69, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2743, -77, 2612, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2835, -46, 2812, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2825, -8, 2729, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -171, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -7, 78,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2852, -28, 2722, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2855, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -2975, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 49, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -47, -49,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2855, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2785, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -90, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -4, 17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2741, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2706, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2977, -1, 5, 10, 2692, -14,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimJab2_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1077, 31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1045, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1119, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1030, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -833, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -862, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -905, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1054, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1062, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -825, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimJab2_joint7[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3018, -19, -77, 0, 31, -14,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 2435, -89, -388,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimJab2_joint8[34] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -48, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 360, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -337, -23, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -230, 21, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -119, 23, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimJab2_joint10[26] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 97, -62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -168, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -126, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -66, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimJab2_joint11[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3020, 268, 260, -30, 310, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3288, 380, 230, -147, 464, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3780, 354, -34, 56, 445, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3998, 431, 343, 378, 353, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4643, 310, 721, 175, 964, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4619, 18, 694, 2, 942, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4680, 349, 725, 34, 1037, 392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5319, 540, 763, -24, 1728, 592,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5760, 241, 676, -101, 2222, 289,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 461, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5801, 22, 2307, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5805, 7, 2346, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5816, 93, 343, -15, 2382, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5993, 168, 429, -5, 2631, 245,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 6237, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3461, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 332, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 164, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6268, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 6305, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 146, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 146, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3635, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3799, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6304, -1, 144, -2, 3809, 9,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimJab2_joint12[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1102, -58,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1133, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -855, 564,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -600, -446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -892, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1174, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1158, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1052, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 27,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimJab2_joint13[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 287, 0, 44, 4, -79, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 283, -68, 95, 10, -47, 6,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -189, 0, 120, 12, -32, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 272, 28, 242, 9, 42, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 270, 275, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimJab2_joint14[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	_FT_ANIM_CMD(11, 0, 1), 14,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimJab2_joint16[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 18, 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 34), 0, 18, 0, -3,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 14,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimJab2_joint17[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, -50, -126, 26, -467, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 37, 10, -576, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -163, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -176, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -14, 56,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 45, 6, -561, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 65, 4, -475, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 43, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 180, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 10, 70, 4, -472, 2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimJab2_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 514, 55,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 758, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 453, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 446, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimJab2_joint21[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, 62, -44, 151, 15, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 157, 115, 77, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 301, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 458, 114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 497, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 270, 83, 179, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 151, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 115, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 459, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 225, -84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 106, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -94, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 93, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 79, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 139, -74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -33, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -104, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -119, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, -7, -42, -8, 80, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimJab2_joint22[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 113, 66, 206, -1, -153, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 90, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 471, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 109, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 55, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 188, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 89, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -137, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 466, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 186, -8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 203, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 119, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -149, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -81, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 180, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 167, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, -7, 110, -8, -76, 4,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimJab2_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 558, 45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 706, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 714, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 764, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 733, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 552, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimJab2_joint25[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, -16, 110, 49, -257, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -239, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -23, -40, 157, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -75, -32, 123, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -67, 17, 92, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -46, 34, 87, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 220, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 349, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -231, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -276, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 220, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 169, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, -8, 365, 16, -279, -2,
	ftAnimEnd(),
	0x0000, 0x0000,
};
