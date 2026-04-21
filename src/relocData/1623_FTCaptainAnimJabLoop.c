/* AnimJoint data for relocData file 1623 (FTCaptainAnimJabLoop) */
/* 4400 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimJabLoop_joint1[16];
extern u16 dFTCaptainAnimJabLoop_joint2[56];
extern u16 dFTCaptainAnimJabLoop_joint3[84];
extern u16 dFTCaptainAnimJabLoop_joint5[94];
extern u16 dFTCaptainAnimJabLoop_joint6[224];
extern u16 dFTCaptainAnimJabLoop_joint7[72];
extern u16 dFTCaptainAnimJabLoop_joint8[22];
extern u16 dFTCaptainAnimJabLoop_joint9[78];
extern u16 dFTCaptainAnimJabLoop_joint11[70];
extern u16 dFTCaptainAnimJabLoop_joint12[328];
extern u16 dFTCaptainAnimJabLoop_joint13[160];
extern u16 dFTCaptainAnimJabLoop_joint14[78];
extern u16 dFTCaptainAnimJabLoop_joint15[14];
extern u16 dFTCaptainAnimJabLoop_joint17[20];
extern u16 dFTCaptainAnimJabLoop_joint18[178];
extern u16 dFTCaptainAnimJabLoop_joint20[72];
extern u16 dFTCaptainAnimJabLoop_joint22[164];
extern u16 dFTCaptainAnimJabLoop_joint23[208];
extern u16 dFTCaptainAnimJabLoop_joint25[56];
extern u16 dFTCaptainAnimJabLoop_joint26[154];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimJabLoop_joints[] = {
	(u32)dFTCaptainAnimJabLoop_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimJabLoop_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimJabLoop_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimJabLoop_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimJabLoop_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimJabLoop_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimJabLoop_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimJabLoop_joint9, /* [8] joint 9 */
	(u32)dFTCaptainAnimJabLoop_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimJabLoop_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimJabLoop_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimJabLoop_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimJabLoop_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimJabLoop_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimJabLoop_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimJabLoop_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimJabLoop_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimJabLoop_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimJabLoop_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTCaptainAnimJabLoop_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimJabLoop_joint1[16] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 0, 2,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 55), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 6,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimJabLoop_joint2[56] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1419, 52, 544, 428,
	ftAnimSetValBlock(FT_ANIM_TRAX), 36,
	ftAnimSetValT(FT_ANIM_TRAX, 36), 36,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1419, 780,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 32), 1419,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 544, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 789,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 544, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 772,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 544,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 772,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 544, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 780,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1419, 163, 544, -776,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), 36,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimJabLoop_joint3[84] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 373, 54, 601, 55, 187, 64,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 634, 663, 462,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 373, 601, 187,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 634, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 663, 462,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 389, 601, 187,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 634, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 663, 462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 425, 4, 601, -4, 187, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 667, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 629, 497,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 450, 3, 601, -6, 187, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 697, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 579, 528,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 425, -77, 601, -52, 187, -58,
	ftAnimLoop(0x6800, -166),
};

/* Joint 5 */
u16 dFTCaptainAnimJabLoop_joint5[94] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 41, -18, -310, 19, -46, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 38, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -239, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 123, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -310, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 110, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -239, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 154, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -310, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 202, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -239, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 174, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -310, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 273, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -239, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 200, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -310, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 335, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -239, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 174, -16, -310, 26, -46, 4,
	ftAnimLoop(0x6800, -184),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimJabLoop_joint6[224] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -70, -49, -180, -24, 342, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 397, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -272, 59, -226, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -187, 84, -204, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -107, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -219, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 382, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 422, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -196, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -293, 65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 420, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 404, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -201, 91, -206, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -104, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -210, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 386, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 444, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -189, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -292, 62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 419, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -202, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -111, -55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -210, 0, 404, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 459, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -208, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -186, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -265, 47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 448, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -197, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -78, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 486, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -115, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -236, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -223, -14, 452, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 457, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -211, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -239, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -188, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 503, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 496, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -64, 124, -230, -19, 404, -92,
	ftAnimLoop(0x6800, -444),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimJabLoop_joint7[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1272, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1234, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1260, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1233, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1219, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1290, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1272, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1291, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1317, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1221, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1202, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1315, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1243, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1161, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1220, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1288, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1326, -38,
	ftAnimLoop(0x6800, -142),
};

/* Joint 8 */
u16 dFTCaptainAnimJabLoop_joint8[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3018, -6, -77, 0, 31, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 85), 2435, -6, -89, 0, -388, -4,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 40,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTCaptainAnimJabLoop_joint9[78] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 360, -108,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 15, 0, -115, -20, -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 16, 0, -176, -8, -4, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 16, -186, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 16, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -176, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 31, -186, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 16, -176, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 31, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -186, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 47, -176, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 31, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -186, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 62, -176, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 31, -6, -186, 19, -5, 0,
	ftAnimLoop(0x6800, -154),
};

