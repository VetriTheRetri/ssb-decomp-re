/* AnimJoint data for relocData file 1788 (FTNessAnimLandingAirF) */
/* 1504 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimLandingAirF_joint2[34];
extern u16 dFTNessAnimLandingAirF_joint4[32];
extern u16 dFTNessAnimLandingAirF_joint5[82];
extern u16 dFTNessAnimLandingAirF_joint6[32];
extern u16 dFTNessAnimLandingAirF_joint7[10];
extern u16 dFTNessAnimLandingAirF_joint10[56];
extern u16 dFTNessAnimLandingAirF_joint11[88];
extern u16 dFTNessAnimLandingAirF_joint12[30];
extern u16 dFTNessAnimLandingAirF_joint13[40];
extern u16 dFTNessAnimLandingAirF_joint15[10];
extern u16 dFTNessAnimLandingAirF_joint16[54];
extern u16 dFTNessAnimLandingAirF_joint18[24];
extern u16 dFTNessAnimLandingAirF_joint19[38];
extern u16 dFTNessAnimLandingAirF_joint21[30];
extern u16 dFTNessAnimLandingAirF_joint22[46];
extern u16 dFTNessAnimLandingAirF_joint24[24];
extern u16 dFTNessAnimLandingAirF_joint25[70];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimLandingAirF_joints[] = {
	(u32)dFTNessAnimLandingAirF_joint2, /* [0] joint 2 */
	0x00000000, /* [1] NULL */
	(u32)dFTNessAnimLandingAirF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimLandingAirF_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimLandingAirF_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimLandingAirF_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimLandingAirF_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimLandingAirF_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimLandingAirF_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimLandingAirF_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimLandingAirF_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimLandingAirF_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimLandingAirF_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimLandingAirF_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimLandingAirF_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimLandingAirF_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimLandingAirF_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimLandingAirF_joint25, /* [24] joint 25 */
	0xFFFF016D, /* [25] END */
};

/* Joint 2 */
u16 dFTNessAnimLandingAirF_joint2[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 19, 348, 288,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 19, -7, 345, -6, 283, -16,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 360, 102,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 12), 5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 252, -80,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 203, -330,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 500, 584, 5, -419,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimLandingAirF_joint4[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 352, 407, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 344, -5, 407, -22, 23, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 316, -20, 247, -33, 14, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 246, -38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimLandingAirF_joint5[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -289, -79, -649, 4, 804, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -366, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -548, 88, 1014, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -395, 170, 851, -179,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 534, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -110, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -99, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -375, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 530, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 738, 83,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -338, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -149, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 806, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 598, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -651, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -757, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -596, 160, -301, -152, 602, 3,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimLandingAirF_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -324, -51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -500, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -358, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -541, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -693, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -853, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -746, 107,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimLandingAirF_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimLandingAirF_joint10[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 119, -58, -18,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 145, 23, -58, 8, -18, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 284, 45, 0, 29, -24, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 418, 20, 117, 43, -31, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 406, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 218, 41, -34, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 364, -3, -32, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimLandingAirF_joint11[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -664, 12, 359, 23, -1138, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -764, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 397, -48, -873, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 335, -48, -872, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -727, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 297, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 447, 162,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 702, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -648, 222, -560, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -318, 467, -176, 514,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 285, 418, 467, 444,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 567, -54, 758, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 656, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 690, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 409, -420, 621, -387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -274, -683, 662, -27, -15, -636,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimLandingAirF_joint12[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -619, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -655, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -561, 93,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimLandingAirF_joint13[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -493, -157, -28,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -64, 25, 102, 24, 101, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 64, -9, 217, 46,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 41,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 23, -1, 473, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 72,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimLandingAirF_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimLandingAirF_joint16[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1803, 0, -1079, 0, 710, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 706, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1104, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 1819, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1790, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1355, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 759, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1115, 110,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1144, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1209, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1274, -80, -1282, -73, 1221, 105,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimLandingAirF_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 895, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 832, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 835, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, -221,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimLandingAirF_joint19[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -112, 0, 54, 2, -8, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 10, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 200, 15, 36, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 202, -19, 9, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 28, -24, -213, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 27, 16, 14, -14, -103, 110,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimLandingAirF_joint21[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -255, 412, 185,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -255, -7, 412, -2, 185, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -346, 17, 381, -64, 190, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -151, 24, 78,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimLandingAirF_joint22[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 2, 323, 2, 225, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 421, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -58, 4, 168, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -69, -31, 110, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -204, 22, -266, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 404, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 233, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -165, 39, 177, -55, -252, 14,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimLandingAirF_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 316, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 303, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 350, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 624, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 504, -119,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimLandingAirF_joint25[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, 3, 42, 4, -600, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 76, -15, -474, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 256, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 304, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 205, -66,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 60, -14, -478, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 37, -8, -391, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 134, -70, 30, -7, -269, 121,
	ftAnimEnd(),
	0x400E, 0x0128, 0x00FD, 0xFFCE, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x000A, 0x006C, 0xFFF1, 0x0069, 0xFFF1, 0xFF37, 0x0003, 0x380F, 0x0006, 0x0038, 0x0000, 0x0000, 0x0000,
};
