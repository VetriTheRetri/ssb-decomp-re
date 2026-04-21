/* AnimJoint data for relocData file 825 (FTDonkeyAnimDamaged2) */
/* 2112 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDamaged2_joint1[34];
extern u16 dFTDonkeyAnimDamaged2_joint2[38];
extern u16 dFTDonkeyAnimDamaged2_joint4[48];
extern u16 dFTDonkeyAnimDamaged2_joint5[56];
extern u16 dFTDonkeyAnimDamaged2_joint6[32];
extern u16 dFTDonkeyAnimDamaged2_joint7[8];
extern u16 dFTDonkeyAnimDamaged2_joint8[46];
extern u16 dFTDonkeyAnimDamaged2_joint10[8];
extern u16 dFTDonkeyAnimDamaged2_joint11[100];
extern u16 dFTDonkeyAnimDamaged2_joint12[44];
extern u16 dFTDonkeyAnimDamaged2_joint13[26];
extern u16 dFTDonkeyAnimDamaged2_joint14[8];
extern u16 dFTDonkeyAnimDamaged2_joint16[34];
extern u16 dFTDonkeyAnimDamaged2_joint17[82];
extern u16 dFTDonkeyAnimDamaged2_joint19[32];
extern u16 dFTDonkeyAnimDamaged2_joint21[88];
extern u16 dFTDonkeyAnimDamaged2_joint22[144];
extern u16 dFTDonkeyAnimDamaged2_joint24[40];
extern u16 dFTDonkeyAnimDamaged2_joint25[138];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimDamaged2_joints[] = {
	(u32)dFTDonkeyAnimDamaged2_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimDamaged2_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimDamaged2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimDamaged2_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimDamaged2_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimDamaged2_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimDamaged2_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimDamaged2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimDamaged2_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimDamaged2_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimDamaged2_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimDamaged2_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimDamaged2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimDamaged2_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimDamaged2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimDamaged2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimDamaged2_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimDamaged2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimDamaged2_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimDamaged2_joint1[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -29, 1031, -400,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 148, 78, 779, -118, -362, -11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 148, -67, 765, 96, -426, -14,
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), -29, -1105,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1031, -400,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimDamaged2_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -214, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -199, -162, -278, -125, -39, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -752, -32, -417, -8, 586, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -752, 23, -417, 17, 586, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -265, -41, -16,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimDamaged2_joint4[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, 41,
	ftAnimSetValRate(FT_ANIM_ROTX), 750, -121,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 602, -108, 14, -42, -250, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 425, -10, -104, -6, -531, -16,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 425, 0, -104, 0, -531, 3,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 15, 6, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimDamaged2_joint5[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 9, -84, 121, -473, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -480, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -136, 0, -41, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -136, 0, -47, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), -81, 19, -74, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -487, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -366, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -358, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -441, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 18, -84, -10, -473, -31,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimDamaged2_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -277,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1034, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1034, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1003, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -488, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 80,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimDamaged2_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimDamaged2_joint8[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1354, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 177, 4, 199, 89, -333, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 188, 5, 200, -10, -336, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 270, 0, 17, -5, -149, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 182, -16, 110, -14, -289, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimDamaged2_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimDamaged2_joint11[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -115, 150, 172, 22, -479, 440,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 18, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 143, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 225, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 310, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 214, -20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 9, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -19, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 144, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 144, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 194, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 131, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -10, 42, 139, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 417, -114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 200, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 127, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -48, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 149, 131, 182, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -17, -158, 214, 11, -242, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, -98, 172, -42, -479, -236,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDamaged2_joint12[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -571,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -988, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1070, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -967, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -940, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -737, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -746, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1064, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -720, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 303,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimDamaged2_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 162, 45, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 294, 7, 28, 0, 223, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 294, -6, 28, 0, 223, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 162, 45, 64,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimDamaged2_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimDamaged2_joint16[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -189, 11, 245, 63, 123, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -370, -5, 191, -20, 96, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -283, -1, -106, -9, -390, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimDamaged2_joint17[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -60, 45, -392, -15, -329, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -283, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -15, -184, -361, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -429, -258, -5, 210,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -533, 1, 51, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -287, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -278, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -531, 2, 45, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), -506, 14, 19, -9,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -232, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -385, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -477, 51, 1, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -255, 171, -206, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, 194, -392, -7, -329, -122,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimDamaged2_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1026, 73,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1119, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1128, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1019, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1020, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1033, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimDamaged2_joint21[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1495, -73, -1623, 170, -1978, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1978, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1421, 4, -1452, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1504, 15, -1484, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1389, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1413, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1401, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1451, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1975, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1990, -28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1394, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1441, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1525, 75, -1479, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1616, -74, -1664, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2014, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2013, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1495, -120, -1623, 41, -1978, 35,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimDamaged2_joint22[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1504, 151, 1391, -121, 1312, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1240, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1352, -271, 1306, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2047, -480, 761, -336,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2248, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1594, 190, 633, -164,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1608, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 432, -187,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 198, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2207, 41, 1589, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1531, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2182, -37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 242, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 118, 94,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1482, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1475, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2214, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2186, 77,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 242, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 404, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, 108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 872, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1388, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2058, 193, 1258, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1641, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1348, 80, 1209, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1419, 21, 1297, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1504, 136, 1391, -28, 1312, 14,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimDamaged2_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 994, 66,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1060, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1306, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1392, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1394, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1419, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1391, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1033, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, -38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimDamaged2_joint25[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, -101, 103, -281, -387, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -327, -113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -472, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -93, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 77, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 279, 20, -404, -129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -673, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 118, -324, -319, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -369, -386, 168, 389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -653, -131, -628, 38, 460, 142,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -501, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -332, -46, 194, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -451, -148, 284, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -452, 397, 180, -381,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -491, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -580, 61,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1, 168, -254, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -116, 20, -519, 114, -177, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -164, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 42, 104, -318, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 71, -39, -378, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 111, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 190, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, -63, 103, -86, -387, -8,
	ftAnimEnd(),
	0x0000, 0x0000,
};
