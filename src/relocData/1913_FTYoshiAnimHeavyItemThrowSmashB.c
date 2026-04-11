/* AnimJoint data for relocData file 1913 (FTYoshiAnimHeavyItemThrowSmashB) */
/* 2608 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimHeavyItemThrowSmashB_joint1[10];
extern u16 dFTYoshiAnimHeavyItemThrowSmashB_joint2[88];
extern u16 dFTYoshiAnimHeavyItemThrowSmashB_joint3[50];
extern u16 dFTYoshiAnimHeavyItemThrowSmashB_joint6[42];
extern u16 dFTYoshiAnimHeavyItemThrowSmashB_joint7[164];
extern u16 dFTYoshiAnimHeavyItemThrowSmashB_joint8[72];
extern u16 dFTYoshiAnimHeavyItemThrowSmashB_joint10[10];
extern u16 dFTYoshiAnimHeavyItemThrowSmashB_joint11[178];
extern u16 dFTYoshiAnimHeavyItemThrowSmashB_joint12[74];
extern u16 dFTYoshiAnimHeavyItemThrowSmashB_joint13[14];
extern u16 dFTYoshiAnimHeavyItemThrowSmashB_joint14[10];
extern u16 dFTYoshiAnimHeavyItemThrowSmashB_joint15[32];
extern u16 dFTYoshiAnimHeavyItemThrowSmashB_joint17[26];
extern u16 dFTYoshiAnimHeavyItemThrowSmashB_joint18[66];
extern u16 dFTYoshiAnimHeavyItemThrowSmashB_joint20[54];
extern u16 dFTYoshiAnimHeavyItemThrowSmashB_joint22[66];
extern u16 dFTYoshiAnimHeavyItemThrowSmashB_joint23[66];
extern u16 dFTYoshiAnimHeavyItemThrowSmashB_joint25[62];
extern u16 dFTYoshiAnimHeavyItemThrowSmashB_joint26[166];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimHeavyItemThrowSmashB_joints[] = {
	(u32)dFTYoshiAnimHeavyItemThrowSmashB_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimHeavyItemThrowSmashB_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimHeavyItemThrowSmashB_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimHeavyItemThrowSmashB_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimHeavyItemThrowSmashB_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimHeavyItemThrowSmashB_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimHeavyItemThrowSmashB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimHeavyItemThrowSmashB_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimHeavyItemThrowSmashB_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimHeavyItemThrowSmashB_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimHeavyItemThrowSmashB_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimHeavyItemThrowSmashB_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimHeavyItemThrowSmashB_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimHeavyItemThrowSmashB_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimHeavyItemThrowSmashB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimHeavyItemThrowSmashB_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimHeavyItemThrowSmashB_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimHeavyItemThrowSmashB_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimHeavyItemThrowSmashB_joint26, /* [25] joint 26 */
	0xFFFF025C, /* [26] END */
};

