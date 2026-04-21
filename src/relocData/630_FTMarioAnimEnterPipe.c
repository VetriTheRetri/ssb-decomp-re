/* AnimJoint data for relocData file 630 (FTMarioAnimEnterPipe) */
/* 1216 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimEnterPipe_joint1[22];
extern u16 dFTMarioAnimEnterPipe_joint2[26];
extern u16 dFTMarioAnimEnterPipe_joint4[22];
extern u16 dFTMarioAnimEnterPipe_joint5[26];
extern u16 dFTMarioAnimEnterPipe_joint6[22];
extern u16 dFTMarioAnimEnterPipe_joint7[8];
extern u16 dFTMarioAnimEnterPipe_joint8[32];
extern u16 dFTMarioAnimEnterPipe_joint10[20];
extern u16 dFTMarioAnimEnterPipe_joint11[64];
extern u16 dFTMarioAnimEnterPipe_joint12[32];
extern u16 dFTMarioAnimEnterPipe_joint13[8];
extern u16 dFTMarioAnimEnterPipe_joint15[16];
extern u16 dFTMarioAnimEnterPipe_joint16[54];
extern u16 dFTMarioAnimEnterPipe_joint18[22];
extern u16 dFTMarioAnimEnterPipe_joint20[50];
extern u16 dFTMarioAnimEnterPipe_joint21[52];
extern u16 dFTMarioAnimEnterPipe_joint23[20];
extern u16 dFTMarioAnimEnterPipe_joint24[64];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimEnterPipe_joints[] = {
	(u32)dFTMarioAnimEnterPipe_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimEnterPipe_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimEnterPipe_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimEnterPipe_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimEnterPipe_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimEnterPipe_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimEnterPipe_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimEnterPipe_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimEnterPipe_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimEnterPipe_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimEnterPipe_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimEnterPipe_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimEnterPipe_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimEnterPipe_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimEnterPipe_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimEnterPipe_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimEnterPipe_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimEnterPipe_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimEnterPipe_joint1[22] = {
	ftAnimSetVal(FT_ANIM_ROTY | FT_ANIM_TRAY), 223, 540,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 6), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 51), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 25), -1711,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimEnterPipe_joint2[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -71, -790, -95, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, -804, 0, 0, 540, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 51), 0, -804, 0, 0, 540, 0,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimEnterPipe_joint4[22] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 258, 110,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 134, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 51), 134, 0, 0,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimEnterPipe_joint5[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, -7, -1308, 2, -1880, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), -1300, 0, -1829, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 31), 1711,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1300, 0, -1829, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1711,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimEnterPipe_joint6[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 26), -353,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -353, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -353, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimEnterPipe_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimEnterPipe_joint8[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -4, 176,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -102, -25, 293, 1, 93, 23,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), -102, 293, 93,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimEnterPipe_joint10[20] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 778, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 0, 778, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimEnterPipe_joint11[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, -77, 551, -74, 65, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 126, -71, -142, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 43, -41, -268, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 270,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 43, 0, 270, 0, -268, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimEnterPipe_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -453, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -183, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -183, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -183, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -183, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -183, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimEnterPipe_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimEnterPipe_joint15[16] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, -178, -804,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 2412, -178, -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 1960, -177, -738,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimEnterPipe_joint16[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, -63, -230, -12, 45, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -361, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -257, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -218, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -219, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -219, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -358, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -358, 0,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -257, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -257, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -358, 0, -257, 0, -219, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimEnterPipe_joint18[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 453,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 453, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimEnterPipe_joint20[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, 20, -11, 7, -156, 6,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 11), -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -80, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -176, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -179, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -181, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -97, 0, -80, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 19), -97, 0, -80, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -97, 0, -80, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -181,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimEnterPipe_joint21[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1808, -15, 1421, -8, 1644, -63,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), 1348,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), 1352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1828, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1953, 62,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 2), 1953,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1348,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 23), 1348,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1953,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 23), 1953,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1352, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), 1352,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1352, 1348,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimEnterPipe_joint23[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 400,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 400,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), 400,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 400,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimEnterPipe_joint24[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, -1, -93, 38, -212, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 45, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 95, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 117, -17,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 2), 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -16, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -16, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 60,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 23), 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 22), 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -16, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 19), -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, 60, 0,
	ftAnimEnd(),
};
