/* AnimJoint data for relocData file 1430 (FTKirbyAnimInhaleAbsorb) */
/* 2656 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimInhaleAbsorb_joint1[110];
extern u16 dFTKirbyAnimInhaleAbsorb_joint2[18];
extern u16 dFTKirbyAnimInhaleAbsorb_joint3[84];
extern u16 dFTKirbyAnimInhaleAbsorb_joint5[90];
extern u16 dFTKirbyAnimInhaleAbsorb_joint6[196];
extern u16 dFTKirbyAnimInhaleAbsorb_joint7[16];
extern u16 dFTKirbyAnimInhaleAbsorb_joint9[90];
extern u16 dFTKirbyAnimInhaleAbsorb_joint10[196];
extern u16 dFTKirbyAnimInhaleAbsorb_joint11[16];
extern u16 dFTKirbyAnimInhaleAbsorb_joint13[10];
extern u16 dFTKirbyAnimInhaleAbsorb_joint14[94];
extern u16 dFTKirbyAnimInhaleAbsorb_joint16[14];
extern u16 dFTKirbyAnimInhaleAbsorb_joint18[118];
extern u16 dFTKirbyAnimInhaleAbsorb_joint19[98];
extern u16 dFTKirbyAnimInhaleAbsorb_joint21[16];
extern u16 dFTKirbyAnimInhaleAbsorb_joint22[118];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimInhaleAbsorb_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimInhaleAbsorb_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimInhaleAbsorb_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimInhaleAbsorb_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimInhaleAbsorb_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleAbsorb_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimInhaleAbsorb_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimInhaleAbsorb_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleAbsorb_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimInhaleAbsorb_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimInhaleAbsorb_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleAbsorb_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimInhaleAbsorb_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleAbsorb_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleAbsorb_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimInhaleAbsorb_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleAbsorb_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimInhaleAbsorb_joint1[110] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAY, 2), 1200, 799, 4915, 517,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 4096, -204, 4096, -204,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 1200, -1199,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 2), 5131,
	ftAnimSetValRateT(FT_ANIM_SCAY, 2), 4915, -1134,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_SCAY, 1), 3430, -2867,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 2), 300,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 1), 3686, 3686,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6144, 2048, 6144,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAY, 3), 720, 4915,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 5324, -1024, 5324, -1023,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAY, 8), 480, 3276,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 8), 4505, 4505,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 840, 411,
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 11), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 10), 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 840, -240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimInhaleAbsorb_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 18), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimInhaleAbsorb_joint3[84] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 600, 6144, 6144, 6144,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -178, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 600, 6144, 6144, 6144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), -178, 29, 600, -383, 6144, -655, 6144, -655, 6144, -655,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 2), 0, 74, 312, -384,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4505, 4505, 4505,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 5734, -163, 4915, -163, 5734, -163,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 268, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 312, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 312, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 268, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -178, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -178, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimInhaleAbsorb_joint5[90] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 89, -120, -60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 268, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -180, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 268, -180, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 2), 268, -29, -150, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 89, -14,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -150, -120, -150, 60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -180, -24, -120, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 8), 89, 8, -180, 48,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 2), 178, 14, -120, 80,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 4), 178, -22, -120, 80,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), -120,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -120, 240, -60, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimInhaleAbsorb_joint6[196] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1051, -72, -1145, 4, -322, 122,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 3276, 3276,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 919, 38,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 2457, 3276, 3276,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1117, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -38, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -51, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -84, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 974, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 789, -72,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1201, -111, 14, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1343, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -54, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 804, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 772, -57,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 22), 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1220, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1015, 126, 44, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -261, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 724, -16, -968, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 1053, -32, -885, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -269, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -4, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 990, -116, -876, -173,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 758, -29, -1546, -176,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -12, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_SCAX, 4), -44, -24, 3072, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 760, 8, -1585, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 798, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1588, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1550, 267,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 867, -14, -1053, 449, -88, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 769, -32, -651, 317, 30, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 802, 17, -417, 215, 1, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 1, -220, 197, 0, -1,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimInhaleAbsorb_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimInhaleAbsorb_joint9[90] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -89, 120, -60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -268, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 180, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -268, 180, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 2), -268, 29, -150, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), 120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -89, 14,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 150, 120, -150, 60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 180, 24, -120, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 8), -89, -8, 180, -48,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 2), -178, -14, 120, -80,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 4), -178, 22, -120, 80,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), 120,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 120, -240, -60, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimInhaleAbsorb_joint10[196] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1051, 72, 1145, -3, -322, 123,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 3276, 3276,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -919, -38,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 2457, 3276, 3276,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1120, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -37, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -51, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -83, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -974, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -789, 71,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1205, 112, 14, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1347, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -53, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -804, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -772, 56,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 22), 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1224, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1018, -127, 43, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -251, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -724, 16, 968, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -1044, 23, 888, -1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -260, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -4, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -998, 112, 873, 174,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -758, 29, 1546, 176,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -13, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_SCAX, 4), -44, -23, 3072, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -761, -8, 1588, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -798, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1588, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1547, -267,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -867, 14, 1053, -446, -88, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -768, 32, 654, -316, 31, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -802, -17, 421, -218, 1, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -1, 217, -203, 0, -1,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimInhaleAbsorb_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimInhaleAbsorb_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimInhaleAbsorb_joint14[94] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 36, -302, 55, 237, -55,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -246, -51, 182, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 43, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -77, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -302, -28, 237, 25,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), -302,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 237, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -14, 14,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -302, 10, 237, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -265, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 224, 21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -16, -10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -290, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -7, -302, -12, 237, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTKirbyAnimInhaleAbsorb_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimInhaleAbsorb_joint18[118] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 61, 1785, -91, -1704, 272,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1786, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1798, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1191, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1148, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1420, -254,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1830, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1980, -70, -1701, -155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1714, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1971, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1931, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1706, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1714, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1792, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1663, -28,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1905, 38, -1664, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1905, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1297, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1654, -4, -1255, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1772, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1539, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1657, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, -12, 1785, 12, -1704, -47,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimInhaleAbsorb_joint19[98] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, -35, 302, -56, 233, -54,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 246, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 233, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -43, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 77, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 303, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 160, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 43, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 14, -15,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 302, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 265, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 16, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 155, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 224, 18,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 290, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 4, 302, 12, 233, 8,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimInhaleAbsorb_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimInhaleAbsorb_joint22[118] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, -61, -1785, 91, -1708, 272,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1430, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1798, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1191, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1152, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1424, -256,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1386, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1236, 70, -1704, -153,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1731, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1245, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1285, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1718, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1718, 29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1792, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1663, 28,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1311, -38, -1664, 118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1311, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1300, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1654, 4, -1255, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1772, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1539, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1657, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, 12, -1785, -12, -1708, -51,
	ftAnimEnd(),
};