/* Joint 1 */
u16 dFTYoshiAnimHeavyItemThrowSmashB_joint1[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 672, 0,
	_FT_ANIM_CMD(11, 0, 1), 40,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimHeavyItemThrowSmashB_joint2[88] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 57, -21,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 25), -3,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 6,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 25), -26, 17,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 6,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY), 64, -5, 0, 0, -36, 89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 19), -141, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -259, -6, 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), -62, 43, 15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 266, 108, 0, -3, 0, -1, 250, 1075, 115, 423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 383, -13, 0, -4, -4, 3, 411, -274, 190, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), 0, -7, -89, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 4, 1, -110, -180, 39, -80,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, -1, 30, 13, 20, -8,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimHeavyItemThrowSmashB_joint3[50] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 172,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 80), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 508, 19, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 512, 7,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 6,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 714, 8, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 685, -34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 16, -9, 0, 3,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimHeavyItemThrowSmashB_joint6[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 20,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -56, -23, 0, 0, 600, 35, 329, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 0, 600, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -750, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -876, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), 78, 27, 0, 7,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimHeavyItemThrowSmashB_joint7[164] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -97, -23, -1528, 4, 2956, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1378, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -182, -95, 3073, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -311, -458, 3020, 240,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4123, 436,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1098, -651, -1118, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1615, -301, -1342, -177,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1707, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1474, -98, 4427, 241,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 4667, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1587, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1696, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1629, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4645, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 4190, -126,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1591, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1484, 25,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4059, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3564, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3517, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 3457, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1626, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1672, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3456, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 3872, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3999, 125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 4454, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1461, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1460, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1698, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1722, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, 3, -1476, -15, 4473, 19,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimHeavyItemThrowSmashB_joint8[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -787, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -989, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -749, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -957, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -922, 478,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 456,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -481, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -629, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -842, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimHeavyItemThrowSmashB_joint10[10] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1072, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 40), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimHeavyItemThrowSmashB_joint11[178] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 104, 26, -1709, -9, -300, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1928, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 193, 43, -198, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 217, 162, -377, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 518, -6, -2276, -410, -188, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -3031, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 203, -115, -465, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 288, 32, -172, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 268, -22, -3160, -83, -7, 112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -3199, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 215, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 50, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 46, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -164, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3195, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -3092, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, -140, -3025, -28, -282, -475,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -65, -131, -3149, -71, -1114, -453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -63, 4, -3168, -14, -1188, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -3283, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -100, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1232, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1234, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -979, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -868, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -285, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3311, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -3338, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -129, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -148, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -272, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -252, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, 3, -3320, 18, -219, 32,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimHeavyItemThrowSmashB_joint12[74] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -588, -462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -934, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -827, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -815, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1220, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1241, 610,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 620,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -502, -348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -696, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1047, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1015, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimHeavyItemThrowSmashB_joint13[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 172, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), -1072, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 40), 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimHeavyItemThrowSmashB_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimHeavyItemThrowSmashB_joint15[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -387, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), -20, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 157, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -10, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 291, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -223, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -190, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimHeavyItemThrowSmashB_joint17[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 137, 3, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), -134, 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 179, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -153, -1, 0, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimHeavyItemThrowSmashB_joint18[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0, 0, -331, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), -6, 1, 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 23, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -22, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -434, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -468, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -152, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -239, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -204, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -170, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -497, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -570, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -52, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 1, 5, 0, -3, 48,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimHeavyItemThrowSmashB_joint20[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 654, -35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 604, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 686, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1026, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1003, -513,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -498,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 647, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 814, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 329, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -67,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTYoshiAnimHeavyItemThrowSmashB_joint22[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1607, 0, -1, 0, -391, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 38), -82, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), 1617, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -445, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -437, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 41, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 144, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -88, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -470, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -506, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -292, 38,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -84, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, -2, -83, 0, -263, 28,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimHeavyItemThrowSmashB_joint23[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0, 0, -331, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 41, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 8, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -336, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -382, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -156, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -242, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -211, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -189, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -557, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -187, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, -154, 33,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimHeavyItemThrowSmashB_joint25[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 654, -42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 587, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 639, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 902, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 899, -451,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 386, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 674, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 610, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 504, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 416, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -37,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimHeavyItemThrowSmashB_joint26[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1607, 0, -1, 0, -391, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 37), -86, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), 1611, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -467, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -458, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 46, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 148, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 8, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -74, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -373, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -423, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -245, 26,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -89, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -90, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, -2, -89, 0, -228, 16,
	ftAnimEnd(),
	0x28E2, 0xFCDC, 0xFFED, 0x0000, 0x0000, 0x006E, 0xFDB1, 0x0000, 0xFEF7, 0x480C, 0x0000, 0x0000, 0x4003, 0x0008, 0xFBE3, 0x20E1, 0x0005, 0x0000, 0x0000, 0x0026, 0xFF04, 0xFEEF, 0xFE0F, 0x20E1, 0x0003, 0x0000, 0x0000, 0xFF73, 0xFF48, 0xFE0F, 0xFE9C, 0x2803, 0x000A, 0xFCDC, 0x002A, 0x20E1, 0x0006, 0x0000, 0x0000, 0xFF57, 0x0097, 0xFD5F, 0xFFB3, 0x20E1, 0x0004, 0x0000, 0x0000, 0x002F, 0x0214, 0xFDAE, 0x0105, 0x28C1, 0x0001, 0x00A3, 0x0AE8, 0xFE02, 0x06DD, 0x2803, 0x0002, 0xFDE3, 0x0024, 0x3821, 0x0001, 0x0000, 0x20E1, 0x0001, 0x0000, 0x0000, 0x02EA, 0x0A0D, 0xFF65, 0x0CC9, 0x28C1, 0x000D, 0x11BD, 0x05EE, 0x13C3, 0x0825, 0x3823, 0x000D, 0xFEEE, 0x0000, 0x40E1, 0x0007, 0x0000, 0x11BD, 0x13C3, 0x1003, 0x0007, 0xFEEE, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
