/* AnimJoint data for relocData file 1049 (FTSamusAnimItemThrowDash) */
/* 2384 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimItemThrowDash_joint1[20];
extern u16 dFTSamusAnimItemThrowDash_joint2[22];
extern u16 dFTSamusAnimItemThrowDash_joint3[42];
extern u16 dFTSamusAnimItemThrowDash_joint5[76];
extern u16 dFTSamusAnimItemThrowDash_joint6[170];
extern u16 dFTSamusAnimItemThrowDash_joint7[72];
extern u16 dFTSamusAnimItemThrowDash_joint8[54];
extern u16 dFTSamusAnimItemThrowDash_joint9[10];
extern u16 dFTSamusAnimItemThrowDash_joint12[44];
extern u16 dFTSamusAnimItemThrowDash_joint13[134];
extern u16 dFTSamusAnimItemThrowDash_joint15[48];
extern u16 dFTSamusAnimItemThrowDash_joint16[104];
extern u16 dFTSamusAnimItemThrowDash_joint18[36];
extern u16 dFTSamusAnimItemThrowDash_joint20[90];
extern u16 dFTSamusAnimItemThrowDash_joint21[80];
extern u16 dFTSamusAnimItemThrowDash_joint23[142];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimItemThrowDash_joints[] = {
	(u32)dFTSamusAnimItemThrowDash_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimItemThrowDash_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimItemThrowDash_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimItemThrowDash_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimItemThrowDash_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimItemThrowDash_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimItemThrowDash_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimItemThrowDash_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimItemThrowDash_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimItemThrowDash_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimItemThrowDash_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimItemThrowDash_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimItemThrowDash_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimItemThrowDash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimItemThrowDash_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimItemThrowDash_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF0221, /* [23] END */
};

/* Joint 1 */
u16 dFTSamusAnimItemThrowDash_joint1[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 0, 10,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 2529,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 18), 3759, 525,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 4264, 296,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 14), 4547,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimItemThrowDash_joint2[22] = {
	ftAnimSetVal(FT_ANIM_TRAY), 1503,
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 8), 1503,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 11), 1503,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 7), 842,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 7), 1116,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 7), 1600,
	ftAnimSetValBlock(FT_ANIM_TRAY), 1600,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimItemThrowDash_joint3[42] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 242,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 26), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 178,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 223,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 11), 223,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 318,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 318,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimItemThrowDash_joint5[76] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 92, 230, -11, 35, -5, 24,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 159, 468, 78, 83, 32, 9,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 105, -462, -133, -36, 26, 12,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 60, -115, -33, -9, 12, 25,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 46, 0, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -79, 181, -2, 20, 15, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 257, 111, 76, 23, -41, 81,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -102, 153, -7, 23, 27, -19,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, 0, 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimItemThrowDash_joint6[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1476, -762, -1307, -250, 2184, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 713, -700, -1557, 66, 1954, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 74, -260, -1173, 184, 2392, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 193, -111, -1187, 447, 2203, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -147, -163, -277, 628, 2172, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 2148, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -119, 13, 254, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -107, 19, 330, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -335, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 142, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 206, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 952, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 962, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 987, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -385, -126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -925, -159,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2152, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2081, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1108, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1600, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1082, -149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1486, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2104, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2225, -3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1584, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1805, 114,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2212, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1453, -75,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1916, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2075, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1567, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1647, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2085, 10, -1722, -75, 1382, -70,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimItemThrowDash_joint7[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -999, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -891, 499,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -65, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -341, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -603, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -888, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -821, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1164, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1095, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -875, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -745, 130,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimItemThrowDash_joint8[54] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), -30,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 336, 73, -137, 110,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -1018,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 294, -19, 443, 8,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -134,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -13, 0, -20,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 15), -30,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 213,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 213,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 701,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimItemThrowDash_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimItemThrowDash_joint12[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 479, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 51, 28, -458, 112, -65, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 113, -8, 450, 76, 145, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -7, 0, -30, 0, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTSamusAnimItemThrowDash_joint13[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 145, 70, 315, 183, -623, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 215, 135, 498, 51, -327, 416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 417, 41, 418, -84, 209, 348,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 376, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 254, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 191, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 173, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -67, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 379, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 476, -39,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 242, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 324, 18,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 421, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -391, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -157, -91, 335, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -521, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 222, 9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -404, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -197, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -518, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -143, 98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 230, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -74, -59,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -41, 100, -198, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 99, -127, -52, -216, -17,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimItemThrowDash_joint15[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1113, -61,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1196, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1043, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -708, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -717, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1005, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -954, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -808, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -760, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -649, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -592, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimItemThrowDash_joint16[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1576, 11, 1689, -6, 672, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1777, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1559, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 771, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 937, 156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1210, -34,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1778, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1596, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1170, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 637, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1543, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1522, -5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 620, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 639, 45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1603, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1634, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 715, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1123, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1526, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1523, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, 2, 1635, 1, 1218, 94,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimItemThrowDash_joint18[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 905, 41,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1077, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1037, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 1228, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1224, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 666, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 582, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -103,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimItemThrowDash_joint20[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1579, 21, -1610, 3, -1586, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1407, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -1516, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1787, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1707, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1834, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1346, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1565, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1579, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1508, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1858, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1854, 52,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1518, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1578, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1521, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1531, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1800, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1655, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1534, 3, -1579, -1, -1650, 5,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimItemThrowDash_joint21[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, -10, 54, 3, 0, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -9, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), 91, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 178, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 196, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -422, -16,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -17, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 33, 25,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -437, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -367, 57,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 104, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 161, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 60, 30, -308, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 176, 47, -119, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 50, 160, 0, -49, 69,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimItemThrowDash_joint23[142] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 508, 155,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 664, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 621, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 539, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 473, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 970, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 965, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 519, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -77,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0001, 0x0027, 0x0006, 0x0004, 0x0135, 0xFFAC, 0x2803, 0x0011, 0x0006, 0x0000, 0x2805, 0x0020, 0x00A7, 0x000A, 0x2009, 0x0002, 0x0000, 0xFF21, 0x2009, 0x0001, 0xFF21, 0xFF5F, 0x2009, 0x0006, 0xFF73, 0xFFFA, 0x2009, 0x0001, 0xFF6A, 0xFFF5, 0x2809, 0x000D, 0xFDF2, 0xFFC7, 0x0801, 0x0007, 0x2003, 0x0001, 0x0007, 0x0000, 0x2803, 0x0007, 0x0066, 0x0054, 0x0801, 0x0005, 0x2009, 0x0001, 0xFDBE, 0xFFD4, 0x2809, 0x000E, 0xFEFF, 0x0019, 0x0801, 0x0001, 0x2003, 0x0001, 0x00CB, 0x0033, 0x2003, 0x0005, 0x0103, 0x0012, 0x2003, 0x0001, 0x0117, 0x0012, 0x2803, 0x0007, 0x00B1, 0xFFDE, 0x2005, 0x0001, 0x00B1, 0x0008, 0x2805, 0x0006, 0x00C4, 0xFFFF, 0x0801, 0x0005, 0x2009, 0x0001, 0xFF17, 0x0016, 0x200F, 0x0001, 0x008E, 0xFFDE, 0x00C1, 0xFFFE, 0xFF2B, 0x0014, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
