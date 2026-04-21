/* AnimJoint data for relocData file 1045 (FTSamusAnimLightItemPickup) */
/* 1168 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimLightItemPickup_joint1[16];
extern u16 dFTSamusAnimLightItemPickup_joint2[24];
extern u16 dFTSamusAnimLightItemPickup_joint4[24];
extern u16 dFTSamusAnimLightItemPickup_joint5[70];
extern u16 dFTSamusAnimLightItemPickup_joint6[36];
extern u16 dFTSamusAnimLightItemPickup_joint7[16];
extern u16 dFTSamusAnimLightItemPickup_joint8[16];
extern u16 dFTSamusAnimLightItemPickup_joint11[16];
extern u16 dFTSamusAnimLightItemPickup_joint12[56];
extern u16 dFTSamusAnimLightItemPickup_joint14[28];
extern u16 dFTSamusAnimLightItemPickup_joint15[48];
extern u16 dFTSamusAnimLightItemPickup_joint17[28];
extern u16 dFTSamusAnimLightItemPickup_joint19[34];
extern u16 dFTSamusAnimLightItemPickup_joint20[44];
extern u16 dFTSamusAnimLightItemPickup_joint22[28];
extern u16 dFTSamusAnimLightItemPickup_joint23[52];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimLightItemPickup_joints[] = {
	(u32)dFTSamusAnimLightItemPickup_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimLightItemPickup_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimLightItemPickup_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimLightItemPickup_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimLightItemPickup_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimLightItemPickup_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimLightItemPickup_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimLightItemPickup_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimLightItemPickup_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimLightItemPickup_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimLightItemPickup_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimLightItemPickup_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimLightItemPickup_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimLightItemPickup_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimLightItemPickup_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimLightItemPickup_joint23, /* [22] joint 23 */
};

/* 4-byte alignment padding */
static u32 dFTSamusAnimLightItemPickup_pad[1] = { 0 };

/* Joint 1 */
u16 dFTSamusAnimLightItemPickup_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 1600,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 1038,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 1600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimLightItemPickup_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX, 82), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 330, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -4, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 74), 0, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimLightItemPickup_joint4[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 358, -83, -233, 17, -99, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimLightItemPickup_joint5[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, -243, -1722, 193, 1377, 169,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1464, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1375, -429, 1546, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1991, -302, 1317, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1736, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1611, -23, 1432, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1511, 48, 1484, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1394, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1659, 90, -1514, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1556, 193, -1551, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1273, 211, -1526, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 140, -1722, -195, 1377, -17,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimLightItemPickup_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -733, 369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -703, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -859, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimLightItemPickup_joint7[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 857, -59, -670,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 701, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimLightItemPickup_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimLightItemPickup_joint11[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 143, 452, 210,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimLightItemPickup_joint12[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -56, -128, 144, -215, 136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 30, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 46, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 15, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 254, 99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 15, -94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -22, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -191, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -66, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -113, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 11, -128, -14, -215, -24,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimLightItemPickup_joint14[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -281,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1057, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1036, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -645, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimLightItemPickup_joint15[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1521, 113, 1635, -187, -1998, -214,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1409, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1256, -82, -2435, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1282, 47, -2395, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1612, 45, -2037, 61,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1448, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1497, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, -23, 1635, 23, -1998, 39,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimLightItemPickup_joint17[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 321,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1016, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 988, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 538, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -59,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimLightItemPickup_joint19[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1684, -51, -1579, 1, 1566, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1691, 12, 1546, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1596, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1581, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1581, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1684, 6, -1579, 1, 1566, 19,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimLightItemPickup_joint20[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1831, 11, 1445, -38, 1554, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1484, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1437, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1872, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1846, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1831, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1503, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1535, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1831, 0, 1445, 8, 1554, 18,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimLightItemPickup_joint22[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 453, 329,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 995, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 968, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 515, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, -62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimLightItemPickup_joint23[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 145, -1, 193, -31, -214, -216,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 82, 24, 55, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -648, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -614, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -251, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 115, 30, 110, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 148, -3, 196, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, -3, 193, -2, -214, 36,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
