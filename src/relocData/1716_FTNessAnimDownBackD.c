/* AnimJoint data for relocData file 1716 (FTNessAnimDownBackD) */
/* 3392 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDownBackD_joint1[18];
extern u16 dFTNessAnimDownBackD_joint2[48];
extern u16 dFTNessAnimDownBackD_joint3[22];
extern u16 dFTNessAnimDownBackD_joint5[30];
extern u16 dFTNessAnimDownBackD_joint6[80];
extern u16 dFTNessAnimDownBackD_joint7[34];
extern u16 dFTNessAnimDownBackD_joint8[10];
extern u16 dFTNessAnimDownBackD_joint9[46];
extern u16 dFTNessAnimDownBackD_joint11[30];
extern u16 dFTNessAnimDownBackD_joint12[152];
extern u16 dFTNessAnimDownBackD_joint13[56];
extern u16 dFTNessAnimDownBackD_joint14[94];
extern u16 dFTNessAnimDownBackD_joint16[10];
extern u16 dFTNessAnimDownBackD_joint17[160];
extern u16 dFTNessAnimDownBackD_joint19[60];
extern u16 dFTNessAnimDownBackD_joint20[148];
extern u16 dFTNessAnimDownBackD_joint22[164];
extern u16 dFTNessAnimDownBackD_joint23[122];
extern u16 dFTNessAnimDownBackD_joint25[56];
extern u16 dFTNessAnimDownBackD_joint26[124];
extern u16 dFTNessAnimDownBackD_joint27[178];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTNessAnimDownBackD_joints[] = {
	(AObjEvent32 *)dFTNessAnimDownBackD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimDownBackD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimDownBackD_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTNessAnimDownBackD_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTNessAnimDownBackD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimDownBackD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimDownBackD_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimDownBackD_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTNessAnimDownBackD_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTNessAnimDownBackD_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimDownBackD_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimDownBackD_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTNessAnimDownBackD_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTNessAnimDownBackD_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTNessAnimDownBackD_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTNessAnimDownBackD_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTNessAnimDownBackD_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTNessAnimDownBackD_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTNessAnimDownBackD_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTNessAnimDownBackD_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTNessAnimDownBackD_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimDownBackD_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -300, -720,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 23), -3840, -1120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), -4200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimDownBackD_joint2[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 723, 134, 697, 293,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 5, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 5), 536, -141, 360, -42,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -2814, -121,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 240, -116,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 214, 528,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 900, 308,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 600, -149,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 11), -3216, 600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimDownBackD_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 28, 1, -360, -14, 8, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimDownBackD_joint5[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -457, 156,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 187, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 402, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 0, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTNessAnimDownBackD_joint6[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1279, 1, -1464, 2, -2356, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1424, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1444, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), -2152,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -2152,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -2148, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1455, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1800, -5,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1445, 18, -2152, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1791, 275,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1309, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1787, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1307, -129,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1490, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1293, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1198, -109, -1347, -37, -1192, 100,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimDownBackD_joint7[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -513, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 91,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimDownBackD_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTNessAnimDownBackD_joint9[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -764, -525, 0, 288, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 187, 13,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 0, 0, 300, 1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 402, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 187, -19, 0, 17, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -10, 0, 364, -3, -32, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimDownBackD_joint11[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 54, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 0, 0, 0, 0, 54, -12, -18, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 0, 0, 0, 0, -17, 0, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNessAnimDownBackD_joint12[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1952, -256, 612, -23, -2742, -241,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3317, -277,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 161, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2208, -341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2636, -394,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3269, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3539, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3864, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3309, -23, -3916, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -3626, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -3914, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 160, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 160, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3687, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -3956, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3914, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -3916, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3965, -64, 165, 16, -3916, -97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -4312, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 189, -18, -4470, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 165, 42, -4575, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -4744, -467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4323, -113, 273, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4540, -599, 566, 168,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 648, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5522, -618, -5498, -438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5778, -420, -5621, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6363, -535, 692, -39, -6113, -465,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6849, -486, 569, -123, -6553, -439,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimDownBackD_joint13[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -522, -140,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -820, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -704, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -127, 352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -576, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -686, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 128,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNessAnimDownBackD_joint14[94] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, -1072, 714,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -57, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -241, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -792, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -113, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -714, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -186, 45, 195, -7,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -713, -44,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 145, -56, -150, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -523, -79, -692, 113, 571, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -170, 9, -258, 4, 63, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -487, 144, -673, 30, 1585, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 54, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 408, 80, 594, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 90, 50, 126, -55,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimDownBackD_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimDownBackD_joint17[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 940, -108, -338, 143, -524, -349,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1, 188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 476, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -964, -91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1147, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 182, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 34, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 176, -237,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -35, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 44, 7, -1132, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1140, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -183, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -28, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 34, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -21, -61, -1100, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -818, 140,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -401, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -178, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -34, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -662, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -666, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -32, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -177, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -556, 99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -297, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -395, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -364, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -197, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -280, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -311, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -315, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -1, -279, 0, -297, 17,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimDownBackD_joint19[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 792, 83,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1037, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 972, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1242, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1199, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 354, -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 57, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 359, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 393, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimDownBackD_joint20[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1719, 203, -1909, 2, 1766, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1788, 90, 1363, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1923, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1835, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1653, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1641, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1861, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1689, 70, 1191, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1160, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1759, -41,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1793, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1659, -25,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1186, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1774, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1642, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1550, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1804, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -2131, 61,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1461, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1739, 50,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1879, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1707, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1722, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1638, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2065, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1650, 36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1679, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1643, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1634, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1626, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, -12, -1620, 29, 1634, -8,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDownBackD_joint22[164] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -511, 310, 180,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -317, 0, 111, -142, 605, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -548, -6, 554, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 25, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -143, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -534, -8, -105, 10, 158, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -662, -5, -111, -13, 169, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -135, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -638, 31, -146, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -474, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -95, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -35, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -435, 33, -43, -17, 98, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -407, 20, -69, -11, 93, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -393, -66, -65, 0, 19, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -540, -97, -70, -42, -82, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -587, -43, -151, 0, 88, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -627, -9, -136, 36, 99, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -614, 24, -43, -2, 87, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -202, -26, -135, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -528, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -600, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -435, 48, -228, 23, -89, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -309, 40, -62, 25, 91, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -66, -5, 0, 38, 0, -25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTNessAnimDownBackD_joint23[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 802, 19, -52, 175, 195, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 328, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 822, 29, 188, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 861, -136, 168, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 549, -411, 499, -35, -247, -586,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 39, -301, 257, -164, -1005, -526,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -45, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 169, -63, -1299, -90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 70, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1186, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1132, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -64, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1141, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1062, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 40, -26, -981, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -468, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 118, 17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -62, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -130, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -459, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -248, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 2, 136, 17, -210, 37,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimDownBackD_joint25[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 106, 329,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1260, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1225, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1122, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1139, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1132, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1070, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 579, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 454, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 511, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 512, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 440, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimDownBackD_joint26[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -296, 37, -260, -39, 598, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -336, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -164, 163, 228, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 68, 166, -158, -282,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 244, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -395, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -251, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 117, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 142, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 62, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -396, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -210, 61,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 150, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 21, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 78, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 155, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -35, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -114, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -200, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 141, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 80, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 22, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, -4, 25, 0, -202, -1,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTNessAnimDownBackD_joint27[178] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, -104, 265,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 148, -49, -179, -134, -38, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -430, -388, -508, 58, 358, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -627, -164, -61, 250, 172, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -760, -2, -6, 42, 32, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -634, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, 22, 99, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, -8, 49, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -674, 13, 4, -5, 131, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 15, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -595, 8, 0, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -613, -61, 51, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -719, 33, -116, 0, 308, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -545, 39, 15, 32, -44, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -640, -61, -52, -39, 103, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -103, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -668, 19, 94, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 128, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -413, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 7, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -82, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -278, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -119, -55, 366, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -172, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -204, 6, 336, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -72, 20, 48, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 56, 0, 0, 3, 0, 4,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
