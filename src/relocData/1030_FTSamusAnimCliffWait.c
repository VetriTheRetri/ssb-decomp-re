/* AnimJoint data for relocData file 1030 (FTSamusAnimCliffWait) */
/* 1120 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCliffWait_joint1[16];
extern u16 dFTSamusAnimCliffWait_joint2[42];
extern u16 dFTSamusAnimCliffWait_joint3[30];
extern u16 dFTSamusAnimCliffWait_joint5[18];
extern u16 dFTSamusAnimCliffWait_joint6[58];
extern u16 dFTSamusAnimCliffWait_joint7[36];
extern u16 dFTSamusAnimCliffWait_joint8[14];
extern u16 dFTSamusAnimCliffWait_joint9[18];
extern u16 dFTSamusAnimCliffWait_joint12[12];
extern u16 dFTSamusAnimCliffWait_joint13[58];
extern u16 dFTSamusAnimCliffWait_joint15[20];
extern u16 dFTSamusAnimCliffWait_joint16[46];
extern u16 dFTSamusAnimCliffWait_joint18[28];
extern u16 dFTSamusAnimCliffWait_joint20[36];
extern u16 dFTSamusAnimCliffWait_joint21[26];
extern u16 dFTSamusAnimCliffWait_joint23[54];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimCliffWait_joints[] = {
	(u32)dFTSamusAnimCliffWait_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimCliffWait_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimCliffWait_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimCliffWait_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimCliffWait_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimCliffWait_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimCliffWait_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimCliffWait_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimCliffWait_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimCliffWait_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimCliffWait_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimCliffWait_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimCliffWait_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimCliffWait_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimCliffWait_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimCliffWait_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF010B, /* [23] END */
};

/* Joint 1 */
u16 dFTSamusAnimCliffWait_joint1[16] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -2907, -8, -303, 11,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 56), -2907, -303,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAX, 56), 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 2 */
u16 dFTSamusAnimCliffWait_joint2[42] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 208, 1582, -8, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 15), 240, 0, 1581, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 15), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 26), 1590, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 56), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 26), -240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 15), 0, 208, 1582, -2,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 15), 92, -53, 1581, 2,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -80),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimCliffWait_joint3[30] = {
	ftAnimSetValAfter(FT_ANIM_ROTY), -241,
	ftAnimSetValRate(FT_ANIM_ROTZ), 357, 8,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 56), 357, 8,
	ftAnimSetValAfterT(FT_ANIM_ROTY, 71), -241,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 15), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 56), 0,
	ftAnimBlock(0, 41),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 56), 357, 8,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimCliffWait_joint5[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 56), 0, 0, 0, 0, 0, 0,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimCliffWait_joint6[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -936, 0, -1281, -2, -69, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), -886, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), -116, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 30), -1250, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1241, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -1265, -7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -883, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -935, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -116, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -67, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -935, 0, -1275, -10, -69, -1,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimCliffWait_joint7[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 56), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 16), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -31, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -13, 18,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimCliffWait_joint8[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 453, -6, 277, 4, 293, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 56), 453, 277, 293,
	ftAnimLoop(0x6800, -26),
};

/* Joint 9 */
u16 dFTSamusAnimCliffWait_joint9[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 56), 67, -17, -1474, 98, 60, -42,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimCliffWait_joint12[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 56), 0, 0, 0,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimCliffWait_joint13[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -434, 4, 461, 3, -70, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 38), -77, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), 407, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 35), -465, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -472, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -438, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -78, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -67, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 405, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 457, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -434, 4, 461, 3, -70, -3,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimCliffWait_joint15[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1068, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 56), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 55), -1074, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1068, 6,
	ftAnimLoop(0x6800, -38),
};

/* Joint 16 */
u16 dFTSamusAnimCliffWait_joint16[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -251, 0, 121, 0, -67, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 49), -263, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 55), -67, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 48), 133, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 131, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 122, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -260, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -252, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -251, 0, 121, 0, -67, 0,
	ftAnimLoop(0x6800, -88),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimCliffWait_joint18[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 338, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 56), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 44), 315, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 319, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 337, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 338, 0,
	ftAnimLoop(0x6800, -54),
};

/* Joint 20 */
u16 dFTSamusAnimCliffWait_joint20[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 6, 0, 48, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 259,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 55), 48, 0, 259, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 41), 80, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 73, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 7, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, 0, 48, 0, 259, 0,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimCliffWait_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -276, 0, 173, 0, -276, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 55), -276, 0, 173, 0, -276, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -276, 0, 173, 0, -276, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimCliffWait_joint23[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 341, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 56), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 46), 326, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 330, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 342, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 341, -1,
	ftAnimLoop(0x6800, -54),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 68, 0, 81, 0, 308, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 55), 68, 0, 81, 0, 308, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 68, 0, 81, 0, 308, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};
