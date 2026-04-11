/* AnimJoint data for relocData file 1042 (FTSamusAnimCliffEscapeQuick2) */
/* 2992 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCliffEscapeQuick2_joint1[74];
extern u16 dFTSamusAnimCliffEscapeQuick2_joint2[204];
extern u16 dFTSamusAnimCliffEscapeQuick2_joint3[36];
extern u16 dFTSamusAnimCliffEscapeQuick2_joint5[126];
extern u16 dFTSamusAnimCliffEscapeQuick2_joint6[142];
extern u16 dFTSamusAnimCliffEscapeQuick2_joint7[40];
extern u16 dFTSamusAnimCliffEscapeQuick2_joint8[22];
extern u16 dFTSamusAnimCliffEscapeQuick2_joint9[28];
extern u16 dFTSamusAnimCliffEscapeQuick2_joint12[30];
extern u16 dFTSamusAnimCliffEscapeQuick2_joint13[196];
extern u16 dFTSamusAnimCliffEscapeQuick2_joint15[52];
extern u16 dFTSamusAnimCliffEscapeQuick2_joint16[130];
extern u16 dFTSamusAnimCliffEscapeQuick2_joint18[40];
extern u16 dFTSamusAnimCliffEscapeQuick2_joint20[86];
extern u16 dFTSamusAnimCliffEscapeQuick2_joint21[100];
extern u16 dFTSamusAnimCliffEscapeQuick2_joint23[142];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimCliffEscapeQuick2_joints[] = {
	(u32)dFTSamusAnimCliffEscapeQuick2_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimCliffEscapeQuick2_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimCliffEscapeQuick2_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimCliffEscapeQuick2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimCliffEscapeQuick2_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimCliffEscapeQuick2_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimCliffEscapeQuick2_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimCliffEscapeQuick2_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimCliffEscapeQuick2_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimCliffEscapeQuick2_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimCliffEscapeQuick2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimCliffEscapeQuick2_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimCliffEscapeQuick2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimCliffEscapeQuick2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimCliffEscapeQuick2_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimCliffEscapeQuick2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF02BB, /* [23] END */
};

