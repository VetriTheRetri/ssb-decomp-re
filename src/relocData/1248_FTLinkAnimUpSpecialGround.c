/* AnimJoint data for relocData file 1248 (FTLinkAnimUpSpecialGround) */
/* 2784 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimUpSpecialGround_joint1[22];
extern u16 dFTLinkAnimUpSpecialGround_joint2[62];
extern u16 dFTLinkAnimUpSpecialGround_joint3[50];
extern u16 dFTLinkAnimUpSpecialGround_joint5[66];
extern u16 dFTLinkAnimUpSpecialGround_joint6[94];
extern u16 dFTLinkAnimUpSpecialGround_joint7[48];
extern u16 dFTLinkAnimUpSpecialGround_joint10[54];
extern u16 dFTLinkAnimUpSpecialGround_joint11[92];
extern u16 dFTLinkAnimUpSpecialGround_joint12[56];
extern u16 dFTLinkAnimUpSpecialGround_joint13[8];
extern u16 dFTLinkAnimUpSpecialGround_joint14[28];
extern u16 dFTLinkAnimUpSpecialGround_joint17[28];
extern u16 dFTLinkAnimUpSpecialGround_joint18[52];
extern u16 dFTLinkAnimUpSpecialGround_joint19[52];
extern u16 dFTLinkAnimUpSpecialGround_joint21[70];
extern u16 dFTLinkAnimUpSpecialGround_joint22[122];
extern u16 dFTLinkAnimUpSpecialGround_joint24[56];
extern u16 dFTLinkAnimUpSpecialGround_joint26[126];
extern u16 dFTLinkAnimUpSpecialGround_joint27[102];
extern u16 dFTLinkAnimUpSpecialGround_joint29[144];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimUpSpecialGround_joints[] = {
	(u32)dFTLinkAnimUpSpecialGround_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimUpSpecialGround_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimUpSpecialGround_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimUpSpecialGround_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimUpSpecialGround_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimUpSpecialGround_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimUpSpecialGround_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimUpSpecialGround_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimUpSpecialGround_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimUpSpecialGround_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimUpSpecialGround_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimUpSpecialGround_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimUpSpecialGround_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimUpSpecialGround_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimUpSpecialGround_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimUpSpecialGround_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimUpSpecialGround_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimUpSpecialGround_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimUpSpecialGround_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimUpSpecialGround_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	0xFFFF0284, /* [29] END */
};

