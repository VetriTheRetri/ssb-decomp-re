/* AnimJoint data for relocData file 974 (FTSamusAnimTeeter) */
/* 1408 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimTeeter_joint1[48];
extern u16 dFTSamusAnimTeeter_joint2[40];
extern u16 dFTSamusAnimTeeter_joint4[72];
extern u16 dFTSamusAnimTeeter_joint5[22];
extern u16 dFTSamusAnimTeeter_joint6[18];
extern u16 dFTSamusAnimTeeter_joint7[22];
extern u16 dFTSamusAnimTeeter_joint8[22];
extern u16 dFTSamusAnimTeeter_joint11[22];
extern u16 dFTSamusAnimTeeter_joint12[26];
extern u16 dFTSamusAnimTeeter_joint14[20];
extern u16 dFTSamusAnimTeeter_joint15[64];
extern u16 dFTSamusAnimTeeter_joint17[52];
extern u16 dFTSamusAnimTeeter_joint19[66];
extern u16 dFTSamusAnimTeeter_joint20[56];
extern u16 dFTSamusAnimTeeter_joint22[60];
extern u16 dFTSamusAnimTeeter_joint23[48];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimTeeter_joints[] = {
	(AObjEvent32 *)dFTSamusAnimTeeter_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimTeeter_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimTeeter_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimTeeter_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimTeeter_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimTeeter_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimTeeter_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimTeeter_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimTeeter_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimTeeter_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimTeeter_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimTeeter_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimTeeter_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimTeeter_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimTeeter_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimTeeter_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimTeeter_joint1[48] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX), 0, 6, 0, 0,
	ftAnimSetValBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1800, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 268, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 140), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 140), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 120, -120,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 138), 120, -120,
	ftAnimBlock(0, 34),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 65), -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 40), 0, 6,
	ftAnimBlock(0, 39),
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1800, 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimTeeter_joint2[40] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), -60, 1440,
	ftAnimSetValBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 1620, -11,
	ftAnimSetValAfterT(FT_ANIM_TRAX, 140), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 1), 120,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 49), 1727,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 49), 103,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 89), 1620, 56, 120, -9,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 1), -60,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 1), 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimTeeter_joint4[72] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 0, -7, 0, -12,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 28), -223, -56,
	ftAnimSetValAfterT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 140), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 28), 0, 2,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 19), 0, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 42), 312, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 19), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_TRAX, 13), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 13), 84, 12,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 13), -87,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), -47, 81,
	ftAnimSetValAfterT(FT_ANIM_TRAX, 40), 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateT(FT_ANIM_ROTX, 70), 0, -7,
	ftAnimBlock(0, 30),
	ftAnimSetValAfterT(FT_ANIM_TRAX, 40), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 40), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 40), 0,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimTeeter_joint5[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -1132, 0, -1722, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 1377,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 139), 1377, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 139), -1132, -1722,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, -1722, 1377,
	ftAnimLoop(0x6800, -42),
};

/* Joint 6 */
u16 dFTSamusAnimTeeter_joint6[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -739,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 140), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 139), -739, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -739,
	ftAnimLoop(0x6800, -34),
};

/* Joint 7 */
u16 dFTSamusAnimTeeter_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 701, 424, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 140), 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 140), 701, 424, 0, 0,
	ftAnimLoop(0x6800, -42),
};

/* Joint 8 */
u16 dFTSamusAnimTeeter_joint8[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 148), 67, -17, -1474, 98, 60, -42,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 8,
	ftAnimBlock(0, 140),
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimTeeter_joint11[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 480, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 140), 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 140), 0, 0, 0, 480, 0,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimTeeter_joint12[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, 0, -128, 0, -215, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 139), 58, 0, -128, 0, -215, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 0, -128, 0, -215, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimTeeter_joint14[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 140), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 139), -595, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 0,
	ftAnimLoop(0x6800, -38),
};

/* Joint 15 */
u16 dFTSamusAnimTeeter_joint15[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 73, 0, -46, 0, -73, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 137), -43, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 139), 73, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 23, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 66), 26, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 21, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), -162, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -159, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -73, 6,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -44, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -46, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 73, 0, -46, 0, -73, 0,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimTeeter_joint17[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 169, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 140), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 31, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 10, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 369, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 370, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 168, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 169, 0,
	ftAnimLoop(0x6800, -102),
};

/* Joint 19 */
u16 dFTSamusAnimTeeter_joint19[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 0, -48, 0, -73, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 85), -80, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 139), -48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 58), -79, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -74, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 28, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 26, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), -100, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -82, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 53), -76, 0,
	ftAnimBlock(0, 37),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -100, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -67, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 0, -48, 0, -73, -6,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimTeeter_joint20[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -73, 0, 46, 0, -73, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 137), 43, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 139), -73, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -2, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 58), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 55), -73, 6,
	ftAnimBlock(0, 53),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 44, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 46, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -73, 0, 46, 0, -73, 0,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimTeeter_joint22[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 169, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 140), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 84, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 59, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 4, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 46), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 242, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 253, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), 220, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 197, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 169, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 169, 0,
	ftAnimLoop(0x6800, -116),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimTeeter_joint23[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 37, 0, 60, -2, -73, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 139), 38, -1, 59, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -206, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -211, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 58), 44, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 46, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 55), -67, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 37, 0, 60, 0, -73, -6,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
