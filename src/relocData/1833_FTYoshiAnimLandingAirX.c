/* AnimJoint data for relocData file 1833 (FTYoshiAnimLandingAirX) */
/* 1248 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimLandingAirX_joint2[62];
extern u16 dFTYoshiAnimLandingAirX_joint3[20];
extern u16 dFTYoshiAnimLandingAirX_joint6[16];
extern u16 dFTYoshiAnimLandingAirX_joint7[50];
extern u16 dFTYoshiAnimLandingAirX_joint8[36];
extern u16 dFTYoshiAnimLandingAirX_joint10[14];
extern u16 dFTYoshiAnimLandingAirX_joint11[56];
extern u16 dFTYoshiAnimLandingAirX_joint12[34];
extern u16 dFTYoshiAnimLandingAirX_joint13[12];
extern u16 dFTYoshiAnimLandingAirX_joint14[20];
extern u16 dFTYoshiAnimLandingAirX_joint15[16];
extern u16 dFTYoshiAnimLandingAirX_joint17[16];
extern u16 dFTYoshiAnimLandingAirX_joint18[42];
extern u16 dFTYoshiAnimLandingAirX_joint20[32];
extern u16 dFTYoshiAnimLandingAirX_joint22[34];
extern u16 dFTYoshiAnimLandingAirX_joint23[42];
extern u16 dFTYoshiAnimLandingAirX_joint25[32];
extern u16 dFTYoshiAnimLandingAirX_joint26[38];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimLandingAirX_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTYoshiAnimLandingAirX_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimLandingAirX_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimLandingAirX_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimLandingAirX_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimLandingAirX_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimLandingAirX_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimLandingAirX_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimLandingAirX_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimLandingAirX_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimLandingAirX_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimLandingAirX_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimLandingAirX_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimLandingAirX_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimLandingAirX_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimLandingAirX_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimLandingAirX_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimLandingAirX_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimLandingAirX_joint26, /* [25] joint 26 */
};

/* Joint 2 */
u16 dFTYoshiAnimLandingAirX_joint2[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 268, -1, 0, -1, 0, 0, -43, -33, 117, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -2, -38, 0, -12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, -265, -888, 33, -335,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -265, 33,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, -265, 797, 33, 169,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, -66, 591, 75, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 1, -89, 1, 30, 1, 20, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimLandingAirX_joint3[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -89, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 176, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 16, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimLandingAirX_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 540, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 78, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimLandingAirX_joint7[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1831, -80, -270, 15, 1275, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -2103, 172, 1558, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -471, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -922, -462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1396, -316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1843, 229, -1555, -91, 1591, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1645, 117, -1578, -26, 1350, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 36, -1608, -29, 1144, -205,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimLandingAirX_joint8[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -490, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -349, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -654, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -596, 114,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimLandingAirX_joint10[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -714,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -714, 102,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimLandingAirX_joint11[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 225, 79, -1877, 17, -328, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 465, 176, -2075, -327, -193, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 657, 63, -2514, -361, -54, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 593, -74, -2798, -331, -69, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 507, -207, -3178, -204, 63, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, -253, -3207, -19, 62, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -178, -3216, -9, -135, -197,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimLandingAirX_joint12[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -435, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -714, -553,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1106, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1163, -56,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimLandingAirX_joint13[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -714,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 4, 0, 2,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimLandingAirX_joint14[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -536, -893,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 156, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1072, -893,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -893, 625,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -536,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimLandingAirX_joint15[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 123, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -282, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -190, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimLandingAirX_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 96, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -410, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -153, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimLandingAirX_joint18[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 1, -672, -285,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -4, -1, 5, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -957, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -787, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -167, 299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 50, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 0, 5, 0, 37, -12,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimLandingAirX_joint20[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1024, 267,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1291, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1234, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1175, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, -413,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 195, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 189, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimLandingAirX_joint22[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -1, 0, 0, -375, -195,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1614, 2, -64, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -658, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -462, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -256, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1616, 1, -83, -19, -241, 15,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimLandingAirX_joint23[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 1, -672, -281,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -2, 1, 1, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -953, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -771, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -597, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -165, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -76, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 2, 0, -1, -115, -38,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimLandingAirX_joint25[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1024, 266,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1290, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1228, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1167, -318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 591, -391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 304, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimLandingAirX_joint26[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -1, 0, 0, -375, -198,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1612, 0, -67, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -670, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -240, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1611, -1, -89, -21, -212, 27,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
