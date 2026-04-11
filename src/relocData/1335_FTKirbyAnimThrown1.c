/* AnimJoint data for relocData file 1335 (FTKirbyAnimThrown1) */
/* 768 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimThrown1_joint2[14];
extern u16 dFTKirbyAnimThrown1_joint3[12];
extern u16 dFTKirbyAnimThrown1_joint4[20];
extern u16 dFTKirbyAnimThrown1_joint6[14];
extern u16 dFTKirbyAnimThrown1_joint7[30];
extern u16 dFTKirbyAnimThrown1_joint8[16];
extern u16 dFTKirbyAnimThrown1_joint10[14];
extern u16 dFTKirbyAnimThrown1_joint11[30];
extern u16 dFTKirbyAnimThrown1_joint12[16];
extern u16 dFTKirbyAnimThrown1_joint14[12];
extern u16 dFTKirbyAnimThrown1_joint15[30];
extern u16 dFTKirbyAnimThrown1_joint17[16];
extern u16 dFTKirbyAnimThrown1_joint19[36];
extern u16 dFTKirbyAnimThrown1_joint20[30];
extern u16 dFTKirbyAnimThrown1_joint22[48];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimThrown1_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTKirbyAnimThrown1_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimThrown1_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimThrown1_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimThrown1_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimThrown1_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimThrown1_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimThrown1_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimThrown1_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimThrown1_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimThrown1_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimThrown1_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimThrown1_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimThrown1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimThrown1_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimThrown1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF00AC, /* [22] END */
};

/* Joint 2 */
u16 dFTKirbyAnimThrown1_joint2[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -178, 0, 0, 0, 900, 120, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -26),
};

/* Joint 3 */
u16 dFTKirbyAnimThrown1_joint3[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimThrown1_joint4[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 178,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimThrown1_joint6[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 178, -120, -120, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -26),
};

/* Joint 7 */
u16 dFTKirbyAnimThrown1_joint7[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -836, 0, -343, 1, -1917, -7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -837, 0, -342, -2, -1924, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -836, 0, -340, 1, -1917, 7,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimThrown1_joint8[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimThrown1_joint10[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -178, 120, -120, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -26),
};

/* Joint 11 */
u16 dFTKirbyAnimThrown1_joint11[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2445, 0, 1267, 1, -308, -7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 2445, 0, 1266, -2, -316, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2445, 0, 1268, 1, -309, 7,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimThrown1_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -30),
};

/* Joint 14 */
u16 dFTKirbyAnimThrown1_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimThrown1_joint15[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2, 3, -302, -1, 233, -5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 5, -4, -303, 2, 227, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2, -3, -302, 1, 233, 5,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimThrown1_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 19 */
u16 dFTKirbyAnimThrown1_joint19[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -30, 0, 185, 2, -2460, 7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -30, 0, 187, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -2430, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2453, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -30, 0, 185, -2, -2460, -7,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimThrown1_joint20[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -3, 1305, -1, 1845, -5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1605, 6, 1304, 2, 1840, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 3, 1305, 1, 1845, 5,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimThrown1_joint22[48] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1577, 0, 1793, 2, 2368, 7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1578, 0, 1796, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 2394, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2375, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1577, 0, 1793, -2, 2368, -7,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
