/* AnimJoint data for relocData file 922 (FTDonkeyAnimAttackAirN) */
/* 1872 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimAttackAirN_joint1[24];
extern u16 dFTDonkeyAnimAttackAirN_joint2[36];
extern u16 dFTDonkeyAnimAttackAirN_joint3[8];
extern u16 dFTDonkeyAnimAttackAirN_joint5[8];
extern u16 dFTDonkeyAnimAttackAirN_joint6[104];
extern u16 dFTDonkeyAnimAttackAirN_joint7[40];
extern u16 dFTDonkeyAnimAttackAirN_joint8[8];
extern u16 dFTDonkeyAnimAttackAirN_joint9[20];
extern u16 dFTDonkeyAnimAttackAirN_joint11[8];
extern u16 dFTDonkeyAnimAttackAirN_joint12[110];
extern u16 dFTDonkeyAnimAttackAirN_joint13[40];
extern u16 dFTDonkeyAnimAttackAirN_joint14[16];
extern u16 dFTDonkeyAnimAttackAirN_joint15[8];
extern u16 dFTDonkeyAnimAttackAirN_joint17[34];
extern u16 dFTDonkeyAnimAttackAirN_joint18[86];
extern u16 dFTDonkeyAnimAttackAirN_joint20[48];
extern u16 dFTDonkeyAnimAttackAirN_joint22[76];
extern u16 dFTDonkeyAnimAttackAirN_joint23[96];
extern u16 dFTDonkeyAnimAttackAirN_joint25[114];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimAttackAirN_joints[] = {
	(u32)dFTDonkeyAnimAttackAirN_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimAttackAirN_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimAttackAirN_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimAttackAirN_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimAttackAirN_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimAttackAirN_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimAttackAirN_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimAttackAirN_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimAttackAirN_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimAttackAirN_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimAttackAirN_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimAttackAirN_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimAttackAirN_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimAttackAirN_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimAttackAirN_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimAttackAirN_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimAttackAirN_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimAttackAirN_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimAttackAirN_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF01B3, /* [25] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimAttackAirN_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 40, 25, 30, 949, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 178, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 178, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 1, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 30), 1,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimAttackAirN_joint2[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 6474, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1, 0, 25, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 24), 1, 25,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), 6433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 1, 0, 25, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTDonkeyAnimAttackAirN_joint3[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -257, -28, 131,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimAttackAirN_joint5[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 791, 73, -78,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimAttackAirN_joint6[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1632, -40, -1225, 10, 1458, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2017, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1183, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -2165, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2392, -171,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2578, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2022, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), 1957, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1200, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), -1399, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2587, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), -2420, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2398, 24, 1959, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1663, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1655, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1384, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1224, -2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1607, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1465, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1638, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1632, 5, -1225, -1, 1458, -6,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimAttackAirN_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -727, -60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1176, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1177, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -909, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -916, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -793, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -767, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -732, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimAttackAirN_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -825, -308, 165,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimAttackAirN_joint9[20] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 43, 306, -374,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 393, 144, 74,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 393, 144, 74,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimAttackAirN_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -452, -206, 75,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTDonkeyAnimAttackAirN_joint12[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 276, 29, 384, 2, -8, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), 488, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 793, 15, 341, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 806, 11, 347, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 162, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 657, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 626, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -240, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 123, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -492, -21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 482, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 249, 22,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -509, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -153, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -257, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 78, 62,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 273, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 382, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 137, 53, -104, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 273, 6, -9, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 276, 2, 384, 1, -8, 1,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimAttackAirN_joint13[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -826, -25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1023, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1015, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -1043, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1070, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -994, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1008, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -834, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimAttackAirN_joint14[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 1041, 191, 400,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 893, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTDonkeyAnimAttackAirN_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimAttackAirN_joint17[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 714, 1072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -530, -53, -650, -65, -267, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -748, 24, -534, 27, -152, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), 512, 24, 523, 30, 1337, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 268, 714, 1072,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTDonkeyAnimAttackAirN_joint18[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -278, -14, -14, 15, -196, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -202, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -484, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 304, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 286, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -130, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -229, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 37), -214, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -476, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), -143, -8,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -133, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -16, 2,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -152, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -277, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -197, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, -1, -14, 1, -196, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimAttackAirN_joint20[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 651, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 407, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 344, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 613, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 630, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 452, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 440, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 649, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimAttackAirN_joint22[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, 31, 0, 16, 105, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 273, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 130, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 328, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 331, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), -181, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 277, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 37), -120, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 113, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 47, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -175, 6, 51, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), -7, 5, 104, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -113, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 2, 0, 1, 105, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimAttackAirN_joint23[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -160, -31, 189, 2, -727, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 234, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -798, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -489, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -497, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 37), -45, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 206, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 245, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -815, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -384, 4,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 244, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 189, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -717, -5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -58, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -159, -1,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -722, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -727, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -160, 0, 189, 0, -727, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimAttackAirN_joint25[114] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1071, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 732, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 750, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 727, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 699, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 233, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 239, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 917, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1067, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1071, 3,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF972, 0x0017, 0x06FB, 0xFFEF, 0xFA38, 0x0000, 0x2805, 0x0008, 0x0614, 0x0002, 0x2809, 0x001B, 0xFA29, 0x0006, 0x2003, 0x0007, 0xFA6B, 0x0002, 0x2003, 0x0001, 0xFA6C, 0x0000, 0x2803, 0x001F, 0xF99A, 0x0000, 0x2005, 0x0001, 0x0618, 0x0005, 0x2805, 0x0032, 0x06FB, 0x0000, 0x0801, 0x0012, 0x2009, 0x0001, 0xFA2F, 0x0006, 0x2809, 0x001F, 0xFA38, 0xFFFF, 0x0801, 0x000B, 0x2003, 0x0001, 0xF99B, 0x0001, 0x2003, 0x0013, 0xF973, 0xFFFF, 0x200F, 0x0001, 0xF972, 0x0000, 0x06FB, 0x0000, 0xFA38, 0x0000, 0x0000, 0x0000, 0x0000,
};
