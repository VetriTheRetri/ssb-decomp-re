/* AnimJoint data for relocData file 2008 (FTPikachuAnimHeavyItemThrowSmashB) */
/* 3632 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimHeavyItemThrowSmashB_joint1[90];
extern u16 dFTPikachuAnimHeavyItemThrowSmashB_joint2[66];
extern u16 dFTPikachuAnimHeavyItemThrowSmashB_joint3[58];
extern u16 dFTPikachuAnimHeavyItemThrowSmashB_joint5[50];
extern u16 dFTPikachuAnimHeavyItemThrowSmashB_joint6[176];
extern u16 dFTPikachuAnimHeavyItemThrowSmashB_joint7[62];
extern u16 dFTPikachuAnimHeavyItemThrowSmashB_joint8[58];
extern u16 dFTPikachuAnimHeavyItemThrowSmashB_joint9[48];
extern u16 dFTPikachuAnimHeavyItemThrowSmashB_joint10[50];
extern u16 dFTPikachuAnimHeavyItemThrowSmashB_joint11[50];
extern u16 dFTPikachuAnimHeavyItemThrowSmashB_joint13[46];
extern u16 dFTPikachuAnimHeavyItemThrowSmashB_joint14[156];
extern u16 dFTPikachuAnimHeavyItemThrowSmashB_joint16[46];
extern u16 dFTPikachuAnimHeavyItemThrowSmashB_joint17[120];
extern u16 dFTPikachuAnimHeavyItemThrowSmashB_joint19[62];
extern u16 dFTPikachuAnimHeavyItemThrowSmashB_joint21[138];
extern u16 dFTPikachuAnimHeavyItemThrowSmashB_joint22[150];
extern u16 dFTPikachuAnimHeavyItemThrowSmashB_joint24[48];
extern u16 dFTPikachuAnimHeavyItemThrowSmashB_joint25[164];
extern u16 dFTPikachuAnimHeavyItemThrowSmashB_joint26[124];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimHeavyItemThrowSmashB_joints[] = {
	(u32)dFTPikachuAnimHeavyItemThrowSmashB_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimHeavyItemThrowSmashB_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimHeavyItemThrowSmashB_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimHeavyItemThrowSmashB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimHeavyItemThrowSmashB_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimHeavyItemThrowSmashB_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimHeavyItemThrowSmashB_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimHeavyItemThrowSmashB_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimHeavyItemThrowSmashB_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimHeavyItemThrowSmashB_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimHeavyItemThrowSmashB_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimHeavyItemThrowSmashB_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimHeavyItemThrowSmashB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimHeavyItemThrowSmashB_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimHeavyItemThrowSmashB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimHeavyItemThrowSmashB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimHeavyItemThrowSmashB_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimHeavyItemThrowSmashB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimHeavyItemThrowSmashB_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimHeavyItemThrowSmashB_joint26, /* [25] joint 26 */
	0xFFFF0363, /* [26] END */
};

