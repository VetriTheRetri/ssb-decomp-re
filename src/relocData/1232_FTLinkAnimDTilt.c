/* AnimJoint data for relocData file 1232 (FTLinkAnimDTilt) */
/* 2224 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDTilt_joint1[28];
extern u16 dFTLinkAnimDTilt_joint2[32];
extern u16 dFTLinkAnimDTilt_joint4[46];
extern u16 dFTLinkAnimDTilt_joint5[146];
extern u16 dFTLinkAnimDTilt_joint6[64];
extern u16 dFTLinkAnimDTilt_joint9[112];
extern u16 dFTLinkAnimDTilt_joint10[78];
extern u16 dFTLinkAnimDTilt_joint11[32];
extern u16 dFTLinkAnimDTilt_joint12[8];
extern u16 dFTLinkAnimDTilt_joint13[8];
extern u16 dFTLinkAnimDTilt_joint16[8];
extern u16 dFTLinkAnimDTilt_joint17[22];
extern u16 dFTLinkAnimDTilt_joint18[34];
extern u16 dFTLinkAnimDTilt_joint20[42];
extern u16 dFTLinkAnimDTilt_joint21[66];
extern u16 dFTLinkAnimDTilt_joint23[32];
extern u16 dFTLinkAnimDTilt_joint25[84];
extern u16 dFTLinkAnimDTilt_joint26[92];
extern u16 dFTLinkAnimDTilt_joint28[120];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimDTilt_joints[] = {
	(u32)dFTLinkAnimDTilt_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimDTilt_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimDTilt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimDTilt_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimDTilt_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimDTilt_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimDTilt_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimDTilt_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimDTilt_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimDTilt_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimDTilt_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimDTilt_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimDTilt_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimDTilt_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimDTilt_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimDTilt_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimDTilt_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimDTilt_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimDTilt_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF0200, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimDTilt_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 469, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 469, 19, 0, 163,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 498, 19, 245, 163,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 498, -8, 245, -70,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 469, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimDTilt_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -107, 276,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -107, 29, 276, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 250, 29, 0, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 250, -12, 0, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), -107, 276,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTLinkAnimDTilt_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 551, 423, 273,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 832, 5, 511, -39, 650, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 602, -97, 31, -198, 42, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 440, 0, -281, -48, -109, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 602, 3, -456, 25, -327, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 551, 423, 273,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimDTilt_joint5[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -938, -9, -1327, 32, 1218, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1068, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1244, -254, 1442, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1569, -314, 1629, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2066, -126, 1467, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1196, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -987, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2127, 324, 1373, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1416, 275, 1058, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1576, -170, 943, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1772, 72, 908, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1611, 183, 766, -158,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1232, 16, 487, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1032, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1433, -105,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1241, 11, 583, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1127, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 828, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1521, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1427, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1123, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -940, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 870, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1217, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1409, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -1326, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -938, 2, -1327, 0, 1218, 1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDTilt_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -359, -41,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -629, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -464, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -127, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -257, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -271, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -355, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -249, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -115, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -282, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -327, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -363, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimDTilt_joint9[112] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 36, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -76, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -76, -126, 36, 0, -44, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1211, -643, 194, 24, -312, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1362, -73, 86, 101, -659, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1358, -102, 396, 239, -800, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1567, -59, 564, 66, -1002, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1536, 10, 595, 20, -915, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1534, -14, 627, 34, -913, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1565, -45, 664, 36, -923, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1625, -25, 700, 29, -929, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1616, 53, 724, 18, -903, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1518, -206, 738, -11, -864, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2028, 68, 702, -33, -1472, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 36, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), -76, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimDTilt_joint10[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 954, 6, 84, 10, 165, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 1038, -56, 219, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 380, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 394, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 156, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 985, -41, 134, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 84, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 954, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 152, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 165, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 84, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 84, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 954,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 954,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 954, 0, 84, 0, 165, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimDTilt_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -812, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -531, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -812, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -822, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -812, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -812, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimDTilt_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimDTilt_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimDTilt_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2182, -376, -605,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimDTilt_joint17[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -163,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -163, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 286, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 286, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), -163,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimDTilt_joint18[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -199, -499, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -199, -1, -499, 60, 128, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -211, -1, 231, 60, -73, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -211, 0, 231, -26, -73, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -199, -499, 128,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimDTilt_joint20[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -163, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -21, 11, -394, 21, 14, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -23, 6, 257, 13, -15, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 60, -8, -226, -17, 48, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -191, -11, -97, 11, 17, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -163, 0, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimDTilt_joint21[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -51, 1, -328, 0, -27, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -242, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), -27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -51, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -90, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -403, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -200, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -292, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -420, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -52, 1,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -299, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -328, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -51, 0, -328, 0, -27, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimDTilt_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1094, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 947, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 832, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 768, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 789, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 1093, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1094, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimDTilt_joint25[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 223, 3, -203, 2, -639, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -283, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -514, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 223, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 181, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 473, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -293, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -204, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -478, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -587, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 498, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 178, 1,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -596, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -638, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 182, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 221, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 223, 2, -203, 1, -639, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDTilt_joint26[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -283, -4, 272, 0, -901, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -210, 68, -996, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 272, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 279, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -30, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -146, 28, -1089, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -192, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1176, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -47, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 278, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -189, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -249, -15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1170, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -905, 6,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -263, -12, 276, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -281, -4, 273, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -283, -2, 272, 0, -901, 3,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimDTilt_joint28[120] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 839, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 929, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 961, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 935, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 926, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 840, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 839, -1,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFE9C, 0x0001, 0xFFB7, 0x0001, 0x0096, 0x0000, 0x2809, 0x000B, 0x000E, 0xFFC8, 0x2007, 0x0009, 0xFE6E, 0xFFE4, 0xFF9D, 0xFFF1, 0x2007, 0x0001, 0xFE63, 0x0022, 0xFF99, 0x000F, 0x2803, 0x0004, 0xFF12, 0x0008, 0x2805, 0x001C, 0xFFB3, 0x0003, 0x0801, 0x0001, 0x2009, 0x0001, 0xFFE4, 0xFFE3, 0x2809, 0x0012, 0x0065, 0x000B, 0x0801, 0x0002, 0x2003, 0x0001, 0xFF17, 0x0001, 0x2803, 0x0014, 0xFE7E, 0x000B, 0x0801, 0x000F, 0x2009, 0x0001, 0x0070, 0x000A, 0x2809, 0x0008, 0x0096, 0x0000, 0x0801, 0x0004, 0x2003, 0x0001, 0xFE89, 0x000A, 0x2803, 0x0003, 0xFE9B, 0x0001, 0x0801, 0x0002, 0x2005, 0x0001, 0xFFB6, 0x0001, 0x200F, 0x0001, 0xFE9C, 0x0000, 0xFFB7, 0x0001, 0x0096, 0x0000, 0x0000, 0x0000, 0x0000,
};
