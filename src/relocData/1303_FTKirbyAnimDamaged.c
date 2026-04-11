/* AnimJoint data for relocData file 1303 (FTKirbyAnimDamaged) */
/* 704 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDamaged_joint1[16];
extern u16 dFTKirbyAnimDamaged_joint2[12];
extern u16 dFTKirbyAnimDamaged_joint3[14];
extern u16 dFTKirbyAnimDamaged_joint5[14];
extern u16 dFTKirbyAnimDamaged_joint6[24];
extern u16 dFTKirbyAnimDamaged_joint7[14];
extern u16 dFTKirbyAnimDamaged_joint9[14];
extern u16 dFTKirbyAnimDamaged_joint10[20];
extern u16 dFTKirbyAnimDamaged_joint11[16];
extern u16 dFTKirbyAnimDamaged_joint13[12];
extern u16 dFTKirbyAnimDamaged_joint14[30];
extern u16 dFTKirbyAnimDamaged_joint16[16];
extern u16 dFTKirbyAnimDamaged_joint18[30];
extern u16 dFTKirbyAnimDamaged_joint19[30];
extern u16 dFTKirbyAnimDamaged_joint21[46];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimDamaged_joints[] = {
	(u32)dFTKirbyAnimDamaged_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDamaged_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDamaged_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDamaged_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimDamaged_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimDamaged_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDamaged_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimDamaged_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimDamaged_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDamaged_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimDamaged_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimDamaged_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimDamaged_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimDamaged_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimDamaged_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF00A1, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimDamaged_joint1[16] = {
	ftAnimSetVal(FT_ANIM_ROTX), -536,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 600, 0, 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 30), -3753,
	ftAnimLoop(0x6800, -30),
};

/* Joint 2 */
u16 dFTKirbyAnimDamaged_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 804, 0, 0, -312, 0,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDamaged_joint3[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -26),
};

/* Joint 5 */
u16 dFTKirbyAnimDamaged_joint5[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 178, -210, -150, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -26),
};

/* Joint 6 */
u16 dFTKirbyAnimDamaged_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1059, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 804, 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -1059, 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1059, 0, 0, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 7 */
u16 dFTKirbyAnimDamaged_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 9 */
u16 dFTKirbyAnimDamaged_joint9[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -178, 210, -150, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -26),
};

/* Joint 10 */
u16 dFTKirbyAnimDamaged_joint10[20] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 545, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 804, -1608, 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 29), 545, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 545, 0,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimDamaged_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimDamaged_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDamaged_joint14[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -88, 0, -394, 0, 125, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -84, 1, -394, 0, 120, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -84, 0, -394, 0, 120, 0,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimDamaged_joint16[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimDamaged_joint18[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -217, 0, -481, 0, -3134, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -217, 0, -481, 0, -3137, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -217, 0, -481, 0, -3137, 0,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimDamaged_joint19[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -1520,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 1214, 0, 1733, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -1520, -1, 1214, 0, 1733, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1523, -3, 1213, 0, 1729, -4,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimDamaged_joint21[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
	0x280E, 0x00D9, 0x0000, 0x01E1, 0x0000, 0x0052, 0x0000, 0x4F00, 0x0E66, 0x0E66, 0x0E66, 0x200F, 0x001D, 0x00D9, 0x0000, 0x01E1, 0x0000, 0x0052, 0xFFFF, 0x200F, 0x0001, 0x00D9, 0x0000, 0x01E1, 0x0000, 0x004F, 0xFFFD, 0x6800, 0xFFC8, 0x0000,
};
