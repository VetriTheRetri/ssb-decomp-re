/* AnimJoint data for relocData file 1093 (FTSamusAnimChargingNeutralSpecial) */
/* 768 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimChargingNeutralSpecial_joint1[28];
extern u16 dFTSamusAnimChargingNeutralSpecial_joint2[10];
extern u16 dFTSamusAnimChargingNeutralSpecial_joint4[30];
extern u16 dFTSamusAnimChargingNeutralSpecial_joint5[26];
extern u16 dFTSamusAnimChargingNeutralSpecial_joint6[16];
extern u16 dFTSamusAnimChargingNeutralSpecial_joint7[18];
extern u16 dFTSamusAnimChargingNeutralSpecial_joint8[14];
extern u16 dFTSamusAnimChargingNeutralSpecial_joint11[14];
extern u16 dFTSamusAnimChargingNeutralSpecial_joint12[26];
extern u16 dFTSamusAnimChargingNeutralSpecial_joint14[20];
extern u16 dFTSamusAnimChargingNeutralSpecial_joint15[26];
extern u16 dFTSamusAnimChargingNeutralSpecial_joint17[16];
extern u16 dFTSamusAnimChargingNeutralSpecial_joint19[26];
extern u16 dFTSamusAnimChargingNeutralSpecial_joint20[26];
extern u16 dFTSamusAnimChargingNeutralSpecial_joint22[16];
extern u16 dFTSamusAnimChargingNeutralSpecial_joint23[26];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimChargingNeutralSpecial_joints[] = {
	(u32)dFTSamusAnimChargingNeutralSpecial_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimChargingNeutralSpecial_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimChargingNeutralSpecial_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimChargingNeutralSpecial_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimChargingNeutralSpecial_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimChargingNeutralSpecial_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimChargingNeutralSpecial_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimChargingNeutralSpecial_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimChargingNeutralSpecial_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimChargingNeutralSpecial_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimChargingNeutralSpecial_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimChargingNeutralSpecial_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimChargingNeutralSpecial_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimChargingNeutralSpecial_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimChargingNeutralSpecial_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimChargingNeutralSpecial_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimChargingNeutralSpecial_joint1[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), -551,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 9), -551, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 1,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 1200, -56,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 1200, 34,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 1259, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 21), -552,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimChargingNeutralSpecial_joint2[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 16,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -18),
};

/* Joint 4 */
u16 dFTSamusAnimChargingNeutralSpecial_joint4[30] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -8, 142, 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -8, 142, 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 7), 142,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -3, 30, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -213, 0,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -58),
};

/* Joint 5 */
u16 dFTSamusAnimChargingNeutralSpecial_joint5[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -967, 0, -1871, -1, 1199, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -967, 0, -1872, 1, 1208, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -967, 0, -1871, 1, 1199, -8,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimChargingNeutralSpecial_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -468, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -456, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -467, -11,
	ftAnimLoop(0x6800, -30),
};

/* Joint 7 */
u16 dFTSamusAnimChargingNeutralSpecial_joint7[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 402, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 402, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 444, 8,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimChargingNeutralSpecial_joint8[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	_FT_ANIM_CMD(11, 0, 1), 16,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimChargingNeutralSpecial_joint11[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 479, 0,
	_FT_ANIM_CMD(11, 0, 1), 16,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimChargingNeutralSpecial_joint12[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 92, 0, 50, -3, 2950, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 92, 0, 46, 3, 2958, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 92, 0, 50, 3, 2950, -8,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimChargingNeutralSpecial_joint14[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -599, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -599, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -600, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, 0,
	ftAnimLoop(0x6800, -38),
};

/* Joint 15 */
u16 dFTSamusAnimChargingNeutralSpecial_joint15[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, 0, -87, 0, -722, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -16, 0, -87, 0, -726, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, 0, -87, 0, -722, 3,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimChargingNeutralSpecial_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 518, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 522, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 518, -4,
	ftAnimLoop(0x6800, -30),
};

/* Joint 19 */
u16 dFTSamusAnimChargingNeutralSpecial_joint19[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 34, 0, 90, 0, 258, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 34, 0, 90, 0, 257, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34, 0, 90, 0, 258, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimChargingNeutralSpecial_joint20[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 76, 0, 93, 0, -315, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 75, 0, 93, 0, -316, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 75, 0, 93, 0, -315, 1,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimChargingNeutralSpecial_joint22[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 923, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 927, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 923, -3,
	ftAnimLoop(0x6800, -30),
};

/* Joint 23 */
u16 dFTSamusAnimChargingNeutralSpecial_joint23[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 64, 0, 240, 0, -501, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 65, 0, 241, 0, -503, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 64, 0, 241, 0, -501, 2,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};
