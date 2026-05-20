/* AnimJoint data for relocData file 1586 (FTCaptainAnimCliffWait) */
/* 1168 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCliffWait_joint1[16];
extern u16 dFTCaptainAnimCliffWait_joint2[34];
extern u16 dFTCaptainAnimCliffWait_joint3[40];
extern u16 dFTCaptainAnimCliffWait_joint5[12];
extern u16 dFTCaptainAnimCliffWait_joint6[64];
extern u16 dFTCaptainAnimCliffWait_joint7[24];
extern u16 dFTCaptainAnimCliffWait_joint8[18];
extern u16 dFTCaptainAnimCliffWait_joint11[12];
extern u16 dFTCaptainAnimCliffWait_joint12[26];
extern u16 dFTCaptainAnimCliffWait_joint13[16];
extern u16 dFTCaptainAnimCliffWait_joint14[30];
extern u16 dFTCaptainAnimCliffWait_joint15[12];
extern u16 dFTCaptainAnimCliffWait_joint17[32];
extern u16 dFTCaptainAnimCliffWait_joint18[48];
extern u16 dFTCaptainAnimCliffWait_joint20[24];
extern u16 dFTCaptainAnimCliffWait_joint22[36];
extern u16 dFTCaptainAnimCliffWait_joint23[36];
extern u16 dFTCaptainAnimCliffWait_joint25[24];
extern u16 dFTCaptainAnimCliffWait_joint26[28];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTCaptainAnimCliffWait_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimCliffWait_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimCliffWait_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimCliffWait_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTCaptainAnimCliffWait_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTCaptainAnimCliffWait_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimCliffWait_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimCliffWait_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimCliffWait_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTCaptainAnimCliffWait_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimCliffWait_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimCliffWait_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimCliffWait_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTCaptainAnimCliffWait_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTCaptainAnimCliffWait_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTCaptainAnimCliffWait_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTCaptainAnimCliffWait_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTCaptainAnimCliffWait_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTCaptainAnimCliffWait_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTCaptainAnimCliffWait_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimCliffWait_joint1[16] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -2857, 29, -303, 11,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 56), -2857, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 56), -303,
	ftAnimLoop(0x6800, -30),
};

/* Joint 2 */
u16 dFTCaptainAnimCliffWait_joint2[34] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 544, 1582, -8, 0, -15,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 15), 240, 0, 1581, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 15), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 26), 1590, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 26), -240, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 544, 1582, -2, 0, -15,
	ftAnimLoop(0x6800, -66),
};

/* Joint 3 */
u16 dFTCaptainAnimCliffWait_joint3[40] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -241, 0, 357, 8,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), -241,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 56), 357, 8,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 15), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 26), -241,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -241, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimCliffWait_joint5[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 56),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimCliffWait_joint6[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 615, -16, -304, 21, 1542, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 41), 669, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 45), 1498, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 24), -276, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -285, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -338, 12,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 668, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 633, -15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1497, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1529, 11,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -323, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 616, -16, -302, 21, 1541, 11,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimCliffWait_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimLoop(0x6800, -46),
};

/* Joint 8 */
u16 dFTCaptainAnimCliffWait_joint8[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 453, 0, 277, 4, 293, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 56), 453, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 56), 277, 293,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimCliffWait_joint11[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -268, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 56), -268,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimCliffWait_joint12[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -456, 15, 441, 14, -86, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 55), -472, 13, 425, 14, -94, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -456, 15, 441, 15, -86, 7,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimCliffWait_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1070, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 55), -1075, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1070, 5,
	ftAnimLoop(0x6800, -30),
};

/* Joint 14 */
u16 dFTCaptainAnimCliffWait_joint14[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 12, 275, -2, 62, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 398, -1, 251, 0, 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 186, -2, 240, 0, 70, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 270, 275, 62,
	ftAnimLoop(0x6800, -58),
};

/* Joint 15 */
u16 dFTCaptainAnimCliffWait_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 56),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimCliffWait_joint17[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, -5, 0, -13, 0, -2,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 46), -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -110, -1, -129, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 34), -150, 0, -184, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 0, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -89, 0,
	ftAnimLoop(0x6800, -62),
};

/* Joint 18 */
u16 dFTCaptainAnimCliffWait_joint18[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -251, 0, 121, 0, -67, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 49), -263, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 55), -67, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 47), 136, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 133, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 122, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -260, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -252, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -251, 0, 121, 0, -67, 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimCliffWait_joint20[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 338, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 44), 316, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 319, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 337, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 338, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 22 */
u16 dFTCaptainAnimCliffWait_joint22[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, -7, 48, 1, 259, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 55), 48, 0, 259, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 41), 60, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 55, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 7, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 0, 48, 0, 259, 0,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimCliffWait_joint23[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -276, 2, 173, 1, -276, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 55), -276, 0, 172, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 53), -277, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -277, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -277, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -276, 0, 173, 0, -276, 1,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimCliffWait_joint25[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 341, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 46), 329, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 333, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 343, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 341, -1,
	ftAnimLoop(0x6800, -46),
};

/* Joint 26 */
u16 dFTCaptainAnimCliffWait_joint26[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 69, -6, 81, 0, 308, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 55), 69, 0, 81, 0, 308, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 69, 0, 81, 0, 308, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
	0x0000, 0x0000,
};
