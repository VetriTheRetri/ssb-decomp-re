/* AnimJoint data for relocData file 642 (FTFoxAnimEggLay) */
/* 2336 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimEggLay_joint1[22];
extern u16 dFTFoxAnimEggLay_joint2[72];
extern u16 dFTFoxAnimEggLay_joint4[94];
extern u16 dFTFoxAnimEggLay_joint5[104];
extern u16 dFTFoxAnimEggLay_joint7[48];
extern u16 dFTFoxAnimEggLay_joint10[82];
extern u16 dFTFoxAnimEggLay_joint11[92];
extern u16 dFTFoxAnimEggLay_joint13[48];
extern u16 dFTFoxAnimEggLay_joint15[12];
extern u16 dFTFoxAnimEggLay_joint16[84];
extern u16 dFTFoxAnimEggLay_joint18[40];
extern u16 dFTFoxAnimEggLay_joint20[96];
extern u16 dFTFoxAnimEggLay_joint21[82];
extern u16 dFTFoxAnimEggLay_joint23[40];
extern u16 dFTFoxAnimEggLay_joint24[100];
extern u16 dFTFoxAnimEggLay_joint25[100];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimEggLay_joints[] = {
	(u32)dFTFoxAnimEggLay_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimEggLay_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimEggLay_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimEggLay_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimEggLay_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTFoxAnimEggLay_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimEggLay_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimEggLay_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTFoxAnimEggLay_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimEggLay_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimEggLay_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimEggLay_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimEggLay_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimEggLay_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimEggLay_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimEggLay_joint25, /* [24] joint 25 */
	0xFFFF0232, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimEggLay_joint1[22] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAZ), 48, -20,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0, 0, 912,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 69), 48, -20,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 48, -20,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimEggLay_joint2[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY), -141, 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), -338, 4, 0, 15, 0, 28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -152, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), -287, 24, -36, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 17), -338, -2, 0, -17, 0, -31,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 18), -129,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 17), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), -24, -36, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -387, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), -152, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 18), -338, 4, 0, 18, 0, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 18), -141, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -141, -338, 0, 0, 0,
	ftAnimLoop(0x6800, -142),
};

/* Joint 4 */
u16 dFTFoxAnimEggLay_joint4[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 0, 156, 8, 81, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 112, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 248, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 315, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 319, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 78, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 208, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 313, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 103, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 309, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 304, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 53, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 81, 3,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 81, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 309, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), 156, 6,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 156, 81,
	ftAnimLoop(0x6800, -186),
};

/* Joint 5 */
u16 dFTFoxAnimEggLay_joint5[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, -1, -1442, -8, -1349, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -1524, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 42), 1470, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -1203, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1198, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1232, -1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1519, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -1373, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1233, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -1355, -12,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1471, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 1517, -1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1368, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1367, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1369, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1430, -11,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1515, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1498, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1359, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1442, -6, -1349, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, -1442, -1349,
	ftAnimLoop(0x6800, -206),
};

/* Joint 7 */
u16 dFTFoxAnimEggLay_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -668, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -658, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -546, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -434, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -507, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -558, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -558,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimEggLay_joint10[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 0, 136, -12, -72, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -23, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -115, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -76, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -47, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 113, 9,
	ftAnimBlock(0, 11),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -110, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 265, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -104, -1,
	ftAnimBlock(0, 14),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -72, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 136, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -113, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 136, -72,
	ftAnimLoop(0x6800, -160),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimEggLay_joint11[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, -3, 271, -1, 336, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 149, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 17, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 24), 316, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 321, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 335, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 138, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 81, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 11, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -2, 8,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 335, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 271, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 95, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 338, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 134, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 132, 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, 0, 271, 0, 336, 0,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimEggLay_joint13[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -600, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -602, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -579, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -578, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -596, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -600, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -613, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -611, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -594, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 0,
	ftAnimLoop(0x6800, -94),
};

/* Joint 15 */
u16 dFTFoxAnimEggLay_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 70),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimEggLay_joint16[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, -3, -223, 1, -26, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -48, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -421, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 26), -230, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -229, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -282, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -46, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), -43, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -421, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -323, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -319, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -405, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -283, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -223, 1,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -40, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, 0, -223, 0, -26, 0,
	ftAnimLoop(0x6800, -164),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimEggLay_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 488, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 482, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 366, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 372, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 427, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 419, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 354, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, 0,
	ftAnimLoop(0x6800, -78),
};

/* Joint 20 */
u16 dFTFoxAnimEggLay_joint20[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 19, 3, 125, 6, -56, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 152, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 39, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -137, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -131, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -53, -2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 148, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 48, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 37, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 21, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -55, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -51, 1,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 21, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 19, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 52, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 125, 3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -50, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -56, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, 0, 125, 0, -56, 0,
	ftAnimLoop(0x6800, -188),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimEggLay_joint21[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, -1, 137, 0, 134, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 331, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), 121, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 25), 174, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 170, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 153, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 335, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), 359, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 119, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 106, 3,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 154, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 137, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 110, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 134, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 359, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 355, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 137, 134,
	ftAnimLoop(0x6800, -162),
};

/* Joint 23 */
u16 dFTFoxAnimEggLay_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 429, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 422, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 362, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 372, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 455, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 332, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 332,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimEggLay_joint24[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1651, 4, -1505, -5, -1835, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -1875, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -1552, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 1633, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1629, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1638, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1871, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1862, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1547, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), -1469, -4,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1640, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 1633, 2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1868, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -1889, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1883, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1835, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1474, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1505, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1635, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1651, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1651, -1505, -1835,
	ftAnimLoop(0x6800, -198),
};

/* Joint 25 */
u16 dFTFoxAnimEggLay_joint25[100] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 11, 219, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 311, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 59, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -107, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), 170, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -7, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -89, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 219, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 0, 11,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, 219,
	ftAnimLoop(0x6800, -110),
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -178,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 40), 178,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), 268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -268, 0,
	ftAnimBlock(0, 11),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), -178,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 178, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -178, 0,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 40), 178,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -86),
};