/* Joint 1 */
u16 dFTLinkAnimUpSpecialGround_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 16084,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 16084, -268,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -622,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 52), 0, -149,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -33,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 40), 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimUpSpecialGround_joint2[62] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 901, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 37, 49, 680, -294, -240, -320,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 37, -9, 680, 57, -240, 466,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 31, 0, 716, 3, 51, 31,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 52), 31, 0, 716, 0, 51, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -2, 16, -4,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 21, -7, 636, -63, 151, 80,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTLinkAnimUpSpecialGround_joint3[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 40, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 276, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 40, -5, 276, -87, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 14, 0, -158, -8, -13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 52), 14, 0, -158, -2, -13, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 19, 0, -319, -16, -19, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimUpSpecialGround_joint5[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 695, 72, 601, 72, 115, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 695, -68, 601, -146, 115, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 423, -1, 15, -580, -111, -407,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 692, 3, -559, -7, -698, -8,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 52), 692, 0, -559, 0, -698, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, 7, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 748, 5, -442, 11, -698, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimUpSpecialGround_joint6[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, -148, 2890, -181, -86, 134,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 2568, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 131, -378, 47, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -476, -695, 345, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1259, -338, 2278, -199, 606, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 2278, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1153, 39, 354, -94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1045, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1474, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2594, 224,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 2726, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1045, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 50), 1045, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1473, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 49), -1474, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2726, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 48), 2726, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1474, 0, 2726, 0, 1045, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimUpSpecialGround_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -216,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -707, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -230, 353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -230, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -418, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -139, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 48), -139, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimUpSpecialGround_joint10[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -4, -1, -49, -9, 534, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -4, 8, -49, 291, 534, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 37, 0, 1406, 19, 871, 4,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 52), 37, 0, 1406, 0, 871, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 37, 0, 1406, 0, 871, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimUpSpecialGround_joint11[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, 30, 123, 25, -50, 122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 290, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 588, 302, 223, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1051, 420, 139, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 303, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1429, 149, 414, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 104, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1349, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1051, -605, 139, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 137, -642, 261, -207,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -240, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -275, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 90, -12, -296, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 50), 100, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -244, -4, -315, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 49), -236, 2, -279, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -234, 2, 104, 3, -275, 4,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimUpSpecialGround_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -41,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -550, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -302, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -302, -458,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -924, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -553, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -526, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -385, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -608, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimUpSpecialGround_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimUpSpecialGround_joint14[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1427, 103, -882, -13, 280, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1427, -6, -882, 0, 280, 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 94), 804, -804, 804,
	ftAnimBlock(0, 54),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimUpSpecialGround_joint17[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1959, 43, -239, 49, -501, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1959, -2, -239, -3, -501, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 94), 1697, -536, -339,
	ftAnimBlock(0, 54),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimUpSpecialGround_joint18[52] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -274, -45, -370, -34, 216, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -274, 113, -370, 169, 216, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 295, 6, 475, 9, 378, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 38), 0, 0, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 295, 8, 475, 13, 378, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 295, -7, 475, -15, 378, -9,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTLinkAnimUpSpecialGround_joint19[52] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -199, -33, -191, 1, 272, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -199, 33, -191, 86, 272, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -30, 5, 242, 4, -44, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 38), 0, 0, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -30, 0, 242, 7, -44, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -30, 0, 242, -11, -44, 1,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimUpSpecialGround_joint21[70] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 236, -1, -380, 49, -51, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -15, -5, 393, 128, -72, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 199, 474, -75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -15, 393, -72,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 199, 474, -75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -15, 393, -72,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 199, 474, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -15, -7, 393, -11, -72, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -6, 0, 164, -5, -30, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 47), 0, 0, 0,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTLinkAnimUpSpecialGround_joint22[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 59, -244, -40, 108, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 71, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -338, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -100, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -156, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -8, -55, -34, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 6, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -348, -44, -347, -298,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -359, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -625, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), -601, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 8, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), 67, -3,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -355, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -337, -6,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -611, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -729, 25,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 61, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -202, 14,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -342, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -297, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -630, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, 24, -276, 21, -615, 15,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimUpSpecialGround_joint24[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 113,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 484, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 540, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 579, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 484, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1014, 358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1202, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1201, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1201, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 1180, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1167, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 455, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 406, -48,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimUpSpecialGround_joint26[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1279, -58, -1446, 28, 1573, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1216, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1668, -161, 1532, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1837, 76, 1609, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1110, 283, 1389, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1296, -156,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1735, -113,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -948, 63, 1497, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1013, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1373, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1755, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), -1687, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1035, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), -1090, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1356, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 1449, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1091, 0, 1438, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), -785, 24, 1953, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1706, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -2149, -3,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -767, 5, 2002, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -813, -57, 2029, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -888, -74, -2146, 2, 1994, -35,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimUpSpecialGround_joint27[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -92, 269, 33, -125, -149,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -73, -295, 266, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -274, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, -154,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -529, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -412, -233, 106, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -511, 64, 143, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -412, 265, 106, -23, -584, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, 193, 97, -113, -663, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -24, -24, -119, -112, -456, 103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -60, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -133, -6, -454, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -139, -5, -454, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 48), 6, 4, -448, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -59, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 34), 82, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 86, 4, 11, 4, -448, 0,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimUpSpecialGround_joint29[144] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 93,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 598, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 553, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 598, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 852, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 882, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 882, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 48), 882, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 882, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFE55, 0x001D, 0xFFB6, 0x001B, 0xFFBB, 0x0007, 0x2809, 0x0003, 0x00B3, 0x008C, 0x2007, 0x0002, 0xFECC, 0x00B9, 0x003D, 0x0098, 0x2007, 0x0001, 0xFFE5, 0x00E2, 0x0103, 0x0079, 0x2805, 0x0002, 0x0125, 0xFFEA, 0x2803, 0x0003, 0xFFE5, 0xFEB4, 0x2009, 0x0001, 0x0126, 0x003A, 0x2809, 0x0002, 0x00B3, 0xFF0C, 0x0801, 0x0001, 0x2005, 0x0001, 0x0103, 0xFF5B, 0x200F, 0x0001, 0xFDEE, 0xFEF8, 0xFFDC, 0xFF74, 0xFF3F, 0xFEDE, 0x2809, 0x0004, 0xFE72, 0x0001, 0x2007, 0x0001, 0xFDD4, 0xFFF4, 0xFFEA, 0x0004, 0x2805, 0x0020, 0xFF66, 0xFFFE, 0x2003, 0x0001, 0xFDD4, 0x0000, 0x2803, 0x0032, 0xFDC9, 0x0000, 0x0801, 0x0002, 0x2009, 0x0001, 0xFE74, 0x0001, 0x2809, 0x002F, 0xFE70, 0x0000, 0x0801, 0x001C, 0x2005, 0x0001, 0xFF64, 0xFFFE, 0x2005, 0x0012, 0xFF4C, 0x0000, 0x200F, 0x0001, 0xFDCA, 0x0000, 0xFF4B, 0x0000, 0xFE70, 0x0000, 0x0000,
};