/* Joint 1 */
u16 dFTSamusAnimCliffEscapeQuick2_joint1[74] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 384,
	ftAnimSetValBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValT(FT_ANIM_TRAY, 37), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 240, 731,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 548, 1068,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 1068,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 907, 2614,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 2614,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 1202, 1590,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 1792,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 3094, 840,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 781,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 3665, 528,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 589,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 3906, 572,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 572,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 4022, 225,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 225,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 3962, 104,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 104,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 4048, 316,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 316,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 4200, 241,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimCliffEscapeQuick2_joint2[204] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 28, 136, 962, -240, 263, 862,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 53, -202, 346, -2388,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 866, 326,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -534,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 832, -3430,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -202, -3430, -2388,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -305, 9, -3293, -194, -2683,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -3292, -2683,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -305,
	ftAnimSetValRateT(FT_ANIM_TRAX, 8), -39, 64,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 9, 0, -324, -1054,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -1054,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 24), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -622, -2299,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -2299,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -1033, -3001,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -3001,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -1687, -2453,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -2453,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), -2884, -1427,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 64,
	ftAnimSetValRateT(FT_ANIM_TRAX, 10), 0, 0,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -1427,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -3204, -1026,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -1026,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -3309, -841,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -841,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -3586, -523,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -523,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -3637, -467,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -467,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 16), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -3764, -364,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -364,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -3794, -250,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -250,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -3827, -206,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -206,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -3846, -292,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -292,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -3933, -57,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -57,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 6, -202, -3914, -108,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -202, -108,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -42, 2919, -3960, 15166,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 15167,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 736, 3627, -122, 15565,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 3627, 15562,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 864, 1397, -69, 440,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 440,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1285,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 1660, 256,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -12, 322,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 322,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 6, 7,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimCliffEscapeQuick2_joint3[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 766, 196,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1161, 44, 0, 76, 0, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 229, 0, 101, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX, 28), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimCliffEscapeQuick2_joint5[126] = {
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 85), 4096, 4096, 4096,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 83,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 413, 89,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 7, -131, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 625, 110,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 4, -238, 95,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 610,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2859, -148,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -39, 660, 207, 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 367, 2867, 2867, 2867,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, 482,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 152, -3462,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, 603,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 721,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 6433, 80,
	ftAnimSetValAfterT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 23), 2867, 2867, 2867,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 3278,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 24), 4001, 306,
	ftAnimSetValT(FT_ANIM_TRAX, 31), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 22), 367,
	ftAnimSetValT(FT_ANIM_TRAY, 3), 540,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX, 1), -536,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 211,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 101, 446,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 1), 402, 111,
	ftAnimSetValBlock(FT_ANIM_TRAY), -111,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 0, -41,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 0, 0, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimCliffEscapeQuick2_joint6[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1365, 14, -1397, 23, -2324, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1436, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1374, -54, -2426, -349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1506, -68, -3022, -303,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1522, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3034, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1424, 11, -3051, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -1161, 106, -3471, -118,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1521, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1314, 41,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1030, 152, -3611, -161,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -511, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -4248, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1286, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1507, -25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -478, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1071, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4293, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -4760, -87,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1534, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1776, 21,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1170, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1165, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4847, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -5071, -20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1752, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1730, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1137, 28, -1722, 8, -5081, -9,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimCliffEscapeQuick2_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -993, -187,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1198, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1211, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -1310, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1326, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -998, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -911, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -767, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimCliffEscapeQuick2_joint8[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -21, 0, 32, 0, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 0, 15, 312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), 701, 0, 8,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimCliffEscapeQuick2_joint9[28] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 69, 0, -1608,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 98, 60, -42,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 69, 0, -1608,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3,
	ftAnimBlock(0, 3),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 67, -17, -1474,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 67, -17, -1474,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimCliffEscapeQuick2_joint12[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 479, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -2, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), -231,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 3,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTSamusAnimCliffEscapeQuick2_joint13[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1548, 153, -1782, 66, 957, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1395, 51, -1716, -32, 787, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1445, -27, -1848, -63, 281, -255,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1482, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1764, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 276, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 255, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1570, 0, 137, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1483, 34, -1833, -32, 252, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 143, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1759, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1502, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1730, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 85, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -108, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1686, 109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1286, 278,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1706, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1807, -425, -983, 130, 79, 508,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1411, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2558, -418, 908, 487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2644, -34, 1053, 109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1456, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2627, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2170, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1541, -107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1569, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1545, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1707, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2130, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1773, 85,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1550, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1502, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1682, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1417, -38,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1689, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1620, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1580, 39, -1497, 4, 1394, -23,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimCliffEscapeQuick2_joint15[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -896, -186,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1125, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1158, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1424, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1262, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1370, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1407, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1414, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1374, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -693, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -625, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 30,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimCliffEscapeQuick2_joint16[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 85, 31, 31, -253, -213, -346,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 111, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -221, -72, -560, -394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 62, -1002, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -147, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -87, -99, -378, 312,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -90, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -908, -52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -91, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 210, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -161, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -208, 25,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 243, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 111, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -959, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1094, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -184, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -122, 55,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1027, 104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -453, 137,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 58, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 73, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -63, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -33, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 72, -1, -38, -5, -321, 132,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimCliffEscapeQuick2_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1126, 207,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1341, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1069, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1080, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1091, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 1417, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1401, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 596, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 364, -232,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimCliffEscapeQuick2_joint20[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -106, 121, 59, -3, -138, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -217, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 211, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 15, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 118, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 118, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -136, -17,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -227, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -318, 16,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -151, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -98, 54,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 193, -30, -289, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -4, -30, -40, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -47, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -77, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, 11, -23, -19, -17, 22,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimCliffEscapeQuick2_joint21[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1547, -33, -1707, -92, 1088, -264,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1421, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1800, -25, 823, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1758, -114, 609, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1560, 66, -2029, -130, 1265, 328,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1520, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2020, 10, 1265, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -1412, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 729, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1504, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 1390, 45,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1366, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1413, -146,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 707, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1536, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1450, 75, -1639, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1837, 66, -1778, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1879, 41, -1743, 34, 1621, 85,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimCliffEscapeQuick2_joint23[142] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1033, 184,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1325, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1082, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1093, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1103, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 1422, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1410, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 735, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 470, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, -157,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0654, 0xFFE5, 0x06E0, 0x000A, 0x05B2, 0xFFEB, 0x2809, 0x000D, 0x0572, 0xFFFA, 0x2805, 0x0017, 0x06C0, 0xFFFD, 0x2003, 0x0002, 0x0662, 0x007C, 0x2003, 0x0001, 0x0731, 0x006B, 0x2003, 0x0003, 0x0748, 0x0007, 0x2003, 0x0001, 0x0750, 0x0007, 0x2803, 0x0014, 0x0810, 0xFFFF, 0x0801, 0x0006, 0x2009, 0x0001, 0x056C, 0xFFFA, 0x2809, 0x0013, 0x04C1, 0xFFF6, 0x0801, 0x0009, 0x2005, 0x0001, 0x06BC, 0xFFFC, 0x2805, 0x0009, 0x0611, 0xFFB9, 0x0801, 0x0003, 0x2003, 0x0001, 0x0809, 0xFFF3, 0x2003, 0x0003, 0x0796, 0xFF96, 0x2003, 0x0001, 0x06FA, 0xFF97, 0x2803, 0x0004, 0x06C7, 0xFFFD, 0x0801, 0x0001, 0x200D, 0x0001, 0x05D2, 0xFFCF, 0x04CA, 0x0028, 0x200D, 0x0002, 0x059A, 0xFFF4, 0x0565, 0x003E, 0x200F, 0x0001, 0x06C0, 0xFFFA, 0x0595, 0xFFFB, 0x0590, 0x002B, 0x0000, 0x0000, 0x0000,
};
