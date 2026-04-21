/* AnimJoint data for relocData file 516 (FTMarioAnimCrouchIdle) */
/* 3264 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCrouchIdle_joint1[20];
extern u16 dFTMarioAnimCrouchIdle_joint2[54];
extern u16 dFTMarioAnimCrouchIdle_joint4[50];
extern u16 dFTMarioAnimCrouchIdle_joint5[26];
extern u16 dFTMarioAnimCrouchIdle_joint6[16];
extern u16 dFTMarioAnimCrouchIdle_joint7[36];
extern u16 dFTMarioAnimCrouchIdle_joint8[20];
extern u16 dFTMarioAnimCrouchIdle_joint10[48];
extern u16 dFTMarioAnimCrouchIdle_joint11[8];
extern u16 dFTMarioAnimCrouchIdle_joint12[8];
extern u16 dFTMarioAnimCrouchIdle_joint13[36];
extern u16 dFTMarioAnimCrouchIdle_joint15[12];
extern u16 dFTMarioAnimCrouchIdle_joint16[262];
extern u16 dFTMarioAnimCrouchIdle_joint18[78];
extern u16 dFTMarioAnimCrouchIdle_joint20[240];
extern u16 dFTMarioAnimCrouchIdle_joint21[300];
extern u16 dFTMarioAnimCrouchIdle_joint23[74];
extern u16 dFTMarioAnimCrouchIdle_joint24[296];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimCrouchIdle_joints[] = {
	(u32)dFTMarioAnimCrouchIdle_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimCrouchIdle_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimCrouchIdle_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimCrouchIdle_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimCrouchIdle_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimCrouchIdle_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimCrouchIdle_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimCrouchIdle_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimCrouchIdle_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimCrouchIdle_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimCrouchIdle_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimCrouchIdle_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimCrouchIdle_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimCrouchIdle_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimCrouchIdle_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimCrouchIdle_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimCrouchIdle_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimCrouchIdle_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimCrouchIdle_joint1[20] = {
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 140, 223, -16,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 132), 140, 223, -16,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 223, 0,
	ftAnimBlock(0, 131),
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimCrouchIdle_joint2[54] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -568, -734, 161,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -568, -734, 161,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 21),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 565, -580, -1146,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 565, -580, -1146,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -568, -734, 161,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -627, -297, 173,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -627, -297, 173,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -568, -734, 161,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), -568, -734, 161,
	ftAnimLoop(0x6800, -106),
};

/* Joint 4 */
u16 dFTMarioAnimCrouchIdle_joint4[50] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 863, 71, 73,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 863, 71, 73,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 21),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 830, 89, -137,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 830, 89, -137,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 886, 41, 284,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 886, 41, 284,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 863, 71, 73,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 863, 71, 73,
	ftAnimLoop(0x6800, -96),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimCrouchIdle_joint5[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 251, 0, -465, 0, -1275, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 130), 251, 0, -465, 0, -1275, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 251, 0, -465, 0, -1275, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimCrouchIdle_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -216, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 130), -216, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 7 */
u16 dFTMarioAnimCrouchIdle_joint7[36] = {
	ftAnimSetValBlock(FT_ANIM_ROTX), -134,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX, 23), -134,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 1,
	ftAnimBlock(0, 22),
	ftAnimSetValBlockT(FT_ANIM_ROTX, 10), -357,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 15), -357,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), -134,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), -223,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 22), -223,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 10), -134,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 39), -134,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimCrouchIdle_joint8[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, 0, -6,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 132), 187, 0, -6,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 131),
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimCrouchIdle_joint10[48] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 21),
	ftAnimSetValT(FT_ANIM_ROTZ, 70), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -117, -266,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -117, -266,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -96, 268,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), -96, 268,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 0, 0, 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimCrouchIdle_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -278, 469, -1278,
	ftAnimBlock(0, 131),
	ftAnimLoop(0x6800, -14),
};

/* Joint 12 */
u16 dFTMarioAnimCrouchIdle_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -217,
	ftAnimBlock(0, 131),
	ftAnimLoop(0x6800, -14),
};

