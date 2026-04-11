/* AnimJoint data for relocData file 1528 (FTCaptainAnimCrouch) */
/* 1168 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCrouch_joint1[28];
extern u16 dFTCaptainAnimCrouch_joint2[28];
extern u16 dFTCaptainAnimCrouch_joint4[36];
extern u16 dFTCaptainAnimCrouch_joint5[44];
extern u16 dFTCaptainAnimCrouch_joint6[24];
extern u16 dFTCaptainAnimCrouch_joint7[18];
extern u16 dFTCaptainAnimCrouch_joint8[8];
extern u16 dFTCaptainAnimCrouch_joint10[22];
extern u16 dFTCaptainAnimCrouch_joint11[62];
extern u16 dFTCaptainAnimCrouch_joint12[32];
extern u16 dFTCaptainAnimCrouch_joint13[18];
extern u16 dFTCaptainAnimCrouch_joint14[10];
extern u16 dFTCaptainAnimCrouch_joint16[22];
extern u16 dFTCaptainAnimCrouch_joint17[34];
extern u16 dFTCaptainAnimCrouch_joint19[24];
extern u16 dFTCaptainAnimCrouch_joint21[24];
extern u16 dFTCaptainAnimCrouch_joint22[38];
extern u16 dFTCaptainAnimCrouch_joint24[62];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimCrouch_joints[] = {
	(u32)dFTCaptainAnimCrouch_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimCrouch_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimCrouch_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimCrouch_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimCrouch_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimCrouch_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimCrouch_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimCrouch_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimCrouch_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimCrouch_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimCrouch_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimCrouch_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimCrouch_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimCrouch_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimCrouch_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimCrouch_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimCrouch_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimCrouch_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0111, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimCrouch_joint1[28] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, -2444, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 989, -850,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 6), 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 793,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimCrouch_joint2[28] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 107, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -107,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 116, 0, 30, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), -141,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimCrouch_joint4[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 189, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 520, 51, 0, 0, 0, 0, 1, -5, -120, -136, 99, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 10, 0, -23, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 611, -5, -168, 93,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimCrouch_joint5[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 240, 23, 5, 2, -526, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -170, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 462, 113, -758, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 556, 60, -884, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 567, -8, -970, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -167, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 561, -6, -166, 1, -960, 9,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimCrouch_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -798, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -698, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -840, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -978, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -978, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimCrouch_joint7[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2435, -89, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2696, 53, 128, 4, -241, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 2865, -54, -201,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimCrouch_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimCrouch_joint10[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -277, 0, -78, 0, 77, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimCrouch_joint11[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -129, 176, 144, 38, 595, -265,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 227, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 47, 56, 330, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -15, 11, -29, -162,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 304, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 48, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 166, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 175, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 79, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 340, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 353, 13, 61, -18, 177, 11,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimCrouch_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1028, 51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -976, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -591, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -694, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -785, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -975, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -988, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimCrouch_joint13[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 142, -23, 10, -23, 41, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 82, 84, -76,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimCrouch_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimCrouch_joint16[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 132, 0, -131, 0, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 204, 88, -401, -32, -195, -78,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 706, -258, -630,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimCrouch_joint17[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1799, -111, 1537, 23, 1132, -187,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1581, -4, 571, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1684, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1692, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1697, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1579, -2, 1698, 0, 573, 2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimCrouch_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 451, 330,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1052, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1104, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1162, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1166, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimCrouch_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, 59, -42, 98, 77, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 80, -2, 151, -2, 80, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 71, -9, 150, -1, 81, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimCrouch_joint22[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 159, -18, 111, 112, -78, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -299, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -82, -89, 395, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -160, -62, 375, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -229, -12, 346, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -233, -3, 345, 0, -286, 12,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimCrouch_joint24[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 546, 352,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1229, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1305, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1379, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1378, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0x00A1, 0xFF5A, 0x016D, 0xFF87, 0xFEE6, 0xFFFA, 0x2809, 0x0007, 0xFE3E, 0xFFEE, 0x2007, 0x0003, 0xFF53, 0x0028, 0xFFF7, 0xFFD6, 0x2007, 0x0001, 0xFF9E, 0x005B, 0xFFDE, 0xFFF4, 0x2007, 0x0003, 0x00BD, 0x003D, 0x0006, 0x000F, 0x200F, 0x0001, 0x00EC, 0x002E, 0x0010, 0x0009, 0xFE33, 0xFFF5, 0x0000,
};
