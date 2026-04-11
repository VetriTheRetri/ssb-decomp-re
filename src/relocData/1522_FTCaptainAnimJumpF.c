/* AnimJoint data for relocData file 1522 (FTCaptainAnimJumpF) */
/* 2256 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimJumpF_joint1[32];
extern u16 dFTCaptainAnimJumpF_joint2[38];
extern u16 dFTCaptainAnimJumpF_joint4[34];
extern u16 dFTCaptainAnimJumpF_joint5[120];
extern u16 dFTCaptainAnimJumpF_joint6[64];
extern u16 dFTCaptainAnimJumpF_joint7[36];
extern u16 dFTCaptainAnimJumpF_joint8[10];
extern u16 dFTCaptainAnimJumpF_joint10[34];
extern u16 dFTCaptainAnimJumpF_joint11[152];
extern u16 dFTCaptainAnimJumpF_joint12[56];
extern u16 dFTCaptainAnimJumpF_joint13[42];
extern u16 dFTCaptainAnimJumpF_joint14[26];
extern u16 dFTCaptainAnimJumpF_joint16[20];
extern u16 dFTCaptainAnimJumpF_joint17[80];
extern u16 dFTCaptainAnimJumpF_joint19[40];
extern u16 dFTCaptainAnimJumpF_joint21[86];
extern u16 dFTCaptainAnimJumpF_joint22[74];
extern u16 dFTCaptainAnimJumpF_joint24[134];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimJumpF_joints[] = {
	(u32)dFTCaptainAnimJumpF_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimJumpF_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimJumpF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimJumpF_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimJumpF_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimJumpF_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimJumpF_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimJumpF_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimJumpF_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimJumpF_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimJumpF_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimJumpF_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimJumpF_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimJumpF_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimJumpF_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimJumpF_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimJumpF_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimJumpF_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0205, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimJumpF_joint1[32] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValT(FT_ANIM_TRAX, 35), -55,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1560, -21, -35, -21,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 15), -46, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 15), 1548,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 1223, 7,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimJumpF_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 107, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 173, 58, -99, -83, -46, -16,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 34, -9, -107, 0, -5, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 240, 95, 49,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimJumpF_joint4[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 189, -93, 0, 89, 0, -31,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -86, -1, 294, 1, -94, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 38, 13, 210, -15, -13, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 242, -182, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimJumpF_joint5[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1368, 6, -1614, 181, 1084, 707,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1221, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1420, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1791, 429,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1943, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2144, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1292, -31, 2151, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 2120, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1302, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1312, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1460, -14,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1426, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1955, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2131, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1319, -74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1447, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1365, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1933, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1613, 56,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1259, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 851, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1548, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1298, 19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1414, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1289, 9, -1433, -18, 836, -14,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimJumpF_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, 464,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -332, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -330, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -391, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -387, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -274, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -262, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -639, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -824, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -897, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -975, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -971, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimJumpF_joint7[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -388, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -781, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -203, 0, 172, 0, -40, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -332, 0, 41, 0, -208, -20,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 16), -524,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -30, 0, 47, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -605, -82,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimJumpF_joint8[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -153, 113, -38,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimJumpF_joint10[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -196, 0, -272, 0, 83, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -88, 22, -152, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 193, 5, -120, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimJumpF_joint11[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -129, 178, 144, -16, 592, -291,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 61, -102, 243, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 300, -428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -264, -427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -82, -73, 194, -27, -807, -132,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -98, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 23, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -828, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -895, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -102, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -142, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -148, -37, 14, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -371, 40, 408, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -876, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -671, 66,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -321, 54, 400, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 240, 124, 250, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -597, 135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 553, 31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 355, 122, 145, -117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 444, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 9, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 84, 68, 564, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 194, 35, 618, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 297, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 159, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 102, -56, 218, 23, 639, 21,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimJumpF_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, -212,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1236, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1070, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1037, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -721, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -665, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -843, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -378, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -410, -31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimJumpF_joint13[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 13, -11, 10, -11, 75, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -40, 0, -42, 0, -107, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 214, 0, 105, 0, -35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 131, -2, -114, 1, -160, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 122, 156, 82,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimJumpF_joint14[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), 85, 49, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 1538, 0, -1003, 0, 119, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 1538, -1003, 119,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimJumpF_joint16[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 0, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), 255, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimJumpF_joint17[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1799, -37, 1538, -10, -2081, -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2705, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1646, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1762, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1812, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1750, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2701, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -2322, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1652, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1586, -13,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1742, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1518, -5,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1573, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1538, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2307, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1516, -1, 1537, -1, -2301, 5,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimJumpF_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 208,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 977, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1235, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1333, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1325, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 556, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 491, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 343, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 330, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimJumpF_joint21[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, 4, -42, 25, 80, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 136, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -26, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 147, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 244, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 246, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 132, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 91, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -32, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 38, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 244, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 320, 16,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 66, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 151, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 112, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, 10, 334, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 155, 3, 133, 5, 340, 5,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimJumpF_joint22[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1768, -17, 1498, 31, 1531, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1549, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 1475, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1642, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1640, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1493, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1542, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1595, 29,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1448, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 723, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1621, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1434, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1473, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 1436, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1431, -3, 1435, -1, 717, -6,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimJumpF_joint24[134] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, -31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 204, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 193, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 305, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1078, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1105, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1122, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1129, 6,
	ftAnimEnd(),
	0x0000, 0x200E, 0x06E9, 0x0002, 0xF84B, 0x0018, 0xF8A0, 0x004B, 0x2805, 0x0003, 0xF958, 0x0072, 0x200B, 0x0002, 0x06D7, 0xFFB0, 0xF9C0, 0x00DB, 0x200B, 0x0001, 0x064B, 0xFF9A, 0xFAA3, 0x00AB, 0x2809, 0x0004, 0xFB35, 0x000D, 0x2803, 0x0005, 0x061B, 0x0004, 0x2005, 0x0001, 0xF9AD, 0x0027, 0x2805, 0x0006, 0xF989, 0xFFFB, 0x0801, 0x0003, 0x2009, 0x0001, 0xFB44, 0x000F, 0x2809, 0x000F, 0xFB5B, 0xFFC6, 0x2003, 0x0001, 0x0620, 0x0005, 0x2803, 0x000E, 0x061F, 0xFFE0, 0x0801, 0x0001, 0x2005, 0x0001, 0xF983, 0xFFFB, 0x2805, 0x0017, 0xF914, 0x0000, 0x0801, 0x000C, 0x200B, 0x0001, 0x0601, 0xFFE9, 0xFB20, 0xFFC6, 0x200B, 0x000A, 0x069A, 0x0004, 0xF9E4, 0xFFFA, 0x200F, 0x0001, 0x069D, 0x0002, 0xF914, 0x0000, 0xF9E0, 0xFFFD, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
