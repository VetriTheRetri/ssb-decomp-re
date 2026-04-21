/* AnimJoint data for relocData file 967 (FTSamusAnimFall) */
/* 832 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimFall_joint1[20];
extern u16 dFTSamusAnimFall_joint2[12];
extern u16 dFTSamusAnimFall_joint4[12];
extern u16 dFTSamusAnimFall_joint5[26];
extern u16 dFTSamusAnimFall_joint6[28];
extern u16 dFTSamusAnimFall_joint7[18];
extern u16 dFTSamusAnimFall_joint8[18];
extern u16 dFTSamusAnimFall_joint11[12];
extern u16 dFTSamusAnimFall_joint12[26];
extern u16 dFTSamusAnimFall_joint14[20];
extern u16 dFTSamusAnimFall_joint15[26];
extern u16 dFTSamusAnimFall_joint17[28];
extern u16 dFTSamusAnimFall_joint19[36];
extern u16 dFTSamusAnimFall_joint20[26];
extern u16 dFTSamusAnimFall_joint22[20];
extern u16 dFTSamusAnimFall_joint23[42];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimFall_joints[] = {
	(u32)dFTSamusAnimFall_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimFall_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimFall_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimFall_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimFall_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimFall_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimFall_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimFall_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimFall_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimFall_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimFall_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimFall_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimFall_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimFall_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimFall_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimFall_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimFall_joint1[20] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 1618,
	ftAnimSetValBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterT(FT_ANIM_TRAX | FT_ANIM_TRAY, 8), 0, 1618,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 3), 18,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 3), -32,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 2), 0,
	ftAnimLoop(0x6800, -38),
};

/* Joint 2 */
u16 dFTSamusAnimFall_joint2[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimFall_joint4[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimFall_joint5[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1460, -4, -1390, 3, 2116, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1455, -4, -1393, 3, 2103, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1460, -4, -1390, 3, 2116, 12,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimFall_joint6[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1171, -34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1217, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1161, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1138, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1171, -33,
	ftAnimLoop(0x6800, -54),
};

/* Joint 7 */
u16 dFTSamusAnimFall_joint7[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -268, 0, 0, 424, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -268, 0, 0, 424, 0, 0,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimFall_joint8[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 67, -17, -1474, 98, 60, -42,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimFall_joint11[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimFall_joint12[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -730, -3, 110, 0, -444, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -727, -2, 109, 1, -435, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -730, -2, 110, 0, -444, -9,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimFall_joint14[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -876, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -866, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -876, -9,
	ftAnimLoop(0x6800, -38),
};

/* Joint 15 */
u16 dFTSamusAnimFall_joint15[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 9, 4, -26, 7, -833, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 2, 10, -38, 17, -832, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, 7, -26, 12, -833, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimFall_joint17[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1063, 17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1055, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1024, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1044, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1063, 18,
	ftAnimLoop(0x6800, -54),
};

/* Joint 19 */
u16 dFTSamusAnimFall_joint19[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 12, -11, -11, 2, 329, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 31, -25, -14, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 335, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 364, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 347, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12, -18, -11, 3, 329, -18,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimFall_joint20[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -8, 0, 5, 0, -411, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -9, 0, 5, 0, -430, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -8, 0, 5, 0, -411, 19,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimFall_joint22[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 782, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 768, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, 13,
	ftAnimLoop(0x6800, -38),
};

/* Joint 23 */
u16 dFTSamusAnimFall_joint23[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -8, 0, 87, 0, -19, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -9, 1, 87, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 4, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 46, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 13, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -8, 1, 87, 0, -19, -32,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
