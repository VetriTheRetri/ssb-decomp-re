/* AnimJoint data for relocData file 1276 (FTKirbyAnimFall) */
/* 704 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimFall_joint1[8];
extern u16 dFTKirbyAnimFall_joint2[12];
extern u16 dFTKirbyAnimFall_joint3[22];
extern u16 dFTKirbyAnimFall_joint5[14];
extern u16 dFTKirbyAnimFall_joint6[38];
extern u16 dFTKirbyAnimFall_joint7[16];
extern u16 dFTKirbyAnimFall_joint9[14];
extern u16 dFTKirbyAnimFall_joint10[38];
extern u16 dFTKirbyAnimFall_joint11[16];
extern u16 dFTKirbyAnimFall_joint13[12];
extern u16 dFTKirbyAnimFall_joint14[8];
extern u16 dFTKirbyAnimFall_joint16[8];
extern u16 dFTKirbyAnimFall_joint18[30];
extern u16 dFTKirbyAnimFall_joint19[26];
extern u16 dFTKirbyAnimFall_joint21[16];
extern u16 dFTKirbyAnimFall_joint22[30];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimFall_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimFall_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimFall_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimFall_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimFall_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimFall_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimFall_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimFall_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimFall_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimFall_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimFall_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimFall_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimFall_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimFall_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimFall_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimFall_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimFall_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimFall_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTKirbyAnimFall_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimFall_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAZ), 268, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 0, 0, 312, 0, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 4), 223, 3891,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 4), 268, 4096,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimFall_joint5[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 178, -120, -120, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -26),
};

/* Joint 6 */
u16 dFTKirbyAnimFall_joint6[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -568, -12, -612, -7, 1321, 16,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -620, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -599, 26, 1365, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -580, 15, 1337, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -568, 11, -612, 7, 1321, -16,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimFall_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimFall_joint9[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -178, 120, -120, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -26),
};

/* Joint 10 */
u16 dFTKirbyAnimFall_joint10[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1036, 8, 998, -10, -283, 13,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 988, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1004, -25, -238, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1027, -17, -270, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1040, -12, 995, 7, -287, -17,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimFall_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTKirbyAnimFall_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimFall_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, -302, 237,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTKirbyAnimFall_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTKirbyAnimFall_joint18[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1930, -1, 1766, -4, -1255, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1932, 2, 1762, 6, -1250, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1930, 1, 1766, 4, -1255, -4,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimFall_joint19[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 0, 300, 0, 233, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -297, 0, 300, 0, 233, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, 0, 300, 0, 233, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimFall_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 22 */
u16 dFTKirbyAnimFall_joint22[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1286, 1, -1766, 4, -1259, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1284, -2, -1762, -6, -1254, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1286, -1, -1766, -4, -1259, -4,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};
