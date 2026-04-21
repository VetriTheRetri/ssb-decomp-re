/* AnimJoint data for relocData file 525 (FTMarioAnimFalconDivePulled) */
/* 2528 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimFalconDivePulled_joint1[42];
extern u16 dFTMarioAnimFalconDivePulled_joint2[52];
extern u16 dFTMarioAnimFalconDivePulled_joint4[10];
extern u16 dFTMarioAnimFalconDivePulled_joint5[168];
extern u16 dFTMarioAnimFalconDivePulled_joint6[62];
extern u16 dFTMarioAnimFalconDivePulled_joint7[38];
extern u16 dFTMarioAnimFalconDivePulled_joint8[54];
extern u16 dFTMarioAnimFalconDivePulled_joint10[10];
extern u16 dFTMarioAnimFalconDivePulled_joint11[128];
extern u16 dFTMarioAnimFalconDivePulled_joint12[68];
extern u16 dFTMarioAnimFalconDivePulled_joint13[62];
extern u16 dFTMarioAnimFalconDivePulled_joint15[10];
extern u16 dFTMarioAnimFalconDivePulled_joint16[122];
extern u16 dFTMarioAnimFalconDivePulled_joint18[58];
extern u16 dFTMarioAnimFalconDivePulled_joint20[88];
extern u16 dFTMarioAnimFalconDivePulled_joint21[104];
extern u16 dFTMarioAnimFalconDivePulled_joint23[44];
extern u16 dFTMarioAnimFalconDivePulled_joint24[96];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimFalconDivePulled_joints[] = {
	(u32)dFTMarioAnimFalconDivePulled_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimFalconDivePulled_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimFalconDivePulled_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimFalconDivePulled_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimFalconDivePulled_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimFalconDivePulled_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimFalconDivePulled_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimFalconDivePulled_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimFalconDivePulled_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimFalconDivePulled_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimFalconDivePulled_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimFalconDivePulled_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimFalconDivePulled_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimFalconDivePulled_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimFalconDivePulled_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimFalconDivePulled_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimFalconDivePulled_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimFalconDivePulled_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimFalconDivePulled_joint1[42] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 540, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -16, -16, 557, 0, -28, -28,
	ftAnimSetValRateT(FT_ANIM_TRAY, 14), 473, -71,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), -16, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 11), -16, -28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -16, 11, 432, 0, -28, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 540, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimFalconDivePulled_joint2[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -169, -169, -290, 209, 23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -454, -13, 48, 19, -225, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 200, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -494, 0, -269, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -29, 21, -23, 10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 83, -57,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -71, -790, -95,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimFalconDivePulled_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 208, 258, 110, 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimFalconDivePulled_joint5[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, -269, -1308, -120, -1880, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1472, -346, -1428, 227, -2039, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1049, -297, -852, 520, -1614, 295,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 980, 90, -1500, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -387, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -299, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -368, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1107, 159, -1536, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1844, 120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1884, -55,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -365, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -504, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1949, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3027, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1943, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2688, -220,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -443, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -462, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3283, 178, -2921, -165,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3086, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3158, -56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -442, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -474, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3117, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3288, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3118, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3364, 93,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -472, 26, -3443, -108,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -346, 60, -3488, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3415, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3376, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3350, -26, -300, 45, -3489, -1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimFalconDivePulled_joint6[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -129,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -311, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -442, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -248, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -311, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -221, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -312, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -347, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -219, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -194, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 12,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimFalconDivePulled_joint7[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 154, 1, -205, 0, 157, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -847, 0, 22, 0, -111, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -66, 8, -37, 0, -106, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -625, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimFalconDivePulled_joint8[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -4, 176,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 283, 0, 215, -6, 58, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -204, -32, 0, -16, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -133, 33, 0, -13, 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 305, 0, -206, 0, 69, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 281, -9, -148, 18, 38, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimFalconDivePulled_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -221, 139, -209, 0, 54, -17,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimFalconDivePulled_joint11[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, -635, 551, -620, 65, -499,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -191, -334, -68, -289, -433, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -224, -52, -26, 79, -509, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -364, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 216, 75, -630, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 241, 46, -795, -130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 689, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -585, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -248, 216, -297, 401,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 408, 190, 674, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 694, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 278, -167,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 449, -14, 830, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 217, 54, 487, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 191, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 149, -33,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 292, 78, 515, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 477, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 106, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 114, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 459, 99,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 444, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, -1, 551, 92, 65, -40,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimFalconDivePulled_joint12[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 433,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -378, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -362, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -383, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -84, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -176, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -544, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -291, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -452, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -904, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -857, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimFalconDivePulled_joint13[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -204, 0, 516, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -130,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 266, 0, -88, 102, 369, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 209, 0, -6, 0, 238, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 334, 10, -157, 0, 532, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 340, 2, -72, 17, 193, -13,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 598, 0, -1, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 625, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimFalconDivePulled_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimFalconDivePulled_joint16[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1743, -381, -1377, -77, 1653, -183,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1364, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2124, -142, 1470, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2028, 69, 1524, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1520, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1899, 49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1331, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1445, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1586, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1425, -42,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1835, 62, -1423, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1824, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1464, 72,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1377, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1008, -48,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1898, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1746, 187,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1380, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1355, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 957, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1567, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1543, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1692, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1743, -51, -1377, -22, 1653, 85,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimFalconDivePulled_joint18[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, -303,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 97, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 199, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 136, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -68,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 312, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 379, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 609, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 696, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 647, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 492, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -91,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimFalconDivePulled_joint20[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1820, 383, -1597, -9, -1764, 247,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1600, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1437, 170, -1516, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1480, 12, -1481, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -1512, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1388, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1434, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1370, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1368, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1278, -42,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1518, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1747, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1605, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1588, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1348, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1861, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1834, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1820, 13, -1597, -8, -1764, -17,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimFalconDivePulled_joint21[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, -30, 187, -70, 35, 369,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -264, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -13, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 610, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 683, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 728, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -277, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -258, 47,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 732, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 315, -177,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 152, -31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -192, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 194, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 135, -142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -218, -77,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 117, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 187, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -287, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -26, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 12, 187, -7, 35, 61,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimFalconDivePulled_joint23[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, -431,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 561, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 652, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 667, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -84,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimFalconDivePulled_joint24[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, 39, 1702, -124, 1395, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1620, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1523, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1686, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1685, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1302, -95,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1619, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1512, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1517, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1537, 7,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1510, 14, 1211, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1575, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1229, -28,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1542, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1585, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1542, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1677, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1194, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1255, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1697, 19, 1702, 116, 1395, 140,
	ftAnimEnd(),
};
