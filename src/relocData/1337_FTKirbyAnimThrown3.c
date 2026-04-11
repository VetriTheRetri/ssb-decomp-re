/* AnimJoint data for relocData file 1337 (FTKirbyAnimThrown3) */
/* 688 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimThrown3_joint2[14];
extern u16 dFTKirbyAnimThrown3_joint3[10];
extern u16 dFTKirbyAnimThrown3_joint4[14];
extern u16 dFTKirbyAnimThrown3_joint6[14];
extern u16 dFTKirbyAnimThrown3_joint7[28];
extern u16 dFTKirbyAnimThrown3_joint8[14];
extern u16 dFTKirbyAnimThrown3_joint10[14];
extern u16 dFTKirbyAnimThrown3_joint11[26];
extern u16 dFTKirbyAnimThrown3_joint12[14];
extern u16 dFTKirbyAnimThrown3_joint14[10];
extern u16 dFTKirbyAnimThrown3_joint15[26];
extern u16 dFTKirbyAnimThrown3_joint17[14];
extern u16 dFTKirbyAnimThrown3_joint19[28];
extern u16 dFTKirbyAnimThrown3_joint20[26];
extern u16 dFTKirbyAnimThrown3_joint22[46];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimThrown3_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTKirbyAnimThrown3_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimThrown3_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimThrown3_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimThrown3_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimThrown3_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimThrown3_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimThrown3_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimThrown3_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimThrown3_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimThrown3_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimThrown3_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimThrown3_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimThrown3_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimThrown3_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimThrown3_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF009C, /* [22] END */
};

/* Joint 2 */
u16 dFTKirbyAnimThrown3_joint2[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, -240, -480, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimThrown3_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimThrown3_joint4[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -268, 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimThrown3_joint6[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimThrown3_joint7[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1048, 0, 1909, 0, -968, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1047, 0, 1906, 0, -970, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1047, 0, 1906, 0, -970, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimThrown3_joint8[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimThrown3_joint10[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimThrown3_joint11[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2656, 301, 639,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 2656, 0, 301, 0, 639, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2656, 0, 301, 0, 639, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimThrown3_joint12[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimThrown3_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimThrown3_joint15[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1447, 2, -1326, -1, -939, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1447, 0, -1326, 0, -939, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1447, -1326, -939,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTKirbyAnimThrown3_joint17[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimThrown3_joint19[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1288, 0, -1423, 0, -1435, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1288, 0, -1423, 0, -1435, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -1435, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1288, -1423,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimThrown3_joint20[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1447, -2, 1326, 1, -939, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1447, 0, 1326, 0, -939, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1447, 1326, -939,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimThrown3_joint22[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000, 0x280E, 0xFAF8, 0x0000, 0x058F, 0x0000, 0x06F5, 0xFFFD, 0x4F00, 0x1000, 0x1000, 0x1000, 0x200F, 0x0009, 0xFAF8, 0x0000, 0x058F, 0x0000, 0x06F5, 0x0000, 0x2805, 0x0001, 0x058F, 0x0000, 0x380B, 0x0001, 0xFAF8, 0x06F5, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
