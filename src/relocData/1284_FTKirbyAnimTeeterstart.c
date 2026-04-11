/* AnimJoint data for relocData file 1284 (FTKirbyAnimTeeterstart) */
/* 1168 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimTeeterstart_joint1[20];
extern u16 dFTKirbyAnimTeeterstart_joint2[10];
extern u16 dFTKirbyAnimTeeterstart_joint3[38];
extern u16 dFTKirbyAnimTeeterstart_joint5[40];
extern u16 dFTKirbyAnimTeeterstart_joint6[60];
extern u16 dFTKirbyAnimTeeterstart_joint7[14];
extern u16 dFTKirbyAnimTeeterstart_joint9[40];
extern u16 dFTKirbyAnimTeeterstart_joint10[58];
extern u16 dFTKirbyAnimTeeterstart_joint11[14];
extern u16 dFTKirbyAnimTeeterstart_joint13[12];
extern u16 dFTKirbyAnimTeeterstart_joint14[48];
extern u16 dFTKirbyAnimTeeterstart_joint16[14];
extern u16 dFTKirbyAnimTeeterstart_joint18[60];
extern u16 dFTKirbyAnimTeeterstart_joint19[42];
extern u16 dFTKirbyAnimTeeterstart_joint21[70];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimTeeterstart_joints[] = {
	(u32)dFTKirbyAnimTeeterstart_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimTeeterstart_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimTeeterstart_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimTeeterstart_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimTeeterstart_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimTeeterstart_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimTeeterstart_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimTeeterstart_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimTeeterstart_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimTeeterstart_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimTeeterstart_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimTeeterstart_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimTeeterstart_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimTeeterstart_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimTeeterstart_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF0108, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimTeeterstart_joint1[20] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 630, -41, 90, 125,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 480, -20, 360, 340,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 120, 600, 200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimTeeterstart_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimTeeterstart_joint3[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, 44,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -22, 1, 312, 10, 4096, -15, 4096, 30, 4096, -15,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 312, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 3, 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 89, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 268, 22,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimTeeterstart_joint5[40] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 27), -180,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 15,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 268, 3, -89, 6, -60, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 12), -60, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 89, -22, -22, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 268, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimTeeterstart_joint6[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1061, 2, -1199, -28, -1008, 32,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -914, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -1002, -29, -1437, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1045, -137, -1409, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1034, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1277, -393, -863, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1832, -509, -655, 348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2295, -268, -996, -11, -167, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2369, -74, -1056, -59, -76, 91,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimTeeterstart_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimTeeterstart_joint9[40] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 27), -180, -11, 0, -22,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 15,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 268, 3, 178, -5, 60, 17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 12), 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 89, -22, 44, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -7, -268, -26,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimTeeterstart_joint10[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2296, 1, 460, -9, 2979, -5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 2320, -31, 341, 20, 2976, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2275, -255, 378, 83, 2912, -302,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1282, -459,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 660, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2371, -392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2128, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 890, -260, 1715, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 760, -129, 552, -108, 1532, -183,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimTeeterstart_joint11[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimTeeterstart_joint13[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	_FT_ANIM_CMD(11, 0, 1), 15,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimTeeterstart_joint14[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 286, -13, -202, 6, -326, -5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -223, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 37, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -50, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 125, 223,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 589, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -236, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -214, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 36, 0, -199, 14, 657, 68,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimTeeterstart_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimTeeterstart_joint18[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), -1881, -7, 1972, -43, -1376, 52, 3686, 30,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1755, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1617, 52,
	ftAnimSetValRateT(FT_ANIM_SCAX, 12), 4096, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1031, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1035, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1244, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1790, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1767, 14, 1651, 5, -1080, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1761, 5, 1629, -21, -957, 123,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimTeeterstart_joint19[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 168, -17, 185, -6, 587, 18,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 646, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 177, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -23, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -40, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -63, -17, 577, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -12, 181, 4, 534, -42,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimTeeterstart_joint21[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x290E, 0x0776, 0xFFFE, 0xF95E, 0xFFEA, 0xF9D3, 0x0010, 0x0E66, 0x001E, 0x4E00, 0x1000, 0x1000, 0x2805, 0x000A, 0xF904, 0x0070, 0x2901, 0x000C, 0x1000, 0x001D, 0x200B, 0x0009, 0x0744, 0xFFFA, 0xFB45, 0x008B, 0x200B, 0x0001, 0x0729, 0xFFDA, 0xFBD9, 0x0079, 0x200F, 0x0001, 0x06F8, 0xFFDE, 0xF975, 0x0052, 0xFC38, 0x0043, 0x200F, 0x0001, 0x06E4, 0xFFEC, 0xF9A9, 0x0034, 0xFC60, 0x0028, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
