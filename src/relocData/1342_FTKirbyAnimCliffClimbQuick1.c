/* AnimJoint data for relocData file 1342 (FTKirbyAnimCliffClimbQuick1) */
/* 896 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimCliffClimbQuick1_joint1[16];
extern u16 dFTKirbyAnimCliffClimbQuick1_joint2[26];
extern u16 dFTKirbyAnimCliffClimbQuick1_joint3[14];
extern u16 dFTKirbyAnimCliffClimbQuick1_joint4[20];
extern u16 dFTKirbyAnimCliffClimbQuick1_joint6[38];
extern u16 dFTKirbyAnimCliffClimbQuick1_joint7[28];
extern u16 dFTKirbyAnimCliffClimbQuick1_joint8[14];
extern u16 dFTKirbyAnimCliffClimbQuick1_joint10[38];
extern u16 dFTKirbyAnimCliffClimbQuick1_joint11[28];
extern u16 dFTKirbyAnimCliffClimbQuick1_joint12[16];
extern u16 dFTKirbyAnimCliffClimbQuick1_joint14[20];
extern u16 dFTKirbyAnimCliffClimbQuick1_joint15[28];
extern u16 dFTKirbyAnimCliffClimbQuick1_joint17[14];
extern u16 dFTKirbyAnimCliffClimbQuick1_joint19[28];
extern u16 dFTKirbyAnimCliffClimbQuick1_joint20[28];
extern u16 dFTKirbyAnimCliffClimbQuick1_joint22[14];
extern u16 dFTKirbyAnimCliffClimbQuick1_joint23[32];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimCliffClimbQuick1_joints[] = {
	(u32)dFTKirbyAnimCliffClimbQuick1_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimCliffClimbQuick1_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimCliffClimbQuick1_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimCliffClimbQuick1_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimCliffClimbQuick1_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimCliffClimbQuick1_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimCliffClimbQuick1_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimCliffClimbQuick1_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimCliffClimbQuick1_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimCliffClimbQuick1_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimCliffClimbQuick1_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimCliffClimbQuick1_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimCliffClimbQuick1_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimCliffClimbQuick1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimCliffClimbQuick1_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimCliffClimbQuick1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimCliffClimbQuick1_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimCliffClimbQuick1_joint1[16] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 840, 384, -480, 528,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 0, 599,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimCliffClimbQuick1_joint2[26] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), 1608, 178, 600, 480,
	ftAnimSetValBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 1456, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2859, 94,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 4), -107,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimCliffClimbQuick1_joint3[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 17), -268,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimCliffClimbQuick1_joint4[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -268, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 178, 10,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimCliffClimbQuick1_joint6[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), -120,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, -27, -357, 8, 178, 8, 0, -57, -120, 57,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -268, 21, -178, -10,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 17), -180,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 0, 38, 0, 38,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimCliffClimbQuick1_joint7[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -613, 82, -310, 74, 1800, -120,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -423, 3, -40, 88, 1508, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -447, -24, 40, 81, 1463, -44,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimCliffClimbQuick1_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimCliffClimbQuick1_joint10[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), -120,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, -27, 357, -8, -178, -8, 0, 57, -120, 61,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 268, -21, 178, 10,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 17), 180,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 0, 38, 0, 38,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimCliffClimbQuick1_joint11[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2222, -82, 1301, 73, 193, -120,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2032, -2, 1568, 89, -99, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2056, 24, 1648, 80, -145, -45,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimCliffClimbQuick1_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimCliffClimbQuick1_joint14[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -804, 10, 0, 15, -1072, 5,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTKirbyAnimCliffClimbQuick1_joint15[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, 10, -329, -8, 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 99, -7, -337, 0, -47, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 68, -30, -336, 0, -1, 46,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimCliffClimbQuick1_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimCliffClimbQuick1_joint19[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -120, -33, 197, 0, -2550, -38,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -199, -17, 175, -12, -2621, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, -9, 159, -15, -2666, -45,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimCliffClimbQuick1_joint20[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1547, -7, 1279, -9, 1604, -2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1511, 7, 1270, -1, 1565, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1536, 24, 1270, 0, 1602, 37,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimCliffClimbQuick1_joint22[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimCliffClimbQuick1_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 120, 34, -197, 0, 663, -34,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 198, 18, -175, 12, 599, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 210, 11, -160, 15, 546, -52,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
