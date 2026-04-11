/* AnimJoint data for relocData file 557 (FTMarioAnimShieldOn) */
/* 768 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimShieldOn_joint2[12];
extern u16 dFTMarioAnimShieldOn_joint3[16];
extern u16 dFTMarioAnimShieldOn_joint5[14];
extern u16 dFTMarioAnimShieldOn_joint6[24];
extern u16 dFTMarioAnimShieldOn_joint7[20];
extern u16 dFTMarioAnimShieldOn_joint8[14];
extern u16 dFTMarioAnimShieldOn_joint9[18];
extern u16 dFTMarioAnimShieldOn_joint11[14];
extern u16 dFTMarioAnimShieldOn_joint12[24];
extern u16 dFTMarioAnimShieldOn_joint13[20];
extern u16 dFTMarioAnimShieldOn_joint14[10];
extern u16 dFTMarioAnimShieldOn_joint16[10];
extern u16 dFTMarioAnimShieldOn_joint17[24];
extern u16 dFTMarioAnimShieldOn_joint19[16];
extern u16 dFTMarioAnimShieldOn_joint21[30];
extern u16 dFTMarioAnimShieldOn_joint22[24];
extern u16 dFTMarioAnimShieldOn_joint24[42];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimShieldOn_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTMarioAnimShieldOn_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimShieldOn_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimShieldOn_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimShieldOn_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimShieldOn_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimShieldOn_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimShieldOn_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimShieldOn_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimShieldOn_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimShieldOn_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimShieldOn_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimShieldOn_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimShieldOn_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimShieldOn_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimShieldOn_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimShieldOn_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimShieldOn_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF00B3, /* [24] END */
};

/* 4-byte alignment padding */
static u32 dFTMarioAnimShieldOn_pad[1] = { 0 };

/* Joint 2 */
u16 dFTMarioAnimShieldOn_joint2[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 223,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 540, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTMarioAnimShieldOn_joint3[16] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -71, -790, -95, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -455, 0, 60, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimShieldOn_joint5[14] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 258, 110,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 107, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimShieldOn_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, 75, -1308, 28, -1880, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1961, 81, -1149, 30, -2337, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2041, 79, -1133, 15, -2450, -113,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimShieldOn_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, 173,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimShieldOn_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -402, 27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTMarioAnimShieldOn_joint9[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -4, 176,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -107, -18, 402, 13, -107, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimShieldOn_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimShieldOn_joint12[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, -273, 551, -125, 65, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -297, -115, 51, -203, -317, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -341, -43, -175, -227, -520, -202,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimShieldOn_joint13[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, -192,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -977, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -750, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -349, 401,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimShieldOn_joint14[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 536, 90,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimShieldOn_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimShieldOn_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1473, -97, -1377, 71, 1653, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1299, -37, -1292, -16, 1411, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1256, -43, -1319, -27, 1347, -63,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimShieldOn_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 473, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 458, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimShieldOn_joint21[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, 41, -11, 134, -156, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -119, 33, -41, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 76, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -13, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -68, 51, -21, -7, -17, 23,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimShieldOn_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1408, -8, 1421, 22, 1644, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1493, -40, 1450, -4, 1456, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1531, -38, 1442, -7, 1418, -38,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimShieldOn_joint24[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 442, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 441, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0x06A1, 0xFFE8, 0xFA16, 0xFFC6, 0x0573, 0x000D, 0x200F, 0x0003, 0x0680, 0x0024, 0xF990, 0xFFC7, 0x05AC, 0x0011, 0x200F, 0x0001, 0x06C1, 0x0041, 0xF945, 0xFFB5, 0x05B8, 0x000B, 0x0000, 0x0000, 0x0000,
};