/* Joint 11 */
u16 dFTCaptainAnimJabLoop_joint11[70] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 120, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -144, -22, -166, -43, 53, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -175, -317, 108,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -144, -166, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -175, -317, 108,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -144, -166, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -175, -317, 108,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -144, -166, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -175, -317, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -144, -12, -166, -2, 53, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -273, -334, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -144, 30, -166, 37, 53, -30,
	ftAnimLoop(0x6800, -136),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimJabLoop_joint12[328] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1021, 87, 1426, -225, -1302, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -852, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1200, -284, -1348, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 856, -324, -1337, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -899, -19, 551, -273, -1399, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -891, -57, 310, 14, -1377, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1013, 166, 581, 319, -1522, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -559, 67, 949, 371, -1076, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -879, -222, 1323, 250, -1306, -105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1007, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1451, -4, -1288, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 671, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1332, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1041, 170, -1471, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -665, 135, -1133, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -771, -21, 454, 7, -1243, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -708, -97, 686, 273, -1167, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -966, -154, 1001, 325, -1383, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1016, -74, 1338, 214, -1290, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1114, -57, 1430, -15, -1238, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1024, -310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1130, -34, -1291, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1182, 299, -1476, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -531, 217, 685, -271, -883, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -748, 4, 480, 6, -1112, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -523, -192, 698, 278, -876, -159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1329, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1132, -303, -1430, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1130, -28, -1280, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1189, -41, 1416, -12, -1241, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1212, -66, 1304, -185, -1317, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1323, -433, 1045, -166, -1583, -551,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2079, -497, 971, 72, -2419, -549,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2317, 5, 1191, 0, -2681, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2068, 490, 971, -67, -2407, 547,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1336, 400, 1056, 164, -1586, 534,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1267, 13, 1300, 159, -1337, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1309, -37, 1374, -7, -1281, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1714, -515,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1341, -87, 1285, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1485, -367, 1075, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2077, -413, 1015, 72, -2413, -482,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2454, 443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2312, -17, 1221, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2111, 392, 1035, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1527, 421, 1045, 107, -1792, 524,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1269, 169, 1249, 184, -1404, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1188, 80, 1415, 165, -1242, 162,
	ftAnimLoop(0x6800, -652),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimJabLoop_joint13[160] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1087, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1084, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -871, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -460, 433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -557, -500,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1006, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1153, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1084, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -970, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, 419,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -130, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, -430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -992, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1114, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1047, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -944, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, 417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -109, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -564, -422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -954, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1062, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1004, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1035, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -914, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, 454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, -447,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -900, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -998, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -940, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -978, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -879, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -509, 439,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -447, -399,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -968, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1003, -34,
	ftAnimLoop(0x6800, -318),
};

/* Joint 14 */
u16 dFTCaptainAnimJabLoop_joint14[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 272, 5, 242, -20, 42, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 330, 2, 39, -3, 175, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 295, -9, 212, 4, 95, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 257, -2, 76, 3, 97, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 272, -30, 242, -4, 42, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 12, 40, 138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 272, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 242, 42,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 171, 40, 138,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 272, 242, 42,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 171, 40, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 272, 10, 242, 26, 42, -8,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTCaptainAnimJabLoop_joint15[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	_FT_ANIM_CMD(11, 0, 1), 51,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimJabLoop_joint17[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 2, -11, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 50), 0, -1, 0, -3,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimJabLoop_joint18[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1854, 45, -1633, -8, -2311, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1636, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1935, -29, -2233, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1898, -28, -2264, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1922, 22, -2236, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1647, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1606, -16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1938, 0, -2224, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1872, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2307, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1626, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1602, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1870, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1907, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2280, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2297, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1590, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1647, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1891, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1886, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2332, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2266, -32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1628, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1655, -16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2310, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2308, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1894, -8, -1665, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1818, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1624, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2263, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2325, -28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1874, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1911, 4, -1644, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1884, -26, -1659, -14, -2346, -21,
	ftAnimLoop(0x6800, -352),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimJabLoop_joint20[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 817, -37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 702, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 754, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 752, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 698, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 794, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 754, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 701, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 742, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 745, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 704, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 767, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 735, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 689, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 720, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 792, 37,
	ftAnimLoop(0x6800, -142),
};

/* Joint 22 */
u16 dFTCaptainAnimJabLoop_joint22[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1832, -65, 1690, -10, -1593, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1661, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1592, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1941, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1894, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1923, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1691, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1622, 20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1943, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1850, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1653, 32, -1592, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1685, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1572, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1851, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1908, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1647, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1653, 38,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1881, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1866, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1693, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1612, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1565, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1561, 13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1656, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1662, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1551, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1581, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1843, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1816, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1615, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1689, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1865, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1893, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1859, 34, 1714, 24, -1565, 16,
	ftAnimLoop(0x6800, -324),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimJabLoop_joint23[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, 59, 433, 7, -707, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 474, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 112, -38, -580, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 60, -39, -644, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -636, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 141, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 477, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 491, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -564, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -645, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 175, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 50, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 490, -2, -701, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -649, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 465, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 134, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -574, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -587, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 165, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 47, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -671, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -710, 53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 39, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 54, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 472, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 445, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -650, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 77, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 21, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -719, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -729, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 22, -13, 434, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -50, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 469, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -698, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -716, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -27, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 31, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 439, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 417, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3, -34, 414, -3, -759, -43,
	ftAnimLoop(0x6800, -412),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimJabLoop_joint25[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 886, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 894, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 886, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 910, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 892, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 904, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 883, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 899, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 923, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 919, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 903, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 871, -32,
	ftAnimLoop(0x6800, -110),
};

/* Joint 26 */
u16 dFTCaptainAnimJabLoop_joint26[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 10, 4, 91, 6, -125, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 52, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -182, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -145, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -224, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 48, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 26, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -184, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -179, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4, 1, -217, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -33, 30, -131, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 36, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 37, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5, 33, -167, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1, -35, -164, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 33, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 83, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -39, -27, -125, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 80, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -229, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 68, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 106, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 104, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -6, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -201, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2, 9, 109, 2, -110, 91,
	ftAnimLoop(0x6800, -304),
	ftAnimEnd(),
};
