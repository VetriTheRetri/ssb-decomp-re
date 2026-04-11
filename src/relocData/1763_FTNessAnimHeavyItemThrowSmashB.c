/* AnimJoint data for relocData file 1763 (FTNessAnimHeavyItemThrowSmashB) */
/* 3584 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimHeavyItemThrowSmashB_joint1[38];
extern u16 dFTNessAnimHeavyItemThrowSmashB_joint2[94];
extern u16 dFTNessAnimHeavyItemThrowSmashB_joint4[42];
extern u16 dFTNessAnimHeavyItemThrowSmashB_joint5[192];
extern u16 dFTNessAnimHeavyItemThrowSmashB_joint6[62];
extern u16 dFTNessAnimHeavyItemThrowSmashB_joint7[12];
extern u16 dFTNessAnimHeavyItemThrowSmashB_joint8[52];
extern u16 dFTNessAnimHeavyItemThrowSmashB_joint10[24];
extern u16 dFTNessAnimHeavyItemThrowSmashB_joint11[158];
extern u16 dFTNessAnimHeavyItemThrowSmashB_joint12[42];
extern u16 dFTNessAnimHeavyItemThrowSmashB_joint13[14];
extern u16 dFTNessAnimHeavyItemThrowSmashB_joint15[12];
extern u16 dFTNessAnimHeavyItemThrowSmashB_joint16[180];
extern u16 dFTNessAnimHeavyItemThrowSmashB_joint18[80];
extern u16 dFTNessAnimHeavyItemThrowSmashB_joint19[160];
extern u16 dFTNessAnimHeavyItemThrowSmashB_joint21[42];
extern u16 dFTNessAnimHeavyItemThrowSmashB_joint22[164];
extern u16 dFTNessAnimHeavyItemThrowSmashB_joint24[78];
extern u16 dFTNessAnimHeavyItemThrowSmashB_joint25[172];
extern u16 dFTNessAnimHeavyItemThrowSmashB_joint26[120];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimHeavyItemThrowSmashB_joints[] = {
	(u32)dFTNessAnimHeavyItemThrowSmashB_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimHeavyItemThrowSmashB_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimHeavyItemThrowSmashB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimHeavyItemThrowSmashB_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimHeavyItemThrowSmashB_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimHeavyItemThrowSmashB_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimHeavyItemThrowSmashB_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimHeavyItemThrowSmashB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimHeavyItemThrowSmashB_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimHeavyItemThrowSmashB_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimHeavyItemThrowSmashB_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimHeavyItemThrowSmashB_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimHeavyItemThrowSmashB_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimHeavyItemThrowSmashB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimHeavyItemThrowSmashB_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimHeavyItemThrowSmashB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimHeavyItemThrowSmashB_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimHeavyItemThrowSmashB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimHeavyItemThrowSmashB_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimHeavyItemThrowSmashB_joint26, /* [25] joint 26 */
	0xFFFF035D, /* [26] END */
};

