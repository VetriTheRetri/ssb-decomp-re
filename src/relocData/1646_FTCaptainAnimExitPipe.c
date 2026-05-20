/* AnimJoint data for relocData file 1646 (FTCaptainAnimExitPipe) */
/* 1360 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimExitPipe_joint1[16];
extern u16 dFTCaptainAnimExitPipe_joint2[12];
extern u16 dFTCaptainAnimExitPipe_joint4[28];
extern u16 dFTCaptainAnimExitPipe_joint5[68];
extern u16 dFTCaptainAnimExitPipe_joint6[32];
extern u16 dFTCaptainAnimExitPipe_joint7[14];
extern u16 dFTCaptainAnimExitPipe_joint8[26];
extern u16 dFTCaptainAnimExitPipe_joint10[12];
extern u16 dFTCaptainAnimExitPipe_joint11[62];
extern u16 dFTCaptainAnimExitPipe_joint12[24];
extern u16 dFTCaptainAnimExitPipe_joint13[14];
extern u16 dFTCaptainAnimExitPipe_joint14[14];
extern u16 dFTCaptainAnimExitPipe_joint16[18];
extern u16 dFTCaptainAnimExitPipe_joint17[50];
extern u16 dFTCaptainAnimExitPipe_joint19[38];
extern u16 dFTCaptainAnimExitPipe_joint21[54];
extern u16 dFTCaptainAnimExitPipe_joint22[68];
extern u16 dFTCaptainAnimExitPipe_joint24[40];
extern u16 dFTCaptainAnimExitPipe_joint25[40];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimExitPipe_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimExitPipe_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimExitPipe_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimExitPipe_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimExitPipe_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimExitPipe_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimExitPipe_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimExitPipe_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimExitPipe_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimExitPipe_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimExitPipe_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimExitPipe_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimExitPipe_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimExitPipe_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimExitPipe_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimExitPipe_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimExitPipe_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimExitPipe_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimExitPipe_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimExitPipe_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimExitPipe_joint1[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY), -960, 506,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 40), 1600, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimExitPipe_joint2[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 107, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimExitPipe_joint4[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 89, 0, 17, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 89, 0, -62, 0, 17, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 189, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimExitPipe_joint5[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 996, 0, -357, 0, -342, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -379, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 996, -2, -342, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 991, -10, -346, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 729, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -365, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -378, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -2, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 627, -98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 246, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -367, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -517, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, -7, 5, 7, -524, -6,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimExitPipe_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -873, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -873, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -882, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -985, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -951, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -807, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimExitPipe_joint7[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 420, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3099, -218, -144,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 2701, -2, -333,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimExitPipe_joint8[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 360, -108,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -142, 0, -35, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -142, 0, -35, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimExitPipe_joint10[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 120, 0,
	_FT_ANIM_CMD(11, 0, 1), 40,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimExitPipe_joint11[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -576, 0, 346, 2, 301, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 387, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), -567, 1, 169, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -563, 6, 174, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -193, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 587, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 381, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 175, -28,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -159, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -136, 15, 152, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, 7, 144, -8, 592, 4,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimExitPipe_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -989, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -1002, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1008, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1024, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimExitPipe_joint13[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 388, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -353, 362, -108,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimExitPipe_joint14[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 85, 49, 38,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1038, -1456, 428,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 1538, -1003, 119,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimExitPipe_joint16[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -191, -210, -79,
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 80), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 40,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimExitPipe_joint17[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 12, 0, -115, 0, -43, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 16, 5, -114, 1, -48, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 24, 15, -112, 5, -55, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 193, 0, 69, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -183, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -231, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -467, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, -2, 70, 0, -472, -4,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimExitPipe_joint19[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 21), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 118, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 198, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 442, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimExitPipe_joint21[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1459, 0, -1493, 0, 1748, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), -1549, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), 1698, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 29), 1454, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1457, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1479, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1554, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1565, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1694, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1689, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1481, 2, -1566, 0, 1688, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimExitPipe_joint22[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1470, 1, 1514, 1, -1593, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 1512, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), -1450, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1578, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1582, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1593, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1603, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1696, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1507, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1497, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1692, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1686, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1448, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1448, 0, 1498, 0, -1685, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimExitPipe_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 78, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 15, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 26, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 82, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 78, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 351, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 392, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 539, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimExitPipe_joint25[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 99, -2, 193, 0, 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 99, 0, 193, 1, 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 102, 5, 196, 5, 0, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 161, 0, 364, 2, -276, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, 0, 365, 1, -279, -3,
	ftAnimEnd(),
};
