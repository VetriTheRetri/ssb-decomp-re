/* AnimJoint data for relocData file 577 (FTMarioAnimCliffSlow) */
/* 1776 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCliffSlow_joint1[26];
extern u16 dFTMarioAnimCliffSlow_joint2[48];
extern u16 dFTMarioAnimCliffSlow_joint3[22];
extern u16 dFTMarioAnimCliffSlow_joint5[40];
extern u16 dFTMarioAnimCliffSlow_joint6[136];
extern u16 dFTMarioAnimCliffSlow_joint7[60];
extern u16 dFTMarioAnimCliffSlow_joint8[16];
extern u16 dFTMarioAnimCliffSlow_joint9[42];
extern u16 dFTMarioAnimCliffSlow_joint11[40];
extern u16 dFTMarioAnimCliffSlow_joint12[134];
extern u16 dFTMarioAnimCliffSlow_joint13[60];
extern u16 dFTMarioAnimCliffSlow_joint14[16];
extern u16 dFTMarioAnimCliffSlow_joint16[10];
extern u16 dFTMarioAnimCliffSlow_joint17[46];
extern u16 dFTMarioAnimCliffSlow_joint19[14];
extern u16 dFTMarioAnimCliffSlow_joint21[44];
extern u16 dFTMarioAnimCliffSlow_joint22[34];
extern u16 dFTMarioAnimCliffSlow_joint24[16];
extern u16 dFTMarioAnimCliffSlow_joint25[34];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimCliffSlow_joints[] = {
	(u32)dFTMarioAnimCliffSlow_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimCliffSlow_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimCliffSlow_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimCliffSlow_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimCliffSlow_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimCliffSlow_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimCliffSlow_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimCliffSlow_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimCliffSlow_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimCliffSlow_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimCliffSlow_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimCliffSlow_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimCliffSlow_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimCliffSlow_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimCliffSlow_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimCliffSlow_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimCliffSlow_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimCliffSlow_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTMarioAnimCliffSlow_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimCliffSlow_joint1[26] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1260, 150, -240, 303,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), -542, 298, -240, 41,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -327, 132, -109, 80,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -327, 174, -109, 25,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimCliffSlow_joint2[48] = {
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
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 0, -30, 0, 0, 0, -160,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTMarioAnimCliffSlow_joint3[22] = {
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
u16 dFTMarioAnimCliffSlow_joint5[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 12), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 0, 31,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 38), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 443, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 357, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 223, 26,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimCliffSlow_joint6[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 976, -96, -131, -18, -1404, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -276, -31, -1169, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 647, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 629, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 584, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 553, -134, -309, -125, -1133, 171,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -256, -160, -151, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -527, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -557, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -271, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -342, -48, 4, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -326, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 32, -81,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -252, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -178, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -327, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -156, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -62, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -203, -79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -144, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -71, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -266, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -222, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -71, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -61, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -49, 12, -160, 18, -247, -24,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimCliffSlow_joint7[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -495, -355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -920, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -942, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -867, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -716, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -484, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -205, 242,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimCliffSlow_joint8[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -804,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 70), -625, 8,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTMarioAnimCliffSlow_joint9[42] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -357, 27, 0, 8, 0, -8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 288,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ, 17), 178, 8, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 0, 0, 0, 0, 0, 3,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 53), 0, 0, 0, 0,
	ftAnimBlock(0, 13),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimCliffSlow_joint11[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 44, 0, 0, 54, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 0, -9, 0, 6, 0, -5, 0, 0, 54, 0, -18, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -368, -19, 309, 8, -239, -7,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 53), 0, 0, 54, 0, -17, 0,
	ftAnimBlock(0, 13),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimCliffSlow_joint12[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2584, 154, 1477, 11, -3012, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2704, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1416, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -2066, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2037, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1985, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2673, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2585, 190,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1966, 107, 1377, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1196, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1428, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2252, 301,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1575, -81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1240, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1403, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1355, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1361, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1446, -44, -1670, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1515, -48, -1767, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1584, -28, -1927, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1858, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1548, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1418, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1441, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1838, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1830, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1557, -8, 1448, 7, -1851, -21,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimCliffSlow_joint13[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -508, -347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -703, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -948, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -968, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -716, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -698, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -367, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 183,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTMarioAnimCliffSlow_joint14[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 1206,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), 402, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 1127, 4,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimCliffSlow_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimCliffSlow_joint17[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, -15, -42, 2, -9, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 295, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -59, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 45, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 66, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 121, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 277, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 209, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 186, -23, -56, 2, 125, 3,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimCliffSlow_joint19[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimCliffSlow_joint21[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -592, -5, -350, 0, 711, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), 769, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 26), -670, -7, -288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -676, -3, -290, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -662, 26, -295, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 765, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -625, 37, -291, 3, 742, -23,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimCliffSlow_joint22[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 0, 42, 0, -13, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 29), 49, 4, 47, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 107, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 120, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 126, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 53, 4, 47, 0, 120, -5,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimCliffSlow_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTMarioAnimCliffSlow_joint25[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1824, 0, -1795, 0, 2097, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -1820, 0, 2134, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 1904, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1907, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1897, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1897, 0, -1819, 0, 2134, 0,
	ftAnimEnd(),
};
