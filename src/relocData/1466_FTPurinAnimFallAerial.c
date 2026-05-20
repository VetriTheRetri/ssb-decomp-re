/* AnimJoint data for relocData file 1466 (FTPurinAnimFallAerial) */
/* 800 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimFallAerial_joint1[14];
extern u16 dFTPurinAnimFallAerial_joint2[16];
extern u16 dFTPurinAnimFallAerial_joint3[20];
extern u16 dFTPurinAnimFallAerial_joint5[14];
extern u16 dFTPurinAnimFallAerial_joint6[30];
extern u16 dFTPurinAnimFallAerial_joint7[16];
extern u16 dFTPurinAnimFallAerial_joint9[14];
extern u16 dFTPurinAnimFallAerial_joint10[30];
extern u16 dFTPurinAnimFallAerial_joint11[16];
extern u16 dFTPurinAnimFallAerial_joint13[12];
extern u16 dFTPurinAnimFallAerial_joint14[26];
extern u16 dFTPurinAnimFallAerial_joint16[14];
extern u16 dFTPurinAnimFallAerial_joint18[50];
extern u16 dFTPurinAnimFallAerial_joint19[26];
extern u16 dFTPurinAnimFallAerial_joint21[16];
extern u16 dFTPurinAnimFallAerial_joint22[42];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTPurinAnimFallAerial_joints[] = {
	(AObjEvent32 *)dFTPurinAnimFallAerial_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPurinAnimFallAerial_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPurinAnimFallAerial_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPurinAnimFallAerial_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPurinAnimFallAerial_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPurinAnimFallAerial_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPurinAnimFallAerial_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTPurinAnimFallAerial_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPurinAnimFallAerial_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPurinAnimFallAerial_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPurinAnimFallAerial_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPurinAnimFallAerial_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPurinAnimFallAerial_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTPurinAnimFallAerial_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTPurinAnimFallAerial_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPurinAnimFallAerial_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimFallAerial_joint1[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 600, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -26),
};

/* Joint 2 */
u16 dFTPurinAnimFallAerial_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -268, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -55,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 3 */
u16 dFTPurinAnimFallAerial_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAZ), 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 268, 0, 0, 0, 312, 0, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 8), 3946,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 8), 4096,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPurinAnimFallAerial_joint5[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, -419, -496, 313, 4096, 4096, 4096,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -26),
};

/* Joint 6 */
u16 dFTPurinAnimFallAerial_joint6[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1235, 1, -2, 1, -540, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -1234, -2, 0, -2, -539, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1235, -1, 0, 0, -543, -4,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimFallAerial_joint7[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPurinAnimFallAerial_joint9[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 404, -486, 304, 4096, 4096, 4096,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -26),
};

/* Joint 10 */
u16 dFTPurinAnimFallAerial_joint10[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2012, 0, -7, -1, -545, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -2012, 0, -6, 2, -541, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2012, 0, -7, 0, -545, -4,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimFallAerial_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTPurinAnimFallAerial_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1282, 75, -1679, 106, -21, 16,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimFallAerial_joint14[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1851, -1, -1177, 0, 1399, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 1853, 2, -1179, 0, 1395, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1851, -2, -1177, 1, 1399, 3,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimFallAerial_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimLoop(0x6800, -26),
};

/* Joint 18 */
u16 dFTPurinAnimFallAerial_joint18[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -510, 6, -372, 6, -2827, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -294, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -2828, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -396, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -430, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -504, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -322, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -365, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -510, -6, -372, -6, -2827, 1,
	ftAnimLoop(0x6800, -96),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimFallAerial_joint19[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1362, 1, 1179, 0, 1394, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 1367, -4, 1178, 0, 1400, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1362, -4, 1179, 1, 1394, -5,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimFallAerial_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimLoop(0x6800, -30),
};

/* Joint 22 */
u16 dFTPurinAnimFallAerial_joint22[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2706, 0, 372, -4, 386, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -2706, 0, 391, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 338, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 355, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 367, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2706, 0, 372, 4, 386, -5,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
	0x0000, 0x0000,
};