/* Joint 13 */
u16 dFTMarioAnimCrouchIdle_joint13[36] = {
	ftAnimSetValBlock(FT_ANIM_ROTX), 134,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX, 23), 134,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 1,
	ftAnimBlock(0, 22),
	ftAnimSetValBlockT(FT_ANIM_ROTX, 10), 357,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 15), 357,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 134,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 223,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 22), 223,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 10), 134,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 39), 134,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimCrouchIdle_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 131),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimCrouchIdle_joint16[262] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 278, -188, -652,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 278, -188, -652,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 278, 8, -188, -11, -652, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 546, 120, -776, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -207, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -173, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -119, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 674, 118, -707, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 862, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -197, -104, -646, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -329, -64, -646, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -762, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 877, 14, -325, 4,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), 905,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 16), -315,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -762,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 13), -762,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 905,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 905, -40, -315, 52, -762, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 719, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -888, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -210, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -160, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -223, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 605, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 291, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -871, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -652, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -226, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -40, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 278, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 181, -93, -638, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -539, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 91, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -190, -55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 76, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -242, -26, -518, 10,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 2), -242,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), -518,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 76,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 18), 76,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 17), -242,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), -518,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, 16, 76, -18, -518, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -91, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -652, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -31, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -65, -32,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -41, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 208, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 278, 35,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 2), 278,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -652,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -188, -652,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 38), 278,
	ftAnimLoop(0x6800, -522),
};

/* Joint 18 */
u16 dFTMarioAnimCrouchIdle_joint18[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 1269,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 1269, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1271, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1253, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1221, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 1221,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), 1221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1221, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1282, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1285, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1169, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1132, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1049, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1049,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 1049,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1049, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1161, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1186, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 1269,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 38), 1269,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimCrouchIdle_joint20[240] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1376, 1496, 1419,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 1376, 1496, 1419,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1376, 27, 1496, -29, 1419, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1483, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1464, 11, 1387, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1455, -40, 1349, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1172, -67, 1366, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1421, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1301, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1130, -13, 1372, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1160, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1289, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1308, 7,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 16), 1325,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1177, 8,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 7), 1177,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1289,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 13), 1289,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 1177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1177, 37, 1289, -16, 1325, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1467, 72, 1536, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1232, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1244, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1496, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1511, 19, 1544, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1427, -48, 1446, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1376, 0, 1419, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1476, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1425, 45, 1515, 18,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), 1545,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1468, 39,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 1600,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1504, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 1617,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 18), 1617,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1600,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1600, -2,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1545,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1536, -5,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1617, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1521, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1595, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1427, -46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1530, -7,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 8), 1496,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1502, -18,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), 1419,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1376, -25,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 2), 1376,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 39), 1419,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 38), 1376, 1496,
	ftAnimLoop(0x6800, -478),
};

/* Joint 21 */
u16 dFTMarioAnimCrouchIdle_joint21[300] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1418, 0, 1438, 0, 893, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 1418, 0, 1438, 0, 893, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1418, 7, 1438, -15, 893, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1354, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1498, 81, 1071, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1598, 102, 1174, 95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1342, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1868, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1375, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1532, 32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1343, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1313, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1860, -8, 1547, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1839, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1588, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1588,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 12), 1588,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1313, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1588, -41, 1313, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1401, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1247, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1838, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1706, -98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1296, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1153, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1588, -117, 1119, -138,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1403, -41, 848, -103,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1168, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1226, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1390, -86, 764, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 698, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1229, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1091, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 710, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1248, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1164, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 743, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 824, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 624, -43, 1103, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 824, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 2), 1103,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 624,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), 624, 824,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 17), 1103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 624, 46, 1103, 18, 824, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 914, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1275, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 718, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 804, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1342, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 941, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 893, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1322, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1438, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1418, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 1418, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1438,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 893, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 38), 1438, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1418,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 37), 1418, 0, 893, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1438, 0, 893, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1418,
	ftAnimLoop(0x6800, -598),
};

/* Joint 23 */
u16 dFTMarioAnimCrouchIdle_joint23[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 1298,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 1298, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1294, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 1120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 1120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1120, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1295, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1298, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1302, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1279, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1215, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1215, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 1215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1215, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1298, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1310, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 1298,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 38), 1298,
	ftAnimLoop(0x6800, -146),
};

/* Joint 24 */
u16 dFTMarioAnimCrouchIdle_joint24[296] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 45, 0, -46, 0, -148, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 45, 0, -46, 0, -148, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 45, 11, -46, 5, -148, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -20, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 67, -9, -229, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 50, -22, -250, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -48, -39, -199, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -90, -15, -29, 2, -155, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -66, 14, -157, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -50, 8, -157, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -50, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -157, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 20, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 20, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -50, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -41, -1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, -13, -157, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -178, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -223, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -238, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -133, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -44, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -116, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -201, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -219, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -171, 11, -82, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -150, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -94, 89, -247, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -210, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 7, 108,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 473, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -201, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -326, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -169, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -129, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 473, 0, -129, 0, -326, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -326, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -129, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 18), 473,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 473, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 302, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -325, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -173, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -125, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -46, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 256, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 101, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 45, -27, -148, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 45, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -148, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -46, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 37), -46, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), 45, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -148, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), -148, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 45, 0, -46, 0, -148, 0,
	ftAnimLoop(0x6800, -582),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
