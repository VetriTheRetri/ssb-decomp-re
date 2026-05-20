/* AnimJoint data for relocData file 464 (FTLuigiAnimWin2) */
/* 2800 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLuigiAnimWin2_joint1[14];
extern u16 dFTLuigiAnimWin2_joint2[32];
extern u16 dFTLuigiAnimWin2_joint4[108];
extern u16 dFTLuigiAnimWin2_joint5[236];
extern u16 dFTLuigiAnimWin2_joint7[72];
extern u16 dFTLuigiAnimWin2_joint8[88];
extern u16 dFTLuigiAnimWin2_joint10[10];
extern u16 dFTLuigiAnimWin2_joint11[326];
extern u16 dFTLuigiAnimWin2_joint12[144];
extern u16 dFTLuigiAnimWin2_joint13[16];
extern u16 dFTLuigiAnimWin2_joint15[10];
extern u16 dFTLuigiAnimWin2_joint16[54];
extern u16 dFTLuigiAnimWin2_joint18[40];
extern u16 dFTLuigiAnimWin2_joint20[74];
extern u16 dFTLuigiAnimWin2_joint21[46];
extern u16 dFTLuigiAnimWin2_joint23[32];
extern u16 dFTLuigiAnimWin2_joint24[50];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTLuigiAnimWin2_joints[] = {
	(AObjEvent32 *)dFTLuigiAnimWin2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLuigiAnimWin2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLuigiAnimWin2_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLuigiAnimWin2_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLuigiAnimWin2_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTLuigiAnimWin2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTLuigiAnimWin2_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLuigiAnimWin2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLuigiAnimWin2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLuigiAnimWin2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLuigiAnimWin2_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTLuigiAnimWin2_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTLuigiAnimWin2_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTLuigiAnimWin2_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLuigiAnimWin2_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLuigiAnimWin2_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLuigiAnimWin2_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTLuigiAnimWin2_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 1608, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 120), 1608,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLuigiAnimWin2_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX), -89, 42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 55), -89, 2, 42, -9,
	ftAnimSetValRateT(FT_ANIM_TRAX, 17), -42, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 89, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 89,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 48), -42,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 48), 89,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLuigiAnimWin2_joint4[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -148, -6, -312, -14, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -173, -386, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -148, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -173, -386, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -148, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -173, -386, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -148, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -173, -386, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -148, 6, -312, 22, 0, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 69, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), -40, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -148, -6, 312, 10, 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -140, 242, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -148, 312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -140, 242, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -148, 312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -140, 242, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -148, 312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -140, 242, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -148, 312, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLuigiAnimWin2_joint5[236] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 145, -1, -388, 0, 653, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 245, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -471, -3, 478, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -471, 2, 469, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -466, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 368, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 330, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 360, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 245, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 285, 13,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 320, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 367, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 294, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 259, 28,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 377, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 255, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -471, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -477, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 294, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 260, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 274, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 345, -24,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 251, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 187, -8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -499, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -536, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 330, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 510, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 167, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 47, -1,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 613, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -545, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -508, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 49, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 58, 12,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -515, -4, 613, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -477, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 719, -1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 66, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 48, 22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -485, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -462, -10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 69, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -11, -10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -471, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -17, -5, -474, -3, 718, -1,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLuigiAnimWin2_joint7[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -608, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -526, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -520, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -498, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -488, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -761, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -786, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -623, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -592, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -587, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -642, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -628, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -669, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -652, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -726, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -731, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTLuigiAnimWin2_joint8[88] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 80,
	ftAnimSetValRate(FT_ANIM_ROTY), -77, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 360, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 50), 76, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -4, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -78,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -78,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -78,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -78, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 79, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -76, -2,
	ftAnimBlock(0, 18),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), 9,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 50), -76,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 79,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 79,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 79,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 79, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 12,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLuigiAnimWin2_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 156, -18,
	ftAnimBlock(0, 120),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLuigiAnimWin2_joint11[326] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -839, 1, 138, 16, -1039, 0, 6144, 47, 4505, 9, 4505, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 42), -813, -2, -1025, -3,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 66), 4507, 4507,
	ftAnimSetValRateT(FT_ANIM_SCAX, 66), 6154, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 407, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 522, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 154, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 138, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 518, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 568, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 159, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 138, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 522, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 572, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 154, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 137, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 518, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 572, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 162, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -821, -10, -1034, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -492, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -636, 77,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 138, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -61, -34,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -422, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -205, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -561, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -552, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -94, -29, -653, -100,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 7372, 4505, 4505,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -32, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -962, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -227, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -799, -36,
	ftAnimBlock(0, 4),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 48), 7372, 4505, 4505,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -803, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -734, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 42, 131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 295, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -945, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -956, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 232, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 34, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -37, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -36, 64,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -736, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), -730, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 34, 134,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 295, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -945, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -956, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 232, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -41, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -90, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 39, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 232, 127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 232, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -945, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -956, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 34, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -94, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -36, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 35, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 232, 129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 232, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -945, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1003, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 39, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -125, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -729, 1, -136, -11, -1005, -1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLuigiAnimWin2_joint12[144] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 53), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -474, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -397, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -397, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -474, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -397, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 198,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -397, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -474, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -397, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 194,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -397, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -474, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -397, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLuigiAnimWin2_joint13[16] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAZ), 2048, 4915,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY), 0, 312, 117, 143, 0, 0, 4915,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 120), 2867, 4096,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTLuigiAnimWin2_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 112, -71, 5,
	ftAnimBlock(0, 120),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLuigiAnimWin2_joint16[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -194, 0, -50, 0, -91, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 60), -12, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 119), -196, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), -118, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -117, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -311, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -18, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 58), -100, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -311, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 44), -288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -196, 0, -100, 0, -288, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLuigiAnimWin2_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 194, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 47), 131, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 141, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 174, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 200, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 619, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 619, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 44), 618, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 618, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLuigiAnimWin2_joint20[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -68, -5, -275, 8, -81, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 47), -123, 5, -23, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 46), -133, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -132, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -284, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -114, 10, -32, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 69), -108, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), -31, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -41, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 51), -42, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -289, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 50), -436, 0,
	ftAnimBlock(0, 48),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -108, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -109, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, 0, -436, 0, -109, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLuigiAnimWin2_joint21[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -79, 0, 73, 0, -40, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 70), -1, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 119), -35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 57), 10, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 13, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 61), 9, -1,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 48), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -35, 0, 6, 0, 5, -3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLuigiAnimWin2_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 45), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTLuigiAnimWin2_joint24[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 75, -3, 185, 10, 133, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 68), 46, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 58), 8, -6, 371, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, -8, 377, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 60), -49, 0, 315, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 37, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 50), 69, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -48, 0, 314, 0, 65, -3,
	ftAnimEnd(),
	0x0000, 0x0000,
};
