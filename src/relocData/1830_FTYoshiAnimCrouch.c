/* AnimJoint data for relocData file 1830 (FTYoshiAnimCrouch) */
/* 944 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCrouch_joint2[24];
extern u16 dFTYoshiAnimCrouch_joint3[22];
extern u16 dFTYoshiAnimCrouch_joint6[12];
extern u16 dFTYoshiAnimCrouch_joint7[24];
extern u16 dFTYoshiAnimCrouch_joint8[16];
extern u16 dFTYoshiAnimCrouch_joint10[10];
extern u16 dFTYoshiAnimCrouch_joint11[24];
extern u16 dFTYoshiAnimCrouch_joint12[16];
extern u16 dFTYoshiAnimCrouch_joint13[10];
extern u16 dFTYoshiAnimCrouch_joint14[14];
extern u16 dFTYoshiAnimCrouch_joint15[20];
extern u16 dFTYoshiAnimCrouch_joint17[20];
extern u16 dFTYoshiAnimCrouch_joint18[54];
extern u16 dFTYoshiAnimCrouch_joint20[32];
extern u16 dFTYoshiAnimCrouch_joint22[42];
extern u16 dFTYoshiAnimCrouch_joint23[30];
extern u16 dFTYoshiAnimCrouch_joint25[16];
extern u16 dFTYoshiAnimCrouch_joint26[34];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimCrouch_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTYoshiAnimCrouch_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimCrouch_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimCrouch_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimCrouch_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimCrouch_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimCrouch_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimCrouch_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimCrouch_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimCrouch_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimCrouch_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimCrouch_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimCrouch_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimCrouch_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimCrouch_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimCrouch_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimCrouch_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimCrouch_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimCrouch_joint26, /* [25] joint 26 */
};

/* Joint 2 */
u16 dFTYoshiAnimCrouch_joint2[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -1, -89, -1, 30, -31, -132, -29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 4, 0, 0, 9, -311, -303, -146, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimCrouch_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 670, 74, -30, -26, -1, -1, -26, -177,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimCrouch_joint6[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 78, -36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -565, -71,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimCrouch_joint7[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1596, 0, -1620, -1, 1284, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1653, -31, -1716, 2, 688, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1685, -31, -1707, 9, 552, -136,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimCrouch_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -655, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -513, 141,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimCrouch_joint10[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -634, -70,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimCrouch_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 39, -20, 5, 0, 18, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 76, 119, -254, -24, -871, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 219, 143, -256, -2, -1105, -233,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimCrouch_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1291, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -706, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -435, 270,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimCrouch_joint13[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -634, -70,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimCrouch_joint14[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -893,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, 0, 0, 156, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -446, 49,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimCrouch_joint15[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 215, -240,
	ftAnimSetValRate(FT_ANIM_ROTX), -190, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 21, 216, 0, -120, 106,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimCrouch_joint17[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, -263,
	ftAnimSetValRate(FT_ANIM_ROTX), -153, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 196, 38, 13, -30, -179, 75,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimCrouch_joint18[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 198, -6, -269, -6, 52, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 241, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -275, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 47, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -198, -206,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -926, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 259, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 434, 80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -310, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -312, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 507, 73, -280, 31, -1068, -142,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimCrouch_joint20[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 352, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 904, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 966, 61,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimCrouch_joint22[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1407, -14, -76, 5, -102, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 286, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1055, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -126, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -265, -103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -437, -11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 379, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1001, -54, 443, 63, -439, -2,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimCrouch_joint23[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1651, -15, -1599, -4, -1909, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1210, -102, -2562, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1769, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1836, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1110, -99, -1861, -24, -2684, -121,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimCrouch_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 374, 65,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 992, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1011, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimCrouch_joint26[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1577, 10, -120, 14, -71, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1968, 47, -201, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -120, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -216, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2002, 34, -290, -73, -165, 36,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
