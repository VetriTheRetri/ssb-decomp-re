/* AnimJoint data for relocData file 1050 (FTSamusAnimItemDrop) */
/* 1104 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimItemDrop_joint1[10];
extern u16 dFTSamusAnimItemDrop_joint2[18];
extern u16 dFTSamusAnimItemDrop_joint4[32];
extern u16 dFTSamusAnimItemDrop_joint5[98];
extern u16 dFTSamusAnimItemDrop_joint6[52];
extern u16 dFTSamusAnimItemDrop_joint7[26];
extern u16 dFTSamusAnimItemDrop_joint8[16];
extern u16 dFTSamusAnimItemDrop_joint11[10];
extern u16 dFTSamusAnimItemDrop_joint12[34];
extern u16 dFTSamusAnimItemDrop_joint14[20];
extern u16 dFTSamusAnimItemDrop_joint15[34];
extern u16 dFTSamusAnimItemDrop_joint17[20];
extern u16 dFTSamusAnimItemDrop_joint19[46];
extern u16 dFTSamusAnimItemDrop_joint20[34];
extern u16 dFTSamusAnimItemDrop_joint22[54];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimItemDrop_joints[] = {
	(u32)dFTSamusAnimItemDrop_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimItemDrop_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimItemDrop_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimItemDrop_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimItemDrop_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimItemDrop_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimItemDrop_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimItemDrop_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimItemDrop_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimItemDrop_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimItemDrop_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimItemDrop_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimItemDrop_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimItemDrop_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimItemDrop_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF0103, /* [22] END */
};

/* 4-byte alignment padding */
static u32 dFTSamusAnimItemDrop_pad[1] = { 0 };

/* Joint 1 */
u16 dFTSamusAnimItemDrop_joint1[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1600, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 1600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimItemDrop_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX, 24), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 148, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimItemDrop_joint4[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 6), 107, 13, 12, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 2), 107, -5, 12, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 16), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimItemDrop_joint5[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2740, -23, 114, -187, -231, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3004, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -231, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -126, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 48, 114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 84, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3004, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2886, -71,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -187, 26, 101, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 307, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -314, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3029, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2815, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 238, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -246, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -301, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 99, 27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2782, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2746, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2740, 5, 114, 14, -231, 14,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimItemDrop_joint6[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, -121,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -825, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -880, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -406, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -235, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -89, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -814, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -848, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -727, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimItemDrop_joint7[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -178, -92, 0, -24, 0, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -40, 48,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -192, 303,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 701, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimItemDrop_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimItemDrop_joint11[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimItemDrop_joint12[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, -3, 1737, -9, 1392, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 23), 1666, 0, 1392, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 1619, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1628, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 1736, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, 0, 1737, 1, 1392, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimItemDrop_joint14[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -595, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimItemDrop_joint15[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1521, -5, 1635, 0, -1998, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 1635, 0, -1998, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -1597, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1589, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -1521, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, 0, 1635, 0, -1998, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimItemDrop_joint17[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 478, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimItemDrop_joint19[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 3, -28, 14, -41, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -70, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 174, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 165, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -27, -3,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -72, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -75, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 0, -28, -1, -41, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimItemDrop_joint20[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1831, 7, 1445, 1, 1554, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 1445, 0, 1554, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 1905, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1898, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 1832, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1831, 0, 1445, 0, 1554, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimItemDrop_joint22[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 453, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 452, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0091, 0x0000, 0x00C1, 0x0004, 0xFF2A, 0x0000, 0x280B, 0x0017, 0x0091, 0x0000, 0xFF2A, 0x0000, 0x2005, 0x0014, 0x00C9, 0xFFFD, 0x2005, 0x0001, 0x00C6, 0xFFFE, 0x2005, 0x0002, 0x00C2, 0xFFFF, 0x200F, 0x0001, 0x0091, 0x0000, 0x00C1, 0x0000, 0xFF2A, 0x0000, 0x0000,
};
