/* AnimJoint data for relocData file 631 (FTMarioAnimExitPipe) */
/* 1472 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimExitPipe_joint1[36];
extern u16 dFTMarioAnimExitPipe_joint2[46];
extern u16 dFTMarioAnimExitPipe_joint4[34];
extern u16 dFTMarioAnimExitPipe_joint5[68];
extern u16 dFTMarioAnimExitPipe_joint6[36];
extern u16 dFTMarioAnimExitPipe_joint7[8];
extern u16 dFTMarioAnimExitPipe_joint8[50];
extern u16 dFTMarioAnimExitPipe_joint10[24];
extern u16 dFTMarioAnimExitPipe_joint11[68];
extern u16 dFTMarioAnimExitPipe_joint12[32];
extern u16 dFTMarioAnimExitPipe_joint13[8];
extern u16 dFTMarioAnimExitPipe_joint15[18];
extern u16 dFTMarioAnimExitPipe_joint16[44];
extern u16 dFTMarioAnimExitPipe_joint18[22];
extern u16 dFTMarioAnimExitPipe_joint20[52];
extern u16 dFTMarioAnimExitPipe_joint21[56];
extern u16 dFTMarioAnimExitPipe_joint23[22];
extern u16 dFTMarioAnimExitPipe_joint24[64];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimExitPipe_joints[] = {
	(AObjEvent32 *)dFTMarioAnimExitPipe_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimExitPipe_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimExitPipe_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimExitPipe_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimExitPipe_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimExitPipe_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimExitPipe_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimExitPipe_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimExitPipe_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimExitPipe_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimExitPipe_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimExitPipe_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimExitPipe_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimExitPipe_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimExitPipe_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimExitPipe_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimExitPipe_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimExitPipe_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimExitPipe_joint1[36] = {
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 51), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 26,
	ftAnimSetVal(FT_ANIM_TRAY), -1711,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 25), 0,
	ftAnimSetValT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 1), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 11), 223, 540,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimExitPipe_joint2[46] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 0, 0, 540, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 51), 0, -804, 0, 0, 540,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 26,
	ftAnimSetValT(FT_ANIM_TRAZ, 55), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 26,
	ftAnimBlock(0, 25),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, -804, 0, 0, 540,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, -804, 0, 0, 531,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -71, -790, -95, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimExitPipe_joint4[34] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 134, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 51), 134, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 26,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 25),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 134, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 134, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 208, 258, 110,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimExitPipe_joint5[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1711, 0, -1300, 0, -1829, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 1711, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), -1300, 0, -1829, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1300, 14, -1829, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1161, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1798, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1715, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1738, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1723, -11, -1195, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1721, 13, -1279, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1826, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, 20, -1308, -29, -1880, -54,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimExitPipe_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -353, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -353, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -353, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -550, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -413, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -321, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 139,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimExitPipe_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimExitPipe_joint8[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -102, 293, 93,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), -102, 20, 293, -1, 93, -18,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 25), -133,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), -133,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 7, 288, 0, 0, -6,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -12, 4, 49,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimExitPipe_joint10[24] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 778, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 0, 778, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 778, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -221, 139, -209,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimExitPipe_joint11[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 43, 0, 270, 0, -268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 270, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 28), 43, 0, -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 43, 25, -268, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -135, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 292, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 282, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 509, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 37, 24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 325, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 398, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, 44, 551, 41, 65, 27,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimExitPipe_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -183, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -183, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -183, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -469, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -811, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimExitPipe_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimExitPipe_joint15[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1960, -177, -738,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 2412, 11, -178, 0, -804, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 2412, -178, -804,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimExitPipe_joint16[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -358, 0, -257, 0, -219, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -358, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), -257, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -257, -8, -219, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -244, 11, 17, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -347, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -183, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, 48, -230, 13, 45, 27,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimExitPipe_joint18[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 453, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), 453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 424, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -23,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimExitPipe_joint20[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -97, 0, -181, 0, -80, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -181, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -98, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -80, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -155, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -181, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 8, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -107, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -200, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, -11, -11, -19, -156, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimExitPipe_joint21[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1953, 1352, 1348,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 1953, 1352, 1348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1953, -7, 1352, -8, 1348, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1406, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1607, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1786, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1775, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1798, 9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1410, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1415, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1808, 10, 1421, 5, 1644, 37,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimExitPipe_joint23[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 400,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), 400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 449, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimExitPipe_joint24[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -16, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 60, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 28), -16, 0, 60, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -198, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -15, 21, 62, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 86, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 90, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 63, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -73, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 87, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 88, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, 0, -93, -20, -212, -14,
	ftAnimEnd(),
};
