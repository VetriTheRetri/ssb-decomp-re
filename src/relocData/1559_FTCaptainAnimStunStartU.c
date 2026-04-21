/* AnimJoint data for relocData file 1559 (FTCaptainAnimStunStartU) */
/* 2640 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimStunStartU_joint1[36];
extern u16 dFTCaptainAnimStunStartU_joint2[16];
extern u16 dFTCaptainAnimStunStartU_joint4[54];
extern u16 dFTCaptainAnimStunStartU_joint5[164];
extern u16 dFTCaptainAnimStunStartU_joint6[80];
extern u16 dFTCaptainAnimStunStartU_joint7[30];
extern u16 dFTCaptainAnimStunStartU_joint8[32];
extern u16 dFTCaptainAnimStunStartU_joint10[10];
extern u16 dFTCaptainAnimStunStartU_joint11[130];
extern u16 dFTCaptainAnimStunStartU_joint12[48];
extern u16 dFTCaptainAnimStunStartU_joint13[10];
extern u16 dFTCaptainAnimStunStartU_joint14[14];
extern u16 dFTCaptainAnimStunStartU_joint16[24];
extern u16 dFTCaptainAnimStunStartU_joint17[108];
extern u16 dFTCaptainAnimStunStartU_joint19[56];
extern u16 dFTCaptainAnimStunStartU_joint21[110];
extern u16 dFTCaptainAnimStunStartU_joint22[154];
extern u16 dFTCaptainAnimStunStartU_joint24[64];
extern u16 dFTCaptainAnimStunStartU_joint25[130];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimStunStartU_joints[] = {
	(u32)dFTCaptainAnimStunStartU_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimStunStartU_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimStunStartU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimStunStartU_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimStunStartU_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimStunStartU_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimStunStartU_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimStunStartU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimStunStartU_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimStunStartU_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimStunStartU_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimStunStartU_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimStunStartU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimStunStartU_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimStunStartU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimStunStartU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimStunStartU_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimStunStartU_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimStunStartU_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimStunStartU_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 17, 420, -23,
	ftAnimSetValRate(FT_ANIM_ROTZ), 268, 36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 71, 0, -17, 12, -4, 840, 314, -17, 6,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 1600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimStunStartU_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 107, 0, 4, -76, 9,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimStunStartU_joint4[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -72, 0, -74,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 205, 5, 39, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 268, 9, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -45, 38, 0, -1, 24, 91,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 40, -2, -34, 96, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 402, -5, -43, -15, 100, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 5), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 189, 0, 0, -31, 47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimStunStartU_joint5[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3, -20, 143, -32, 480, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 386, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -6, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 50, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -8, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -52, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 321, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 164, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 85, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 43, -94, 26, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 91, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -103, -138, -18, -122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -319, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -80, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 164, 48, -46, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 132, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -9, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -335, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -246, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 89, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -188, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -232, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -126, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -18, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -30, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -80, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -307, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -64, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 231, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -167, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -7, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -376, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -513, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 238, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, 1, 5, 12, -524, -10,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimStunStartU_joint6[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1129, 44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1085, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -965, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -621, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -470, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -269, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -276, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -506, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -722, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -742, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -764, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -800, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -845, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -824, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -805, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimStunStartU_joint7[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 406, 68, 69,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -242, -20, 0, -3, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, -20, 0, -3, 0, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -781, -89, -388,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimStunStartU_joint8[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -178, 60,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -134, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 0, 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 134, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -223, -5,
	ftAnimBlock(0, 14),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimStunStartU_joint10[10] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -357, 104,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 30), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimStunStartU_joint11[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -518, -2, 283, 5, -273, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -513, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 415, 42, -78, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 458, 38, -12, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 461, -37, 178, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -485, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -332, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 421, -41, 126, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -256, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 161, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -331, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -352, 23,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -303, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -207, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 130, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 140, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -324, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -155, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -101, 114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 573, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 140, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 144, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -142, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -130, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, 1, 144, 0, 592, 18,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimStunStartU_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1185, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1240, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1221, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -985, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -896, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -518, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -572, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -989, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1043, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1033, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimStunStartU_joint13[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 449, 44, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimStunStartU_joint14[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 85, 49, 38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1538, -1003, 119,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 85, 49, 38,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimStunStartU_joint16[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 151, 62, -195,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 0, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 348, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -85, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 0, 18,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimStunStartU_joint17[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2373, -1, 1599, 49, -1520, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -2265, 70, 1759, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1703, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1838, -145,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2320, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2186, 82, 1749, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1832, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1782, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1787, -37, -2496, -160,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1614, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1631, 156, -2640, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1518, 68, -2686, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -2087, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1495, 18, 1574, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1517, -17, 1550, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1533, -12, 1561, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1419, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 1535, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1536, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1537, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1417, 1, 1538, 0, -2081, 6,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimStunStartU_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 111, 126,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 414, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 683, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 768, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1010, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1075, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 867, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 806, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 577, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 554, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 447, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimStunStartU_joint21[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -40, 9, -77, 9, 318, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 76, 11, 96, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 175, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 261, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 312, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 250, -112, 85, 7, 78, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 43, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 97, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -55, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -114, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -147, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 15, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 27, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 105, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 80, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -123, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -124, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 19, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -40, -2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -125, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -126, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, 0, -42, -1, 80, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimStunStartU_joint22[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -193, -65, -87, -33, -457, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -356, -108, -587, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -120, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -92, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 103, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -474, -109, -662, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -632, -53, -752, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -682, -10, 167, 72, -778, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -505, 212, -647, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 248, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 363, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 271, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -227, 243, -445, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -18, 107, -286, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -11, 3, -408, -119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -670, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 11, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 246, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 199, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -679, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -491, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 26, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 127, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 187, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 112, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -437, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -83, 13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 138, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 158, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 1, 110, -1, -76, 7,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimStunStartU_joint24[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 964, 81,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1085, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1073, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1005, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1078, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1174, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1224, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1238, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1185, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1157, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1125, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 620, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 589, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 547, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimStunStartU_joint25[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1363, 73, -1804, 23, -1348, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1713, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1442, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1290, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1300, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1348, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1610, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1452, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1515, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1931, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1310, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1210, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1491, -70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1814, -74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1210, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1306, -89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1865, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1931, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1428, -100, -1952, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1890, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1523, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1486, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1499, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1936, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1974, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1501, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -1448, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1447, 1, -1973, 0, -1888, 2,
	ftAnimEnd(),
};
