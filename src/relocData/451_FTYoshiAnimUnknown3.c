/* AnimJoint data for relocData file 451 (FTYoshiAnimUnknown3) */
/* 1264 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimUnknown3_joint1[10];
extern u16 dFTYoshiAnimUnknown3_joint2[10];
extern u16 dFTYoshiAnimUnknown3_joint3[58];
extern u16 dFTYoshiAnimUnknown3_joint4[10];
extern u16 dFTYoshiAnimUnknown3_joint6[10];
extern u16 dFTYoshiAnimUnknown3_joint7[116];
extern u16 dFTYoshiAnimUnknown3_joint8[54];
extern u16 dFTYoshiAnimUnknown3_joint10[8];
extern u16 dFTYoshiAnimUnknown3_joint11[90];
extern u16 dFTYoshiAnimUnknown3_joint12[52];
extern u16 dFTYoshiAnimUnknown3_joint14[8];
extern u16 dFTYoshiAnimUnknown3_joint15[14];
extern u16 dFTYoshiAnimUnknown3_joint16[8];
extern u16 dFTYoshiAnimUnknown3_joint17[18];
extern u16 dFTYoshiAnimUnknown3_joint18[26];
extern u16 dFTYoshiAnimUnknown3_joint19[16];
extern u16 dFTYoshiAnimUnknown3_joint20[4];
extern u16 dFTYoshiAnimUnknown3_joint21[22];
extern u16 dFTYoshiAnimUnknown3_joint22[18];
extern u16 dFTYoshiAnimUnknown3_joint23[8];
extern u16 dFTYoshiAnimUnknown3_joint24[8];
extern u16 dFTYoshiAnimUnknown3_joint25[4];
extern u16 dFTYoshiAnimUnknown3_joint26[8];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimUnknown3_joints[] = {
	(u32)dFTYoshiAnimUnknown3_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimUnknown3_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimUnknown3_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimUnknown3_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimUnknown3_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimUnknown3_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimUnknown3_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimUnknown3_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimUnknown3_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimUnknown3_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimUnknown3_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTYoshiAnimUnknown3_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimUnknown3_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimUnknown3_joint17, /* [16] joint 17 */
	(u32)dFTYoshiAnimUnknown3_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimUnknown3_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimUnknown3_joint20, /* [19] joint 20 */
	(u32)dFTYoshiAnimUnknown3_joint21, /* [20] joint 21 */
	(u32)dFTYoshiAnimUnknown3_joint22, /* [21] joint 22 */
	(u32)dFTYoshiAnimUnknown3_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimUnknown3_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimUnknown3_joint25, /* [24] joint 25 */
	(u32)dFTYoshiAnimUnknown3_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimUnknown3_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 669, 528, -1896,
	ftAnimSetFlagsT(FT_ANIM_ROTX, 159),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimUnknown3_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -112, -256, 206,
	ftAnimSetFlagsT(FT_ANIM_ROTX, 159),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimUnknown3_joint3[58] = {
	ftAnimSetVal(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 1828, 1828, 1828,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetFlags(FT_ANIM_ROTY),
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 134), 1828, 1828, 1828,
	ftAnimSetFlags(0),
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 2867, 348, 7208, 348, 2867, 348,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 589, 4096, -1320, 4096, 187,
	ftAnimSetValRateT(FT_ANIM_SCAY, 5), 3019, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 5), 5816, 3803,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, -491, 4090, 307, 4096, 83,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimUnknown3_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 600, 329,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimUnknown3_joint6[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 48, 120,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimUnknown3_joint7[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1714, 0, 1550, 0, 1395, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 134), 1550, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 133), -1714, 0, 1395, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1714, 2, 1395, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1432, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1734, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1554, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1468, -44,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1393, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1345, 69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1754, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1765, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1497, 123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1580, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1435, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1542, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1360, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1384, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1745, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1713, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1550, 4, 1392, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1552, 0, 1390, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1715, -2, 1551, -1, 1388, -1,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimUnknown3_joint8[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -12, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 134), -12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -12, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -326, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -509, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -473, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimUnknown3_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimUnknown3_joint11[90] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1650, 1594, 1437,
	ftAnimSetValRateT(FT_ANIM_ROTY, 135), 1595, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 145), -1645, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 133), 1437,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1437, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1441, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1597, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1546, 1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1647, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1650, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1412, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1401, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1613, 143,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1536, -127,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1552, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1594, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1421, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1442, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1650, 0, 1594, 0, 1437, -5,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimUnknown3_joint12[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 133), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -440, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -588, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -552, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -252, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 126,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimUnknown3_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimUnknown3_joint15[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY, 161), 512,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 1,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 215, -240,
	ftAnimSetFlagsT(FT_ANIM_ROTX, 159),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimUnknown3_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 48, -263,
	ftAnimSetFlagsT(FT_ANIM_ROTX, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimUnknown3_joint17[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY, 161), 512,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 1,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -804, 240, -96, 95,
	ftAnimSetFlagsT(FT_ANIM_ROTX, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimUnknown3_joint18[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -33, 0, 32, 0, 215, 0,
	ftAnimSetFlags(FT_ANIM_ROTX),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 158), -33, 0, 32, 0, 215, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -33, 0, 32, 0, 215, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTYoshiAnimUnknown3_joint19[16] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 268, 0,
	ftAnimSetFlags(FT_ANIM_ROTX),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 158), 268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 268, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimUnknown3_joint20[4] = {
	ftAnimSetFlagsT(FT_ANIM_ROTX, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTYoshiAnimUnknown3_joint21[22] = {
	ftAnimSetValAfter(FT_ANIM_ROTX), 1642,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 30, 0, -222, 0,
	ftAnimSetFlags(FT_ANIM_ROTX),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 158), 30, 0, -222, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 30, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -222,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTYoshiAnimUnknown3_joint22[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY, 161), 512,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 1,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -804, -239, -96, 95,
	ftAnimSetFlagsT(FT_ANIM_ROTX, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimUnknown3_joint23[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -32, 32, 215,
	ftAnimSetFlagsT(FT_ANIM_ROTX, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTYoshiAnimUnknown3_joint24[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 268,
	ftAnimSetFlagsT(FT_ANIM_ROTX, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTYoshiAnimUnknown3_joint25[4] = {
	ftAnimSetFlagsT(FT_ANIM_ROTX, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimUnknown3_joint26[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1642, 29, -222,
	ftAnimSetFlagsT(FT_ANIM_ROTX, 159),
	ftAnimEnd(),
	0x0000,
};
