/* AnimJoint data for relocData file 942 (FTDonkeyAnimHandSlapStart) */
/* 784 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimHandSlapStart_joint1[14];
extern u16 dFTDonkeyAnimHandSlapStart_joint2[14];
extern u16 dFTDonkeyAnimHandSlapStart_joint4[14];
extern u16 dFTDonkeyAnimHandSlapStart_joint5[24];
extern u16 dFTDonkeyAnimHandSlapStart_joint6[16];
extern u16 dFTDonkeyAnimHandSlapStart_joint7[18];
extern u16 dFTDonkeyAnimHandSlapStart_joint8[14];
extern u16 dFTDonkeyAnimHandSlapStart_joint10[14];
extern u16 dFTDonkeyAnimHandSlapStart_joint11[32];
extern u16 dFTDonkeyAnimHandSlapStart_joint12[16];
extern u16 dFTDonkeyAnimHandSlapStart_joint13[18];
extern u16 dFTDonkeyAnimHandSlapStart_joint14[8];
extern u16 dFTDonkeyAnimHandSlapStart_joint16[10];
extern u16 dFTDonkeyAnimHandSlapStart_joint17[24];
extern u16 dFTDonkeyAnimHandSlapStart_joint19[16];
extern u16 dFTDonkeyAnimHandSlapStart_joint21[24];
extern u16 dFTDonkeyAnimHandSlapStart_joint22[24];
extern u16 dFTDonkeyAnimHandSlapStart_joint24[16];
extern u16 dFTDonkeyAnimHandSlapStart_joint25[26];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimHandSlapStart_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimHandSlapStart_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimHandSlapStart_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimHandSlapStart_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimHandSlapStart_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimHandSlapStart_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimHandSlapStart_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimHandSlapStart_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimHandSlapStart_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimHandSlapStart_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimHandSlapStart_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimHandSlapStart_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimHandSlapStart_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimHandSlapStart_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimHandSlapStart_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimHandSlapStart_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimHandSlapStart_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimHandSlapStart_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimHandSlapStart_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimHandSlapStart_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimHandSlapStart_joint1[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -24, 1032, -402,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -16, -12, 1175, 400, -476, -122,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimHandSlapStart_joint2[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -143, 4, -12, 7, -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimHandSlapStart_joint4[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 750, 24, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 670, -50, 12, 1, -134, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimHandSlapStart_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 59, -84, -41, -473, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 120, 111, -215, -65, -577, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 220, 99, -257, -41, -671, -94,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimHandSlapStart_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -52,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -491, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -463, 28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimHandSlapStart_joint7[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 201, -35, -66, -10, -471, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimHandSlapStart_joint8[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 218, 1, -70, 0, -84, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimHandSlapStart_joint10[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -230, -9, 126, 11, 28, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimHandSlapStart_joint11[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -115, -128, 172, 37, -479, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 243, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -244, -218, -512, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -553, -238, -778, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -722, -168, 212, -30, -1010, -231,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimHandSlapStart_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -129,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -630, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, -27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimHandSlapStart_joint13[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -165, -28, 309, 6, -62, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimHandSlapStart_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 565, -904, 635,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimHandSlapStart_joint16[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -536, -33,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimHandSlapStart_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -86, -4, -394, 22, -304, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -108, -19, -331, 34, -406, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -131, -22, -302, 29, -427, -21,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimHandSlapStart_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1004, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 965, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 921, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimHandSlapStart_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 11, 24, -30, -377, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -11, 42, -76, -73, -323, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34, 45, -151, -75, -288, 35,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimHandSlapStart_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 99, 3, 216, 1, -297, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 111, 7, 225, 12, -367, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 117, 5, 242, 16, -407, -40,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimHandSlapStart_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 993, -32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 901, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 884, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimHandSlapStart_joint25[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 31, 105, 16, -383, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 53, 5, 151, 22, -304, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 42, -10, 166, 14, -276, 27,
	ftAnimEnd(),
	0x0000, 0x0000,
};
