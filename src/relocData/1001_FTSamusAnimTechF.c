/* AnimJoint data for relocData file 1001 (FTSamusAnimTechF) */
/* 2576 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimTechF_joint1[18];
extern u16 dFTSamusAnimTechF_joint2[114];
extern u16 dFTSamusAnimTechF_joint3[32];
extern u16 dFTSamusAnimTechF_joint5[62];
extern u16 dFTSamusAnimTechF_joint6[138];
extern u16 dFTSamusAnimTechF_joint7[68];
extern u16 dFTSamusAnimTechF_joint8[60];
extern u16 dFTSamusAnimTechF_joint9[10];
extern u16 dFTSamusAnimTechF_joint10[46];
extern u16 dFTSamusAnimTechF_joint12[10];
extern u16 dFTSamusAnimTechF_joint13[140];
extern u16 dFTSamusAnimTechF_joint15[56];
extern u16 dFTSamusAnimTechF_joint16[82];
extern u16 dFTSamusAnimTechF_joint18[40];
extern u16 dFTSamusAnimTechF_joint20[72];
extern u16 dFTSamusAnimTechF_joint21[142];
extern u16 dFTSamusAnimTechF_joint23[150];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimTechF_joints[] = {
	(u32)dFTSamusAnimTechF_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimTechF_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimTechF_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimTechF_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimTechF_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimTechF_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimTechF_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimTechF_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimTechF_joint10, /* [9] joint 10 */
	(u32)dFTSamusAnimTechF_joint12, /* [10] joint 12 */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimTechF_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimTechF_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimTechF_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimTechF_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimTechF_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimTechF_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimTechF_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF0251, /* [23] END */
};

/* Joint 1 */
u16 dFTSamusAnimTechF_joint1[18] = {
	ftAnimSetVal(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 4000,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 24), 4800,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 4800,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimTechF_joint2[114] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -4637,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 715, 1440, -1364, 0, -267,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -4637, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -39, 1350, -240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 715, 1440, -1364, 0, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -4423, 826, 43, 57, 240, -960, -28, -37,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 720, 1255,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1206, 714,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 43, -28,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 43, -1, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 708, -1920,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 240, -133,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2010, 294,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 42, -3, 717, 706, -27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 41, 2, 708, -937, -27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 43, 18, 240, -1294, -28, -3,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 231,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 69, -16, 960, 518, -33, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 3216,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 3216, 0, 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTSamusAnimTechF_joint3[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimTechF_joint5[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -241, 402, 268, -99, -26, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -241, 78, 402, -40, 268, -26, -99, 79, -26, 21, -68, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 538, 97, 0, -50, 0, -33, 0, 99, 0, 26, 0, 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 538, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 538, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 536, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimTechF_joint6[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 139, 9, -335, 2, -1297, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -199, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 141, 1, -1338, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 139, -67, -1297, 189,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 37, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -960, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 175,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -543, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 176, 122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 282, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -108, 45,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), -108,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -543, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -639, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 282, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 427, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -108, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -1, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 43, 18, -687, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -8, -14, -621, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -63, -611, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -349, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -151, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -134, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 31, 76,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 443, 16, -313, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 460, 16, -275, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 476, 15, 114, 82, -231, 44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimTechF_joint7[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -40, 35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -40, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -547, -400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -841, -209,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -950,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -950, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -580, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -430, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 87,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -281, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -479, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -748, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 9,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimTechF_joint8[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -89, -679,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 804, -68, -89, 8, -679, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 115, -86, 0, 11, 0, 84,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 115,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 115,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), -272,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 701, 165,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimTechF_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTSamusAnimTechF_joint10[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 480, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 0, 48, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 484, 60, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 484, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 484, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 402, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -187, -25, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimTechF_joint12[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimTechF_joint13[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -506, 9, 647, 5, -452, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 647, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -479, -20, -410, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -506, 338, -452, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 196, 314, 699, -5, 224, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 122, -250, 636, -183, 87, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -304, -237, 333, -302, -407, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -352, -23, 32, -150, -487, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -487, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -329, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 32, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 143, 30,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -487, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -515, -22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 171, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -95, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -329, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -281, 44,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -541, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -272, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -236, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 35, 25,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -251, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -232, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 23, -128, -32, -215, 17,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimTechF_joint15[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -958, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1050, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -893, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -893, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -513, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -420, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -548, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -567, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -600, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimTechF_joint16[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1521, 3, -1581, 0, 1218, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1617, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1550, -15, 1077, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1551, 13, 888, -200,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -1593, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 384, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1613, 10, 395, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -1578, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 585, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 609, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 997, 55,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1593, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1529, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1051, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1208, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, 8, -1581, -2, 1218, 9,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimTechF_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, -21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 709, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 979, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1334, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1338, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 729, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 657, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 493, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimTechF_joint20[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, -1, 17, 0, 217, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -161, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -20, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 117, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -21, -122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -184, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -187, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -49, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -184, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -62, 17,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -56, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -76, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -47, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 0, -28, -8, -41, 5,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimTechF_joint21[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, 12, 160, -2, -49, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -236, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 226, -97, 160, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 99, -106, 148, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 11, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 52, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -481, -267,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1141, -44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 34, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -18, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1131, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1083, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 46, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -130, -55,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1053, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -403, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -22, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 155, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -180, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -24, 33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -327, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -161, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 145, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 149, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 10, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 184, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -125, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -64, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 42, 160, 11, -49, 15,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimTechF_joint23[150] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, -25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 442, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 708, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1304, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1316, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1398, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1428, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 990, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 927, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 458, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -16,
	ftAnimEnd(),
	0x0000, 0x200E, 0x00AC, 0x0003, 0x0058, 0xFFFF, 0xFFE7, 0x0001, 0x200F, 0x0009, 0xFFE2, 0xFF8A, 0x00E0, 0x0031, 0xFF5E, 0xFFC7, 0x200F, 0x0001, 0xFF56, 0xFF98, 0x010A, 0x0014, 0xFF2A, 0xFFE7, 0x2809, 0x000C, 0xFEE6, 0xFFE6, 0x2805, 0x000D, 0x0120, 0x0005, 0x2003, 0x0005, 0xFF53, 0xFFFC, 0x2003, 0x0001, 0xFF4D, 0xFFFB, 0x2803, 0x0008, 0xFFFD, 0x005D, 0x0801, 0x0006, 0x2009, 0x0001, 0xFECA, 0xFFE3, 0x2809, 0x0007, 0xFE0D, 0x002E, 0x2005, 0x0001, 0x0125, 0x0004, 0x2805, 0x000F, 0x00CA, 0xFFF8, 0x2003, 0x0001, 0x005E, 0x004E, 0x2803, 0x0006, 0x003B, 0xFFF3, 0x0801, 0x0005, 0x2009, 0x0001, 0xFE3A, 0x002A, 0x2809, 0x0008, 0xFF1A, 0x0011, 0x2003, 0x0001, 0x002D, 0xFFF3, 0x2003, 0x0007, 0x0055, 0x002F, 0x200F, 0x0001, 0x008E, 0x0038, 0x00C1, 0xFFF8, 0xFF2B, 0x0010, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
