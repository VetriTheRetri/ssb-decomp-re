/* AnimJoint data for relocData file 1943 (FTYoshiAnimExitPipeWalk) */
/* 1840 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimExitPipeWalk_joint1[20];
extern u16 dFTYoshiAnimExitPipeWalk_joint2[42];
extern u16 dFTYoshiAnimExitPipeWalk_joint3[28];
extern u16 dFTYoshiAnimExitPipeWalk_joint6[66];
extern u16 dFTYoshiAnimExitPipeWalk_joint7[62];
extern u16 dFTYoshiAnimExitPipeWalk_joint10[32];
extern u16 dFTYoshiAnimExitPipeWalk_joint11[62];
extern u16 dFTYoshiAnimExitPipeWalk_joint13[24];
extern u16 dFTYoshiAnimExitPipeWalk_joint14[58];
extern u16 dFTYoshiAnimExitPipeWalk_joint15[48];
extern u16 dFTYoshiAnimExitPipeWalk_joint17[52];
extern u16 dFTYoshiAnimExitPipeWalk_joint18[72];
extern u16 dFTYoshiAnimExitPipeWalk_joint20[46];
extern u16 dFTYoshiAnimExitPipeWalk_joint22[66];
extern u16 dFTYoshiAnimExitPipeWalk_joint23[62];
extern u16 dFTYoshiAnimExitPipeWalk_joint25[56];
extern u16 dFTYoshiAnimExitPipeWalk_joint26[72];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimExitPipeWalk_joints[] = {
	(u32)dFTYoshiAnimExitPipeWalk_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimExitPipeWalk_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimExitPipeWalk_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimExitPipeWalk_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimExitPipeWalk_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimExitPipeWalk_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimExitPipeWalk_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimExitPipeWalk_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTYoshiAnimExitPipeWalk_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimExitPipeWalk_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimExitPipeWalk_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimExitPipeWalk_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimExitPipeWalk_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimExitPipeWalk_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimExitPipeWalk_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimExitPipeWalk_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimExitPipeWalk_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimExitPipeWalk_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 746,
	ftAnimSetValBlock(FT_ANIM_TRAZ), -2520,
	ftAnimSetValT(FT_ANIM_TRAZ, 40), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 746,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 746,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimExitPipeWalk_joint2[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -89,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), 89,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 10,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), -44, 60, 43,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAY), 0, 30,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 20), 44, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 43,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 20), -44, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimExitPipeWalk_joint3[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 515, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 541, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 420, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 178, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 251,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 178,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimExitPipeWalk_joint6[66] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, 22, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -117, -24, -46, -10, 51, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -114, 0, -78, -2, 35, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -111, 0, -70, 5, 8, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -108, 0, -19, 11, -37, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -112, 0, 46, 10, -49, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -115, 0, 84, 2, -28, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -117, 0, 66, -6, 6, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -116, 22, 35,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimExitPipeWalk_joint7[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 5, -64, -2, -671, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 6, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -531, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -495, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -567, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -600, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -594, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -9, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -638, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, 0, -9, 0, -625, 13,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimExitPipeWalk_joint10[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -776, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -827, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -858, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1092, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1096, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1082, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1085, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimExitPipeWalk_joint11[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1615, 4, 1665, 1, -2260, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 1606, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), -1614, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -2173, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2146, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2293, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2317, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2159, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1611, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1621, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2156, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -2110, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1614, 0, 1621, 0, -2095, 14,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimExitPipeWalk_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -675, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -900, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -933, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -1102, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1103, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimExitPipeWalk_joint14[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -760, -1055, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -691, 7, -1001, -5, 53, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -686, 2, -1108, -17, 101, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -672, 31, -1124, 35, 128, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -498, 53, -893, 32, 0, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -296, -21, -893, 3, 0, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -730, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -852, 530,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -357, -893, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimExitPipeWalk_joint15[48] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -44,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 21), 44,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 7,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -312,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -44,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 5,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -312,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 19), -44,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -44,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -312,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 21), 44,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -44,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimExitPipeWalk_joint17[52] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTY), -162, 17,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -312,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 0, 20,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), 178,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -312,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, -17,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -44,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -178, -12,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -312,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -162, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimExitPipeWalk_joint18[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 1, -1, 119, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 79, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 15, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 155, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 123, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -437, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -49, 116,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 78, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 10, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 65, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 97, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 1, 0, 123, 26,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimExitPipeWalk_joint20[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 6, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 97, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 680, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 529, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 469, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 150, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTYoshiAnimExitPipeWalk_joint22[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 1607, -12, 1508, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -73, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 1739, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1221, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1186, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 1489, -15,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -72, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1751, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1620, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1473, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1537, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1528, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 1607, -12, 1511, -17,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimExitPipeWalk_joint23[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -24, -1, 5, -2, -289, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 2, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 8, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -15, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -6, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -24, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 99, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 240, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 254, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 53, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 22, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -237, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -24, 0, 5, -2, -289, -52,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimExitPipeWalk_joint25[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 747, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 495, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 434, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 114, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 153, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 505, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 716, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 747, 31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimExitPipeWalk_joint26[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 5, -1601, -11, 1347, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1680, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 4, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1460, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1450, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1526, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1663, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -1591, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 13, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1509, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1214, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1184, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1310, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 3, -1601, -9, 1347, 36,
	ftAnimEnd(),
};
