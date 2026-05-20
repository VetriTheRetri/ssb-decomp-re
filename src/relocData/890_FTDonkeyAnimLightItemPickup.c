/* AnimJoint data for relocData file 890 (FTDonkeyAnimLightItemPickup) */
/* 1008 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimLightItemPickup_joint1[14];
extern u16 dFTDonkeyAnimLightItemPickup_joint2[16];
extern u16 dFTDonkeyAnimLightItemPickup_joint4[12];
extern u16 dFTDonkeyAnimLightItemPickup_joint5[34];
extern u16 dFTDonkeyAnimLightItemPickup_joint6[24];
extern u16 dFTDonkeyAnimLightItemPickup_joint7[8];
extern u16 dFTDonkeyAnimLightItemPickup_joint8[16];
extern u16 dFTDonkeyAnimLightItemPickup_joint10[8];
extern u16 dFTDonkeyAnimLightItemPickup_joint11[60];
extern u16 dFTDonkeyAnimLightItemPickup_joint12[36];
extern u16 dFTDonkeyAnimLightItemPickup_joint13[34];
extern u16 dFTDonkeyAnimLightItemPickup_joint14[10];
extern u16 dFTDonkeyAnimLightItemPickup_joint16[12];
extern u16 dFTDonkeyAnimLightItemPickup_joint17[24];
extern u16 dFTDonkeyAnimLightItemPickup_joint19[16];
extern u16 dFTDonkeyAnimLightItemPickup_joint21[34];
extern u16 dFTDonkeyAnimLightItemPickup_joint22[34];
extern u16 dFTDonkeyAnimLightItemPickup_joint24[16];
extern u16 dFTDonkeyAnimLightItemPickup_joint25[46];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimLightItemPickup_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimLightItemPickup_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimLightItemPickup_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimLightItemPickup_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimLightItemPickup_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimLightItemPickup_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimLightItemPickup_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimLightItemPickup_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimLightItemPickup_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimLightItemPickup_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimLightItemPickup_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimLightItemPickup_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimLightItemPickup_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimLightItemPickup_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimLightItemPickup_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimLightItemPickup_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimLightItemPickup_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimLightItemPickup_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimLightItemPickup_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimLightItemPickup_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimLightItemPickup_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1032, -402,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1049, -245,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1032, -402,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimLightItemPickup_joint2[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -185, 184, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -265, -41, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimLightItemPickup_joint4[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 750,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 781,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 750,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimLightItemPickup_joint5[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -17, -84, 12, -473, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -65, 5, -82, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -324, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -366, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -454, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 3, -84, -1, -473, -18,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimLightItemPickup_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -201,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -763, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -741, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -443, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimLightItemPickup_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimLightItemPickup_joint8[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 384, -168, 117,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 174, -67, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimLightItemPickup_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimLightItemPickup_joint11[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1492, 69, -1780, -82, 1129, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1562, -17, -1863, 2, 1178, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1457, -69, -1775, 59, 963, -167,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1480, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1820, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 804, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1024, 212,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1229, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1576, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1543, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, -50, -1780, 39, 1129, -100,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimLightItemPickup_joint12[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -456,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -485, 299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -206, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -552, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -856, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 259,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimLightItemPickup_joint13[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 401, 85, 628, -29, -98, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 440, -95, -118, -157, 220, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 19, -85, -2, 29, 70, -55,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimLightItemPickup_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 119, 119,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimLightItemPickup_joint16[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -706,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -404,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimLightItemPickup_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -86, -53, -394, -9, -304, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -95, 14, -395, 2, -307, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, 8, -394, 1, -304, 2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimLightItemPickup_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1004, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1004, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimLightItemPickup_joint21[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 36, 24, 132, -377, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -53, -13, -378, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 267, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 219, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 44, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, -9, 24, -19, -377, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimLightItemPickup_joint22[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 99, -32, 216, -18, -297, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 90, 12, 213, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -148, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -187, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -291, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 99, 9, 216, 3, -297, -6,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimLightItemPickup_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 993, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 994, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimLightItemPickup_joint25[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 57, 105, 130, -383, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -499, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 12, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 330, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 291, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 125, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -462, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -395, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -11, 105, -20, -383, 12,
	ftAnimEnd(),
	0x0000, 0x0000,
};
