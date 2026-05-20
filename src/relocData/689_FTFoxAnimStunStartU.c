/* AnimJoint data for relocData file 689 (FTFoxAnimStunStartU) */
/* 2224 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimStunStartU_joint1[28];
extern u16 dFTFoxAnimStunStartU_joint2[14];
extern u16 dFTFoxAnimStunStartU_joint4[28];
extern u16 dFTFoxAnimStunStartU_joint5[128];
extern u16 dFTFoxAnimStunStartU_joint6[46];
extern u16 dFTFoxAnimStunStartU_joint7[16];
extern u16 dFTFoxAnimStunStartU_joint8[28];
extern u16 dFTFoxAnimStunStartU_joint10[10];
extern u16 dFTFoxAnimStunStartU_joint11[152];
extern u16 dFTFoxAnimStunStartU_joint12[80];
extern u16 dFTFoxAnimStunStartU_joint13[112];
extern u16 dFTFoxAnimStunStartU_joint15[10];
extern u16 dFTFoxAnimStunStartU_joint16[56];
extern u16 dFTFoxAnimStunStartU_joint18[28];
extern u16 dFTFoxAnimStunStartU_joint20[80];
extern u16 dFTFoxAnimStunStartU_joint21[74];
extern u16 dFTFoxAnimStunStartU_joint23[32];
extern u16 dFTFoxAnimStunStartU_joint24[76];
extern u16 dFTFoxAnimStunStartU_joint25[30];
extern u16 dFTFoxAnimStunStartU_joint26[32];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimStunStartU_joints[] = {
	(AObjEvent32 *)dFTFoxAnimStunStartU_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimStunStartU_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimStunStartU_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimStunStartU_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimStunStartU_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimStunStartU_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimStunStartU_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimStunStartU_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimStunStartU_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimStunStartU_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimStunStartU_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimStunStartU_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimStunStartU_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimStunStartU_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimStunStartU_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimStunStartU_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimStunStartU_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimStunStartU_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimStunStartU_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimStunStartU_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimStunStartU_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, -513, 9, 189, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 26, 0, 17, 19, 10, 480, 192, -15, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0, 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimStunStartU_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimStunStartU_joint4[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -457, 156,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 268, 35, 0, 20, 0, -2,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 156, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 536, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 309,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimStunStartU_joint5[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1230, 11, -425, 30, 408, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -203, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1309, -205, 286, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1632, -346, 472, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2533, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 349, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -167, 26, 312, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -129, -171,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -140, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2666, -134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2983, 33,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -302, -149,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -484, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2946, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -3155, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -134, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -194, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 15, 89,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3208, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3324, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 95, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 253, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -182, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -167, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3326, -2, -165, 1, 258, 5,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimStunStartU_joint6[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -581, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -414, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -428, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -496, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -561, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 2,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimStunStartU_joint7[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 0, 0, 0, 269, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimStunStartU_joint8[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -134, -402, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -134, 13, 0, 17, 0, -2,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 136, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 134, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -113,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimStunStartU_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimStunStartU_joint11[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 74, -27, -1696, -1, 2512, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1677, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 46, -56, 2446, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -37, -518, 2301, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -989, -608, -1390, 59, 2626, 147,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1726, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1255, -250, 2596, -80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2239, -280,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1585, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1763, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1815, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1904, -228,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1687, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1561, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1696, -92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1779, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1301, -237,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1814, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1872, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1789, -57, 1062, -135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1623, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1029, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1042, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1063, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1247, 157,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1941, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1911, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1882, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1573, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1476, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, 1, -1880, 2, 1945, 4,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimStunStartU_joint12[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -458, -46,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -505, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -382, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -265, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -354, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -468, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -268, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -267, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -632, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -625, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -599, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimStunStartU_joint13[112] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 272, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -178, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -223, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -223,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -223, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 0, -178, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 0, -178, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 0, 0, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 16, 89, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 33, 34, 107, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 69, 28, 26, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 89, 11, -89, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 92, 1, -98, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 91, 0, -107, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 89, 0, -89, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -89, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 89, -8, 0, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimStunStartU_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimStunStartU_joint16[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 381, -27, -90, 4, -397, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -754, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -284, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 80, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 58, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -404, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -32, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -296, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -226, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -1, -223, 2, -26, 5,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimStunStartU_joint18[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 294, 36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1113, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1080, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 386, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 362, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimStunStartU_joint20[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1751, 22, -1400, -1, 2183, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1525, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1655, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1636, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1516, -100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1357, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1543, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1537, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1659, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1738, 3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1368, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1548, 7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1544, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1561, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1735, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1561, 0, -1734, 1, 1552, 3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimStunStartU_joint21[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2269, -17, 1388, -8, 1664, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1411, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1698, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1442, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1500, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1430, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1445, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1433, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1679, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 1961, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1406, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1737, 9,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1428, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 1468, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1963, 2, 1470, 2, 1743, 5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimStunStartU_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 985, 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1181, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1156, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 446, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 402, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 341, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimStunStartU_joint24[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1816, 20, 1621, -12, -1579, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1536, -26, -2116, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1301, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1228, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1285, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1565, -22, -2269, -132,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1578, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2419, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2373, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1840, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1321, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1708, 5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1581, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1591, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1592, 0, 1711, 2, -1835, 4,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimStunStartU_joint25[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -571, 83, -164,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -602, -2, 237, 6, -420, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -629, 25, 232, 0, -99, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 219, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimStunStartU_joint26[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -384, -219, 190,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -331, 5, 65, 25, -47, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -268, 6, 350, -7, -231, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -178, -122, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
