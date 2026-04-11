/* AnimJoint data for relocData file 836 (FTDonkeyAnimDamageFlyX1) */
/* 1760 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDamageFlyX1_joint1[56];
extern u16 dFTDonkeyAnimDamageFlyX1_joint2[10];
extern u16 dFTDonkeyAnimDamageFlyX1_joint4[60];
extern u16 dFTDonkeyAnimDamageFlyX1_joint5[104];
extern u16 dFTDonkeyAnimDamageFlyX1_joint7[48];
extern u16 dFTDonkeyAnimDamageFlyX1_joint10[32];
extern u16 dFTDonkeyAnimDamageFlyX1_joint11[76];
extern u16 dFTDonkeyAnimDamageFlyX1_joint12[48];
extern u16 dFTDonkeyAnimDamageFlyX1_joint13[8];
extern u16 dFTDonkeyAnimDamageFlyX1_joint14[10];
extern u16 dFTDonkeyAnimDamageFlyX1_joint16[20];
extern u16 dFTDonkeyAnimDamageFlyX1_joint17[80];
extern u16 dFTDonkeyAnimDamageFlyX1_joint19[32];
extern u16 dFTDonkeyAnimDamageFlyX1_joint21[66];
extern u16 dFTDonkeyAnimDamageFlyX1_joint22[80];
extern u16 dFTDonkeyAnimDamageFlyX1_joint24[100];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimDamageFlyX1_joints[] = {
	(u32)dFTDonkeyAnimDamageFlyX1_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimDamageFlyX1_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimDamageFlyX1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimDamageFlyX1_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimDamageFlyX1_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTDonkeyAnimDamageFlyX1_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimDamageFlyX1_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimDamageFlyX1_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimDamageFlyX1_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimDamageFlyX1_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimDamageFlyX1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimDamageFlyX1_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimDamageFlyX1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimDamageFlyX1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimDamageFlyX1_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimDamageFlyX1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0196, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimDamageFlyX1_joint1[56] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 2, 0, -4, -29, 219, 1031, 1756, -400, 960,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -6, 9, 0, -18, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 14, 0, 1419, -58, -177, 124,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 27), 14,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 27), 1061, -104, 240, 120,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 24), -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -134, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), -982,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimDamageFlyX1_joint2[10] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -214, -154,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), -245, -2,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimDamageFlyX1_joint4[60] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 750, 24, 41, 0, 319, -157,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 35, 14, -51, -148, -100, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 812, -150, 295, -4, -225, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -45, 0, -10, 0, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 0, 31,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 35, -13, -51, 159, -100, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 764, 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 368, -97,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimDamageFlyX1_joint5[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1545, -5, -1523, 149, -2082, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1540, -4, -1373, 546, -2053, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1536, 188, -430, 309, -1970, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1301, -310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1917, 8, -2266, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1553, -145, -1740, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1627, 48, -1374, -38, -1811, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1379, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1649, 21, -1836, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), 1475, -55, -1770, -4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1375, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1466, -21,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1423, -43, -1785, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1412, 41, -1996, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1481, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1458, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1464, 51, -1459, 0, -2048, -52,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimDamageFlyX1_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -569,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -977, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -999, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -951, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -677, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -724, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -792, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1053, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1044, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimDamageFlyX1_joint10[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -79, -67, 14, -44, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -268, -22, 0, 3, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -268, 13, 0, 9, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -27, 16, 222, 14, 3, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimDamageFlyX1_joint11[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -115, -24, 172, 68, 2737, -176,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 77, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -140, -85, 2560, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -287, -30, 2231, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -148, 30, 2504, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -141, 7, -2, -29, 2434, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 45, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 32, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2545, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2571, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 2800, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 50, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), 132, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, 5, 133, 0, 2805, 5,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDamageFlyX1_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -130,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -546, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -250, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -331, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -289, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -153, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -452, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -481, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -762, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -777, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimDamageFlyX1_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimDamageFlyX1_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimDamageFlyX1_joint16[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 1046, 573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -1008, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1008, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), -404,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimDamageFlyX1_joint17[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -60, 82, -392, -8, -329, -214,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 217, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -234, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -647, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -682, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -1165, 11,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 216, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 222, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -229, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -327, -60,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1146, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1021, 119,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 200, -51, -404, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 120, -285, -531, -147, -865, 354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -369, -489, -699, -167, -313, 551,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimDamageFlyX1_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1026, -162,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 751, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 753, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 1134, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1152, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1138, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1073, -65,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimDamageFlyX1_joint21[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 31, 14, 14, -369, 188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -57, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 162, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 437, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 465, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 152, -25,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -42, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 154, 32,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 126, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 24, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 194, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 252, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 306, 54, 164, 2, 0, -24,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimDamageFlyX1_joint22[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 104, -268, 217, -191, -295, -130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -256, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -530, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 25, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 20, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 174, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -234, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 28, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -514, 9,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 37, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 195, 10,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -450, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 176, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 201, 6, 160, -16, -447, 3,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimDamageFlyX1_joint24[100] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 994, -93,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 833, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 905, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 1085, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1080, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1075, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1078, 2,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0007, 0x0055, 0x0067, 0xFFCD, 0xFE7D, 0x00D8, 0x2809, 0x0004, 0x015E, 0x0031, 0x2805, 0x0006, 0xFFA6, 0x0005, 0x2003, 0x0003, 0x00D5, 0xFFE4, 0x2003, 0x0001, 0x00AB, 0xFFCE, 0x2803, 0x0006, 0xFFB9, 0xFFFA, 0x2009, 0x0001, 0x016E, 0x0001, 0x2809, 0x0017, 0xFFA6, 0xFFED, 0x0801, 0x0001, 0x2005, 0x0001, 0xFFAC, 0x0005, 0x2805, 0x0015, 0x0047, 0x0003, 0x0801, 0x0003, 0x2003, 0x0001, 0xFFB3, 0xFFFC, 0x2003, 0x0011, 0xFF10, 0xFFF9, 0x200F, 0x0001, 0xFF0D, 0xFFFD, 0x004A, 0x0002, 0xFF92, 0xFFED, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
