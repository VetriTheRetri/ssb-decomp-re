/* AnimJoint data for relocData file 971 (FTSamusAnimCrouchEnd) */
/* 848 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCrouchEnd_joint1[20];
extern u16 dFTSamusAnimCrouchEnd_joint2[20];
extern u16 dFTSamusAnimCrouchEnd_joint4[32];
extern u16 dFTSamusAnimCrouchEnd_joint5[34];
extern u16 dFTSamusAnimCrouchEnd_joint6[16];
extern u16 dFTSamusAnimCrouchEnd_joint7[22];
extern u16 dFTSamusAnimCrouchEnd_joint8[10];
extern u16 dFTSamusAnimCrouchEnd_joint11[14];
extern u16 dFTSamusAnimCrouchEnd_joint12[38];
extern u16 dFTSamusAnimCrouchEnd_joint14[24];
extern u16 dFTSamusAnimCrouchEnd_joint15[30];
extern u16 dFTSamusAnimCrouchEnd_joint17[20];
extern u16 dFTSamusAnimCrouchEnd_joint19[24];
extern u16 dFTSamusAnimCrouchEnd_joint20[24];
extern u16 dFTSamusAnimCrouchEnd_joint22[20];
extern u16 dFTSamusAnimCrouchEnd_joint23[30];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimCrouchEnd_joints[] = {
	(u32)dFTSamusAnimCrouchEnd_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimCrouchEnd_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimCrouchEnd_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimCrouchEnd_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimCrouchEnd_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimCrouchEnd_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimCrouchEnd_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimCrouchEnd_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimCrouchEnd_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimCrouchEnd_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimCrouchEnd_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimCrouchEnd_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimCrouchEnd_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimCrouchEnd_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimCrouchEnd_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimCrouchEnd_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimCrouchEnd_joint1[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 832, 175, 222, -50,
	ftAnimSetValBlock(FT_ANIM_TRAX), 26,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 1600, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 7), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimCrouchEnd_joint2[20] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), 23, 0, -84, 19,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -145, -23,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 7), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimCrouchEnd_joint4[32] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 6, 0, -9, 0, 35,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -8, 142,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 23, 0, -38, 0, 139, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 291, 81,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimCrouchEnd_joint5[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -846, -18, -1663, 7, 1177, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1119, -25, -1712, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1148, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1257, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1343, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, -12, -1722, -10, 1377, 33,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimCrouchEnd_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -798, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -723, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimCrouchEnd_joint7[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 470, 6, -134, 1, 111, 3, 454, 0, 7, -3, -3, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 701, 0, 0, 453, -8, -15,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimCrouchEnd_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimCrouchEnd_joint11[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 479, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimCrouchEnd_joint12[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1614, 26, -1515, 19, 1483, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1478, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1468, -29, 1136, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1508, -33, 1247, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1536, -20, 1348, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1550, -13, -1479, -1, 1392, 44,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimCrouchEnd_joint14[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -743, 56,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -354, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -271, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -526, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, -68,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimCrouchEnd_joint15[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 315, -101, -384, 45, -1095, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -26, 2, -425, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 96, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 97, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, -10, -27, -1, -389, 36,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimCrouchEnd_joint17[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1361, -52,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 711, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 554, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -75,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimCrouchEnd_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -90, 5, 307, -61, -372, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -99, 21, -50, 9, -80, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 24, -29, 20, -45, 35,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimCrouchEnd_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -392, 107, 354, -15, -434, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 191, 45, 187, -31, -107, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 34, 160, -26, -49, 57,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimCrouchEnd_joint22[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1300, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 729, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 555, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -113,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimCrouchEnd_joint23[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, -14, -265, 115, -277, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 140, 10, -242, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 168, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 180, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 1, 193, 12, -213, 28,
	ftAnimEnd(),
};
