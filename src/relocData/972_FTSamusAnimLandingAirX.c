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
extern u16 dFTSamusAnimLandingAirX_joint22[78];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimLandingAirX_joints[] = {
	(u32)dFTSamusAnimLandingAirX_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimLandingAirX_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimLandingAirX_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimLandingAirX_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimLandingAirX_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimLandingAirX_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimLandingAirX_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimLandingAirX_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimLandingAirX_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimLandingAirX_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimLandingAirX_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimLandingAirX_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimLandingAirX_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimLandingAirX_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimLandingAirX_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF0103, /* [22] END */
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
u16 dFTSamusAnimLandingAirX_joint22[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1255, 45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1341, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1360, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 806, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -363,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFA41, 0x0010, 0x0646, 0x001D, 0xF7E4, 0xFFEC, 0x2805, 0x0005, 0x05FB, 0xFFB2, 0x2809, 0x0006, 0xF826, 0x0056, 0x2003, 0x0004, 0xFA5B, 0x0022, 0x2003, 0x0001, 0xFAA4, 0x001D, 0x2803, 0x0002, 0xFA81, 0xFFD9, 0x2005, 0x0001, 0x05B8, 0xFFC9, 0x200D, 0x0001, 0x058D, 0xFFE8, 0xF88D, 0x005D, 0x200F, 0x0001, 0xFA46, 0xFFC6, 0x0586, 0xFFFA, 0xF8E2, 0x0054, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