/* Joint 1 */
u16 dFTPikachuAnimHeavyItemThrowSmashB_joint1[90] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 5,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), -26, 0, 33, 0, -28, 0, 290, -317, 140, -1,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 5248, 1600, 5248,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 5), 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -26, 0, 33, 0, -28, 0, 290, 122, 140, -1,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 5248, 1600, 5248,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -26, 33, -28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 3, -1, 519, 282, 68, -9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 2, -1, 820, 152, 123, 57,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 2, 0, 672, -169, 125, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 2, -1, 672, 1, 125, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 0, 675, 108,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimHeavyItemThrowSmashB_joint2[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -554, -1, -36, 0, 24, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -554, 0, -36, 31, 24, 25,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 624, 69, 439, 40, 406, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 493, 20, 573, 4, 505, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, -16, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 251, -24, 289, -54, 163, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 318, -13, 193, -9, 109, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 23, -23, 133, -21, 32, -22,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimHeavyItemThrowSmashB_joint3[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -356, -3, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -356, 26, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 38, 23, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 16, 0, -9, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 170, 37, -78, -11, -23, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 262, -10, -78, 4, -23, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -13, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPikachuAnimHeavyItemThrowSmashB_joint5[50] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 288, 25, -51, 45,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 23), 452, 28, 191, 19,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 3,
	ftAnimSetValRate(FT_ANIM_TRAZ), 447, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 447, -101,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 15), 193, -101,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 383, -79, 12, -204, 219, 29,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 383, -27, 12, -35, 219, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimHeavyItemThrowSmashB_joint6[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 765, -19, -96, 9, -951, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -700, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 693, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 65, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 312, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 172, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 167, -108, -530, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -749, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -43, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -180, -144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -565, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 717, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 833, 241, -1022, -412,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1967, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1199, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1438, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1310, -145, -471, 148, -1893, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1148, -78, -268, 104, -1684, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1152, -5, -262, 8, -1705, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -165, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 977, -80, -1496, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 886, -159, -1423, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 657, -318, -98, 131, -1249, 297,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 192, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 250, -200, -828, 346,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -556, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 256, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 275, 10, 201, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 779, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 236, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -203, 2,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 797, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 6, 236, 0, -202, 1,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimHeavyItemThrowSmashB_joint7[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -835, 229,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -394, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -225, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -364, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -230, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -590, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -956, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1105, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -589, 454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 294,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimHeavyItemThrowSmashB_joint8[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -194, 0, -1, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -194, 13, -1, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 4, 12, 9, 0, -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 12, 0, -14, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 103, 30, -105, -15, -10, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 210, -6, -105, -3, -10, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -2, -163, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimHeavyItemThrowSmashB_joint9[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, 2401,
	ftAnimSetValRate(FT_ANIM_ROTX), 55, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 8, 32, 508,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 55, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 5, 2401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -240, -25, 5, -9, 2401, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -200, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -89, 2184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 59, 10, 5, 3, 2401, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 59, 5, 2401,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimHeavyItemThrowSmashB_joint10[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -436, 1, 209, -1, 277, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -436, 11, 209, -5, 277, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -211, 0, 101, -2, 134, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -433, 45, 158, -2, 166, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 428, 33, 62, -12, 63, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimHeavyItemThrowSmashB_joint11[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -548, 1, -163, 1, -327, 2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -548, 14, -163, 4, -327, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -265, 4, -79, 0, -158, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -444, 43, -158, 1, -197, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 340, 34, -64, 12, -75, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimHeavyItemThrowSmashB_joint13[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -295, -50, 458,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -295, -53, -50, 73, 458, -109,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -427, -62, 132, 38, 186, -112,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -435, -8, 36, -110, 204, 20,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -435, 52, 36, -46, 204, 51,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimHeavyItemThrowSmashB_joint14[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 851, 3, 1246, -31, 606, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1189, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 711, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 625, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1142, -4, 800, 107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1259, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 829, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -236, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 622, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 403, 61,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1303, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1569, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 474, 65, -214, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2, 92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 829, 78,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1573, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1439, -60,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 110, 181,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 868, 83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 904, 41, 1400, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 833, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1612, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 886, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 936, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1008, 68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1309, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 823, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 804, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1639, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1706, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, 1703, -2, 1311, 1,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimHeavyItemThrowSmashB_joint16[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -761, -94,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -890, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -994, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -931, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -994, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -515, 401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 257,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimHeavyItemThrowSmashB_joint17[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -99, 15, -160, 0, 204, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -341, -18, -295, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 297, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -138, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -242, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -534, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -353, -2, -322, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -253, 5, -54, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -513, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -177, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 96, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 122, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -253, 43, -43, -65, 106, -132,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 21, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -251, -32, -286, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -250, 11, -299, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 1, 2, -439, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 27, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 23, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 39, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 18, 0, 0, -406, 32,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimHeavyItemThrowSmashB_joint19[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 906, 51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 818, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 825, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 837, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 393, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -193,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 435, 340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 680, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 725, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 761, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 937, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, 8,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPikachuAnimHeavyItemThrowSmashB_joint21[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1519, -22, 1426, 26, -1940, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1358, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1914, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1655, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1528, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1356, -7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1304, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1345, 70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1878, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1675, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1368, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1577, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1407, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1594, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1465, 137,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1450, -170,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1585, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1779, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1741, -217,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1987, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1654, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1454, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1751, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1615, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2007, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1939, -14,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1596, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1585, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, -16, 1480, 25, -1961, -22,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimHeavyItemThrowSmashB_joint22[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 162, 35, -135, 206, 643, -568,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -176, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 71, 60, 74, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, -4, 237, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 61, 18, 60, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, 14, 167, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 193, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -270, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -478, -184,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1067, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 171, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 311, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -280, -100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -323, 132,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1018, 94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -427, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -171, 146, 384, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 242, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 15, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -94, -88, -573, -141,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -47, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -866, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 236, -7, -938, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -519, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -46, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -32, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 121, 6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -448, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -213, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, 7, -57, -10, -192, 20,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimHeavyItemThrowSmashB_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 797, 253,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1050, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1058, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1284, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1326, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 960, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 831, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1102, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1117, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 828, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimHeavyItemThrowSmashB_joint25[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -211, 257, 41, 325, -732, 940,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 45, -36, 366, 46, 207, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -283, -134, 135, -74, -477, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -223, -21, 218, -21, -16, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -327, -52, 92, -69, -336, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -64, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -223, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -74, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -24, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -165, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -122, -39, -202, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -196, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -290, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -160, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 125, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 89, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 120, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -248, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -293, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -270, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -379, 47,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 90, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -8, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -317, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -486, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -313, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 273, 28,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -503, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -505, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 294, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 299, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, 1, 284, -15, -484, 21,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimHeavyItemThrowSmashB_joint26[124] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, 0, -5, 0, -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -2, 0, -5, 11, -7, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -92, -7, 228, 1, -467, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -177, 3, 18, -11, -876, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -14, 0, -3,
	ftAnimEnd(),
	0x0000, 0x20EE, 0xFCF4, 0x0000, 0xFFDF, 0x0000, 0x001C, 0x0000, 0xFFEA, 0x000E, 0x00B3, 0xFE35, 0xFE81, 0x0032, 0x20EF, 0x0005, 0xFCF4, 0x0000, 0xFFDF, 0x0000, 0x001C, 0x0000, 0xFFEA, 0xFFFD, 0x00B3, 0x0055, 0xFE81, 0x011B, 0x20EF, 0x0005, 0xFCF7, 0x0000, 0xFFDF, 0x0000, 0x001C, 0x0000, 0xFFE5, 0xFFF6, 0x011E, 0xFFA2, 0xFFE2, 0x01E0, 0x2803, 0x000A, 0xFD87, 0x001A, 0x20ED, 0x0005, 0xFFDF, 0x0000, 0x001B, 0x0000, 0xFFDD, 0xFFEB, 0x003C, 0x0088, 0x00D8, 0x00B8, 0x20ED, 0x0005, 0xFFDF, 0x0000, 0x001B, 0x0000, 0xFFCA, 0xFF52, 0x01C9, 0x04A9, 0x00C8, 0x0625, 0x2803, 0x0014, 0x0019, 0x0001, 0x38ED, 0x0014, 0xFFDE, 0x001B, 0xFDBB, 0x0ECE, 0x140D, 0x0000, 0x0000,
};
