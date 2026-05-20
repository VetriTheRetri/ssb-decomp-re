/* AnimJoint data for relocData file 1670 (FTNessAnimRun) */
/* 2464 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimRun_joint1[60];
extern u16 dFTNessAnimRun_joint2[12];
extern u16 dFTNessAnimRun_joint4[34];
extern u16 dFTNessAnimRun_joint5[90];
extern u16 dFTNessAnimRun_joint6[16];
extern u16 dFTNessAnimRun_joint7[12];
extern u16 dFTNessAnimRun_joint10[56];
extern u16 dFTNessAnimRun_joint11[108];
extern u16 dFTNessAnimRun_joint12[16];
extern u16 dFTNessAnimRun_joint13[20];
extern u16 dFTNessAnimRun_joint15[12];
extern u16 dFTNessAnimRun_joint16[124];
extern u16 dFTNessAnimRun_joint18[72];
extern u16 dFTNessAnimRun_joint19[132];
extern u16 dFTNessAnimRun_joint21[64];
extern u16 dFTNessAnimRun_joint22[128];
extern u16 dFTNessAnimRun_joint24[64];
extern u16 dFTNessAnimRun_joint25[104];
extern u16 dFTNessAnimRun_joint26[56];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimRun_joints[] = {
	(AObjEvent32 *)dFTNessAnimRun_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimRun_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimRun_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimRun_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimRun_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimRun_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimRun_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimRun_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimRun_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimRun_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimRun_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimRun_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimRun_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimRun_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimRun_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimRun_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimRun_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimRun_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimRun_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimRun_joint1[60] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, -16, 34,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -357, 0,
	ftAnimSetValBlock(FT_ANIM_TRAY), 439,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -263, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 3), 391,
	ftAnimSetValT(FT_ANIM_TRAY, 3), 391,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 357, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), 468,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 229, -59,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 3), 391,
	ftAnimSetValT(FT_ANIM_TRAY, 3), 391,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), -357,
	ftAnimBlock(0, 2),
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), 439,
	ftAnimLoop(0x6800, -116),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimRun_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 405, -1, 8, 0, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimRun_joint4[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -101,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -139, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -140, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -99, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -139, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -140, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -97,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimRun_joint5[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2628, -82, -537, -12, -2882, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 2247, -64, -572, -59, -2658, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2184, 141, -679, -171, -2573, -117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1239, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2531, 116, -2893, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2416, -65, -2765, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2365, -34, -2706, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1244, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1083, 174,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2324, -174, -2656, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2017, 139, -866, 228, -2339, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2603, 310, -627, 162, -2900, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2637, 33, -540, 87, -2888, 11,
	ftAnimLoop(0x6800, -176),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimRun_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimLoop(0x6800, -30),
};

/* Joint 7 */
u16 dFTNessAnimRun_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimRun_joint10[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -102, 347, -175,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -10, 0, 234, -66, -47, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -102, -26, -52, -120, 55, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -118, 0, -248, -21, 162, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -96, 4, -178, 69, 25, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -94, -1, 168, 131, -82, -50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -102, 347, -175,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimRun_joint11[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 482, 7, 1117, 10, 381, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 520, -24, 1143, -65, 435, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 459, 187, 1019, -199, 404, 273,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 538, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 895, -229, 983, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1, -557, 538, -255,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -194, 27, 523, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 445, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 463, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -164, 28, 578, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 644, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 329, 700,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 479, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 713, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, 336,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1927, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1320, 843,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2016, 383, 577, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2087, 70, 491, -85, 1984, 56,
	ftAnimLoop(0x6800, -212),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimRun_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTNessAnimRun_joint13[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 557,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 66, 217, 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 1120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 1054,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 557,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimRun_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimRun_joint16[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, -146, -174, 2, -1059, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -146, -51, -926, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 148, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -221, -253,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -235, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -274, -40, -1032, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 5, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -985, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -144, 235, -867, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 235, 127, -291, 712,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 109, -73, -270, -123, 557, 285,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 152, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -241, 26, 279, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -217, 111, -214, -591,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -79, -75, -18, 67, -903, -506,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 16, -82, 61, -1226, -282,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 188, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1489, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 52, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 51, 121, 131, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 295, 244, -174, -305, -1059, 429,
	ftAnimLoop(0x6800, -244),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimRun_joint18[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 36, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 533, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 700, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 751, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 832, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 659, -416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 497, 557,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1114, 444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1386, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1053, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1077, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1024, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 838, -508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -831,
	ftAnimLoop(0x6800, -142),
};

/* Joint 19 */
u16 dFTNessAnimRun_joint19[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -289, 378, -760, 165, 427, -363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 88, 221, -595, 286, 64, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 154, 53, -187, 310, -25, -148,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 228, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 24, 62, -233, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -63, -63, -221, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -406, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -101, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -23, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 106, -105, -310, -151, -472, 263,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 194, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -326, 70, 120, 190,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -44, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -91, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -188, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 277, -70, -413, 30, 285, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 54, -112, 16, 80, -239, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 53, -73, -251, -235, -116, 211,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -633, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -92, 73, 184, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 200, -98, -233, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -289, -490, -760, -127, 427, 661,
	ftAnimLoop(0x6800, -260),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimRun_joint21[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -902, 85, -102,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -772, 38, 28, -44, -57, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -671, 233, -183, -32, -47, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 393, 44, -135, 24, 102, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -451, -294, -63, 22, 107, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -786, -174, -43, 21, 81, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -974, -29, 0, 32, 0, -46,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -902, 85, -102,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimRun_joint22[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, -207, 262, 149, 618, -266,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 326, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 235, -326, 351, -406,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -209, -279, -195, -443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -322, 72, 43, -232, -535, -469,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -63, 262, -138, -21, -1133, -517,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1626, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 203, 61, 0, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 67, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 59, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -123, -72, -1426, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -85, 28, 244, 82, -1043, 212,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 37, 100, 73, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1001, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -912, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1093, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -956, 145,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 144, 25, 71, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 176, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 87, -104, -794, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -65, 177, -315, 706,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, 508, 262, 85, 618, 933,
	ftAnimLoop(0x6800, -252),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimRun_joint24[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 426,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, 466,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 939, 404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1414, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1289, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1071, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 833, -535,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 545, 383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 840, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 891, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 718, -441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -710,
	ftAnimLoop(0x6800, -126),
};

/* Joint 25 */
u16 dFTNessAnimRun_joint25[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -87, -5, -164, 44, 61, -134,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 300, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -85, -102, 133, 325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -289, 67, 576, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 50, 80, 600, 8, -483, -359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, -39, 316, -138, -141, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -28, 46, 323, 46, -195, 131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 271, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -34, -14, 121, 139,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -174, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -244, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -298, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -468, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -191, 50, 71, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -74, 41, -90, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -108, -6, 2, -36, -478, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -87, 20, -164, -166, 61, 539,
	ftAnimLoop(0x6800, -204),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimRun_joint26[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 467, 139, -27,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -62, -219, 163, -23, -203, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -847, -179, 0, -44, 0, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -960, 3, -60, -13, 132, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -830, 64, -67, 10, 267, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -570, 259, 0, 41, 0, -58,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 467, 139, -27,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};
