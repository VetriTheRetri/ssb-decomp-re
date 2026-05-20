/* AnimJoint data for relocData file 1526 (FTCaptainAnimFall) */
/* 752 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimFall_joint1[10];
extern u16 dFTCaptainAnimFall_joint2[26];
extern u16 dFTCaptainAnimFall_joint4[10];
extern u16 dFTCaptainAnimFall_joint5[24];
extern u16 dFTCaptainAnimFall_joint6[16];
extern u16 dFTCaptainAnimFall_joint7[8];
extern u16 dFTCaptainAnimFall_joint10[8];
extern u16 dFTCaptainAnimFall_joint11[24];
extern u16 dFTCaptainAnimFall_joint12[20];
extern u16 dFTCaptainAnimFall_joint13[8];
extern u16 dFTCaptainAnimFall_joint14[10];
extern u16 dFTCaptainAnimFall_joint16[18];
extern u16 dFTCaptainAnimFall_joint17[30];
extern u16 dFTCaptainAnimFall_joint19[16];
extern u16 dFTCaptainAnimFall_joint21[24];
extern u16 dFTCaptainAnimFall_joint22[30];
extern u16 dFTCaptainAnimFall_joint24[16];
extern u16 dFTCaptainAnimFall_joint25[28];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimFall_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimFall_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimFall_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimFall_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimFall_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimFall_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimFall_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimFall_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimFall_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimFall_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimFall_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimFall_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimFall_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimFall_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimFall_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimFall_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimFall_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimFall_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimFall_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimFall_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -55, 1223, 7,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimFall_joint2[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 240, 49,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 95, 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 174, -12, 0, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 177, 13, 0, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 240, 49,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimFall_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 242, -182, -12, 0, -31, 47,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimFall_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2898, 4, -175, -3, 2445, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -2902, 5, -173, -2, 2456, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2898, 4, -175, -1, 2445, -11,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimFall_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -971, 25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -961, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -971, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimFall_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2611, -82, -524,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimFall_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 113, -38,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimFall_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 102, 19, 218, 0, 639, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 126, -33, 216, 1, 663, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 102, -23, 218, 1, 639, -24,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimFall_joint12[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -410, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -454, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -420, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -410, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimFall_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 122, 156, 82,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimFall_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 39,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimFall_joint16[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 255,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 547, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 547, -58,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 255,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimFall_joint17[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -91, 52, 71, 6, -693, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 78, -7, -690, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 39, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -34, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -91, -57, 71, -7, -693, -2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimFall_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 330, 25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 366, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 330, -36,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimFall_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1491, -47, -1741, 24, -1268, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1547, 60, -1714, -32, -1323, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1491, 55, -1741, -27, -1268, 54,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimFall_joint22[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -176, 16, 172, 6, -891, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -161, -22, 173, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -828, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -871, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -176, -14, 172, 0, -891, -19,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimFall_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1129, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1133, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1129, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimFall_joint25[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 84, -2, 164, -9, 40, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 84, 0, 163, 1, 28, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 84, 0, 164, 0, 40, 12,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
