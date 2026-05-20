/* AnimJoint data for relocData file 972 (FTSamusAnimLandingAirX) */
/* 1136 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimLandingAirX_joint1[24];
extern u16 dFTSamusAnimLandingAirX_joint2[14];
extern u16 dFTSamusAnimLandingAirX_joint4[28];
extern u16 dFTSamusAnimLandingAirX_joint5[56];
extern u16 dFTSamusAnimLandingAirX_joint6[36];
extern u16 dFTSamusAnimLandingAirX_joint7[22];
extern u16 dFTSamusAnimLandingAirX_joint8[16];
extern u16 dFTSamusAnimLandingAirX_joint11[16];
extern u16 dFTSamusAnimLandingAirX_joint12[46];
extern u16 dFTSamusAnimLandingAirX_joint14[36];
extern u16 dFTSamusAnimLandingAirX_joint15[38];
extern u16 dFTSamusAnimLandingAirX_joint17[28];
extern u16 dFTSamusAnimLandingAirX_joint19[38];
extern u16 dFTSamusAnimLandingAirX_joint20[46];
extern u16 dFTSamusAnimLandingAirX_joint22[28];
extern u16 dFTSamusAnimLandingAirX_joint23[50];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimLandingAirX_joints[] = {
	(AObjEvent32 *)dFTSamusAnimLandingAirX_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimLandingAirX_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimLandingAirX_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimLandingAirX_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimLandingAirX_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimLandingAirX_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimLandingAirX_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimLandingAirX_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimLandingAirX_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimLandingAirX_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimLandingAirX_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimLandingAirX_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimLandingAirX_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimLandingAirX_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimLandingAirX_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimLandingAirX_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimLandingAirX_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 121,
	ftAnimSetValRate(FT_ANIM_TRAY), 819, -598,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 734, 10, 121, -121,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1600, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimLandingAirX_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 174,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimLandingAirX_joint4[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 312, -67, 60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 8), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 420, -2, -117, 67, 60, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimLandingAirX_joint5[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -73, -11, -137, 39, 211, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -77, -9, -53, -32, 431, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -98, 324, -123, -322, 304, -527,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 571, 232, -698, -148, -623, -376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 367, -94, -420, 283, -448, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 383, 54, -132, 267, -280, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 476, 92, 114, 246, -231, 49,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimLandingAirX_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1175, 39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -997, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -954, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1211, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -922, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -880, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 141,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimLandingAirX_joint7[22] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 424, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 424, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 701,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimLandingAirX_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimLandingAirX_joint11[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 479, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 0, 0, 479, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimLandingAirX_joint12[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 82, -40, 137, -56, 333, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 107, -20, 122, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 492, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 451, -127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -152, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 25, -48, 77, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 38, 23, -103, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 20, -128, -24, -215, -62,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimLandingAirX_joint14[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1256, 258,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -960, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1087, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1299, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1112, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -793, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 198,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimLandingAirX_joint15[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, 14, 0, -24, -911, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 91, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -807, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 84, -2, -496, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 3, -27, -3, -389, 106,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimLandingAirX_joint17[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1255, 45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1340, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1239, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 672, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -193,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimLandingAirX_joint19[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -161, -5, -17, 33, -469, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -86, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -17, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -443, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -297, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -76, 5, -138, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 0, -28, -11, -41, 96,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimLandingAirX_joint20[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -140, -17, 4, 6, -913, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 28, 68, -675, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -180, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -193, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 94, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 151, 84, -471, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 197, 4, -247, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 132, 160, -36, -49, 198,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimLandingAirX_joint22[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1255, 45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1341, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1360, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 806, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -363,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimLandingAirX_joint23[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1471, 16, 1606, 29, -2076, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1531, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2010, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1445, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1372, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1407, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1464, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1421, -24, -1907, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1466, -58, 1414, -6, -1822, 84,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
