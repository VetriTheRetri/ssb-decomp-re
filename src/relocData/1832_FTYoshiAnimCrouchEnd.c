/* AnimJoint data for relocData file 1832 (FTYoshiAnimCrouchEnd) */
/* 1152 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCrouchEnd_joint2[34];
extern u16 dFTYoshiAnimCrouchEnd_joint3[32];
extern u16 dFTYoshiAnimCrouchEnd_joint6[16];
extern u16 dFTYoshiAnimCrouchEnd_joint7[34];
extern u16 dFTYoshiAnimCrouchEnd_joint8[24];
extern u16 dFTYoshiAnimCrouchEnd_joint10[14];
extern u16 dFTYoshiAnimCrouchEnd_joint11[46];
extern u16 dFTYoshiAnimCrouchEnd_joint12[24];
extern u16 dFTYoshiAnimCrouchEnd_joint13[14];
extern u16 dFTYoshiAnimCrouchEnd_joint14[18];
extern u16 dFTYoshiAnimCrouchEnd_joint15[28];
extern u16 dFTYoshiAnimCrouchEnd_joint17[28];
extern u16 dFTYoshiAnimCrouchEnd_joint18[50];
extern u16 dFTYoshiAnimCrouchEnd_joint20[22];
extern u16 dFTYoshiAnimCrouchEnd_joint22[32];
extern u16 dFTYoshiAnimCrouchEnd_joint23[44];
extern u16 dFTYoshiAnimCrouchEnd_joint25[64];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimCrouchEnd_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTYoshiAnimCrouchEnd_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimCrouchEnd_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimCrouchEnd_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimCrouchEnd_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimCrouchEnd_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimCrouchEnd_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimCrouchEnd_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimCrouchEnd_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimCrouchEnd_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimCrouchEnd_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimCrouchEnd_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimCrouchEnd_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimCrouchEnd_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimCrouchEnd_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimCrouchEnd_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimCrouchEnd_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimCrouchEnd_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF010B, /* [25] END */
};

/* Joint 2 */
u16 dFTYoshiAnimCrouchEnd_joint2[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 0, 0, 9, -311, -303, -146, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 4, 0, 0, -8, -311, 272, -146, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 1, -89, 2, 30, 52, -132, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimCrouchEnd_joint3[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 670, 74, -30, -26, -1, -1, -26, -177,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 670, -67, -30, 24, -1, 1, -26, 159,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 0, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 0, 172,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimCrouchEnd_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -565, -71,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -565, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 78, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimCrouchEnd_joint7[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 552, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -1685, -1707,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1598, -1, -1620, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1099, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1168, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1258, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1596, 1, -1620, 0, 1284, 26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTYoshiAnimCrouchEnd_joint8[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -513, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -868, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -881, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -812, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimCrouchEnd_joint10[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -634, -70,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -634, 63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimCrouchEnd_joint11[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 219, 0, -1105, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -256,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -77, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 4, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1105, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -893, 200,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -34, 59,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -70, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 20, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 39, 18, 5, 0, 18, 52,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimCrouchEnd_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -435, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -435, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -682, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1292, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1291, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimCrouchEnd_joint13[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -634, -70,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -634, 63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimCrouchEnd_joint14[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 156, 0,
	ftAnimSetValRate(FT_ANIM_ROTY), -446, 49,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -536, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -446, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 9), -893,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimCrouchEnd_joint15[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 21, 216, 0, -120, 106,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -19, 216, 0, -120, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -190, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 215, -240,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimCrouchEnd_joint17[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 196, 38, 13, -30, -179, 75,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 196, -35, 13, 27, -179, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -153, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 48, -263,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimCrouchEnd_joint18[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 507, -280, -1068,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 255, -18, -294, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -254, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -235, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -275, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 234, -41, -145, 171,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 192, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 48, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 53, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 198, 6, -269, 6, 52, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTYoshiAnimCrouchEnd_joint20[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 966,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 288, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTYoshiAnimCrouchEnd_joint22[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1001, 443, -439,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 1395, 21, -72, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -245, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -129, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -111, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1407, 12, -76, -3, -101, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimCrouchEnd_joint23[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 1110, 0, -1861, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -2684,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1609, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1505, 50, -2192, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1553, 46, -2109, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1634, 26, -1954, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1604, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1651, 17, -1599, 5, -1909, 45,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimCrouchEnd_joint25[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 1011,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 661, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 545, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 440, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 374, -65,
	ftAnimEnd(),
	0x280C, 0xFEDE, 0x0000, 0xFF5B, 0x0000, 0x3802, 0x07D2, 0x2809, 0x0008, 0xFF7E, 0x0025, 0x2803, 0x0009, 0x0635, 0xFFED, 0x2005, 0x0006, 0xFFF9, 0xFFF2, 0x2005, 0x0001, 0xFFDC, 0xFFDE, 0x2805, 0x0002, 0xFF93, 0xFFEA, 0x0801, 0x0001, 0x2009, 0x0001, 0xFFA3, 0x001D, 0x200F, 0x0001, 0x0629, 0xFFF4, 0xFF88, 0xFFF5, 0xFFB9, 0x0016, 0x0000,
};
