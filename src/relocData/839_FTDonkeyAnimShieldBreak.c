/* AnimJoint data for relocData file 839 (FTDonkeyAnimShieldBreak) */
/* 2000 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimShieldBreak_joint1[48];
extern u16 dFTDonkeyAnimShieldBreak_joint2[30];
extern u16 dFTDonkeyAnimShieldBreak_joint4[34];
extern u16 dFTDonkeyAnimShieldBreak_joint5[118];
extern u16 dFTDonkeyAnimShieldBreak_joint6[62];
extern u16 dFTDonkeyAnimShieldBreak_joint7[8];
extern u16 dFTDonkeyAnimShieldBreak_joint10[32];
extern u16 dFTDonkeyAnimShieldBreak_joint11[132];
extern u16 dFTDonkeyAnimShieldBreak_joint12[56];
extern u16 dFTDonkeyAnimShieldBreak_joint13[10];
extern u16 dFTDonkeyAnimShieldBreak_joint16[10];
extern u16 dFTDonkeyAnimShieldBreak_joint17[104];
extern u16 dFTDonkeyAnimShieldBreak_joint19[40];
extern u16 dFTDonkeyAnimShieldBreak_joint21[64];
extern u16 dFTDonkeyAnimShieldBreak_joint22[80];
extern u16 dFTDonkeyAnimShieldBreak_joint24[32];
extern u16 dFTDonkeyAnimShieldBreak_joint25[90];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimShieldBreak_joints[] = {
	(u32)dFTDonkeyAnimShieldBreak_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimShieldBreak_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimShieldBreak_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimShieldBreak_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimShieldBreak_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimShieldBreak_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimShieldBreak_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimShieldBreak_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimShieldBreak_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimShieldBreak_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimShieldBreak_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimShieldBreak_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimShieldBreak_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimShieldBreak_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimShieldBreak_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimShieldBreak_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimShieldBreak_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimShieldBreak_joint1[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 30, 949, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -196, -4, -3, 0, 34, 0, 22, -1, 1005, 11, -39, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), -196, -14, -3, 0, 34, 0, 22, -1, 1005, 8, -39, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), -982, -39, -19, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -6, 14, 1061, 240,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimShieldBreak_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -33, 0, -122, -24, -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), -33, 0, -122, -17, -1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -66, -245, -2,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimShieldBreak_joint4[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 786, -55, -134, 23,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 144, -16, -110, 3, -93, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 144, 11, -110, 1, -93, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), 766, 13, 0, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimShieldBreak_joint5[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -133, -191, -196, -22, -41, 183,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -611, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -249, -56, 262, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -313, -38, 246, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -478, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 124, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -621, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -1001, -8,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -529, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -517, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -517, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -428, 32,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1008, 8, 117, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -173, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -480, 71,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -400, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -78, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -60, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -147, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -189, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -448, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -409, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -136, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -144, -8, -149, -2, -442, 6,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimShieldBreak_joint6[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -813, -115,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -842, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -620, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -308, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -267, 43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -328, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -370, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -1074, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1058, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1030, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1047, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimShieldBreak_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimShieldBreak_joint10[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, -71, 268, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -484, -16, 253, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), -484, 8, 253, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -35, 2, 223, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimShieldBreak_joint11[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -708, 33, 245, 232, 2569, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 630, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -674, 149, 2632, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -410, 149, 3000, 243,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -548, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3118, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 494, -100, 2959, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2939, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 445, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -580, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -331, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2945, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 2922, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 448, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 408, -11,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -311, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -28, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -22, 47, 2914, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3112, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 223, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 395, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 148, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3144, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 2842, -38,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 220, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 47, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 39, -8, 133, -15, 2805, -37,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimShieldBreak_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -675, -150,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -801, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -516, 327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -146, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -224, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -297, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -796, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -781, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimShieldBreak_joint13[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 893,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 60), 98,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimShieldBreak_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimShieldBreak_joint17[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -140, 89, -138, -55, -476, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -516, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -828, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 224, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 574, 257,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 797, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -526, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), -467, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 823, 25, -849, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), -1186, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 34), 946, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 937, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 313, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1200, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -900, 112,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -473, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -690, -12,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 210, -116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -96, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -773, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -592, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -369, -272, -699, -8, -314, 278,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimShieldBreak_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 822, 182,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1166, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1126, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 921, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 918, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), 1049, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1047, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1064, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1073, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimShieldBreak_joint21[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -41, 19, 59, 4, 59, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 209, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 59), 150, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -70, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -14, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 157, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 212, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 50), 11, -12,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 157, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 27), 169, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 178, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 270, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 302, 31, 155, 5, 0, -12,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimShieldBreak_joint22[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 48, -34, 56, -19, -651, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -29, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 50), -28, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -637, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 42), -677, 3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -29, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), 117, 4,
	ftAnimBlock(0, 33),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -36, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -64, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -673, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -553, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 121, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 122, 40,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -35, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 201, 78, 160, 196, -447, 105,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimShieldBreak_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 787, 114,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1140, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1145, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 47), 1044, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1042, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1070, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1078, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimShieldBreak_joint25[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 44, 115, 132, -39, -56, 92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -99, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 227, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 358, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 367, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 37), 329, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -103, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 50), 49, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 229, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), -96, 5,
	ftAnimBlock(0, 33),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 308, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -110, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -91, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -128, -8,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 57, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 69, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -142, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -243, -101, 74, 5, -110, 0,
	ftAnimEnd(),
};
