/* AnimJoint data for relocData file 1805 (FTNessAnimPKFireAir) */
/* 3552 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimPKFireAir_joint1[64];
extern u16 dFTNessAnimPKFireAir_joint2[36];
extern u16 dFTNessAnimPKFireAir_joint4[10];
extern u16 dFTNessAnimPKFireAir_joint5[212];
extern u16 dFTNessAnimPKFireAir_joint6[70];
extern u16 dFTNessAnimPKFireAir_joint7[72];
extern u16 dFTNessAnimPKFireAir_joint8[36];
extern u16 dFTNessAnimPKFireAir_joint10[10];
extern u16 dFTNessAnimPKFireAir_joint11[162];
extern u16 dFTNessAnimPKFireAir_joint12[46];
extern u16 dFTNessAnimPKFireAir_joint13[70];
extern u16 dFTNessAnimPKFireAir_joint15[10];
extern u16 dFTNessAnimPKFireAir_joint16[178];
extern u16 dFTNessAnimPKFireAir_joint18[64];
extern u16 dFTNessAnimPKFireAir_joint19[176];
extern u16 dFTNessAnimPKFireAir_joint21[38];
extern u16 dFTNessAnimPKFireAir_joint22[194];
extern u16 dFTNessAnimPKFireAir_joint24[64];
extern u16 dFTNessAnimPKFireAir_joint25[212];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimPKFireAir_joints[] = {
	(u32)dFTNessAnimPKFireAir_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimPKFireAir_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimPKFireAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimPKFireAir_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimPKFireAir_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimPKFireAir_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimPKFireAir_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimPKFireAir_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimPKFireAir_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimPKFireAir_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimPKFireAir_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimPKFireAir_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimPKFireAir_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimPKFireAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimPKFireAir_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimPKFireAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimPKFireAir_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimPKFireAir_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimPKFireAir_joint25, /* [24] joint 25 */
	0xFFFF036A, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimPKFireAir_joint1[64] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 242, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 242, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 242, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 325, -85,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 242, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 299, -55,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 242, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 273, -35,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 242, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 258, -20,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 243, -4, 0, 14,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 242, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 242, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimPKFireAir_joint2[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -209,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), -328, 2, 0, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 51, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), 51, -1, 0, -3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -116, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimPKFireAir_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 148, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimPKFireAir_joint5[212] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -325, -136, -643, 23, 3197, 170,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -741, -45, -351, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3664, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3875, 147,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 4020, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -752, -23, -138, 181,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1539, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -70, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -205, -73, 4145, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -285, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 4582, 55,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1631, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1778, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -305, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -370, -84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1943, -642, 4653, 223,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 5347, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3063, -816, -493, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3576, -153, -334, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3066, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -314, 136, 5413, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 170, 5717, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3111, -23, 27, 46, 5790, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 5746, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -3116, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 33, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 32, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -81, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5742, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 5777, -12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3116, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -2948, 19,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -119, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -555, -79,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2929, -80, 5767, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 6158, 155,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3416, -115,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -605, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -640, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6294, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3509, -63, 6383, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3542, -32, -643, -2, 6414, 31,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimPKFireAir_joint6[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -539, -78,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -876, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -664, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -390, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 195,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -294, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -529, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, -10,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimPKFireAir_joint7[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 268,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0, 27, -458, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -286, 88,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 7, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -15, 0, -49, 251, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 173, -318,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -87, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 43, 0, 22, -386, -263,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -354, 125,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 43), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 114, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 114, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), 268,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimPKFireAir_joint8[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 194,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 248, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -10, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -158, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -80, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 104, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 107, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 194,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimPKFireAir_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimPKFireAir_joint11[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2182, 28, 968, 3, 1786, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 995, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2354, 125, 1967, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2527, 138, 2145, 141,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 3000, 72, 2614, 84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1058, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1260, -19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3068, 62, 2698, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2910, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 3192, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3283, 633, 1223, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1249, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4459, 918, 3021, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5120, 344, 3574, 382,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4922, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3787, 253,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4214, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1469, 189,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1628, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4914, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 4874, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4189, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 4266, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1628, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 24), 1551, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1524, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 980, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4859, 4, 4262, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 5380, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 4612, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4696, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 4986, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5399, 18, 968, -11, 5003, 17,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimPKFireAir_joint12[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -433, 22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -330, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -86, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 42), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -526, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -457, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, 24,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimPKFireAir_joint13[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -170, -63, 267,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 28, 16, -321, 11, -143, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 67, 24, 97, 38, 188, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 251, -83, 24, -147, 205, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -100, -120, -198, -151, -104, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 11, -7, -277, 40, -411, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -128, -6, -36, 10, 39, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -128, -1, -36, 0, 39, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -170, -63, 267,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimPKFireAir_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimPKFireAir_joint16[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -32, 3, -360, 2, -700, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -94, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 11, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -417, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, 123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 245, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -65, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -321, -148,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 167, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 87, -43, -1, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, -41, -468, -112, 86, -91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -572, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3, 78, -184, -234,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 108, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -382, -141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -503, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -503, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 164, 12, -569, -9, -514, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 87, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -407, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -522, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -542, 9,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 61, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -151, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -532, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -363, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -345, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -166, 60, -351, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -555, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -626, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -699, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -29, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, -3, -360, 3, -700, -1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimPKFireAir_joint18[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 439, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 797, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 747, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 532, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 558, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 254, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 437, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimPKFireAir_joint19[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -12, 6, 34, -2, -7, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -262, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -77, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 225, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 224, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 34, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -313, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -59, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -15, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 220, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 281, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 168, 61, 69, 61, 449, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -5, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -50, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 328, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 264, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -14, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 38, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -71, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -32, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, -13, -98, -17, 211, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -100, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 214, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -31, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -105, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -94, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 44, -4,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 199, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 133, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -114, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -16, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 136, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 40, -3, -7, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 35, -1, -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, 4, 34, 0, -7, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimPKFireAir_joint21[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -476, 178, 112,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 232, 10, 292, 7, 224, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -271, -19, 338, 1, 269, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -271, -5, 338, -3, 269, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -476, 178, 112,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimPKFireAir_joint22[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -59, -3, 442, 3, -799, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 314, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 57, 73, -367, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 133, 65, -188, 169,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 396, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 199, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 238, -70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 176, 110,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 393, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 7, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 167, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -139, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 317, 121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 560, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, -190,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -330, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -139, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -439, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -482, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -150, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -90, -2, 473, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -155, -12, 561, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -115, -5, 501, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -167, -12, 561, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -126, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 527, 1, -482, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -415, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 440, -13,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -117, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 54, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 77, -37, -430, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -38, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 428, -9, -672, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 441, 2, -798, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -44, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -59, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, 0, 442, 1, -799, -1,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimPKFireAir_joint24[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 614, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 660, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 583, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 521, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 664, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 625, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 286, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 222, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 319, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 609, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimPKFireAir_joint25[212] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1615, -3, 1712, -2, 1575, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1439, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1419, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 1403, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1343, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1369, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1492, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1607, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1425, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1540, 101,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1604, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1833, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1480, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1514, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1627, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1481, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1822, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1871, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1554, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1492, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1562, 13, 1805, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1805, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1507, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1563, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 1681, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1513, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1555, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1793, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 1876, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1686, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1609, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1569, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1712, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1873, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1646, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1623, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1579, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1614, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1615, 1, 1712, 0, 1575, -3,
	ftAnimEnd(),
	0x400E, 0xFEAD, 0xFF00, 0xFF2D, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x380F, 0x000F, 0x00AA, 0xFF13, 0xFF48, 0x200F, 0x0005, 0xFEAD, 0xFFF5, 0xFF00, 0x0000, 0xFF2D, 0x0000, 0x380F, 0x0028, 0xFEAD, 0xFF00, 0xFF2D, 0x0000, 0x0000,
};
