/* AnimJoint data for relocData file 1611 (FTCaptainAnimHeavyItemThrowSmashB) */
/* 2592 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimHeavyItemThrowSmashB_joint1[56];
extern u16 dFTCaptainAnimHeavyItemThrowSmashB_joint2[32];
extern u16 dFTCaptainAnimHeavyItemThrowSmashB_joint4[56];
extern u16 dFTCaptainAnimHeavyItemThrowSmashB_joint5[154];
extern u16 dFTCaptainAnimHeavyItemThrowSmashB_joint6[64];
extern u16 dFTCaptainAnimHeavyItemThrowSmashB_joint7[34];
extern u16 dFTCaptainAnimHeavyItemThrowSmashB_joint8[30];
extern u16 dFTCaptainAnimHeavyItemThrowSmashB_joint10[10];
extern u16 dFTCaptainAnimHeavyItemThrowSmashB_joint11[190];
extern u16 dFTCaptainAnimHeavyItemThrowSmashB_joint12[80];
extern u16 dFTCaptainAnimHeavyItemThrowSmashB_joint13[46];
extern u16 dFTCaptainAnimHeavyItemThrowSmashB_joint14[12];
extern u16 dFTCaptainAnimHeavyItemThrowSmashB_joint16[32];
extern u16 dFTCaptainAnimHeavyItemThrowSmashB_joint17[62];
extern u16 dFTCaptainAnimHeavyItemThrowSmashB_joint19[40];
extern u16 dFTCaptainAnimHeavyItemThrowSmashB_joint21[74];
extern u16 dFTCaptainAnimHeavyItemThrowSmashB_joint22[86];
extern u16 dFTCaptainAnimHeavyItemThrowSmashB_joint24[40];
extern u16 dFTCaptainAnimHeavyItemThrowSmashB_joint25[146];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimHeavyItemThrowSmashB_joints[] = {
	(u32)dFTCaptainAnimHeavyItemThrowSmashB_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimHeavyItemThrowSmashB_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimHeavyItemThrowSmashB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimHeavyItemThrowSmashB_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimHeavyItemThrowSmashB_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimHeavyItemThrowSmashB_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimHeavyItemThrowSmashB_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimHeavyItemThrowSmashB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimHeavyItemThrowSmashB_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimHeavyItemThrowSmashB_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimHeavyItemThrowSmashB_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimHeavyItemThrowSmashB_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimHeavyItemThrowSmashB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimHeavyItemThrowSmashB_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimHeavyItemThrowSmashB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimHeavyItemThrowSmashB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimHeavyItemThrowSmashB_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimHeavyItemThrowSmashB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimHeavyItemThrowSmashB_joint25, /* [24] joint 25 */
	0xFFFF0269, /* [25] END */
};

