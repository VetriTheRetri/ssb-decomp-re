/* AnimJoint data for relocData file 959 (FTSamusAnimRun) */
/* 1760 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimRun_joint1[36];
extern u16 dFTSamusAnimRun_joint2[8];
extern u16 dFTSamusAnimRun_joint4[58];
extern u16 dFTSamusAnimRun_joint5[102];
extern u16 dFTSamusAnimRun_joint6[40];
extern u16 dFTSamusAnimRun_joint7[12];
extern u16 dFTSamusAnimRun_joint8[12];
extern u16 dFTSamusAnimRun_joint11[12];
extern u16 dFTSamusAnimRun_joint12[82];
extern u16 dFTSamusAnimRun_joint14[36];
extern u16 dFTSamusAnimRun_joint15[68];
extern u16 dFTSamusAnimRun_joint17[56];
extern u16 dFTSamusAnimRun_joint19[100];
extern u16 dFTSamusAnimRun_joint20[72];
extern u16 dFTSamusAnimRun_joint22[56];
extern u16 dFTSamusAnimRun_joint23[84];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimRun_joints[] = {
	(u32)dFTSamusAnimRun_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimRun_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimRun_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimRun_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimRun_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimRun_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimRun_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimRun_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimRun_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimRun_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimRun_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimRun_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimRun_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimRun_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimRun_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimRun_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimRun_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 1739,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1804, 100,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 1815,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1804, -100,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 1739,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1804, 100,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 1815,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1804, -100,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 1739,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimRun_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -14),
};

/* Joint 4 */
u16 dFTSamusAnimRun_joint4[58] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 5, 33,
	ftAnimSetValRate(FT_ANIM_TRAX), 0, 53,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 44, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 40, 4, 27,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 35, 219, -41,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 5, 33,
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), 0, -53,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 44, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -40, 4, 27,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 35, -219, 41,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 5, 33,
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), 0, 53,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 44, 0, 0,
	ftAnimLoop(0x6800, -114),
};

/* Joint 5 */
u16 dFTSamusAnimRun_joint5[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, 8, -1517, 13, 1935, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2223, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1602, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1412, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1371, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1503, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2221, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1640, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1594, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1673, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1499, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1518, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1653, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1562, 84,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1725, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1614, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1679, 120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1927, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1530, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1528, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 6, -1517, 11, 1935, 8,
	ftAnimLoop(0x6800, -200),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimRun_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -539, 79,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -593, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -685, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -786, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -921, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -944, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -658, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, 119,
	ftAnimLoop(0x6800, -78),
};

/* Joint 7 */
u16 dFTSamusAnimRun_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 424, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimRun_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1072, -670, -2680, 98, 60, -42,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimRun_joint11[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 480, 0,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimRun_joint12[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3, 0, 92, 9, 32, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 12, -10, 150, -46, 31, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, -1, 102, -40, 162, 117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 225, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 441, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 518, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 403, -166,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 276, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 90, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -7, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -8, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 217, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 71, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3, 11, 92, 2, 32, -38,
	ftAnimLoop(0x6800, -160),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimRun_joint14[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -676, -33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -796, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -665, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -593, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -789, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -707, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, 30,
	ftAnimLoop(0x6800, -70),
};

/* Joint 15 */
u16 dFTSamusAnimRun_joint15[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, 8, -34, 31, -372, -176,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -4, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -872, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -21, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 57, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 271, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, -2, 249, -107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -20, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -62, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -164, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -261, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3, 0, -34, -13, -372, -110,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimRun_joint17[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1230, 55,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1047, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 914, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 325, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 230, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 29, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 84, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 732, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1114, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1230, 116,
	ftAnimLoop(0x6800, -110),
};

/* Joint 19 */
u16 dFTSamusAnimRun_joint19[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 33, -82, -58, -11, 226, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -100, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -29, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 384, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -161,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 9, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -54, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -5, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -98, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -24, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 220, 207,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -10, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 18, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, 164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 302, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -21, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -47, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 258, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 224, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33, 14, -58, -11, 226, 1,
	ftAnimLoop(0x6800, -196),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimRun_joint20[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1603, 2, 1607, 0, 1428, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1634, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 1594, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1552, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1740, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1877, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1836, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1439, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1335, -101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 775, -9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1640, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1612, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 787, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1275, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1603, 8, 1607, -5, 1428, 152,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimRun_joint22[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 230, 59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 232, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 129, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 469, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1080, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1230, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 806, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 718, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 426, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 230, -195,
	ftAnimLoop(0x6800, -110),
};

/* Joint 23 */
u16 dFTSamusAnimRun_joint23[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -17, -3, 82, -9, -98, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -33, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 122, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 197, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 343, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 353, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 329, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -61, 27, 226, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 45, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 423, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 151, 4, 263, -163,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 86, -4, -83, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 8, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -17, -19, 82, -4, -98, -14,
	ftAnimLoop(0x6800, -156),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