/* Joint 1 */
u16 dFTNessAnimHeavyItemThrowSmashB_joint1[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 531, 209,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -2, 531, -58, 209, -40,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -3, -5, 457, -43, 159, -82,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -5, 0, 487, 21, 126, -42,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 27), 0, 540, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimHeavyItemThrowSmashB_joint2[94] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, -223,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_SCAY), -120, 164, 4096, 450,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 11), 0, -223,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAY, 5), -120, -119, 4096, -327,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAY, 6), -284, -164, 2293, -450,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY, 2), 0, 0, -284, 655, -223, 397, 2293, 768,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 5, 371, 560, 173, 598,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 3), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 24), 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 1, 0, -17, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 5, 0, 206, -834, 300, -133,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -2, -150, -82, 90, -119,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 28, -360, 8, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimHeavyItemThrowSmashB_joint4[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 534, 0, 0, -104,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 5), 534, -16, -104, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 222, -9, 0, 0, 0, 0, 0, 23,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 357, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 16), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimHeavyItemThrowSmashB_joint5[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1529, 4, -93, 13, 524, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1461, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -337, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 463, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 529, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 575, 26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1427, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1496, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 607, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 881, 184,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -411, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -475, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1715, -203, 1103, 201,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2314, -86, 1676, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -433, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -311, 52,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2398, -154, 1748, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2624, -260, 1914, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2919, -217, 2164, 205,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3083, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2443, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -249, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -229, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3071, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2982, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2465, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2716, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -239, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -410, -29,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3016, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3083, -162, 2834, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3341, -219, -428, 25, 3190, 306,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -300, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3624, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3447, 186,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3615, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -268, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3627, -2, -261, 7, 3632, 17,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimHeavyItemThrowSmashB_joint6[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, -134,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -143, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -180, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -138, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -285, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -463, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -485, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimHeavyItemThrowSmashB_joint7[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 4,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimHeavyItemThrowSmashB_joint8[52] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 327, 4, 2, 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 327, 31, 4, -1, 2, 0, 0, 0, 288, 2, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 768, 20, -18, 0, 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 599, -29, 0, 14, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -10, 0, 364, -3, -32, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimHeavyItemThrowSmashB_joint10[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 80), 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 40,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 35), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimHeavyItemThrowSmashB_joint11[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1545, 11, 1514, 3, 2137, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 2069, 139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1215, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 2156, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2175, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2361, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2224, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2463, 313, 1137, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1265, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2851, 322, 2666, 259,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 3397, 64, 3198, 82,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1277, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1352, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3455, 53, 3275, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3594, 117, 3500, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3738, 131, 3737, 201,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 4004, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3964, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1400, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1417, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4020, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 4286, 59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3977, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 4121, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1415, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1319, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4157, 75, 1292, -107, 4350, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 4369, 69, 4653, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1104, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1051, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4409, 40, 1038, -12, 4706, 52,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimHeavyItemThrowSmashB_joint12[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 13), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -402, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -524, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimHeavyItemThrowSmashB_joint13[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimHeavyItemThrowSmashB_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	_FT_ANIM_CMD(11, 0, 1), 5,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimHeavyItemThrowSmashB_joint16[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1438, 0, -1477, 0, 1188, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1304, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1572, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1020, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 960, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 898, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1270, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1265, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1609, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1467, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1368, -104, 1079, 219,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1587, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1337, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1460, -10, 1677, 190,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1482, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1600, -11, 1718, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1674, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1746, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1775, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1902, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1922, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1696, 64, -1441, 54, 1924, -192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1360, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1546, 106, 1536, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1483, 32, 1418, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1385, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1584, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1359, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1380, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1380, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1331, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1628, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2009, -18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1323, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1341, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1392, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2022, -12, -1397, -4, 1345, 4,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimHeavyItemThrowSmashB_joint18[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 726, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 764, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 772, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1026, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 987, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 512, -415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 659, 404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 816, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 844, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 838, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 515, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 455, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 389, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimHeavyItemThrowSmashB_joint19[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1402, 0, 1765, 2, 1402, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1405, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 1351, -20, 1772, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1327, -28, 1768, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1266, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1756, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1420, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1522, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1357, 89, 1461, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1504, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1793, 25, 1460, 100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1751, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1661, 156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1869, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1493, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1475, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1941, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1771, 5, 1760, -167,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1734, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1493, -1, 1605, -148,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1381, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1464, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1189, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1151, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1375, -4, 1742, 7, 1157, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1491, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1598, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 1555, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1587, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1650, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1531, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1561, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1656, 6, 1591, -7, 1573, 11,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimHeavyItemThrowSmashB_joint21[42] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -214, -2, 18, 0, 42, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -182, 22, 14, 0, 33, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 234, 11, 9, 0, 22, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -38, -15, 16, 0, 143, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -66, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimHeavyItemThrowSmashB_joint22[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -267, -2, 109, -1, -443, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -400, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -4, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -620, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -573, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -434, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -430, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -42, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 174, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -312, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -194, 128, -333, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -54, 79, 32, 207,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -26, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, -26, 81, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 153, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 196, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -20, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 6, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 276, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 205, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, -122, 221, 9, -147, -255,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -330, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 79, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -383, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -447, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -325, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -332, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -127, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 74, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 174, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -266, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -169, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -121, 6, 179, 4, -152, 16,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimHeavyItemThrowSmashB_joint24[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 707, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 749, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 762, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 992, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 959, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 551, -412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 175, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 721, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 905, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 697, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 339, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, -23,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimHeavyItemThrowSmashB_joint25[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 240, 9, 251, -2, -123, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -98, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 199, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 282, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 301, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 345, -67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -70, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -19, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 185, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 241, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 247, -85, -106, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 128, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -95, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 118, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 230, -11, 187, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 207, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 147, 19, 258, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 143, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 318, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 247, 23, 124, -166,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 162, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 115, -4, -15, -168,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 262, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -211, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -402, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -406, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -169, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 277, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 106, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 145, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 30, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -169, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -180, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 106, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 107, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 107, 0, 28, -1, -174, 5,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimHeavyItemThrowSmashB_joint26[120] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -133, -2, 1, 0, 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -92, 19, 1, 0, 3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 263, 8, 0, 0, 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 15, -25, 0, 0, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -90, 2, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 56, 0, 0,
	ftAnimEnd(),
	0x0000, 0x4002, 0xFCDC, 0x28E0, 0x0000, 0x0000, 0x00FB, 0xFDFA, 0xFF2F, 0x0015, 0x480C, 0x0000, 0x0000, 0x20E3, 0x0005, 0xFCDC, 0x000E, 0x0000, 0x0000, 0x00FB, 0xFF00, 0xFF2F, 0xFF46, 0x4003, 0x000E, 0xFDEC, 0x20E1, 0x0006, 0x0000, 0x0000, 0xFF9C, 0xFEBE, 0xFE2F, 0xFEAA, 0x20E1, 0x0002, 0x0000, 0x0000, 0xFFBA, 0x0355, 0xFDD9, 0x0381, 0x20E1, 0x0003, 0x0000, 0x0000, 0x01B1, 0x0507, 0x005F, 0x0667, 0x20E1, 0x0003, 0x0000, 0x0000, 0x037F, 0x052B, 0x02A5, 0x05CC, 0x40E1, 0x0015, 0x0002, 0x1134, 0x11C6, 0x1003, 0x0015, 0xFDEC, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
