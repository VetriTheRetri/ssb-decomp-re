/* AnimJoint data for relocData file 1026 (FTSamusAnimThrown2) */
/* 1184 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimThrown2_joint2[12];
extern u16 dFTSamusAnimThrown2_joint3[24];
extern u16 dFTSamusAnimThrown2_joint5[26];
extern u16 dFTSamusAnimThrown2_joint6[110];
extern u16 dFTSamusAnimThrown2_joint7[36];
extern u16 dFTSamusAnimThrown2_joint8[18];
extern u16 dFTSamusAnimThrown2_joint9[12];
extern u16 dFTSamusAnimThrown2_joint12[14];
extern u16 dFTSamusAnimThrown2_joint13[96];
extern u16 dFTSamusAnimThrown2_joint15[24];
extern u16 dFTSamusAnimThrown2_joint16[32];
extern u16 dFTSamusAnimThrown2_joint18[24];
extern u16 dFTSamusAnimThrown2_joint20[26];
extern u16 dFTSamusAnimThrown2_joint21[36];
extern u16 dFTSamusAnimThrown2_joint23[54];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimThrown2_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTSamusAnimThrown2_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimThrown2_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimThrown2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimThrown2_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimThrown2_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimThrown2_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimThrown2_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimThrown2_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimThrown2_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimThrown2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimThrown2_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimThrown2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimThrown2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimThrown2_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimThrown2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF0119, /* [23] END */
};

/* Joint 2 */
u16 dFTSamusAnimThrown2_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -290, -232,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimThrown2_joint3[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, 0, 101, 0, -15, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -78, -101, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 101, 0, -15, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -78,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimThrown2_joint5[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -4, 0, 32, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX), 168, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -6, 0, 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -4, 0, 32, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimThrown2_joint6[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1186, 27, -579, 25, -913, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1066, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -641, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1118, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1012, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1029, 146, -1194, -237,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1814, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1305, 250, -670, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1591, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -547, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1906, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2454, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1630, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2344, 100,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -524, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -596, -149,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2435, 89, -2462, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2721, 65, -2525, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -765, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -932, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2794, 73, -1028, -96, -2521, 3,
	ftAnimLoop(0x6800, -216),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimThrown2_joint7[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -502, 38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -401, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -450, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -756, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -502, 103,
	ftAnimLoop(0x6800, -70),
};

/* Joint 8 */
u16 dFTSamusAnimThrown2_joint8[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -866, -15, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 424,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -866, 0, 0,
	ftAnimLoop(0x6800, -34),
};

/* Joint 9 */
u16 dFTSamusAnimThrown2_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimThrown2_joint12[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimThrown2_joint13[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -481, -55, 1252, 9, -256, -70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1041, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -917, -31, -733, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -946, -34, -773, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1059, -83, -914, -89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 940, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 897, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1153, 337, -1009, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -383, 542, -221, 570,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -67, 136, 130, 173,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -165, -51, 103, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 982, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1236, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -213, -54, 68, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -444, -41, -207, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -481, -36, 1252, 16, -256, -48,
	ftAnimLoop(0x6800, -188),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimThrown2_joint15[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -517, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -652, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -529, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -517, 12,
	ftAnimLoop(0x6800, -46),
};

/* Joint 16 */
u16 dFTSamusAnimThrown2_joint16[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 8, 0, -47, 0, -445, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), 8, 0, -47, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -458, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -449, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8, 0, -47, 0, -445, 3,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimThrown2_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 477, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 453, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 464, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 476, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 477, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 20 */
u16 dFTSamusAnimThrown2_joint20[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3, 0, 62, 0, 190, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 3, 0, 62, 0, 190, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3, 0, 62, 0, 190, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimThrown2_joint21[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -41, 0, 29, 0, -606, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), -41, 0, 29, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -541, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -562, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -605, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -41, 0, 29, 0, -606, -1,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimThrown2_joint23[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 430, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 478, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 456, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 430, -7,
	ftAnimLoop(0x6800, -46),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 27, -1, -28, 0, 15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 26, 1, -28, 0, 15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 27, 1, -28, 0, 15, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
