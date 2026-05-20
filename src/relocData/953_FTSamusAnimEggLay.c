/* AnimJoint data for relocData file 953 (FTSamusAnimEggLay) */
/* 1088 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimEggLay_joint1[26];
extern u16 dFTSamusAnimEggLay_joint2[8];
extern u16 dFTSamusAnimEggLay_joint4[12];
extern u16 dFTSamusAnimEggLay_joint5[58];
extern u16 dFTSamusAnimEggLay_joint6[24];
extern u16 dFTSamusAnimEggLay_joint7[8];
extern u16 dFTSamusAnimEggLay_joint8[12];
extern u16 dFTSamusAnimEggLay_joint11[8];
extern u16 dFTSamusAnimEggLay_joint12[48];
extern u16 dFTSamusAnimEggLay_joint14[24];
extern u16 dFTSamusAnimEggLay_joint15[58];
extern u16 dFTSamusAnimEggLay_joint17[24];
extern u16 dFTSamusAnimEggLay_joint19[44];
extern u16 dFTSamusAnimEggLay_joint20[56];
extern u16 dFTSamusAnimEggLay_joint22[24];
extern u16 dFTSamusAnimEggLay_joint23[64];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimEggLay_joints[] = {
	(AObjEvent32 *)dFTSamusAnimEggLay_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimEggLay_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimEggLay_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimEggLay_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimEggLay_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimEggLay_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimEggLay_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimEggLay_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimEggLay_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimEggLay_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimEggLay_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimEggLay_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimEggLay_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimEggLay_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimEggLay_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimEggLay_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimEggLay_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 52), 6, 10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 31), 1651, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 51), 1600,
	ftAnimBlock(0, 21),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 30), 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimEggLay_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 82),
	ftAnimLoop(0x6800, -14),
};

/* Joint 4 */
u16 dFTSamusAnimEggLay_joint4[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 82),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimEggLay_joint5[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, 0, -1722, 0, 1377, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 58), -1728, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 81), -1132, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), 1376, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1373, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 37), 1374, 1,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1728, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -1722, 0,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1375, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1377, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 0, -1722, 0, 1377, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimEggLay_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 48), -778, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -778, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), -739, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 7 */
u16 dFTSamusAnimEggLay_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimBlock(0, 82),
	ftAnimLoop(0x6800, -14),
};

/* Joint 8 */
u16 dFTSamusAnimEggLay_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 82),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimEggLay_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 82),
	ftAnimLoop(0x6800, -14),
};

/* Joint 12 */
u16 dFTSamusAnimEggLay_joint12[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, 0, -128, 0, -215, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 50), 45, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 81), -128, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -205, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -207, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 41), -215, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 46, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), 58, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 0, -128, 0, -215, 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimEggLay_joint14[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), -649, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -650, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), -596, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 15 */
u16 dFTSamusAnimEggLay_joint15[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, 0, -27, 0, -389, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 67), 83, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 75), -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), -327, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 40), -389, 0,
	ftAnimBlock(0, 26),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 83, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 87, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 0, -27, 0, -389, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimEggLay_joint17[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), 362, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 363, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 43), 478, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 19 */
u16 dFTSamusAnimEggLay_joint19[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 0, -28, 0, -41, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 80), -75, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 81), -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 44), -18, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -19, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), -42, 0,
	ftAnimBlock(0, 35),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -75, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 0, -28, 0, -41, 0,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimEggLay_joint20[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, 0, 160, 0, -49, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), 132, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 56), 243, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 44), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), -49, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 133, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), 160, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 244, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), 226, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 0, 160, 0, -49, 0,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimEggLay_joint22[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), 328, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 329, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 43), 442, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 23 */
u16 dFTSamusAnimEggLay_joint23[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, 0, 193, 0, -213, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), 209, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 57), 131, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 43), -189, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -190, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 37), -213, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 208, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), 192, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 132, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 142, 0,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 193, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 0, 193, 0, -213, 0,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};
