/* AnimJoint data for relocData file 1683 (FTNessAnimLandingAirX) */
/* 1184 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimLandingAirX_joint1[22];
extern u16 dFTNessAnimLandingAirX_joint2[8];
extern u16 dFTNessAnimLandingAirX_joint4[18];
extern u16 dFTNessAnimLandingAirX_joint5[42];
extern u16 dFTNessAnimLandingAirX_joint7[24];
extern u16 dFTNessAnimLandingAirX_joint8[22];
extern u16 dFTNessAnimLandingAirX_joint10[8];
extern u16 dFTNessAnimLandingAirX_joint11[60];
extern u16 dFTNessAnimLandingAirX_joint12[24];
extern u16 dFTNessAnimLandingAirX_joint13[18];
extern u16 dFTNessAnimLandingAirX_joint15[10];
extern u16 dFTNessAnimLandingAirX_joint16[38];
extern u16 dFTNessAnimLandingAirX_joint18[24];
extern u16 dFTNessAnimLandingAirX_joint19[46];
extern u16 dFTNessAnimLandingAirX_joint21[20];
extern u16 dFTNessAnimLandingAirX_joint22[42];
extern u16 dFTNessAnimLandingAirX_joint24[24];
extern u16 dFTNessAnimLandingAirX_joint25[90];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimLandingAirX_joints[] = {
	(u32)dFTNessAnimLandingAirX_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimLandingAirX_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimLandingAirX_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimLandingAirX_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimLandingAirX_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTNessAnimLandingAirX_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimLandingAirX_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimLandingAirX_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimLandingAirX_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimLandingAirX_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimLandingAirX_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimLandingAirX_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimLandingAirX_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimLandingAirX_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimLandingAirX_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimLandingAirX_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimLandingAirX_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimLandingAirX_joint25, /* [24] joint 25 */
	0xFFFF0112, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimLandingAirX_joint1[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 35, 470, -102,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 35, -59, 424, 76, -102, 84,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -16, -4, 537, 18, -28, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimLandingAirX_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimLandingAirX_joint4[18] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 613, 258, 110,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 613, 258, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -5, 0, -1, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimLandingAirX_joint5[42] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -493, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -626, 338,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -505, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 407, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -406, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -343, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -270, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -441, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, 31, -261, 9, 415, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimLandingAirX_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -294, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -384, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -462, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimLandingAirX_joint8[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 651, -4, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 651, -94, -4, 52, 176, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -10, 0, 364, -3, -32, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimLandingAirX_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimLandingAirX_joint11[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -2066, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -2150, 775,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 719, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2150, -131, -2066, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2413, -250, -2311, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2651, -299, -2500, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3013, -382, -2804, -329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3416, -289, 677, -56, -3160, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3592, -108, 607, -53, -3308, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3632, -40, 569, -37, -3336, -27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNessAnimLandingAirX_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -238, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -332, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -475, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -574, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimLandingAirX_joint13[18] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 625, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 54, 126,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 90,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimLandingAirX_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimLandingAirX_joint16[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -279, 100, -378, -49, -510, -149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -299, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -178, 45, -660, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -188, -19, -614, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -350, -26, -322, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -14, -279, 19, -297, 24,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimLandingAirX_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 498, 151,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 650, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 633, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 423, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimLandingAirX_joint19[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 225, 9, 428, -1, 153, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 143, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 19, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 421, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 409, -70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 90, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 109, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 39, -52, 24, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -33, 12, -78, 26, 1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimLandingAirX_joint21[20] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -155, 55, 148,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -155, 55, 148,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -66, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimLandingAirX_joint22[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -40, 5, -34, -5, -426, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -101, -28, 51, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -238, 36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -123, -13, 108, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, -4, 136, 28, -210, 27,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimLandingAirX_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 771, 138,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 910, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 865, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 474, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -67,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimLandingAirX_joint25[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, 3, 396, -1, -315, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -85, 50, -319, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 394, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 383, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 62, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -23, 65, -263, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 44, 49, -225, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, 31, 25, -37, -202, 23,
	ftAnimEnd(),
	0x400E, 0xFFE1, 0xFFF6, 0x005B, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0001, 0xFFA3, 0xFFFE, 0xFFF6, 0x0000, 0x005E, 0x0002, 0x200F, 0x0001, 0xFFDC, 0x0030, 0xFFF6, 0x0000, 0x0061, 0xFFFF, 0x200F, 0x0001, 0x0004, 0x0012, 0xFFF6, 0x0002, 0x005B, 0xFFED, 0x380F, 0x0004, 0x0038, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
