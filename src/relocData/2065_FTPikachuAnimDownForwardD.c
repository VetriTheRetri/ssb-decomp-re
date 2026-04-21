/* AnimJoint data for relocData file 2065 (FTPikachuAnimDownForwardD) */
/* 3184 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDownForwardD_joint1[26];
extern u16 dFTPikachuAnimDownForwardD_joint2[50];
extern u16 dFTPikachuAnimDownForwardD_joint3[74];
extern u16 dFTPikachuAnimDownForwardD_joint4[62];
extern u16 dFTPikachuAnimDownForwardD_joint6[28];
extern u16 dFTPikachuAnimDownForwardD_joint7[112];
extern u16 dFTPikachuAnimDownForwardD_joint8[42];
extern u16 dFTPikachuAnimDownForwardD_joint9[46];
extern u16 dFTPikachuAnimDownForwardD_joint10[10];
extern u16 dFTPikachuAnimDownForwardD_joint11[30];
extern u16 dFTPikachuAnimDownForwardD_joint12[30];
extern u16 dFTPikachuAnimDownForwardD_joint14[38];
extern u16 dFTPikachuAnimDownForwardD_joint15[116];
extern u16 dFTPikachuAnimDownForwardD_joint17[40];
extern u16 dFTPikachuAnimDownForwardD_joint18[156];
extern u16 dFTPikachuAnimDownForwardD_joint20[64];
extern u16 dFTPikachuAnimDownForwardD_joint22[152];
extern u16 dFTPikachuAnimDownForwardD_joint23[162];
extern u16 dFTPikachuAnimDownForwardD_joint25[80];
extern u16 dFTPikachuAnimDownForwardD_joint26[158];
extern u16 dFTPikachuAnimDownForwardD_joint27[62];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimDownForwardD_joints[] = {
	(u32)dFTPikachuAnimDownForwardD_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimDownForwardD_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimDownForwardD_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimDownForwardD_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimDownForwardD_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimDownForwardD_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimDownForwardD_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimDownForwardD_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimDownForwardD_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimDownForwardD_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimDownForwardD_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimDownForwardD_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimDownForwardD_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimDownForwardD_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimDownForwardD_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimDownForwardD_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimDownForwardD_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimDownForwardD_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimDownForwardD_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimDownForwardD_joint26, /* [25] joint 26 */
	(u32)dFTPikachuAnimDownForwardD_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimDownForwardD_joint1[26] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 242, 2096,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 5591,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 12), 2880, 67,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 809,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 21), 3480,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimDownForwardD_joint2[50] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 540, -58,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 916, 50, -58, 49,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 616, -59, 15, 40,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 673, 108,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -26, 33, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimDownForwardD_joint3[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 580, 34, 68,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 967, 130, 1, -3, 0, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1366, 166, 15, 5, -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1964, 236, 33, 6, 2, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2785, 275, 52, -5, 8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3614, 82, 0, -5, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 3614, -24, 0, 16, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 3274, -26, 235, 9, 54, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 133, -14, 32, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 3240,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimDownForwardD_joint4[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 170, 175, 199,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 31, 0, -31, 0, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 362, 66, -14, -2, -17, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 397, -1, -14, 0, -16, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 355, -15, -11, 0, -13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 304, -8, -10, 0, -12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 209, -15, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimDownForwardD_joint6[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 324, 2, -62, -22, 313, 77,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 327, -88, 400,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 27), 324, -62, 313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimDownForwardD_joint7[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 601, 142, -329, -33, -457, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 744, 234, -362, 69, -593, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1070, 238, -189, 152, -851, -181,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -709, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 441, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1135, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 836, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 641, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 757, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 924, 94, -733, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 945, 47, 352, 45, -807, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 912, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 532, 76, -618, 129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -378, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 505, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 241, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -202, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 906, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 805, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -1, 240, 0, -202, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimDownForwardD_joint8[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, -140,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -150, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -59, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -459, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 229,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimDownForwardD_joint9[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 65, 188, 23,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 317, 20, 0, -15, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 317, -3, 0, -1, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 281, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -18, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 245, -13, 0, -6, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDownForwardD_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimDownForwardD_joint11[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 111, 367, 335,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -460, -47, 0, -30, 0, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -460, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimDownForwardD_joint12[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -454, -43, -274,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -450, 0, 0, 3, 0, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -450, 13, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimDownForwardD_joint14[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -358, -41, 225,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -358, 32, -41, 21, 225, 111,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -334, 41, -25, -50, 308, 291,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -327, 2, -79, -9, 444, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 27), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPikachuAnimDownForwardD_joint15[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -608, 1, 1059, 11, -566, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -566, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -600, 0, 1073, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -608, -118, 1059, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -837, 0, 1306, -471, -741, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -609, -15, 115, -830, -317, 120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -409, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -867, -138, -499, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -618, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -886, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -804, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -461, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -211, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -670, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -438, 34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -820, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -804, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -408, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -297, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -196, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), -99, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 0, -94, 4, -297, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimDownForwardD_joint17[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -593,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1186, -502,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1005, 588,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 497,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPikachuAnimDownForwardD_joint18[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1363, -67, -1474, -121, 1421, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1628, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1306, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1446, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1199, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1616, 218, 996, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1186, 159, -1191, 169, 658, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1625, 122, -1277, -111, 924, 450,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1396, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1431, -104, 1559, 317,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1420, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1559, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1338, 32, 1614, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1346, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1357, -8, 1742, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1474, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1620, -130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1110, -264,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1460, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1503, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1243, 49, 824, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1250, 9, 670, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1239, 10, 715, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1480, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1182, 16,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1521, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1662, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1525, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1605, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1667, 4, -1609, -4, 1198, 15,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimDownForwardD_joint20[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 507, -405,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 102, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 863, 641,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1283, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 752, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 937, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 880, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 992, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1056, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1110, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1098, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 954, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 951, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimDownForwardD_joint22[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 248, 198, -188, -8, 211, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 379, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 205, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 447, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 71, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -7, 74, 287, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 219, -89, -298, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -186, -156, -351, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -432, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -92, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 34, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 261, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 320, -52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4, 3, -521, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 126, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 268, -28, -539, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 354, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, 112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -354, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 127, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 121, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 339, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 372, -60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -373, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -249, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 172, 41, -197, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 15, -13, -341, -17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 309, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 152, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -9, 127, -24, -356, -14,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimDownForwardD_joint23[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1537, 12, 1255, -49, 1699, -511,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 821, -291,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1361, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1206, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1434, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1600, -75, 606, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1114, 53, 1282, 2, 301, 311,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1425, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1605, 162, 1228, 610,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1481, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1608, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1309, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1398, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1444, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1492, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1573, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1510, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1174, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1424, 12, 832, -304,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1133, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 514, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1334, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1323, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1134, -20, 1325, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1760, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1243, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 527, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 659, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 743, 86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1396, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1734, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1473, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1313, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1636, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1478, -5, 1665, 28, 1413, 17,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimDownForwardD_joint25[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 161, 357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 519, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 344, 322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1093, 467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1279, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 786, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 999, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1017, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1084, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1016, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1144, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1101, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 751, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 786, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 975, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 989, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 835, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 812, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimDownForwardD_joint26[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1791, -354, 1609, -25, 2149, -204,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1606, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1288, -71, 1713, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1294, -158, 1673, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 971, -14, 1691, -10, 1369, -441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1265, 191, 1584, -31, 790, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1374, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1628, 28, 1192, 251,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1722, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1292, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1007, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1485, 97, 1766, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1376, -129, 1769, -74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1117, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1477, 83,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1247, -104, 1671, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1621, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1226, 113,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1558, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1909, -30,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1630, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1872, -108,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1344, 114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1619, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1855, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1134, -30,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1738, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1345, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1601, -18, 1324, -21, 1120, -14,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTPikachuAnimDownForwardD_joint27[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 31, -169, 1542,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 31, 53, -169, 11, 1542, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 351, 60, -99, 28, 1328, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 391, 0, 4, 18, 1307, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 348, -15, 11, -6, 1157, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 299, -4, -36, -4, 964, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 299, -14, -36, 1, 964, -46,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -14, 0, -3,
	ftAnimEnd(),
};
