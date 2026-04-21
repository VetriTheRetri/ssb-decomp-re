/* AnimJoint data for relocData file 975 (FTSamusAnimTeeterstart) */
/* 752 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimTeeterstart_joint1[36];
extern u16 dFTSamusAnimTeeterstart_joint2[20];
extern u16 dFTSamusAnimTeeterstart_joint4[30];
extern u16 dFTSamusAnimTeeterstart_joint5[8];
extern u16 dFTSamusAnimTeeterstart_joint6[8];
extern u16 dFTSamusAnimTeeterstart_joint7[20];
extern u16 dFTSamusAnimTeeterstart_joint8[10];
extern u16 dFTSamusAnimTeeterstart_joint11[18];
extern u16 dFTSamusAnimTeeterstart_joint12[24];
extern u16 dFTSamusAnimTeeterstart_joint14[14];
extern u16 dFTSamusAnimTeeterstart_joint15[24];
extern u16 dFTSamusAnimTeeterstart_joint17[16];
extern u16 dFTSamusAnimTeeterstart_joint19[24];
extern u16 dFTSamusAnimTeeterstart_joint20[24];
extern u16 dFTSamusAnimTeeterstart_joint22[16];
extern u16 dFTSamusAnimTeeterstart_joint23[38];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimTeeterstart_joints[] = {
	(u32)dFTSamusAnimTeeterstart_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimTeeterstart_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimTeeterstart_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimTeeterstart_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimTeeterstart_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimTeeterstart_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimTeeterstart_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimTeeterstart_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimTeeterstart_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimTeeterstart_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimTeeterstart_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimTeeterstart_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimTeeterstart_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimTeeterstart_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimTeeterstart_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimTeeterstart_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimTeeterstart_joint1[36] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1600, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 1800, -1315, 0, -106,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 120, -120,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 268, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 140), 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimTeeterstart_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -60, 1440, 0, 106,
	ftAnimSetValT(FT_ANIM_TRAZ, 1), 120,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 1620, -11,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimTeeterstart_joint4[30] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 0, 0, 0, -12,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY, 28), 0, 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 28), -223, -56,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimTeeterstart_joint5[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, -1722, 1377,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimTeeterstart_joint6[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -739,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimTeeterstart_joint7[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 701, 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 140), 0, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimTeeterstart_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimTeeterstart_joint11[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 480, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 140), 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimTeeterstart_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 58, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -128, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 58, 0, -128, 0, -215, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 0, -128, 0, -215, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTSamusAnimTeeterstart_joint14[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -595,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -595, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimTeeterstart_joint15[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, 1, -27, 0, -389, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 77, -4, -41, -4, -119, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 73, -4, -46, -5, -73, 45,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimTeeterstart_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 244, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 169, -74,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimTeeterstart_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 0, -28, -2, -41, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -76, 0, -48, 0, -100, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 0, -48, 0, -73, 26,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimTeeterstart_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -33, 160, -13, -49, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -70, -7, 42, 1, -103, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -73, -2, 46, 3, -73, 30,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimTeeterstart_joint22[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 240, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 169, -70,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimTeeterstart_joint23[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, -3, 193, 21, -213, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 43, -8, -107, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 192, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 131, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 81, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 37, -5, 60, -21, -73, 33,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
