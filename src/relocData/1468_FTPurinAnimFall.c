/* AnimJoint data for relocData file 1468 (FTPurinAnimFall) */
/* 672 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimFall_joint1[14];
extern u16 dFTPurinAnimFall_joint2[12];
extern u16 dFTPurinAnimFall_joint3[22];
extern u16 dFTPurinAnimFall_joint5[14];
extern u16 dFTPurinAnimFall_joint6[36];
extern u16 dFTPurinAnimFall_joint7[16];
extern u16 dFTPurinAnimFall_joint9[14];
extern u16 dFTPurinAnimFall_joint10[40];
extern u16 dFTPurinAnimFall_joint11[14];
extern u16 dFTPurinAnimFall_joint13[12];
extern u16 dFTPurinAnimFall_joint14[8];
extern u16 dFTPurinAnimFall_joint16[8];
extern u16 dFTPurinAnimFall_joint18[36];
extern u16 dFTPurinAnimFall_joint19[8];
extern u16 dFTPurinAnimFall_joint21[38];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimFall_joints[] = {
	(u32)dFTPurinAnimFall_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimFall_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimFall_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimFall_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimFall_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimFall_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimFall_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimFall_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimFall_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimFall_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimFall_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimFall_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimFall_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimFall_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimFall_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF0099, /* [21] END */
};

/* Joint 1 */
u16 dFTPurinAnimFall_joint1[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 600, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -26),
};

/* Joint 2 */
u16 dFTPurinAnimFall_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimFall_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAZ), 268, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 0, 0, 312, 0, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 8), 225, 3916,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 8), 268, 4096,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPurinAnimFall_joint5[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 178, -144, -737, 238, 4096, 4096, 4096,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -26),
};

/* Joint 6 */
u16 dFTPurinAnimFall_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 721, -2, -36, 3, -630, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -33, -1, -628, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 711, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 718, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 721, 2, -37, -3, -630, -1,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimFall_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -30),
};

/* Joint 9 */
u16 dFTPurinAnimFall_joint9[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -178, 69, -722, 238, 4096, 4096, 4096,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -26),
};

/* Joint 10 */
u16 dFTPurinAnimFall_joint10[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -785, 4, -112, 0, -696, 2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -110, 1, -694, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -731, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -751, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -781, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -785, -4, -109, 0, -696, -2,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimFall_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 13 */
u16 dFTPurinAnimFall_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -501, 264, -1427, 106, -21, 16,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimFall_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1763, -1321, 1961,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTPurinAnimFall_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTPurinAnimFall_joint18[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -246, 0, -128, -1, -3079, -2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -245, -1, -130, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -3089, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3081, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -246, 0, -128, 1, -3079, 2,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimFall_joint19[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1399, 1293, 1936,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 21 */
u16 dFTPurinAnimFall_joint21[38] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 7,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1300, 0, 1525, -2, -1419, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -1300, 1, 1523, 4, -1421, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1300, 0, 1525, 2, -1419, 1,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};
