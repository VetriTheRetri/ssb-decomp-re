/* AnimJoint data for relocData file 646 (FTFoxAnimWalkEnd) */
/* 784 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimWalkEnd_joint1[14];
extern u16 dFTFoxAnimWalkEnd_joint2[20];
extern u16 dFTFoxAnimWalkEnd_joint4[16];
extern u16 dFTFoxAnimWalkEnd_joint5[24];
extern u16 dFTFoxAnimWalkEnd_joint6[16];
extern u16 dFTFoxAnimWalkEnd_joint7[10];
extern u16 dFTFoxAnimWalkEnd_joint8[14];
extern u16 dFTFoxAnimWalkEnd_joint10[14];
extern u16 dFTFoxAnimWalkEnd_joint11[24];
extern u16 dFTFoxAnimWalkEnd_joint12[16];
extern u16 dFTFoxAnimWalkEnd_joint13[10];
extern u16 dFTFoxAnimWalkEnd_joint15[14];
extern u16 dFTFoxAnimWalkEnd_joint16[24];
extern u16 dFTFoxAnimWalkEnd_joint18[16];
extern u16 dFTFoxAnimWalkEnd_joint20[24];
extern u16 dFTFoxAnimWalkEnd_joint21[24];
extern u16 dFTFoxAnimWalkEnd_joint23[16];
extern u16 dFTFoxAnimWalkEnd_joint24[24];
extern u16 dFTFoxAnimWalkEnd_joint25[6];
extern u16 dFTFoxAnimWalkEnd_joint26[14];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimWalkEnd_joints[] = {
	(AObjEvent32 *)dFTFoxAnimWalkEnd_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimWalkEnd_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimWalkEnd_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimWalkEnd_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimWalkEnd_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimWalkEnd_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimWalkEnd_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimWalkEnd_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimWalkEnd_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimWalkEnd_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimWalkEnd_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimWalkEnd_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimWalkEnd_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimWalkEnd_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimWalkEnd_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimWalkEnd_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimWalkEnd_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimWalkEnd_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimWalkEnd_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimWalkEnd_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimWalkEnd_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 958, 131,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 8), 912,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 48, -20,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimWalkEnd_joint2[20] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY), -283, 1,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -219, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -338, -5,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -141, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimWalkEnd_joint4[16] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -35, 7,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 408, -163,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 156, 19,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 309, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimWalkEnd_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1904, 57, -1440, -10, 1677, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1758, 31, -1468, 26, 1910, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, 40, -1442, 26, 1867, -43,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimWalkEnd_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -970, 58,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -690, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 131,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimWalkEnd_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimWalkEnd_joint8[14] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -164, 122, -2,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimWalkEnd_joint10[14] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -80, 221, 11,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 62, -18,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimWalkEnd_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, -19, 129, 31, 219, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 164, -32, 243, 24, 336, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, -31, 271, 28, 336, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimWalkEnd_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -629, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -613, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimWalkEnd_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimWalkEnd_joint15[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 60, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, -804, 1608, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 60, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTFoxAnimWalkEnd_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -95, -42, -17, -46, -146, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -374, -31, -216, -10, -47, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -31, -223, -7, -26, 20,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimWalkEnd_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 582, -43,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 394, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -40,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimWalkEnd_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3, 18, -148, 55, -106, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 56, -8, 106, 19, -72, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, -9, 125, 19, -56, 16,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimWalkEnd_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, 42, 56, 7, 184, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 311, 44, 130, 9, 135, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 44, 137, 6, 134, -1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimWalkEnd_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 308, -64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 335, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimWalkEnd_joint24[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -177, 23, 210, -29, -165, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -12, 28, -61, -43, -223, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 28, -102, -41, -226, -2,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimWalkEnd_joint25[6] = {
	ftAnimSetValAfter(FT_ANIM_ROTX), 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimWalkEnd_joint26[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -19, 40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -178, -122,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
