/* AnimJoint data for relocData file 1004 (FTSamusAnimDownForwardU) */
/* 2352 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDownForwardU_joint1[18];
extern u16 dFTSamusAnimDownForwardU_joint2[56];
extern u16 dFTSamusAnimDownForwardU_joint3[16];
extern u16 dFTSamusAnimDownForwardU_joint5[66];
extern u16 dFTSamusAnimDownForwardU_joint6[126];
extern u16 dFTSamusAnimDownForwardU_joint7[64];
extern u16 dFTSamusAnimDownForwardU_joint8[24];
extern u16 dFTSamusAnimDownForwardU_joint9[10];
extern u16 dFTSamusAnimDownForwardU_joint10[42];
extern u16 dFTSamusAnimDownForwardU_joint12[10];
extern u16 dFTSamusAnimDownForwardU_joint13[102];
extern u16 dFTSamusAnimDownForwardU_joint15[48];
extern u16 dFTSamusAnimDownForwardU_joint16[106];
extern u16 dFTSamusAnimDownForwardU_joint18[56];
extern u16 dFTSamusAnimDownForwardU_joint20[86];
extern u16 dFTSamusAnimDownForwardU_joint21[138];
extern u16 dFTSamusAnimDownForwardU_joint23[52];
extern u16 dFTSamusAnimDownForwardU_joint24[108];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimDownForwardU_joints[] = {
	(u32)dFTSamusAnimDownForwardU_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimDownForwardU_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimDownForwardU_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimDownForwardU_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimDownForwardU_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimDownForwardU_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimDownForwardU_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimDownForwardU_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimDownForwardU_joint10, /* [9] joint 10 */
	(u32)dFTSamusAnimDownForwardU_joint12, /* [10] joint 12 */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimDownForwardU_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimDownForwardU_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimDownForwardU_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimDownForwardU_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimDownForwardU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimDownForwardU_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimDownForwardU_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTSamusAnimDownForwardU_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTSamusAnimDownForwardU_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 840, 1920,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 3600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 23), 4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 4200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimDownForwardU_joint2[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, -513, 17, 288, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 160, 0, 21, 17, 9, 840, 249, -23, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 3216, 35,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 29, 20, 600, -480, -25, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 43, 21, 240, 192, -28, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 69, -16, 960, 518, -33, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 3216, 0, 0, 1600, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimDownForwardU_joint3[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimDownForwardU_joint5[66] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 6, -457, 156, -72, 0, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 375, 21, 0, 18, 0, -6, 0, 1, -57, -66, 110, 170,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 536, -12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -70, 39, -66, -24, 96, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 19, 58, -69, -63, 108, 19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 17, -5, -162, 20, 125, -32,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 0, 0,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDownForwardU_joint6[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 380, -48, 0, -9, -55, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 212, 40, -123, 17, -656, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 265, 32, -64, 28, -871, -116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -167, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 273, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -762, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -716, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -527, -28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -155, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -87, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 282, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 433, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -54, 75, -568, -88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 51, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -705, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -685, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -516, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 40, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -141, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -181, -10, -436, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 80, 57, -245, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 445, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 472, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 476, 3, 114, 33, -231, 14,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimDownForwardU_joint7[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -869, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -419, 351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -218, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -382, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -636, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -498, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -651, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -752, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimDownForwardU_joint8[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 0, 43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 701,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTSamusAnimDownForwardU_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 86, 68, -29,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTSamusAnimDownForwardU_joint10[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -134, 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 480, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, 53, 0, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 402, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 26), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 402, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -187, -25, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDownForwardU_joint12[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimDownForwardU_joint13[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -73, 19, 158, 10, 127, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 265, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -123, -59, -356, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -178, -35, -446, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -445, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -350, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 257, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 91, -53,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -458, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -515, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 32, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 194, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 213, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -95, -34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -365, 12, -541, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 35, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -272, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -251, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -232, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 23, -128, -32, -215, 17,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimDownForwardU_joint15[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1037, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -814, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -655, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -785, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -821, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -513, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -420, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -548, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -567, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -600, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimDownForwardU_joint16[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1778, 29, -1504, 11, 1392, -74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1536, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1661, -29, 498, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1688, -32, 412, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 696, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1613, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1490, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1525, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 641, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 520, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1540, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -1578, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1538, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1583, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 544, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 940, 57,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1588, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1529, 9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 997, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1208, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, 8, -1581, -2, 1218, 9,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimDownForwardU_joint18[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 316, 123,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1160, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1193, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1081, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1041, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1188, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1253, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1226, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 657, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 590, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 493, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimDownForwardU_joint20[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 83, -21, -117, 22, 338, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -46, 68, 47, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -199, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -198, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -156, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 55, 40, 46, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -20, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 34, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 94, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -174, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -174, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -62, -6,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -142, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -47, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -68, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -76, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 0, -28, -8, -41, 5,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimDownForwardU_joint21[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -46, 10, -59, 1, -167, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -98, -88, -35, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -586, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -838, -224,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1186, 100,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -189, -58, -98, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -10, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 40, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1042, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -949, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, -1, -1003, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1061, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -17, -13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 19, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -187, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1043, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -403, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -22, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 155, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -169, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 184, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -327, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -161, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 145, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 149, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -125, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -64, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 42, 160, 11, -49, 15,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimDownForwardU_joint23[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 755, 63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1171, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1163, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1096, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 767, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 990, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1122, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1407, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1346, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 502, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 458, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimDownForwardU_joint24[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 241, 8, -12, 48, 29, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 226, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -499, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 54, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -66, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 82, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 230, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 210, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -44, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -164, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -170, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 94, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 154, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 59, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -547, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -346, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 85, 47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -317, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -230, 17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 202, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 56, 193, -8, -213, 16,
	ftAnimEnd(),
};
