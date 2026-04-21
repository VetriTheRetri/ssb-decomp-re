/* AnimJoint data for relocData file 585 (FTMarioAnimCliffEscapeQuick2) */
/* 1952 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCliffEscapeQuick2_joint1[48];
extern u16 dFTMarioAnimCliffEscapeQuick2_joint2[68];
extern u16 dFTMarioAnimCliffEscapeQuick2_joint3[134];
extern u16 dFTMarioAnimCliffEscapeQuick2_joint5[58];
extern u16 dFTMarioAnimCliffEscapeQuick2_joint6[84];
extern u16 dFTMarioAnimCliffEscapeQuick2_joint7[36];
extern u16 dFTMarioAnimCliffEscapeQuick2_joint8[22];
extern u16 dFTMarioAnimCliffEscapeQuick2_joint9[38];
extern u16 dFTMarioAnimCliffEscapeQuick2_joint11[42];
extern u16 dFTMarioAnimCliffEscapeQuick2_joint12[70];
extern u16 dFTMarioAnimCliffEscapeQuick2_joint13[32];
extern u16 dFTMarioAnimCliffEscapeQuick2_joint14[24];
extern u16 dFTMarioAnimCliffEscapeQuick2_joint16[10];
extern u16 dFTMarioAnimCliffEscapeQuick2_joint17[56];
extern u16 dFTMarioAnimCliffEscapeQuick2_joint19[30];
extern u16 dFTMarioAnimCliffEscapeQuick2_joint21[46];
extern u16 dFTMarioAnimCliffEscapeQuick2_joint22[62];
extern u16 dFTMarioAnimCliffEscapeQuick2_joint24[32];
extern u16 dFTMarioAnimCliffEscapeQuick2_joint25[34];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimCliffEscapeQuick2_joints[] = {
	(u32)dFTMarioAnimCliffEscapeQuick2_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimCliffEscapeQuick2_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimCliffEscapeQuick2_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimCliffEscapeQuick2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimCliffEscapeQuick2_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimCliffEscapeQuick2_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimCliffEscapeQuick2_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimCliffEscapeQuick2_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimCliffEscapeQuick2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimCliffEscapeQuick2_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimCliffEscapeQuick2_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimCliffEscapeQuick2_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimCliffEscapeQuick2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimCliffEscapeQuick2_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimCliffEscapeQuick2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimCliffEscapeQuick2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimCliffEscapeQuick2_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimCliffEscapeQuick2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTMarioAnimCliffEscapeQuick2_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimCliffEscapeQuick2_joint1[48] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 521,
	ftAnimSetValBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValT(FT_ANIM_TRAY, 54), 5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 113, 996,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 498, 1024,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 753, 977,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 1109, 1488,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 3172, 1589,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 3294, 477,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 3351, 188,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 11), 3600, 165,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 3600, -1234,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimCliffEscapeQuick2_joint2[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 439, 409, 0, 6, 0, 0, 313, -136, 291, 494,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 34), 6433, 24, 223, 4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 115, -106, 293, -59,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 246, 291, 254, -79,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 443, 65, 203, -79,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 304, -53, 185, -74,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 417, 85, 166, -67,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0, 540, 1, 0, 2,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTMarioAnimCliffEscapeQuick2_joint3[134] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 33, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 33, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 220, -475, -861, 22,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 25, -439, -643, 1331,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, -53, 157, -29, 1087,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 123, 769, 36, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 331, 660, -36, -1070,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 454, 50, -498, -1459,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 349, 46, -584, -568,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 465, -567, -640, -128,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 66, -472, -648, 668,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 52, -28, -55, 864,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -2, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -37, -11, 0, 0, 44, -30, 0, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -6, -8,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 0, 0, -11, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -5, 0, -62, 0, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -71, -2, -790, -25, -95, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimCliffEscapeQuick2_joint5[58] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 34), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 12,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValBlock(FT_ANIM_ROTX), 759,
	ftAnimSetValT(FT_ANIM_ROTX, 22), 759,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 2,
	ftAnimBlock(0, 20),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 710, -39, 22, 18, 9, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 12), 208, -15, 258, 7, 110, 3, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimCliffEscapeQuick2_joint6[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -469, -27, -1526, 6, 3173, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -793, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -1367, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 3704, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3719, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 3909, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -790, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -396, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -416, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1104, -202,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3984, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4191, 165,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1344, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1283, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1317, -162, 4411, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1429, -78, 4520, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, -45, -1308, -24, 4553, 33,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimCliffEscapeQuick2_joint7[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -246, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -250, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 67,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimCliffEscapeQuick2_joint8[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -498, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -625, 8, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 34),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTMarioAnimCliffEscapeQuick2_joint9[38] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 288,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 54), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 20,
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1, 0, 19, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -4, 0, 176, 2,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValBlock(FT_ANIM_ROTX), 318,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 20), 318,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 201, -3,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimCliffEscapeQuick2_joint11[42] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -18, 8, -17,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0, 54, 0, -17, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 3, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), -221, -6, 139, 4, -209, -6, 0, 0, 54, 0, -17, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimCliffEscapeQuick2_joint12[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1994, 52, 216, 18, 1516, 85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 173, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2541, 44, 2120, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2563, 19, 2136, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 23), 2664, 11, 2179, 19,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 170, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 17), 330, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2677, 94, 372, 110, 2201, 121,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 3522, 215, 3137, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 623, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 591, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3656, 134, 539, -52, 3283, 145,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimCliffEscapeQuick2_joint13[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -611, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -740, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -70,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimCliffEscapeQuick2_joint14[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1206, -9, -45, 1, 37, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 1206, -17, -45, 1, 37, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 625, -17, 0, 1, 0, -1,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimCliffEscapeQuick2_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 34),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimCliffEscapeQuick2_joint17[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1188, 0, -1553, -1, -1698, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), -1343, -33, -1534, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -1653, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1642, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1431, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1390, -56, -1520, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -1709, -32, -1393, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1442, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1560, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1743, -33, -1377, 15, -1563, -2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimCliffEscapeQuick2_joint19[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 21), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 218, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 243, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 395, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, 5,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimCliffEscapeQuick2_joint21[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -555, 21, -298, 1, 682, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), -129, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -16, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 21), -137, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -150, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -211, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -147, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, -1, -11, 5, -156, -8,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimCliffEscapeQuick2_joint22[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 47, 5, 4, 0, -77, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 208, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 10, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -30, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -18, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 156, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 202, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 193, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 32, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 179, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 149, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 40, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 6, 187, 7, 35, -4,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimCliffEscapeQuick2_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 301, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 322, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 436, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTMarioAnimCliffEscapeQuick2_joint25[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1730, -15, -1810, 7, 2080, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), -1517, 3, 1405, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 1563, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1583, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 1694, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1697, 3, -1514, 3, 1395, -9,
	ftAnimEnd(),
};
