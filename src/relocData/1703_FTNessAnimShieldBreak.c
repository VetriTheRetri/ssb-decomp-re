/* AnimJoint data for relocData file 1703 (FTNessAnimShieldBreak) */
/* 3744 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimShieldBreak_joint1[84];
extern u16 dFTNessAnimShieldBreak_joint2[16];
extern u16 dFTNessAnimShieldBreak_joint4[46];
extern u16 dFTNessAnimShieldBreak_joint5[236];
extern u16 dFTNessAnimShieldBreak_joint6[78];
extern u16 dFTNessAnimShieldBreak_joint7[10];
extern u16 dFTNessAnimShieldBreak_joint8[46];
extern u16 dFTNessAnimShieldBreak_joint10[10];
extern u16 dFTNessAnimShieldBreak_joint11[208];
extern u16 dFTNessAnimShieldBreak_joint12[48];
extern u16 dFTNessAnimShieldBreak_joint13[54];
extern u16 dFTNessAnimShieldBreak_joint15[10];
extern u16 dFTNessAnimShieldBreak_joint16[222];
extern u16 dFTNessAnimShieldBreak_joint18[110];
extern u16 dFTNessAnimShieldBreak_joint19[134];
extern u16 dFTNessAnimShieldBreak_joint21[62];
extern u16 dFTNessAnimShieldBreak_joint22[202];
extern u16 dFTNessAnimShieldBreak_joint24[78];
extern u16 dFTNessAnimShieldBreak_joint25[96];
extern u16 dFTNessAnimShieldBreak_joint26[70];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimShieldBreak_joints[] = {
	(AObjEvent32 *)dFTNessAnimShieldBreak_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimShieldBreak_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimShieldBreak_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimShieldBreak_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimShieldBreak_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimShieldBreak_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimShieldBreak_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimShieldBreak_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimShieldBreak_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimShieldBreak_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimShieldBreak_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimShieldBreak_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimShieldBreak_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimShieldBreak_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimShieldBreak_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimShieldBreak_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimShieldBreak_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimShieldBreak_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimShieldBreak_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimShieldBreak_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimShieldBreak_joint1[84] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -16, 321, -172,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, -36, 0, 48,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 60), -3216, -16, 3216, 14,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 150, -68, 302, -5, 157, 72,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -136, -63, 311, -6, -46, -259,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 38, -25, 291, 135, -296, -17,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -181, -176, 549, 82, -76, 166,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -270, -5, 436, -135, -5, 66,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -191, 91, 295, -49, 47, 94,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -75, 82, 329, 113, 194, 71,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 537, 126, 199, 51,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 8), -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimShieldBreak_joint2[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -261, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 28), -575, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 32), -1206, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimShieldBreak_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 399, -16, 0, -20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 52, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -232, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -327, 1, 0, 21, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 197, 3, 215, -8, 84, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -557, -47, -225, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 17), 206,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimShieldBreak_joint5[236] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2770, -25, -367, -7, 2395, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -481, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2627, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2310, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2299, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1922, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -507, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -426, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2438, 191,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1520, 68,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1820, -94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1201, -77,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -409, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -445, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1461, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1493, 13,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -452, 0, 1127, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -406, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 468, -103,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1476, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1399, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1326, 119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -316, 189,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -415, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -368, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 363, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 6, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -171, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 60, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 152, 32, -148, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 190, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -156, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -312, 92, -319, -205,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -719, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -50, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 280, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 327, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -760, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -795, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -48, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -190, -95,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 343, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 84, -121,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -291, -94, -733, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -627, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -430, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -52, -122, -284, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -150, 65, -139, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, 90, -585, 42, -209, -70,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimShieldBreak_joint6[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -149, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -151, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -325, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -406, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -393, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -650, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, 44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimShieldBreak_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimShieldBreak_joint8[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 225, -11, 0, -28, 0, 11,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), -166, -30, -444, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -435, 4, 0, 32, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 332, 4, 236, -1, 148, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 246, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -53, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimShieldBreak_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimShieldBreak_joint11[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 767, 64, 1275, -7, 802, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1121, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 654, -151, 470, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 481, -161, 272, -186,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -206, -222, -510, -235,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1127, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1097, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -450, -173, 1163, 38, -771, -178,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -637, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1121, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -981, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -977, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -376, 31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -612, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -128, 5,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1113, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1003, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -345, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -751, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -146, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -485, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -797, -245, -1107, -292,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1217, -117, -1715, -170,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1048, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1256, 96,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1356, -141, -1915, -203,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2514, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2133, -125,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1350, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1312, -24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2532, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -2348, 125,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2267, -133,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2403, 151,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1288, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1166, 23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2228, 179,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1919, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2217, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2130, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1857, 61, 1192, 25, -2088, 42,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimShieldBreak_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -115, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimShieldBreak_joint13[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 70, -2, -120, -3, 861, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 33, -2, -24, -6, 105, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 15, 21, -258, -2, 709, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 515, 8, -81, -1, 286, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 213, -24, -303, 8, 881, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimShieldBreak_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimShieldBreak_joint16[222] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1715, 1, -1411, 4, 1173, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1848, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1352, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1535, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1632, 95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1808, -122,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1881, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1732, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1375, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1236, -29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1653, -173,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 988, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1649, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1616, -81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1273, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1384, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 922, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 781, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1728, -62, 898, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1753, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 797, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1388, 1, 789, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 852, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1322, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1745, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1539, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 798, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1010, 54,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1521, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1501, -65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1307, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1382, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1081, 109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1942, 205,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1580, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1741, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2130, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1447, -36, 2332, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1383, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2324, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2153, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1713, 26, 2020, -129,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -1709, -10, 1174, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1389, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -1410, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1715, -5, -1411, -1, 1170, -3,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimShieldBreak_joint18[110] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 402, 15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 500, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 428, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 123, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 267, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 680, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 647, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 480, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -167,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 439, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 540, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 750, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 839, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 335, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 234, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 742, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 725, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 631, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 619, -11,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimShieldBreak_joint19[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 31, 2, 135, 0, 324, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 117, 7, 553, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 87, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 89, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -40, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -32, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 129, 17, 582, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 818, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 176, -38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -34, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 218, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 163, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -122, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 762, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 388, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 135, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 91, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -182, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -362, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -192, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 2, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 22, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 114, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 96, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 134, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 324, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 114, 0, 135, 0, 324, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimShieldBreak_joint21[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -302, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 283, 3, -43, 0, 170, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -237, -68, 4, 8, 229, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -676, -6, 77, 1, 271, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -325, 91, 25, -13, 284, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 703, 22, -126, -5, 140, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 61, -59, -59, 7, 41, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -302, 0, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimShieldBreak_joint22[202] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1435, -8, 1273, -7, -1782, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1643, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1186, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -2339, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2465, -112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2674, -32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1598, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1671, -89,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1201, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1128, -64,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2711, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2007, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1766, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1812, 142,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1068, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1174, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1638, 173,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1355, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1789, 185,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -2228, -43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1434, -86, 1180, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -1635, 92, 1375, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2258, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2191, 82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1528, 109, 1384, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1267, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1446, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2087, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2131, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2124, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2102, -49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1275, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1569, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1352, -59, -2198, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1437, 7, -1847, 79,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1573, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1459, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1442, 3, -1765, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1453, 2, -1385, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1452, 6, 1455, 1, -1366, 18,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimShieldBreak_joint24[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 481, 21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 768, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 647, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 723, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 712, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 461, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 528, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 260, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -130,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 107, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 738, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 729, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 543, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 529, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimShieldBreak_joint25[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -167, -4, -139, 0, 320, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), 543, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 59), -139, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -175, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -167, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -18, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 20, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -351, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -368, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -194, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -157, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -98, -26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 534, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 321, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -137, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -235, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -235, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -162, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -167, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -157, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -155, 1, -139, 0, 320, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimShieldBreak_joint26[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 29, 7, -127,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -330, -41, -208, -17, -231, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -545, -5, -230, 1, -212, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -403, 50, -185, 21, -359, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 165, 14, 72, 18, -263, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -198, -37, 69, -3, -210, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -397, 7, 13, -3, -153, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -73, 44, 1, 0, -53, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 363, 0, 0,
	ftAnimEnd(),
};
