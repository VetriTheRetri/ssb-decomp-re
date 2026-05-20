/* AnimJoint data for relocData file 1742 (FTNessAnimCliffSlow) */
/* 1952 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCliffSlow_joint1[26];
extern u16 dFTNessAnimCliffSlow_joint2[48];
extern u16 dFTNessAnimCliffSlow_joint3[22];
extern u16 dFTNessAnimCliffSlow_joint5[38];
extern u16 dFTNessAnimCliffSlow_joint6[158];
extern u16 dFTNessAnimCliffSlow_joint7[62];
extern u16 dFTNessAnimCliffSlow_joint8[12];
extern u16 dFTNessAnimCliffSlow_joint9[36];
extern u16 dFTNessAnimCliffSlow_joint11[38];
extern u16 dFTNessAnimCliffSlow_joint12[138];
extern u16 dFTNessAnimCliffSlow_joint13[68];
extern u16 dFTNessAnimCliffSlow_joint14[24];
extern u16 dFTNessAnimCliffSlow_joint16[20];
extern u16 dFTNessAnimCliffSlow_joint17[46];
extern u16 dFTNessAnimCliffSlow_joint19[14];
extern u16 dFTNessAnimCliffSlow_joint20[50];
extern u16 dFTNessAnimCliffSlow_joint22[18];
extern u16 dFTNessAnimCliffSlow_joint23[34];
extern u16 dFTNessAnimCliffSlow_joint25[16];
extern u16 dFTNessAnimCliffSlow_joint26[34];
extern u16 dFTNessAnimCliffSlow_joint27[20];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTNessAnimCliffSlow_joints[] = {
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTNessAnimCliffSlow_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimCliffSlow_joint1[26] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1260, 150, -240, 303,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), -542, 298, -240, 41,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -327, 132, -109, 80,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -327, 174, -109, 25,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimCliffSlow_joint2[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 17), 0, 0, 0, 37,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 17), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 13), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), 90,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 0, 0, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 0, -31, 0, 0, 0, -159,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimCliffSlow_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, -30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 17), 0, 600,
	ftAnimSetValT(FT_ANIM_TRAY, 23), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 13), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimCliffSlow_joint5[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 12), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 0, 31,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 38), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 443, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 357, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 223, 26,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimCliffSlow_joint6[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 975, -95, -127, -17, -1402, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1217, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -272, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 648, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 629, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 585, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1196, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1131, 172,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 552, -135, -313, -127,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -256, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -527, -122, -827, 344,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -151, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -557, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -308, 52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -342, -48, 4, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -326, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 100, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -271, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -252, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -327, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -156, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 32, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -79, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -144, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -67, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -245, 0, -107, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -178, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -265, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -228, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -226, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -74, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -59, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -50, 9, -159, 19, -242, -15,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimCliffSlow_joint7[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -495, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -920, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -942, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -867, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -716, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -484, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimCliffSlow_joint8[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -804,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 70), 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTNessAnimCliffSlow_joint9[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 288,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -357, 27, 0, 8, 0, -8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 17), 178, 8, 288, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 0, -3, 0, 6, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 53), 300,
	ftAnimBlock(0, 13),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimCliffSlow_joint11[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 44, 0, 0, 54, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 0, -9, 0, 6, 0, -5, 0, 0, 54, -6, -18, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -368, -19, 309, 8, -239, -7,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 53), 0, 0, 0,
	ftAnimBlock(0, 13),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNessAnimCliffSlow_joint12[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -975, 154, 127, -7, -1402, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1123, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 189, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -500, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -458, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -377, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1092, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1028, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -359, 108, 228, 100, -980, 192,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 180, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 389, 91, -643, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 411, -10, -373, 247,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 257, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 101, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 253, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 246, -83,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 273, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 166, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 33, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -106, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 161, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 92, -48,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -159, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 24, -28, -318, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 59, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -295, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -221, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 50, -9, 159, -7, -242, -21,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimCliffSlow_joint13[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -508, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -703, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -907, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -940, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -867, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -716, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -635, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -531, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -367, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 183,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTNessAnimCliffSlow_joint14[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1206, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 402, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 1127, -6, 0, 1, 0, 2,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimCliffSlow_joint16[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 74, 69, 30,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 911, -937, 663,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 70), 75, 68, 30,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimCliffSlow_joint17[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, -15, -42, 2, -9, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 311, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -60, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 26, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 45, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 125, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 294, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 209, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 186, -22, -56, 3, 125, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimCliffSlow_joint19[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimCliffSlow_joint20[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1016, -5, 1959, 0, -897, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 937, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -837, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 25), 1899, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1897, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1904, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 927, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 948, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -841, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 983, 34, 1899, -4, -866, -24,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimCliffSlow_joint22[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -47, 17, 66, 3, 94, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTNessAnimCliffSlow_joint23[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 0, 42, 0, -13, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 29), 48, 4, 47, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 92, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 107, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 122, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 53, 4, 47, 0, 120, -1,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimCliffSlow_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimCliffSlow_joint26[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1824, -1, -1795, 0, 2097, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -1820, 0, 2134, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 1904, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1910, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1900, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1897, -2, -1819, 0, 2134, 0,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTNessAnimCliffSlow_joint27[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 56, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -50, -2, 29, 0, -59, -1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
