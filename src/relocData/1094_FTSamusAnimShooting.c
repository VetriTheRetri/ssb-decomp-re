/* AnimJoint data for relocData file 1094 (FTSamusAnimShooting) */
/* 1440 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimShooting_joint1[30];
extern u16 dFTSamusAnimShooting_joint2[10];
extern u16 dFTSamusAnimShooting_joint4[36];
extern u16 dFTSamusAnimShooting_joint5[94];
extern u16 dFTSamusAnimShooting_joint6[56];
extern u16 dFTSamusAnimShooting_joint7[16];
extern u16 dFTSamusAnimShooting_joint8[12];
extern u16 dFTSamusAnimShooting_joint11[12];
extern u16 dFTSamusAnimShooting_joint12[86];
extern u16 dFTSamusAnimShooting_joint14[52];
extern u16 dFTSamusAnimShooting_joint15[52];
extern u16 dFTSamusAnimShooting_joint17[28];
extern u16 dFTSamusAnimShooting_joint19[58];
extern u16 dFTSamusAnimShooting_joint20[54];
extern u16 dFTSamusAnimShooting_joint22[24];
extern u16 dFTSamusAnimShooting_joint23[54];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimShooting_joints[] = {
	(AObjEvent32 *)dFTSamusAnimShooting_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimShooting_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimShooting_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimShooting_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimShooting_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimShooting_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimShooting_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimShooting_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimShooting_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimShooting_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimShooting_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimShooting_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimShooting_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimShooting_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimShooting_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimShooting_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimShooting_joint1[30] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1200, 34, -551, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 21), -552,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 1259, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 20), 1202, 2,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 9), 0,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 1600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimShooting_joint2[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 24,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimShooting_joint4[36] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -8, -13, 0, -1, 0, 16, 0, -41,
	ftAnimSetValBlock(FT_ANIM_ROTY), 142,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -3, 30, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -213, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 7), 142,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 23), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 23), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimShooting_joint5[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -967, 8, -1871, 40, 1199, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1683, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1185, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1249, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1072, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 622, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1613, 47, 628, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1599, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 434, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1237, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1340, -11,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1610, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1703, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1352, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1113, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 463, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 741, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 805, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1314, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, -18, -1722, -19, 1377, 62,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimShooting_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -467, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -460, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -609, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -484, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -530, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -748, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -760, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -794, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -806, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -829, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -855, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 58,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimShooting_joint7[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 402, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 444, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 701, -32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimShooting_joint8[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	_FT_ANIM_CMD(11, 0, 1), 24,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimShooting_joint11[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 479, 0,
	_FT_ANIM_CMD(11, 0, 1), 24,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimShooting_joint12[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 92, -50, 50, 25, 2950, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 128, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -165, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2934, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2995, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2488, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2480, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 2289, 64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 122, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 124, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -167, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 3, 45,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2370, 93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2967, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 94, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -103, -20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3010, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 54, -128, -25, 3001, -9,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimShooting_joint14[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -599, 80,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -518, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -388, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -820, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -962, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -820, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -893, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -917, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -924, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -869, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -700, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 104,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimShooting_joint15[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, 2, -87, 2, -722, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -48, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -750, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), 30, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 52, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 86, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -27, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -25, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -752, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -449, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 0, -27, -2, -389, 60,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimShooting_joint17[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 518, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 506, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 531, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 704, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -82,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimShooting_joint19[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 34, -3, 90, -1, 258, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -18, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 52, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 255, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -64, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -41, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -97, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 34, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -20, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -78, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 2, -28, -8, -41, 22,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimShooting_joint20[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 75, 0, 93, 0, -315, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 65, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 184, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -332, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -327, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -98, 68,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 79, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 194, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 188, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 175, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 31, 160, -15, -49, 48,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimShooting_joint22[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 923, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 933, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 927, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 541, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -98,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimShooting_joint23[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 64, 0, 241, 0, -501, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -450, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 22), 81, 10, 207, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 98, 20, 214, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 160, -20, 226, -34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -441, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -251, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, -18, 193, -32, -213, 38,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
