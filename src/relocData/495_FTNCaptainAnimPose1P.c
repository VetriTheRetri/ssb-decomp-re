/* AnimJoint data for relocData file 495 (FTNCaptainAnimPose1P) */
/* 688 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNCaptainAnimPose1P_joint1[26];
extern u16 dFTNCaptainAnimPose1P_joint2[10];
extern u16 dFTNCaptainAnimPose1P_joint4[10];
extern u16 dFTNCaptainAnimPose1P_joint5[22];
extern u16 dFTNCaptainAnimPose1P_joint6[14];
extern u16 dFTNCaptainAnimPose1P_joint7[8];
extern u16 dFTNCaptainAnimPose1P_joint8[8];
extern u16 dFTNCaptainAnimPose1P_joint10[8];
extern u16 dFTNCaptainAnimPose1P_joint11[26];
extern u16 dFTNCaptainAnimPose1P_joint12[14];
extern u16 dFTNCaptainAnimPose1P_joint13[8];
extern u16 dFTNCaptainAnimPose1P_joint15[10];
extern u16 dFTNCaptainAnimPose1P_joint16[26];
extern u16 dFTNCaptainAnimPose1P_joint18[16];
extern u16 dFTNCaptainAnimPose1P_joint20[24];
extern u16 dFTNCaptainAnimPose1P_joint21[22];
extern u16 dFTNCaptainAnimPose1P_joint23[14];
extern u16 dFTNCaptainAnimPose1P_joint24[28];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTNCaptainAnimPose1P_joints[] = {
	(AObjEvent32 *)dFTNCaptainAnimPose1P_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNCaptainAnimPose1P_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNCaptainAnimPose1P_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNCaptainAnimPose1P_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNCaptainAnimPose1P_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNCaptainAnimPose1P_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNCaptainAnimPose1P_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNCaptainAnimPose1P_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNCaptainAnimPose1P_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNCaptainAnimPose1P_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNCaptainAnimPose1P_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNCaptainAnimPose1P_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNCaptainAnimPose1P_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNCaptainAnimPose1P_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNCaptainAnimPose1P_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTNCaptainAnimPose1P_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTNCaptainAnimPose1P_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTNCaptainAnimPose1P_joint24, /* [23] joint 24 */
};

/* 4-byte alignment padding */
static u32 dFTNCaptainAnimPose1P_pad[1] = { 0 };

/* Joint 1 */
u16 dFTNCaptainAnimPose1P_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -269, -5158, 2186, 644,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 268, 536, -960, 9114, 1537, -176, 0, -6418,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 804, -2880, 2142, -960,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNCaptainAnimPose1P_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNCaptainAnimPose1P_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 250, -178, 0, -38, 0, -3,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNCaptainAnimPose1P_joint5[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -1445, 0, 1259, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -1691,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 1259, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1445, 0, 1259, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTNCaptainAnimPose1P_joint6[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1133, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1133, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNCaptainAnimPose1P_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNCaptainAnimPose1P_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -714, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNCaptainAnimPose1P_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNCaptainAnimPose1P_joint11[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 30, -802, -21, 207, 2729, -1392,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -772, 0, 186, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 802, -21, -207, 2729, 1392,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNCaptainAnimPose1P_joint12[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1278, 1142,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1278, -1142,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNCaptainAnimPose1P_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 10, -12, -4,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNCaptainAnimPose1P_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 249, -957, 546, 86, -10, 38,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNCaptainAnimPose1P_joint16[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 61, 0, -146, 0, -302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 61, 0, -146, 0, -302, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -146, 0, -302, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 61,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTNCaptainAnimPose1P_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 565, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 565, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 565, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNCaptainAnimPose1P_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, 0, -63, 0, -182, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 0, -63, 0, -182, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 0, -63, 0, -182, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNCaptainAnimPose1P_joint21[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -72, 0, 144, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), -302,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -72, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -72, 0, 144, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTNCaptainAnimPose1P_joint23[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 560, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 560, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 560,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNCaptainAnimPose1P_joint24[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 137, 0, 89, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 137, 0, 89, 0, -194, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 137, 0, 89, 0, -194, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
