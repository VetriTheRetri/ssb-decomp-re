/* AnimJoint data for relocData file 935 (FTDonkeyAnimGiantPunchGroundLoop) */
/* 1200 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimGiantPunchGroundLoop_joint1[24];
extern u16 dFTDonkeyAnimGiantPunchGroundLoop_joint2[18];
extern u16 dFTDonkeyAnimGiantPunchGroundLoop_joint4[18];
extern u16 dFTDonkeyAnimGiantPunchGroundLoop_joint5[40];
extern u16 dFTDonkeyAnimGiantPunchGroundLoop_joint6[16];
extern u16 dFTDonkeyAnimGiantPunchGroundLoop_joint7[10];
extern u16 dFTDonkeyAnimGiantPunchGroundLoop_joint8[14];
extern u16 dFTDonkeyAnimGiantPunchGroundLoop_joint10[14];
extern u16 dFTDonkeyAnimGiantPunchGroundLoop_joint11[100];
extern u16 dFTDonkeyAnimGiantPunchGroundLoop_joint12[52];
extern u16 dFTDonkeyAnimGiantPunchGroundLoop_joint13[12];
extern u16 dFTDonkeyAnimGiantPunchGroundLoop_joint14[10];
extern u16 dFTDonkeyAnimGiantPunchGroundLoop_joint16[18];
extern u16 dFTDonkeyAnimGiantPunchGroundLoop_joint17[40];
extern u16 dFTDonkeyAnimGiantPunchGroundLoop_joint19[24];
extern u16 dFTDonkeyAnimGiantPunchGroundLoop_joint21[36];
extern u16 dFTDonkeyAnimGiantPunchGroundLoop_joint22[48];
extern u16 dFTDonkeyAnimGiantPunchGroundLoop_joint24[24];
extern u16 dFTDonkeyAnimGiantPunchGroundLoop_joint25[32];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimGiantPunchGroundLoop_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchGroundLoop_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchGroundLoop_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchGroundLoop_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchGroundLoop_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchGroundLoop_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchGroundLoop_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchGroundLoop_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchGroundLoop_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchGroundLoop_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchGroundLoop_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchGroundLoop_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchGroundLoop_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchGroundLoop_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchGroundLoop_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchGroundLoop_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchGroundLoop_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchGroundLoop_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchGroundLoop_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchGroundLoop_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimGiantPunchGroundLoop_joint1[24] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 94, 0, 1003, 0, -100, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 94, 904, -100,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1003, 0, -100, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 6), 94,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimGiantPunchGroundLoop_joint2[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -110, 0, -551, 0, 107, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -110, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -551, 107,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimGiantPunchGroundLoop_joint4[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 453, -14, -172, -9, -168, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 453, 0, -172, -4, -168, -7,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimGiantPunchGroundLoop_joint5[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -490, 22, -602, -41, -426, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -606, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -427, -19, -515, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -448, -18, -490, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -489, -2, -428, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -490, -1, -602, 3, -426, 2,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimGiantPunchGroundLoop_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -636, 49,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -632, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, -4,
	ftAnimLoop(0x6800, -30),
};

/* Joint 7 */
u16 dFTDonkeyAnimGiantPunchGroundLoop_joint7[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 8,
	ftAnimBlock(0, 12),
	ftAnimLoop(0x6800, -18),
};

/* Joint 8 */
u16 dFTDonkeyAnimGiantPunchGroundLoop_joint8[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -31, -10, -60, 0, 29, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -31, -60, 29,
	ftAnimLoop(0x6800, -26),
};

/* Joint 10 */
u16 dFTDonkeyAnimGiantPunchGroundLoop_joint10[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -441, -2, 215, 7, -161, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -441, 215, -161,
	ftAnimLoop(0x6800, -26),
};

/* Joint 11 */
u16 dFTDonkeyAnimGiantPunchGroundLoop_joint11[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -80, -136, 1293, 57, -937, -245,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -517, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1350, 111, -1182, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1516, 131, -1539, -253,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1711, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1614, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -653, -206, 1591, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -931, -319, 1722, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1292, -263, 1647, -104, -1675, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1535, -51, -2247, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1513, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1469, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1145, -447,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1560, -112, -2474, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1760, 0, -2815, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1560, 35, 491, -415, -2453, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1689, -128, 315, -176, -2546, -92,
	ftAnimLoop(0x6800, -196),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimGiantPunchGroundLoop_joint12[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -457, -176,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -633, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -796, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -392, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -619, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -836, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -810, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -685, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -690, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -648, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -640, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -457, 182,
	ftAnimLoop(0x6800, -102),
};

/* Joint 13 */
u16 dFTDonkeyAnimGiantPunchGroundLoop_joint13[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 446, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 446,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimGiantPunchGroundLoop_joint14[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	_FT_ANIM_CMD(11, 0, 1), 8,
	ftAnimBlock(0, 12),
	ftAnimLoop(0x6800, -18),
};

/* Joint 16 */
u16 dFTDonkeyAnimGiantPunchGroundLoop_joint16[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -713, -24, 53, 2, 53, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -713, 18, 53, 11, 53, 7,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimGiantPunchGroundLoop_joint17[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -90, 15, -545, -1, -512, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -546, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 66, -43, -658, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 16, -50, -612, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -74, -27, -527, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -90, -15, -545, 1, -512, 15,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimGiantPunchGroundLoop_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 482, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 536, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 490, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 482, -8,
	ftAnimLoop(0x6800, -46),
};

/* Joint 21 */
u16 dFTDonkeyAnimGiantPunchGroundLoop_joint21[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -296, -5, -425, 1, 463, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -424, -1, 464, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -332, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -319, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -320, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -296, 23, -425, -1, 463, -1,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimGiantPunchGroundLoop_joint22[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -80, -5, 289, -4, -857, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -107, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 300, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -946, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -919, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -868, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -91, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -80, 5, 300, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, 0, 289, -11, -857, 10,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimGiantPunchGroundLoop_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1006, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1051, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1030, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1013, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1006, -6,
	ftAnimLoop(0x6800, -46),
};

/* Joint 25 */
u16 dFTDonkeyAnimGiantPunchGroundLoop_joint25[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -29, 2, -288, 10, -159, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -41, 7, -298, 5, -154, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -29, 11, -288, 9, -159, -5,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
