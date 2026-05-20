/* AnimJoint data for relocData file 1305 (FTKirbyAnimCeilingBonk) */
/* 864 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimCeilingBonk_joint1[10];
extern u16 dFTKirbyAnimCeilingBonk_joint2[32];
extern u16 dFTKirbyAnimCeilingBonk_joint3[10];
extern u16 dFTKirbyAnimCeilingBonk_joint5[10];
extern u16 dFTKirbyAnimCeilingBonk_joint6[28];
extern u16 dFTKirbyAnimCeilingBonk_joint7[14];
extern u16 dFTKirbyAnimCeilingBonk_joint9[10];
extern u16 dFTKirbyAnimCeilingBonk_joint10[28];
extern u16 dFTKirbyAnimCeilingBonk_joint11[14];
extern u16 dFTKirbyAnimCeilingBonk_joint13[16];
extern u16 dFTKirbyAnimCeilingBonk_joint14[34];
extern u16 dFTKirbyAnimCeilingBonk_joint16[14];
extern u16 dFTKirbyAnimCeilingBonk_joint18[56];
extern u16 dFTKirbyAnimCeilingBonk_joint19[34];
extern u16 dFTKirbyAnimCeilingBonk_joint21[14];
extern u16 dFTKirbyAnimCeilingBonk_joint22[64];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimCeilingBonk_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimCeilingBonk_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimCeilingBonk_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimCeilingBonk_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimCeilingBonk_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimCeilingBonk_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimCeilingBonk_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimCeilingBonk_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimCeilingBonk_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimCeilingBonk_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimCeilingBonk_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimCeilingBonk_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimCeilingBonk_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimCeilingBonk_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimCeilingBonk_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimCeilingBonk_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimCeilingBonk_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimCeilingBonk_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 600, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimCeilingBonk_joint2[32] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_SCAY), -312, 984, 4096, -1040,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), 0, -268, 0, 0, 0, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAY, 1), 172, 775, 2048, -819,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAY, 4), 172, -554, 2048, 585,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAY, 3), -312, -975, 4096, 1046,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimCeilingBonk_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 268, 0, 0, 0, 312, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimCeilingBonk_joint5[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 178, -120, -120, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimCeilingBonk_joint6[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -521, 88, -608, -57, 1262, -32,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -460, -68, -624, 18, 1255, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -521, -60, -608, 15, 1262, 6,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimCeilingBonk_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimCeilingBonk_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -178, 120, -120, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimCeilingBonk_joint10[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1087, -87, 1000, -57, -346, -32,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1153, 72, 982, 20, -358, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1087, 66, 1000, 18, -345, 12,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimCeilingBonk_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimCeilingBonk_joint13[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, 0, 58, -1072, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -804, 0, 0, -58, -1072, 58,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimCeilingBonk_joint14[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, -257, -302, 11, 237, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -283, -20, 246, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -159, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -132, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 217, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 297, 80, -300, -17, 233, -12,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimCeilingBonk_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimCeilingBonk_joint18[56] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1930, 237, 1766, 110, -1255, -253,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1697, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1693, 99, 1877, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1731, -105, 1786, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1800, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1904, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1801, 87, -1699, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1867, -85, -1378, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1931, -63, 1766, -33, -1255, 122,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimCeilingBonk_joint19[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 257, 300, -10, 233, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 282, 20, 246, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 119, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 90, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -216, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, -80, 300, 17, 233, -12,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimCeilingBonk_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimCeilingBonk_joint22[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1286, -233, -1766, -89, -1259, -279,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1668, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1519, -91, -1856, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1469, 101, -1775, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1788, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1315, 33, -1692, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1404, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1401, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1351, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1286, 64, -1766, 21, -1259, 144,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
