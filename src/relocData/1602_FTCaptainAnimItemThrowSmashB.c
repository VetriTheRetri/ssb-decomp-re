/* AnimJoint data for relocData file 1602 (FTCaptainAnimItemThrowSmashB) */
/* 1856 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimItemThrowSmashB_joint1[26];
extern u16 dFTCaptainAnimItemThrowSmashB_joint2[42];
extern u16 dFTCaptainAnimItemThrowSmashB_joint4[54];
extern u16 dFTCaptainAnimItemThrowSmashB_joint5[82];
extern u16 dFTCaptainAnimItemThrowSmashB_joint6[32];
extern u16 dFTCaptainAnimItemThrowSmashB_joint7[34];
extern u16 dFTCaptainAnimItemThrowSmashB_joint8[44];
extern u16 dFTCaptainAnimItemThrowSmashB_joint10[8];
extern u16 dFTCaptainAnimItemThrowSmashB_joint11[130];
extern u16 dFTCaptainAnimItemThrowSmashB_joint12[58];
extern u16 dFTCaptainAnimItemThrowSmashB_joint13[26];
extern u16 dFTCaptainAnimItemThrowSmashB_joint14[10];
extern u16 dFTCaptainAnimItemThrowSmashB_joint16[26];
extern u16 dFTCaptainAnimItemThrowSmashB_joint17[60];
extern u16 dFTCaptainAnimItemThrowSmashB_joint19[24];
extern u16 dFTCaptainAnimItemThrowSmashB_joint21[64];
extern u16 dFTCaptainAnimItemThrowSmashB_joint22[58];
extern u16 dFTCaptainAnimItemThrowSmashB_joint24[100];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimItemThrowSmashB_joints[] = {
	(u32)dFTCaptainAnimItemThrowSmashB_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimItemThrowSmashB_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimItemThrowSmashB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimItemThrowSmashB_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimItemThrowSmashB_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimItemThrowSmashB_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimItemThrowSmashB_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimItemThrowSmashB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimItemThrowSmashB_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimItemThrowSmashB_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimItemThrowSmashB_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimItemThrowSmashB_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimItemThrowSmashB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimItemThrowSmashB_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimItemThrowSmashB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimItemThrowSmashB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimItemThrowSmashB_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimItemThrowSmashB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF01AA, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimItemThrowSmashB_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1600, -59, 0, 110,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 1540, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 110,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 1600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimItemThrowSmashB_joint2[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 107, 0, 4, -76,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 9, -344, 3, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), -96, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 134, 25, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 18), 4, -76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, -1, 107, -1, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimItemThrowSmashB_joint4[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, 0, 0, 0, -31, 47,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, -32, 0, 16, -36, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -116, -46, -236, -38, 81, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -89, 87, -233, 160, 92, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 146, 15, 245, 12, -30, -5, -32, 0, -14, -14, 48, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 189, 0, 0, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimItemThrowSmashB_joint5[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, 2, 5, -38, -524, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 55, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -295, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -186, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 147,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 82, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -14, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 227, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -297, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -59, 29,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 46, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -518, -10,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 236, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 240, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -32, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, 0, 5, 4, -524, -5,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimItemThrowSmashB_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -53,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -998, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -928, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1017, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1004, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -804, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimItemThrowSmashB_joint7[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -781, -89, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -460, 33, 9, 14, 41, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -578, 91, 0, -5, 0, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -93, -11, -10, -4, -47, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -781, -89, -388,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimItemThrowSmashB_joint8[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -56, 4, 279, -2, -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 28, -16, -139, 6, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -8, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -3, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -115, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimItemThrowSmashB_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimItemThrowSmashB_joint11[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3087, 26, 144, 35, 592, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3113, 75, 179, 44, 649, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3239, 449, 233, -181, 829, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4013, 568, -184, -25, 517, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4377, 211, 182, 292, 313, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 578, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4436, 50, 422, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4477, -117, 504, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 814, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4201, -52, 982, 483,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4372, 87, 1545, 289,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 4381, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1562, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1577, -60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, 105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2190, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1449, -87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1460, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4416, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 4704, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4703, -2, 1463, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 4697, -2, 1464, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4696, -1, 1464, 0, 2200, 10,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimItemThrowSmashB_joint12[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, -47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1138, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1019, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -933, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, 464,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 418,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -372, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -541, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1053, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1032, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 8,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimItemThrowSmashB_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 188, -36, 229, -39, 235, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -129, 4, -160, 2, 492, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimItemThrowSmashB_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimItemThrowSmashB_joint16[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 18, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -70, 23, -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 213, 3, -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 0, 18, 0, -3,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimItemThrowSmashB_joint17[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, 0, 70, -17, -472, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 77, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -193, -47, -429, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -226, 31, -431, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -5, 69, -622, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 106, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 190, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 10, 15, -604, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 70, 0, -474, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 0, 70, 0, -472, 2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimItemThrowSmashB_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 524, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 505, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 444, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimItemThrowSmashB_joint21[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, -3, -42, -15, 80, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -2, 117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 80, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -122, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -48, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -136, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 106, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 71, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -140, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -126, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 60, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -38, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, 0, -42, -3, 80, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimItemThrowSmashB_joint22[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, -17, 110, 3, -76, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -18, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -168, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -173, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -250, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 85, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -16, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 108, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 113, 24, -161, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 160, 0, -78, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 0, 110, 1, -76, 1,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimItemThrowSmashB_joint24[100] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 573, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 568, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 542, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0x00A1, 0xFFFD, 0x016D, 0xFFEE, 0xFEE9, 0x0001, 0x280B, 0x0007, 0x0043, 0xFFCA, 0xFED0, 0xFFC9, 0x2005, 0x0006, 0x014B, 0x0057, 0x2005, 0x0001, 0x01C3, 0x0052, 0x2805, 0x0006, 0x01CC, 0xFFF9, 0x200B, 0x0001, 0x0000, 0xFFE0, 0xFE92, 0xFFE2, 0x2803, 0x0008, 0x0057, 0x000E, 0x2809, 0x0009, 0xFEC7, 0x0007, 0x0801, 0x0005, 0x2005, 0x0001, 0x01C4, 0xFFF8, 0x2805, 0x0009, 0x0170, 0xFFFC, 0x0801, 0x0002, 0x2003, 0x0001, 0x0065, 0x000D, 0x2803, 0x0006, 0x009E, 0x0003, 0x2009, 0x0001, 0xFECF, 0x0007, 0x2009, 0x0005, 0xFEE8, 0x0001, 0x200F, 0x0001, 0x00A1, 0x0002, 0x016D, 0xFFFD, 0xFEE9, 0x0000, 0x0000,
};
