/* AnimJoint data for relocData file 1843 (FTYoshiAnimDamageX3) */
/* 3136 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDamageX3_joint1[14];
extern u16 dFTYoshiAnimDamageX3_joint2[108];
extern u16 dFTYoshiAnimDamageX3_joint3[84];
extern u16 dFTYoshiAnimDamageX3_joint4[82];
extern u16 dFTYoshiAnimDamageX3_joint5[24];
extern u16 dFTYoshiAnimDamageX3_joint6[36];
extern u16 dFTYoshiAnimDamageX3_joint7[130];
extern u16 dFTYoshiAnimDamageX3_joint8[64];
extern u16 dFTYoshiAnimDamageX3_joint9[10];
extern u16 dFTYoshiAnimDamageX3_joint10[36];
extern u16 dFTYoshiAnimDamageX3_joint11[76];
extern u16 dFTYoshiAnimDamageX3_joint12[48];
extern u16 dFTYoshiAnimDamageX3_joint13[48];
extern u16 dFTYoshiAnimDamageX3_joint14[8];
extern u16 dFTYoshiAnimDamageX3_joint15[80];
extern u16 dFTYoshiAnimDamageX3_joint16[38];
extern u16 dFTYoshiAnimDamageX3_joint17[26];
extern u16 dFTYoshiAnimDamageX3_joint18[132];
extern u16 dFTYoshiAnimDamageX3_joint20[88];
extern u16 dFTYoshiAnimDamageX3_joint21[142];
extern u16 dFTYoshiAnimDamageX3_joint22[26];
extern u16 dFTYoshiAnimDamageX3_joint23[74];
extern u16 dFTYoshiAnimDamageX3_joint25[142];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimDamageX3_joints[] = {
	(u32)dFTYoshiAnimDamageX3_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimDamageX3_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimDamageX3_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimDamageX3_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimDamageX3_joint5, /* [4] joint 5 */
	(u32)dFTYoshiAnimDamageX3_joint6, /* [5] joint 6 */
	(u32)dFTYoshiAnimDamageX3_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimDamageX3_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimDamageX3_joint9, /* [8] joint 9 */
	(u32)dFTYoshiAnimDamageX3_joint10, /* [9] joint 10 */
	(u32)dFTYoshiAnimDamageX3_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimDamageX3_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimDamageX3_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimDamageX3_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimDamageX3_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimDamageX3_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimDamageX3_joint17, /* [16] joint 17 */
	(u32)dFTYoshiAnimDamageX3_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimDamageX3_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimDamageX3_joint21, /* [20] joint 21 */
	(u32)dFTYoshiAnimDamageX3_joint22, /* [21] joint 22 */
	(u32)dFTYoshiAnimDamageX3_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimDamageX3_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF02EC, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimDamageX3_joint1[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 672, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimDamageX3_joint2[108] = {
	ftAnimSetValAfter(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY), -633, -87, -4, -5, -198, -681, 4096, 2250,
	ftAnimSetValBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -359, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -845, 2,
	ftAnimSetValRateT(FT_ANIM_TRAY, 17), -49, -52,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 19), 0,
	ftAnimSetValT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 30), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 4), 6963,
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 8), 2867,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 15), -390, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -774, 11,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 4), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 14), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), -156, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -402, 93,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), -308, 879,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -22, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), -166, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 8), 0, 11, 20, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 30, 367,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -89, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimDamageX3_joint3[84] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_SCAX), 0, 4095,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 84, 4095, -838, 4095, -817,
	ftAnimSetValBlock(FT_ANIM_ROTX), 820,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 2867, 2867,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 94, -118,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 1141,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 862,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 1251,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -33,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), 1077,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4505, 4507,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -142,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 125,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), -98,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1220, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 4095, 4095,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 16, -39,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 9), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimDamageX3_joint4[82] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -44, 4095, 4095,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), 0, 0, 4096,
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 8165, 2642,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -327,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -90,
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3111, 3897,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -455,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -322, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4560, 3578,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAZ), 111,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAY), -190,
	ftAnimSetValRateT(FT_ANIM_SCAY, 5), 3548, -141,
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 4), 4540, 685,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 6), 4096, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAY, 5), 4096, 60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -206, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2, 69,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 4095, 4095,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 84, -11,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimDamageX3_joint5[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 268, 117,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 536,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 10), 536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 149, -98,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimDamageX3_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_SCAX | FT_ANIM_SCAY), 4095, 602, 4095, 613,
	ftAnimSetValAfterBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 6), 5113, 69, 5126, 47,
	ftAnimSetValRateT(FT_ANIM_SCAX, 7), 4762, -222,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY, 6), 4870, -195,
	ftAnimSetValRateT(FT_ANIM_SCAY, 7), 4095, -201,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 6), 4095, -191,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 11), 4095, 4095,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimDamageX3_joint7[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 180, -129, -48, -467, -492,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 113, 31, -177, -99, -960, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3, 142, -327, -23, -797, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 399, 9, -225, -67, -1210, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, -101, -461, -27, -676, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 196, -59, -279, 53, -975, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -103, -36, -354, -23, -530, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 122, 61, -325, -27, -870, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, -10, -408, -47, -756, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 120, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -427, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -880, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -909, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -688, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 143, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -18, -65,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -395, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -127, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -79, -53, -591, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -108, 1, -348, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, -1, -131, -4, -352, -4,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimDamageX3_joint8[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -547, 467,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -79, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -105, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -638, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -302, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -528, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -555, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -820, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -858, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -774, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTYoshiAnimDamageX3_joint9[10] = {
	ftAnimSetVal(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 30), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimDamageX3_joint10[36] = {
	ftAnimSetValRate(FT_ANIM_SCAX | FT_ANIM_SCAY), 4095, 764, 4095, 774,
	ftAnimSetValAfterBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 5156, -593, 5168, -565,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 4), 4701, 472, 4689, 460,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 4), 4977, -239, 4969, -268,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 6), 4095, -51, 4095, -57,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 11), 4095, 4095,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimDamageX3_joint11[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1611, -18, -1721, -34, -2338, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1621, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2281, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1951, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1986, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -2044, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1551, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1554, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2228, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -2252, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1532, 20, -2052, -3, -2224, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -1646, -96, -1935, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1683, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1568, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1753, -106, -1505, 62, -1827, 107,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDamageX3_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -740, -60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -713, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -711, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -756, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -527, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -566, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1036, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1082, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1080, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 77,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimDamageX3_joint13[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, 3, 92, 6, 0, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 190, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 186, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 40, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 221, 59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 0, -68,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 168, -15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 0, -134,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, -101,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimDamageX3_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimDamageX3_joint15[80] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), 0, 0, 4095,
	ftAnimSetValRate(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, -2511, 4095, 6954,
	ftAnimSetValBlock(FT_ANIM_ROTX), 52,
	ftAnimSetValRateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 2451, -245, 6661, 145,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -67,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 106,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 2), 5309, -3963,
	ftAnimSetValRateT(FT_ANIM_SCAY, 7), 3890, 1264,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -161, -102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 2), 3721, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -389, -6,
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 3), 4128, 911,
	ftAnimSetValRateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, -756, 4095, -567,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -76, 103,
	ftAnimBlock(0, 4),
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4095,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -190, -101,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTYoshiAnimDamageX3_joint16[38] = {
	ftAnimSetVal(FT_ANIM_ROTX), 116,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -139,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 129,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -46,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -190, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -417, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -207, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 67, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -153, -87,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimDamageX3_joint17[26] = {
	ftAnimSetValRate(FT_ANIM_SCAX), 4096, -1252,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 8), 3697, 987,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 4), 5565, -338,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 2), 4457, -675,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 3), 4097, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 13), 4096,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimDamageX3_joint18[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, 274, -134,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -23, -23, -18, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 89, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 287, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 123, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 140, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 189, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 204, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 223, 191,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -53, -43, -50, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -128, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -505, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 481, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 64, 802, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -103, 780, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -210, -158, 577, -147,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -240, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 484, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 493, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -437, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -260, 112,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -140, 51, 536, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -45, 54, 45, -89,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -134, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 129, 5, 50, -3, -49,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDamageX3_joint20[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 269, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 240, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 520, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 413, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 394, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 227, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 198, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 565, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 637, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 457, -324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 586, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 734, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 517, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 330, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 393, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -131,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTYoshiAnimDamageX3_joint21[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 0, 0, 0, 30, 107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -17, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1670, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 176, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 349, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 181, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 168, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 120, -122,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -62, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -312, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1657, -31, -5, -121,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1229, -230, -248, 169,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -423, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -93, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 992, 135, 83, 128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -188, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1500, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1505, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1229, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -253, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -176, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -134, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -200, 58,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -214, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -402, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1371, 131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1573, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -121, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -80, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 41, -83, -3, -263, 138,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTYoshiAnimDamageX3_joint22[26] = {
	ftAnimSetValRate(FT_ANIM_SCAX), 4096, -1518,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 6), 3043, 631,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 4), 5399, 1406,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 3), 4947, -1131,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 12), 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimDamageX3_joint23[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, 0, -1608, 0, 2115, -140,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 29), -1608, 0, -1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1986, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2091, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2036, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2174, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 2142, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2139, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 2136, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2082, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1846, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1724, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1310, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1287, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1370, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 0, -1608, 0, 1454, 84,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimDamageX3_joint25[142] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 188, -188,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 497, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 368, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 112, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 259, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 311, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 846, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 886, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 557, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -178,
	ftAnimEnd(),
	0x200E, 0x0648, 0x0000, 0x0000, 0x0000, 0x004A, 0x0042, 0x2807, 0x001D, 0x0648, 0x0000, 0xFFB6, 0xFFF2, 0x2009, 0x0001, 0x008D, 0xFFFE, 0x2009, 0x0001, 0x0044, 0xFFE7, 0x2009, 0x0004, 0x0158, 0x0016, 0x2009, 0x0001, 0x015F, 0x0006, 0x2009, 0x000A, 0x0084, 0xFFE6, 0x2009, 0x0001, 0x005C, 0xFFAD, 0x2009, 0x0002, 0xFFB3, 0xFFC3, 0x2009, 0x0001, 0xFF63, 0xFF9B, 0x2009, 0x0004, 0xFE72, 0xFFFD, 0x2009, 0x0001, 0xFE64, 0x0000, 0x2009, 0x0003, 0xFECC, 0x0043, 0x200F, 0x0001, 0x0649, 0x0000, 0xFFA7, 0xFFF1, 0xFF1C, 0x004F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
