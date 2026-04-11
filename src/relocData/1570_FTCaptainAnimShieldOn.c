/* AnimJoint data for relocData file 1570 (FTCaptainAnimShieldOn) */
/* 832 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimShieldOn_joint2[20];
extern u16 dFTCaptainAnimShieldOn_joint3[10];
extern u16 dFTCaptainAnimShieldOn_joint5[18];
extern u16 dFTCaptainAnimShieldOn_joint6[24];
extern u16 dFTCaptainAnimShieldOn_joint7[16];
extern u16 dFTCaptainAnimShieldOn_joint8[14];
extern u16 dFTCaptainAnimShieldOn_joint9[12];
extern u16 dFTCaptainAnimShieldOn_joint11[12];
extern u16 dFTCaptainAnimShieldOn_joint12[40];
extern u16 dFTCaptainAnimShieldOn_joint13[20];
extern u16 dFTCaptainAnimShieldOn_joint14[18];
extern u16 dFTCaptainAnimShieldOn_joint15[10];
extern u16 dFTCaptainAnimShieldOn_joint17[16];
extern u16 dFTCaptainAnimShieldOn_joint18[24];
extern u16 dFTCaptainAnimShieldOn_joint20[16];
extern u16 dFTCaptainAnimShieldOn_joint22[24];
extern u16 dFTCaptainAnimShieldOn_joint23[24];
extern u16 dFTCaptainAnimShieldOn_joint25[44];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimShieldOn_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTCaptainAnimShieldOn_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimShieldOn_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimShieldOn_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimShieldOn_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimShieldOn_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimShieldOn_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimShieldOn_joint9, /* [8] joint 9 */
	(u32)dFTCaptainAnimShieldOn_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimShieldOn_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimShieldOn_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimShieldOn_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimShieldOn_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimShieldOn_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimShieldOn_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimShieldOn_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimShieldOn_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimShieldOn_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimShieldOn_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF00C2, /* [25] END */
};

/* 4-byte alignment padding */
static u32 dFTCaptainAnimShieldOn_pad[1] = { 0 };

/* Joint 2 */
u16 dFTCaptainAnimShieldOn_joint2[20] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1473, -168, 241, 434,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTCaptainAnimShieldOn_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 107, 0, 4, -76, 9,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimShieldOn_joint5[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 189, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 187, 0, -90, -15, -7, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTCaptainAnimShieldOn_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, -15, 5, 43, -524, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 306, 66, 195, 56, -479, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 374, 67, 241, 45, -471, 7,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimShieldOn_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -889, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -887, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimShieldOn_joint8[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2435, -89, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 2860, 70, -32, 9, -344, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTCaptainAnimShieldOn_joint9[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 0, 11,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimShieldOn_joint11[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 0, 8,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimShieldOn_joint12[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1737, -174, -1752, -109, -1016, -156,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1821, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1912, -425, -1172, -507,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2589, -362, -2030, -600,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2636, -7, -1567, 225, -2373, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2604, 32, -1370, 197, -2350, 22,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimShieldOn_joint13[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, -95,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1170, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1014, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -909, 104,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimShieldOn_joint14[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 652, 63, 311, 6, 1343, 213,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTCaptainAnimShieldOn_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimShieldOn_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 18, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), 0, 18, 0, -3,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimShieldOn_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, 0, 70, 5, -472, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 189, -1, 99, 10, -556, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 187, -1, 108, 8, -580, -24,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimShieldOn_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 588, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 636, 47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimShieldOn_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1735, -2, 1650, 0, -1528, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1748, -4, 1651, 0, -1583, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1752, -3, 1651, 0, -1605, -21,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimShieldOn_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, 7, 110, 3, -76, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 243, 65, 142, 23, 21, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 323, 80, 169, 27, 85, 63,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimShieldOn_joint25[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 557, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 542, -14,
	ftAnimEnd(),
	0x0000, 0x200E, 0x00A1, 0x0005, 0x016D, 0xFFF9, 0xFEE9, 0xFFF3, 0x200F, 0x0003, 0x00CB, 0x001A, 0x011A, 0xFFC1, 0xFEAA, 0xFFF1, 0x200F, 0x0001, 0x00E8, 0x001C, 0x00CE, 0xFFB5, 0xFEA2, 0xFFF9, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
