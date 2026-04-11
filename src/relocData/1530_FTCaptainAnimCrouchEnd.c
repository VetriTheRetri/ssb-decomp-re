/* AnimJoint data for relocData file 1530 (FTCaptainAnimCrouchEnd) */
/* 1232 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCrouchEnd_joint1[16];
extern u16 dFTCaptainAnimCrouchEnd_joint2[26];
extern u16 dFTCaptainAnimCrouchEnd_joint4[30];
extern u16 dFTCaptainAnimCrouchEnd_joint5[60];
extern u16 dFTCaptainAnimCrouchEnd_joint6[24];
extern u16 dFTCaptainAnimCrouchEnd_joint7[18];
extern u16 dFTCaptainAnimCrouchEnd_joint8[8];
extern u16 dFTCaptainAnimCrouchEnd_joint10[22];
extern u16 dFTCaptainAnimCrouchEnd_joint11[54];
extern u16 dFTCaptainAnimCrouchEnd_joint12[24];
extern u16 dFTCaptainAnimCrouchEnd_joint13[10];
extern u16 dFTCaptainAnimCrouchEnd_joint14[10];
extern u16 dFTCaptainAnimCrouchEnd_joint16[30];
extern u16 dFTCaptainAnimCrouchEnd_joint17[34];
extern u16 dFTCaptainAnimCrouchEnd_joint19[28];
extern u16 dFTCaptainAnimCrouchEnd_joint21[46];
extern u16 dFTCaptainAnimCrouchEnd_joint22[48];
extern u16 dFTCaptainAnimCrouchEnd_joint24[78];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimCrouchEnd_joints[] = {
	(u32)dFTCaptainAnimCrouchEnd_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimCrouchEnd_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimCrouchEnd_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimCrouchEnd_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimCrouchEnd_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimCrouchEnd_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimCrouchEnd_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimCrouchEnd_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimCrouchEnd_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimCrouchEnd_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimCrouchEnd_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimCrouchEnd_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimCrouchEnd_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimCrouchEnd_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimCrouchEnd_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimCrouchEnd_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimCrouchEnd_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimCrouchEnd_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF011D, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimCrouchEnd_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 793, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1463, 559, 306, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 1596, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimCrouchEnd_joint2[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -141,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 116, 0, 30, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 82, 0, 109, 0, 6, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 107, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimCrouchEnd_joint4[30] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 10, 0, -23, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 611, -5, -168, 93,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 434, -81, 3, -1, -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 189, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimCrouchEnd_joint5[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 561, -323, -166, 65, -960, 496,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 115, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -81, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -463, 355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -248, 169,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -454, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 86, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 231, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -40, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 2, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -507, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 240, 8, 5, 3, -526, -19,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimCrouchEnd_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -978, 92,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -842, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -934, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -817, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -798, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimCrouchEnd_joint7[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2865, -54, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3231, 0, 94, 0, -180, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 2435, -89, -388,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimCrouchEnd_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimCrouchEnd_joint10[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -277, 0, -78, 0, 77, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 13, 27, -55, 25, 96, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimCrouchEnd_joint11[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 353, -116, 61, 7, 177, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -31, -131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 148, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 237, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -177,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -126, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -134, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 569, 57,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -130, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -131, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, 2, 144, -3, 595, 26,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimCrouchEnd_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -988, -36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -997, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1038, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1044, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1028, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimCrouchEnd_joint13[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 82, 84, -76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimCrouchEnd_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 0, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimCrouchEnd_joint16[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 706, -258, -630,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 63, -159, -225, 43, -48, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -155, -20, -60, 55, -36, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 0, 18, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimCrouchEnd_joint17[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1579, 18, 1698, -21, 573, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 1792, 12, 1539, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1010, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1046, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1127, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1799, 6, 1537, -2, 1132, 4,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimCrouchEnd_joint19[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1166, -49,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 928, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 738, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 483, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 459, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 451, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimCrouchEnd_joint21[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 71, -69, 150, 13, 81, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -126, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -36, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -137, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -110, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 67, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -125, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -126, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 0, -42, -5, 77, 10,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimCrouchEnd_joint22[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -233, 201, 345, 9, -286, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -25, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 125, 71, 220, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 111, -5, 94, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 158, 2, 107, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -39, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -72, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 159, 1, 111, 3, -78, -6,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimCrouchEnd_joint24[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1378, -141,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1237, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 897, -321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 501, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 457, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 535, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, 10,
	ftAnimEnd(),
	0x0000, 0x200E, 0x00EC, 0xFFA7, 0x0010, 0x0036, 0xFE33, 0x0000, 0x2809, 0x0007, 0xFEE5, 0x0002, 0x2803, 0x0009, 0x009F, 0x0005, 0x2005, 0x0004, 0x0162, 0x0016, 0x2005, 0x0001, 0x016E, 0x0008, 0x2805, 0x0004, 0x016D, 0xFFFF, 0x0801, 0x0002, 0x2009, 0x0001, 0xFEE6, 0x0000, 0x2009, 0x0001, 0xFEE6, 0x0000, 0x200F, 0x0001, 0x00A1, 0x0002, 0x016D, 0x0000, 0xFEE6, 0x0000, 0x0000,
};
