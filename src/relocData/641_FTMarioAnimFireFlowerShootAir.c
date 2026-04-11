/* AnimJoint data for relocData file 641 (FTMarioAnimFireFlowerShootAir) */
/* 2416 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimFireFlowerShootAir_joint1[72];
extern u16 dFTMarioAnimFireFlowerShootAir_joint2[62];
extern u16 dFTMarioAnimFireFlowerShootAir_joint4[64];
extern u16 dFTMarioAnimFireFlowerShootAir_joint5[144];
extern u16 dFTMarioAnimFireFlowerShootAir_joint6[48];
extern u16 dFTMarioAnimFireFlowerShootAir_joint7[22];
extern u16 dFTMarioAnimFireFlowerShootAir_joint8[24];
extern u16 dFTMarioAnimFireFlowerShootAir_joint10[28];
extern u16 dFTMarioAnimFireFlowerShootAir_joint11[142];
extern u16 dFTMarioAnimFireFlowerShootAir_joint12[48];
extern u16 dFTMarioAnimFireFlowerShootAir_joint13[50];
extern u16 dFTMarioAnimFireFlowerShootAir_joint15[30];
extern u16 dFTMarioAnimFireFlowerShootAir_joint16[78];
extern u16 dFTMarioAnimFireFlowerShootAir_joint18[40];
extern u16 dFTMarioAnimFireFlowerShootAir_joint20[98];
extern u16 dFTMarioAnimFireFlowerShootAir_joint21[94];
extern u16 dFTMarioAnimFireFlowerShootAir_joint23[116];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimFireFlowerShootAir_joints[] = {
	(u32)dFTMarioAnimFireFlowerShootAir_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimFireFlowerShootAir_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimFireFlowerShootAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimFireFlowerShootAir_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimFireFlowerShootAir_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimFireFlowerShootAir_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimFireFlowerShootAir_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimFireFlowerShootAir_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimFireFlowerShootAir_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimFireFlowerShootAir_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimFireFlowerShootAir_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimFireFlowerShootAir_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimFireFlowerShootAir_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimFireFlowerShootAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimFireFlowerShootAir_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimFireFlowerShootAir_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimFireFlowerShootAir_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF0236, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimFireFlowerShootAir_joint1[72] = {
	ftAnimSetValAfter(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 3,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_TRAY), 0, 600,
	ftAnimSetValT(FT_ANIM_TRAY, 5), 444,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 30), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), 223,
	ftAnimSetValT(FT_ANIM_ROTY, 16), 223,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 3), 444,
	ftAnimSetValT(FT_ANIM_TRAY, 13), 444,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 13), 0, 0,
	ftAnimBlock(0, 12),
	ftAnimSetValT(FT_ANIM_ROTY, 10), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 444,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 8), 600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimFireFlowerShootAir_joint2[62] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAY), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, 0, 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), -3, 43, -104,
	ftAnimSetValT(FT_ANIM_ROTX, 7), -3,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 12), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimFireFlowerShootAir_joint4[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 134, -96,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -14, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -10, -18,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 0, -14, -92,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -163, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 3), -10,
	ftAnimSetValT(FT_ANIM_ROTZ, 17), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 3), -163,
	ftAnimSetValT(FT_ANIM_ROTY, 13), -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -10, -69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -10, 43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -10, 16,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), -163,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 134, 18,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimFireFlowerShootAir_joint5[144] = {
	ftAnimSetValAfter(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 247, 33, -474, 90, -88, -96,
	ftAnimSetValBlock(FT_ANIM_SCAX), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 171, -156, -340, -207,
	ftAnimSetValT(FT_ANIM_SCAX, 5), 5529,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -383, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -101, 265,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 277, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -32, -128, -600, -196,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -771, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 0, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValBlockT(FT_ANIM_SCAX, 3), 5529,
	ftAnimSetValT(FT_ANIM_SCAX, 13), 5529,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -771, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -771, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 11, 8, 277, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 248, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -230, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -351, -161,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -769, 123,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 1), 5529,
	ftAnimSetValT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -746, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -498, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 210, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 245, -243,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -512, 524,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 413, -228, -322, -306, 146,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -468, -37, -92, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 314, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 246, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 247, 0, -474, -6, -88, 3,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimFireFlowerShootAir_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, -195,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -546, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -150, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -545, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -667, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -594, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 210,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimFireFlowerShootAir_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -625, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 0, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -625, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimFireFlowerShootAir_joint8[24] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 127, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 31, -62, 86,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 162, -47, 65,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 127, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimFireFlowerShootAir_joint10[28] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0, 53, 0, -18, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 0, -6, 0, 4, 0, -6, 0, 0, 53, 0, -18, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimFireFlowerShootAir_joint11[142] = {
	ftAnimSetValAfter(FT_ANIM_SCAZ), 4096,
	ftAnimSetVal0Rate(FT_ANIM_SCAY), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -201, -17, 462, 11, -78, -79,
	ftAnimSetValBlock(FT_ANIM_SCAX), 4096,
	ftAnimSetValT(FT_ANIM_SCAX, 5), 5529,
	ftAnimSetValRateT(FT_ANIM_SCAY, 5), 4095, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -18, 0, -853, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 328, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 138, -153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -34, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValT(FT_ANIM_SCAX, 3), 5529,
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 3), 4095,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -27, -7, -851, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -841, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 0, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX, 13), 5529,
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 13), 4095,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -33, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -34, 16,
	ftAnimBlock(0, 10),
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_SCAY, 1), -846, 38, 4095, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 1), 5529,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -429, 101,
	ftAnimSetValT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateT(FT_ANIM_SCAY, 8), 4096, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -29, -42, -1, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -270, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 452, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -323, 109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -121, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -226, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -201, 25, 462, 10, -78, 42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimFireFlowerShootAir_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, -186,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -482, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -215, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -483, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -489, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 104,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimFireFlowerShootAir_joint13[50] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 142, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 45, 30, 250,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 45, 30, 250,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 19, 51, -89,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 4, 54, -89,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 45, 30, 250,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 45, 30, 250,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 45, 30, 250,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 625, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimFireFlowerShootAir_joint15[30] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1608, 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 71, 0, 35,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1536, -71,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), 1536, -71,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1536, -71,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1536, -71,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 1608, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimFireFlowerShootAir_joint16[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1718, -11, -1605, -31, -1855, -124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1684, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1608, 1, -2308, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1609, -22, -2308, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -2306, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1547, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1582, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1677, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1685, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1624, 17,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2303, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1937, 72,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1690, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1717, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1718, 0, -1605, 19, -1855, 81,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimFireFlowerShootAir_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 229, 194,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 824, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 726, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 590, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 682, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 810, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 818, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 363, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, -133,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimFireFlowerShootAir_joint20[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1868, 28, 1642, -26, -1172, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1282, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1598, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1580, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1574, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1511, 57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1282, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1043, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1448, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1552, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1577, -19, -1126, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1288, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1628, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1555, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1786, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1289, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1227, 44,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1814, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1864, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1868, -4, 1642, 14, -1172, 55,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimFireFlowerShootAir_joint21[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 65, 17, 162, 37, -346, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -64, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 390, 46, 316, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 432, 36, 276, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 192, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 427, -31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -131, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 122, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 112, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 143, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 131, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -165, -82,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 392, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 76, -24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 168, 16, -246, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 174, -7, -347, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 65, -11, 162, -11, -346, 1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimFireFlowerShootAir_joint23[116] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 716, 97,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 953, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 903, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 866, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 760, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 444, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 766, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, -49,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0682, 0xFFDE, 0xFA3E, 0xFFFF, 0x06ED, 0xFFB2, 0x280D, 0x0009, 0xFA64, 0xFFEB, 0x0525, 0x0020, 0x2003, 0x0004, 0x05BD, 0x0005, 0x2003, 0x0001, 0x05CA, 0x0005, 0x2003, 0x0004, 0x059F, 0xFFCF, 0x200F, 0x0001, 0x056B, 0xFFFF, 0xFA4E, 0xFFF9, 0x054B, 0xFFF8, 0x2805, 0x0013, 0xFA37, 0x000B, 0x200B, 0x0004, 0x05EE, 0x0001, 0x04FC, 0x0007, 0x200B, 0x0001, 0x05EF, 0x0000, 0x0505, 0x0009, 0x2803, 0x000D, 0x0661, 0x001B, 0x2009, 0x000C, 0x0623, 0x004D, 0x2009, 0x0001, 0x0671, 0x004A, 0x200B, 0x0001, 0x0678, 0x0010, 0x06B8, 0x003D, 0x200F, 0x0001, 0x0682, 0x0009, 0xFA3E, 0x0007, 0x06ED, 0x0034, 0x0000,
};
