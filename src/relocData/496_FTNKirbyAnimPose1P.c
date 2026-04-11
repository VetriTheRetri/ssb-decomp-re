/* AnimJoint data for relocData file 496 (FTNKirbyAnimPose1P) */
/* 672 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNKirbyAnimPose1P_joint1[30];
extern u16 dFTNKirbyAnimPose1P_joint2[10];
extern u16 dFTNKirbyAnimPose1P_joint4[10];
extern u16 dFTNKirbyAnimPose1P_joint6[10];
extern u16 dFTNKirbyAnimPose1P_joint7[24];
extern u16 dFTNKirbyAnimPose1P_joint8[16];
extern u16 dFTNKirbyAnimPose1P_joint10[10];
extern u16 dFTNKirbyAnimPose1P_joint11[24];
extern u16 dFTNKirbyAnimPose1P_joint16[16];
extern u16 dFTNKirbyAnimPose1P_joint17[24];
extern u16 dFTNKirbyAnimPose1P_joint19[16];
extern u16 dFTNKirbyAnimPose1P_joint21[24];
extern u16 dFTNKirbyAnimPose1P_joint22[24];
extern u16 dFTNKirbyAnimPose1P_joint24[46];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTNKirbyAnimPose1P_joints[] = {
	(u32)dFTNKirbyAnimPose1P_joint1, /* [0] joint 1 */
	(u32)dFTNKirbyAnimPose1P_joint2, /* [1] joint 2 */
	(u32)dFTNKirbyAnimPose1P_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNKirbyAnimPose1P_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTNKirbyAnimPose1P_joint7, /* [6] joint 7 */
	(u32)dFTNKirbyAnimPose1P_joint8, /* [7] joint 8 */
	(u32)dFTNKirbyAnimPose1P_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNKirbyAnimPose1P_joint11, /* [10] joint 11 */
	(u32)dFTNKirbyAnimPose1P_joint16, /* [11] joint 16 */
	0x00000000, /* [12] NULL */
	0x00000000, /* [13] NULL */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTNKirbyAnimPose1P_joint17, /* [16] joint 17 */
	(u32)dFTNKirbyAnimPose1P_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNKirbyAnimPose1P_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNKirbyAnimPose1P_joint22, /* [21] joint 22 */
	(u32)dFTNKirbyAnimPose1P_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0099, /* [24] END */
};

/* 4-byte alignment padding */
static u32 dFTNKirbyAnimPose1P_pad[1] = { 0 };

/* Joint 1 */
u16 dFTNKirbyAnimPose1P_joint1[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 178, 406, 446, 193, 405, 1810,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 134, -89, 0, 72, 0, -58, -3738, -21778, 1323, 8166, 1321, -9261,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 551, 328, -5250, 2447, -505,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNKirbyAnimPose1P_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNKirbyAnimPose1P_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 312, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNKirbyAnimPose1P_joint6[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNKirbyAnimPose1P_joint7[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1188, -50, -932, -228, 637, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1239, -190, -1161, 298, 756, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1569, -330, -336, 825, 446, -310,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNKirbyAnimPose1P_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -522, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 537,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNKirbyAnimPose1P_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNKirbyAnimPose1P_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2868, 1233, 871, 569, 605, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4101, 529, 1441, 209, 720, 816,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3927, -174, 1291, -149, 2237, 1517,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNKirbyAnimPose1P_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -561, 554,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTNKirbyAnimPose1P_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 116, 129, -376, 18, -249, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 245, -232, -357, -58, -415, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -349, -595, -492, -134, 376, 791,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNKirbyAnimPose1P_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTNKirbyAnimPose1P_joint21[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -1904, 104,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 1931, -1441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1799, 261, 1931, -118, -1441, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1381, 417, 1695, -236, -949, 491,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNKirbyAnimPose1P_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1214, -11, 1231, -709, -1323, 935,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1226, 39, 521, 33, -388, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1136, 90, 1297, 776, -1109, -720,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNKirbyAnimPose1P_joint24[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000, 0x200E, 0x006D, 0xFF7E, 0xFFC7, 0x04E8, 0x0004, 0xFEEB, 0x200F, 0x0001, 0xFFEC, 0xFF54, 0x04AE, 0x0010, 0xFEEF, 0x0118, 0x200F, 0x0001, 0xFF16, 0xFF2A, 0xFFE7, 0xFB38, 0x0235, 0x0346, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
