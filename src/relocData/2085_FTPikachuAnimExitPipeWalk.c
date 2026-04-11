/* AnimJoint data for relocData file 2085 (FTPikachuAnimExitPipeWalk) */
/* 2976 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimExitPipeWalk_joint1[20];
extern u16 dFTPikachuAnimExitPipeWalk_joint2[60];
extern u16 dFTPikachuAnimExitPipeWalk_joint3[56];
extern u16 dFTPikachuAnimExitPipeWalk_joint5[108];
extern u16 dFTPikachuAnimExitPipeWalk_joint6[80];
extern u16 dFTPikachuAnimExitPipeWalk_joint7[18];
extern u16 dFTPikachuAnimExitPipeWalk_joint8[60];
extern u16 dFTPikachuAnimExitPipeWalk_joint9[26];
extern u16 dFTPikachuAnimExitPipeWalk_joint10[74];
extern u16 dFTPikachuAnimExitPipeWalk_joint11[76];
extern u16 dFTPikachuAnimExitPipeWalk_joint13[112];
extern u16 dFTPikachuAnimExitPipeWalk_joint14[88];
extern u16 dFTPikachuAnimExitPipeWalk_joint16[48];
extern u16 dFTPikachuAnimExitPipeWalk_joint17[104];
extern u16 dFTPikachuAnimExitPipeWalk_joint19[58];
extern u16 dFTPikachuAnimExitPipeWalk_joint21[106];
extern u16 dFTPikachuAnimExitPipeWalk_joint22[106];
extern u16 dFTPikachuAnimExitPipeWalk_joint24[58];
extern u16 dFTPikachuAnimExitPipeWalk_joint25[178];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimExitPipeWalk_joints[] = {
	(u32)dFTPikachuAnimExitPipeWalk_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimExitPipeWalk_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimExitPipeWalk_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimExitPipeWalk_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimExitPipeWalk_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimExitPipeWalk_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimExitPipeWalk_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimExitPipeWalk_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimExitPipeWalk_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimExitPipeWalk_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimExitPipeWalk_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimExitPipeWalk_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimExitPipeWalk_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimExitPipeWalk_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimExitPipeWalk_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimExitPipeWalk_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimExitPipeWalk_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimExitPipeWalk_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimExitPipeWalk_joint25, /* [24] joint 25 */
	0xFFFF02C7, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimExitPipeWalk_joint1[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 33, -28,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 899, 0, -2654, 460,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 40), -162, 551,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 40), 903,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimExitPipeWalk_joint2[60] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -8, 7,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 759, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 941, -1, -11, 0, 20, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 726, -12, -7, 0, 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 759, 17, -8, 0, 7, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 941, -1, -11, 0, 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 726, -12, -7, 0, 5, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 759, -8, 7,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimExitPipeWalk_joint3[56] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -328, 7, -17, 0, 14, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 99, 15, 7, 0, -4, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -42, -38, 0, -2, 1, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -328, 7, -17, 0, 14, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 99, 15, 7, 0, -4, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -42, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 1,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimExitPipeWalk_joint5[108] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 303, -6, 51, 95, 359, 26,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 295, 0, 174, 8, 373, -5,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 5,
	ftAnimSetVal(FT_ANIM_SCAZ), 4096,
	ftAnimSetValAfter(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAZ, 9), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 302, 3, 72, -57, 344, -16,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 2), 4915,
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 2), 4096, -74,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 20), 4096, 74,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 302, 2, 67, -42, 343, 28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 303, -6, 51, 95, 359, 26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 295, 0, 174, 8, 373, -5,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 302, 4, 72, -57, 344, -16,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 2), 4915,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 2), 4096,
	ftAnimSetValT(FT_ANIM_SCAZ, 3), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAX, 1), 302, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 67, 343,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimExitPipeWalk_joint6[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 621, 33, -17, 1, -1120, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -18, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 545, -60, -1031, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 332, -50, -733, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 382, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -516, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -779, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 624, 56, -1126, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 538, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -8, 0, -1220, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -44, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1018, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 327, -49, -699, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 239, -29, -47, 0, -487, 70,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, -47, -487,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimExitPipeWalk_joint7[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), -10, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimExitPipeWalk_joint8[60] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, 53,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -410, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -358, 0, 22, 0, 52, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -418, -3, 22, 0, 53, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -410, 4, 22, 0, 53, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -358, 0, 22, 0, 52, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -418, -3, 22, 0, 53, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -410, 22, 53,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimExitPipeWalk_joint9[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 8, 32, 508,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -276, -12, -235, -8, 2245, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -276, 8, -235, 6, 2245, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 59, 5, 2401,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPikachuAnimExitPipeWalk_joint10[74] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -194, 3, 7, 1, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -194, -4, 7, -1, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -260, -18, -22, -8, -46, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -267, -4, -25, -2, -51, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -260, 9, -22, 4, -46, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -194, 3, 7, 1, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -194, -4, 7, -1, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -260, -18, -22, -8, -46, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -267, -25, -51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimExitPipeWalk_joint11[76] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -148, 1, 5, -1, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -148, -1, 5, 1, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -173, -6, 31, 7, 38, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -176, -1, 33, 1, 42, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -173, 3, 31, -3, 38, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -148, 1, 5, -1, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -148, -1, 5, 1, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -173, -6, 31, 7, 38, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -176, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33, 42,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimExitPipeWalk_joint13[112] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ), -277, 5, 99, -32, 386, 43, 4096, -111,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -268, 7, -22, -90, 378, 18,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 5,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 19), 4096, 117,
	_FT_ANIM_CMD(11, FT_ANIM_SCAZ, 1), 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -266, -12, -35, 181, 414, 9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -277, -8, 114, 55, 385, -90,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -275, 0, 27, -12, 312, 0,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 2), 5324,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ, 3), -277, 5, 99, -32, 386, 43, 4096, -111,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 19), 4096, 117,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -268, 7, -22, -90, 378, 18,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -266, -12, -35, 181, 414, 9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -277, -8, 114, 55, 385, -90,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -275, 27, 312,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 2), 5324,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimExitPipeWalk_joint14[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1691, -3, 1628, -1, -2358, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1678, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1586, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2111, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2034, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1797, -20, -2751, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1679, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1595, 1, -2795, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1619, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -2469, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2139, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1557, -5, -1909, -101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1596, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1797, -18, -2751, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1792, 1, -2786, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1791, 0, 1597, 0, -2799, -4,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1791, 1597, -2799,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTPikachuAnimExitPipeWalk_joint16[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -778, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -10, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -773, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimExitPipeWalk_joint17[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1243, 101, -1262, -39, 618, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1412, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1546, 36, 687, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1460, -16, 1140, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1347, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1139, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1291, 29, 737, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1197, -10, 525, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 942, -3, -1299, -11, 709, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1329, 100, -1265, -14, 591, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1547, 21, -1386, -28, 768, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1445, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1292, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1150, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1146, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1541, 10, 738, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1509, -10, -1230, 20, 515, -74,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1509, -1230, 515,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPikachuAnimExitPipeWalk_joint19[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 535, 59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 713, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 477, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 536, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 877, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 716, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 340, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 590, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 709, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 468, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 526, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 875, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 866, -3,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 866,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPikachuAnimExitPipeWalk_joint21[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 287, -64, 327, -44, 314, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -23, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 156, 8, 283, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 243, 18, -8, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 318, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -112, 13, -305, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 234, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -82, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 355, 37,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 468, -1, 510, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 154, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 224, -61, 365, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 96, -31, 313, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -25, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 283, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -303, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 243, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -114, 19, 268, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 88, 67, 269, 0, -47, 85,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 88, 269, -47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimExitPipeWalk_joint22[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 417, 84, 436, 1, -1060, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 708, -65, -828, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 441, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 252, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 276, -83, 220, -33, -823, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 194, -1, -94, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 53, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -26, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 198, 2, 142, 53, -626, -150,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 435, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 367, 65, -1064, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 604, 58, -952, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 717, -54, 252, -35, -827, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 275, -85, 219, -33, -822, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 206, -13, 51, -38, -366, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 196, -3, -9, -20, -146, 73,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 196, -9, -146,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTPikachuAnimExitPipeWalk_joint24[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 800, -48,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 656, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 329, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 546, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 279, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 663, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 789, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 663, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 328, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 544, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 269, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 108, -53,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 108,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimExitPipeWalk_joint25[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1866, -71, -1205, 4, 1880, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2081, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1236, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1986, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1870, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2083, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1709, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1717, 9, -1376, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1651, 3, -1476, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1820, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1592, 15, 2139, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1201, 32, 1754, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1756, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2103, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1188, 12, 1961, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1126, -11, 1875, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1725, 66, -1258, -50, 1948, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1703, 11, -1427, -39, 2055, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1654, 16, -1498, -23, 2093, 12,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1654, -1498, 2093,
	ftAnimEnd(),
	0x0000, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200E, 0xFA94, 0xFFCE, 0xFDFD, 0xFFD5, 0xFF71, 0x0021, 0x200F, 0x000B, 0xFA6C, 0x0011, 0xFDEF, 0x0007, 0xFF9B, 0xFFF2, 0x200F, 0x0005, 0xFBB1, 0xFFE6, 0xFE71, 0x0000, 0xFE88, 0x0017, 0x200F, 0x0006, 0xF947, 0x0003, 0xFDF0, 0x0001, 0x009B, 0xFFFE, 0x200F, 0x000D, 0xFBEB, 0x002E, 0xFE91, 0x000D, 0xFE61, 0xFFDC, 0x200F, 0x0002, 0xFBFC, 0x0049, 0xFEB9, 0x006E, 0xFE77, 0xFFF1, 0x2807, 0x0003, 0xFD59, 0x000D, 0x00B7, 0x0060, 0x3809, 0x0003, 0xFE12, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
