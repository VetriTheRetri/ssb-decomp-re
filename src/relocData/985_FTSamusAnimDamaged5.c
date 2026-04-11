/* AnimJoint data for relocData file 985 (FTSamusAnimDamaged5) */
/* 2336 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDamaged5_joint1[50];
extern u16 dFTSamusAnimDamaged5_joint2[32];
extern u16 dFTSamusAnimDamaged5_joint4[76];
extern u16 dFTSamusAnimDamaged5_joint5[118];
extern u16 dFTSamusAnimDamaged5_joint6[56];
extern u16 dFTSamusAnimDamaged5_joint7[52];
extern u16 dFTSamusAnimDamaged5_joint8[10];
extern u16 dFTSamusAnimDamaged5_joint9[16];
extern u16 dFTSamusAnimDamaged5_joint11[10];
extern u16 dFTSamusAnimDamaged5_joint12[108];
extern u16 dFTSamusAnimDamaged5_joint14[56];
extern u16 dFTSamusAnimDamaged5_joint15[126];
extern u16 dFTSamusAnimDamaged5_joint17[48];
extern u16 dFTSamusAnimDamaged5_joint19[118];
extern u16 dFTSamusAnimDamaged5_joint20[84];
extern u16 dFTSamusAnimDamaged5_joint22[162];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimDamaged5_joints[] = {
	(u32)dFTSamusAnimDamaged5_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimDamaged5_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimDamaged5_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimDamaged5_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimDamaged5_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimDamaged5_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimDamaged5_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimDamaged5_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimDamaged5_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimDamaged5_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimDamaged5_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimDamaged5_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimDamaged5_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimDamaged5_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimDamaged5_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimDamaged5_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF020F, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimDamaged5_joint1[50] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 1600, -903,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 109, 226, 1798, -596, -84, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 678, 38,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 1376, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 994, -3, 1360, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 438,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3216, 1,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -4, 1300, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimDamaged5_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 173, 89, 209, 160, 71, 75,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 269, 480, 226,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 543, 510, 465,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimDamaged5_joint4[76] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 268, -13, 0, -135, 0, -5, 0, -82, -25, 128, 93, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -41, -12, -31, 4, 48, 12, -24, -76,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -405, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 4, 31, 12, -15, 8, -33, -107, 9,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -423, -184,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 671, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -70, -83, -40, -49, 0, 108,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -70, -40, 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 240,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimDamaged5_joint5[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 476, -610, 114, -121, -231, 217,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -219, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -134, -252, -14, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -29, 132, -209, -197,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -447, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 130, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 136, 4, -215, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), 68, 11, -56, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -822, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -812, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -497, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 90, 76, -75, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 629, 98, -220, -101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -578, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -709, 221,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 680, 4, -315, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 424, -216, -402, 71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, 394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 205, -152, -259, 123, 79, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 118, -86, -156, 102, 269, 190,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDamaged5_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, -372,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1111, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1079, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -863, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -848, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -792, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -815, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -604, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -307, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -520, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -725, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1156, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1072, 84,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimDamaged5_joint7[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 701, -327, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 0, 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 25), -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -3, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -159, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 48, 158, 249, 177,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -222, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 610, 87, -131, -236,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimDamaged5_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimDamaged5_joint9[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 480, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 29), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimDamaged5_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDamaged5_joint12[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -47, -128, 154, -215, -446,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 213, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1188, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 10, -394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -730, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -710, 10, 200, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 338, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -708, 1, -1191, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), -866, -14, -1401, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -875, 72, -1392, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -478, 164, -888, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 339, -82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 6, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -391, 74, -814, 137,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -483, 128,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -288, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 101, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 126, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -357, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -124, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -275, 13, 111, -14, -68, 56,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimDamaged5_joint14[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, 246,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -615, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -516, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -449, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -482, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -441, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -116, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -524, -350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -817, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -998, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimDamaged5_joint15[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1521, -284, -1581, 116, 1218, -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1805, 127, -1465, -45, 851, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1266, 332, -1672, -5, 1179, 322,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1110, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, 97, 1495, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1477, 8, 1557, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1370, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1623, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1111, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1101, -15,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1354, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1261, -26,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1638, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1120, -71, -1661, -50, 1228, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1244, -202, -1740, 93, 1031, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1524, -168, -1474, 163, 718, -148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 808, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1574, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1413, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1533, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 925, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1576, -1, -1557, -23, 1042, 116,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimDamaged5_joint17[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 686,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1165, 356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1191, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 885, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 855, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1033, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1005, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 965, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1131, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1358, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimDamaged5_joint19[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 324, -28, 0, -41, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 177, 164,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 89, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 248, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -273, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -97, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -49, 61, 368, 96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 335, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 25, -32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 61, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -3, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 300, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 18, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -82, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -76, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 18, 48, 10, -91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -291, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 21, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 264, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 201, -61, -246, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 71, -53, -48, 103,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 14, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34, -37, 21, 7, 48, 97,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimDamaged5_joint20[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -178, 160, -43, -49, -199,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 43, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 160, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -319, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -147, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -111, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 56, 13, -118, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -39, -53, -646, -87,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 169, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 308, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 282, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 34, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -90, -25, -732, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1, 7, -636, 52,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 41, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 1, 38, -2, -592, 44,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimDamaged5_joint22[162] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, -438,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 413, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 443, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 435, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 761, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 838, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1292, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1236, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1164, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, -64,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFA46, 0xFF61, 0x0586, 0x013C, 0xF8E2, 0x0144, 0x2803, 0x0003, 0xF972, 0x0035, 0x200D, 0x0001, 0x06C3, 0x009B, 0xFA27, 0x009D, 0x200D, 0x0001, 0x06BD, 0xFFD6, 0xFA1E, 0xFFE4, 0x2805, 0x0003, 0x0622, 0xFFFF, 0x2009, 0x0001, 0xF9EE, 0x0024, 0x200B, 0x0001, 0xF9C7, 0x003B, 0xFA67, 0x003D, 0x2809, 0x0005, 0xFA72, 0x0001, 0x2803, 0x0006, 0xF97A, 0xFFF2, 0x0801, 0x0001, 0x2005, 0x0001, 0x0621, 0xFFFF, 0x2805, 0x0014, 0x0655, 0x0000, 0x0801, 0x0003, 0x2009, 0x0001, 0xFA73, 0x0001, 0x2809, 0x000D, 0xFA7A, 0x0000, 0x2003, 0x0001, 0xF96F, 0xFFF7, 0x2003, 0x000C, 0xF951, 0x000E, 0x200B, 0x0001, 0xF96E, 0x0023, 0xFA7A, 0xFF97, 0x2803, 0x0005, 0xF98B, 0xFFE8, 0x2009, 0x0002, 0xF8CF, 0xFF9C, 0x200D, 0x0001, 0x064F, 0xFFF5, 0xF8DE, 0x002B, 0x200D, 0x0002, 0x0625, 0xFFE5, 0xF98F, 0x0066, 0x200F, 0x0001, 0xF971, 0xFFE7, 0x0608, 0xFFE3, 0xF9F3, 0x0064, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