/* Joint 1 */
u16 dFTCaptainAnimHeavyItemThrowSmashB_joint1[56] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 1094,
	ftAnimSetValRate(FT_ANIM_TRAZ), 240, -2,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1094, 6, 240, -2,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 16), 1257, 298,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 6), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 120, 206,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetValT(FT_ANIM_TRAX, 20), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 20), 1600,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 360, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimHeavyItemThrowSmashB_joint2[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRate(FT_ANIM_ROTX), 447, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 446, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 89, -7, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 107, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimHeavyItemThrowSmashB_joint4[56] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), -23,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 215, 0, 40, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 4), 216, 0, 40, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -223, 3, 35, 0, -51, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 251, 69, -52, -100, 69, 67,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 83, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 189,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), -90,
	ftAnimSetValRateT(FT_ANIM_TRAY, 15), -31, 36,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 15), 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimHeavyItemThrowSmashB_joint5[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1516, 47, -1055, -1, 2690, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1018, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1303, 74, 2436, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1241, 20, 2386, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1433, -72, 2701, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1497, -65, -1004, 10, 2819, 122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 3422, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -974, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1615, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1567, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1446, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3476, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -921, 39, 3594, 88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1023, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1317, 116, 3654, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1126, 101, 3680, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1010, 38, -1239, -114, 3609, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1050, -32, -1253, -19, 3743, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1076, -20, -1277, -26, 3852, 97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1248, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1531, -27, 4213, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1559, 18, 4205, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1493, 38, 4299, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1277, -25, -1482, 0, 4338, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1363, -9, -1604, -17, 4306, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1368, -5, -1614, -9, 4301, -5,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimHeavyItemThrowSmashB_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -512, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -414, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -469, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -599, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -585, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -554, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -424, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -321, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -489, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -792, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimHeavyItemThrowSmashB_joint7[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -241, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -241, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -643, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -781, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -208, 0, 0, -3, 0, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -781, -89, -388,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimHeavyItemThrowSmashB_joint8[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 151, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 151, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 10,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 134, 7,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 178, 51,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimHeavyItemThrowSmashB_joint10[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 40,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimHeavyItemThrowSmashB_joint11[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -183, -54, 589, 0, 1057, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -430, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 572, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 880, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 776, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -485, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -112, 94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 590, 11, 916, 145,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 571, 38, 1723, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -24, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 53, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -26, -125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -472, -341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 622, 81, 1726, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 735, 54, 1776, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -881, -172, 730, -42, 1666, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 515, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -817, 59, 1864, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -763, 36, 1986, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -679, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 352, -83, 2033, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 348, -6, 2139, 96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2480, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -629, 43, 339, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -497, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 316, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 383, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 343, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -429, 69, 2603, 123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 3607, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -106, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -124, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -134, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 296, -49, 3673, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 157, -24, 3799, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, 5, 144, -13, 3809, 9,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimHeavyItemThrowSmashB_joint12[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -518, 19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -413, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -468, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -568, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -548, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -607, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -279, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -364, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1078, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1062, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1030, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimHeavyItemThrowSmashB_joint13[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 397, 3, -36, 1, -84, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 397, 21, -36, -2, -84, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 612, 6, -64, -5, -9, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 506, -43, -127, -4, 144, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -33, -11, -136, 20, 410, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 270, 275, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimHeavyItemThrowSmashB_joint14[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	_FT_ANIM_CMD(11, 0, 1), 40,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimHeavyItemThrowSmashB_joint16[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 131, -2, -100, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 131, -2, -100, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 70, -3, -91, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 638, 0, -70, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 0, 0, 0, 6,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimHeavyItemThrowSmashB_joint17[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 136, 0, 33, 0, -1138, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), 62, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), 176, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1162, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1155, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -466, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -469, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -474, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 67, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 70, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 181, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 189, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 1, 70, 0, -472, 1,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimHeavyItemThrowSmashB_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 964, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 910, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 897, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 950, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 524, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 487, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 459, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimHeavyItemThrowSmashB_joint21[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, -5, -35, 0, -211, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -29, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -99, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -125, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -135, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -152, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -75, 40,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -33, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -42, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -97, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -125, -1,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -34, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 66, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, -1, -42, 0, 80, 13,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimHeavyItemThrowSmashB_joint22[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 31, 0, 175, 0, -676, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), 52, 13, 206, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -741, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -767, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -421, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -369, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 93, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 66, 14, 202, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 89, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 169, -3,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 117, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -70, -11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 95, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 109, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 166, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 161, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 0, 110, 1, -76, -5,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimHeavyItemThrowSmashB_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 912, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 972, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 998, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 726, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 674, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 388, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 418, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 537, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimHeavyItemThrowSmashB_joint25[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 10, 8, 301, 0, -463, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 19, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 325, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -422, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -424, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -446, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 43, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 180, 3,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -432, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -292, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 183, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 162, -1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 332, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 364, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -293, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -281, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, 0, 365, 0, -279, 1,
	ftAnimEnd(),
	0x28C2, 0xFCDC, 0x0000, 0x01E0, 0x0001, 0xFF9D, 0xFFB3, 0x482C, 0x0000, 0x0000, 0x0000, 0x2883, 0x0004, 0xFC7A, 0xFFD2, 0xFF59, 0xFF9E, 0x3841, 0x0004, 0x01DF, 0x20C3, 0x0006, 0xFB06, 0xFFEB, 0x0258, 0x008D, 0xFE54, 0xFEEB, 0x20C3, 0x0005, 0xFAF1, 0x0004, 0x02C1, 0x009E, 0xFDB5, 0xFFFD, 0x3002, 0x007F, 0x20C3, 0x0005, 0xFF88, 0x0010, 0x031D, 0xFF13, 0x040C, 0x073A, 0x2843, 0x0014, 0x0000, 0xFFFF, 0xFD3C, 0xFBF7, 0x3881, 0x0014, 0x0B35, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
