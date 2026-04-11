/* AnimJoint data for relocData file 1770 (FTNessAnimFireFlowerShoot) */
/* 2224 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimFireFlowerShoot_joint1[32];
extern u16 dFTNessAnimFireFlowerShoot_joint2[60];
extern u16 dFTNessAnimFireFlowerShoot_joint4[54];
extern u16 dFTNessAnimFireFlowerShoot_joint5[138];
extern u16 dFTNessAnimFireFlowerShoot_joint6[56];
extern u16 dFTNessAnimFireFlowerShoot_joint7[10];
extern u16 dFTNessAnimFireFlowerShoot_joint8[50];
extern u16 dFTNessAnimFireFlowerShoot_joint10[10];
extern u16 dFTNessAnimFireFlowerShoot_joint11[118];
extern u16 dFTNessAnimFireFlowerShoot_joint12[48];
extern u16 dFTNessAnimFireFlowerShoot_joint13[42];
extern u16 dFTNessAnimFireFlowerShoot_joint15[10];
extern u16 dFTNessAnimFireFlowerShoot_joint16[66];
extern u16 dFTNessAnimFireFlowerShoot_joint18[40];
extern u16 dFTNessAnimFireFlowerShoot_joint19[82];
extern u16 dFTNessAnimFireFlowerShoot_joint21[38];
extern u16 dFTNessAnimFireFlowerShoot_joint22[78];
extern u16 dFTNessAnimFireFlowerShoot_joint24[40];
extern u16 dFTNessAnimFireFlowerShoot_joint25[88];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimFireFlowerShoot_joints[] = {
	(u32)dFTNessAnimFireFlowerShoot_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimFireFlowerShoot_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimFireFlowerShoot_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimFireFlowerShoot_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimFireFlowerShoot_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimFireFlowerShoot_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimFireFlowerShoot_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimFireFlowerShoot_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimFireFlowerShoot_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimFireFlowerShoot_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimFireFlowerShoot_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimFireFlowerShoot_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimFireFlowerShoot_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimFireFlowerShoot_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimFireFlowerShoot_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimFireFlowerShoot_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimFireFlowerShoot_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimFireFlowerShoot_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimFireFlowerShoot_joint25, /* [24] joint 25 */
	0xFFFF021C, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimFireFlowerShoot_joint1[32] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ), -11, -25,
	ftAnimSetValBlock(FT_ANIM_TRAY), 534,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, 4, 0, 10,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 5), 444,
	ftAnimSetValT(FT_ANIM_TRAY, 25), 534,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 0, -3, 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), -11, -25,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimFireFlowerShoot_joint2[60] = {
	ftAnimSetValAfter(FT_ANIM_TRAY), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -3, -4, -237, 7, -163, -24,
	ftAnimSetValT(FT_ANIM_ROTY, 12), -237,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3, -163,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3, -163,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 43, -104,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -3, -163,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 17), 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 28, -360, 8,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimFireFlowerShoot_joint4[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 154, 22, 306, 43, 181, 25,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 154, 306, 181,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 306, 181,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 154,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 123,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY, 20), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), -72,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 123, 306, 181,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimFireFlowerShoot_joint5[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -410, 69, -261, 42, 415, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 234, -381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -340, 182, -218, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -44, 258, -246, 133,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 244, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 175, -25, -303, -475,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -96, -213, -715, -231,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -314, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 279, 19, -766, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -776, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 280, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -332, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 3, 124,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -777, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -706, 34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 271, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 93, -134,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -665, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 156, 88, -365, 248,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -306, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -63, -146, -168, 200,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -248, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 461, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -367, -46, 452, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -400, -21, 428, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, -9, -261, -12, 415, -12,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimFireFlowerShoot_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, -264,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1011, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -526, -406,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -822, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -528, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 54,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimFireFlowerShoot_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimFireFlowerShoot_joint8[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, -3, -32, 4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, 8, 286, -89, 23, 22,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 30, -81, 80,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 22, -65, 33,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -225, -46, 7,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -229, -78, 2,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 42, 216, -9,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -10, 364, -32,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimFireFlowerShoot_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimFireFlowerShoot_joint11[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2024, -72, 1038, 4, -1727, -108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1132, 206,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2485, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1836, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2116, -242,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2454, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1455, 232,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1638, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2524, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -2531, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1642, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1553, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2454, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1986, 112,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2524, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2125, 67,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1516, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1201, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1123, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1038, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1876, 96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1743, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2067, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2034, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2024, 10, 1038, 0, -1727, 16,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimFireFlowerShoot_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -557, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -113, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -346, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -490, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -566, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimFireFlowerShoot_joint13[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 845, 98, -21, -10, 71, -7,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 876, -29, 63,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 852, -154, 80,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 844, 37, 102,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 895, 181, 137,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimFireFlowerShoot_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimFireFlowerShoot_joint16[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1972, 56, -1324, 38, 1299, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1301, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1461, -4, 931, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1466, -5, 943, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1532, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 1267, 19,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1278, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1306, -15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1541, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1950, -26,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1285, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1972, -22, -1324, -17, 1299, 14,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimFireFlowerShoot_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 420, 99,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 854, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 756, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 644, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 788, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 777, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 450, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 420, -30,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimFireFlowerShoot_joint19[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, 9, 12, -3, 12, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -6, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -21, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -124, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -124, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 76, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 23, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -74, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 8, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -68, 10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -17, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -71, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1, 10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -57, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 2, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 11, 10, 12, -3, 12, 10,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimFireFlowerShoot_joint21[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -165, -38, 45, 30, 110, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -296, 0, 183, 0, 252, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -151, 9, 21, -7, 63, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -66, 0, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimFireFlowerShoot_joint22[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1476, 0, 1466, 13, 1392, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1578, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1757, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1541, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1546, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1438, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1582, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1619, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1766, 15, 1334, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1578, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1477, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1587, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1487, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1583, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1407, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1476, -10, 1466, -10, 1392, -15,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimFireFlowerShoot_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 413, 78,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 661, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 663, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 739, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 693, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 491, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 474, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 425, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 413, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimFireFlowerShoot_joint25[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 83, -11, 26, 7, -205, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -420, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 203, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -203, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -224, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 66, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -364, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -454, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 201, -3, -442, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 30, -5, -216, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 83, 16, 26, -4, -205, 11,
	ftAnimEnd(),
	0x400E, 0x0038, 0x0000, 0x0000, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0008, 0x00C5, 0x0004, 0xFFD3, 0xFFFE, 0x00E5, 0x000B, 0x200F, 0x000A, 0x0083, 0xFFFA, 0xFFD2, 0x0002, 0x00D1, 0xFFF6, 0x380F, 0x000C, 0x0038, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
