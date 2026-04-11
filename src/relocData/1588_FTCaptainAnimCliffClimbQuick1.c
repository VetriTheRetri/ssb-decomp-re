/* AnimJoint data for relocData file 1588 (FTCaptainAnimCliffClimbQuick1) */
/* 1488 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCliffClimbQuick1_joint1[32];
extern u16 dFTCaptainAnimCliffClimbQuick1_joint2[34];
extern u16 dFTCaptainAnimCliffClimbQuick1_joint3[40];
extern u16 dFTCaptainAnimCliffClimbQuick1_joint5[38];
extern u16 dFTCaptainAnimCliffClimbQuick1_joint6[54];
extern u16 dFTCaptainAnimCliffClimbQuick1_joint7[34];
extern u16 dFTCaptainAnimCliffClimbQuick1_joint8[26];
extern u16 dFTCaptainAnimCliffClimbQuick1_joint11[26];
extern u16 dFTCaptainAnimCliffClimbQuick1_joint12[58];
extern u16 dFTCaptainAnimCliffClimbQuick1_joint13[38];
extern u16 dFTCaptainAnimCliffClimbQuick1_joint14[42];
extern u16 dFTCaptainAnimCliffClimbQuick1_joint15[14];
extern u16 dFTCaptainAnimCliffClimbQuick1_joint17[32];
extern u16 dFTCaptainAnimCliffClimbQuick1_joint18[32];
extern u16 dFTCaptainAnimCliffClimbQuick1_joint20[28];
extern u16 dFTCaptainAnimCliffClimbQuick1_joint22[32];
extern u16 dFTCaptainAnimCliffClimbQuick1_joint23[56];
extern u16 dFTCaptainAnimCliffClimbQuick1_joint25[76];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimCliffClimbQuick1_joints[] = {
	(u32)dFTCaptainAnimCliffClimbQuick1_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimCliffClimbQuick1_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimCliffClimbQuick1_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimCliffClimbQuick1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimCliffClimbQuick1_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimCliffClimbQuick1_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimCliffClimbQuick1_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimCliffClimbQuick1_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimCliffClimbQuick1_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimCliffClimbQuick1_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimCliffClimbQuick1_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimCliffClimbQuick1_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimCliffClimbQuick1_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimCliffClimbQuick1_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimCliffClimbQuick1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimCliffClimbQuick1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimCliffClimbQuick1_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimCliffClimbQuick1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF015E, /* [25] END */
};

/* Joint 1 */
u16 dFTCaptainAnimCliffClimbQuick1_joint1[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -690, -152, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), -624, 164,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), -544, 138,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), -545, 58,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1451,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 1, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimCliffClimbQuick1_joint2[34] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 274, 1583, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 7), 1582,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 15), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 11), 0, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1582, -1122,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1122,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1116, -559,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimCliffClimbQuick1_joint3[40] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 4,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -76, 9,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), -76, 9,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 20,
	ftAnimSetValRate(FT_ANIM_ROTX), 178, 55,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 464, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, -62, 107, 14, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimCliffClimbQuick1_joint5[38] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAX), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 178, -11, 75,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_TRAY, 8), 178, -11,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 15), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 5), 75,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -14,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), 47,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAY), 0, -10,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 7), 189, -31,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTCaptainAnimCliffClimbQuick1_joint6[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 351, -17, -15, 28, -422, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 13, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 245, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -501, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -591, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13, -17, -618, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -36, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -569, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -541, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 247, 1, -45, -8, -521, 19,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimCliffClimbQuick1_joint7[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -84, 79,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -185, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -306, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -409, -102,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimCliffClimbQuick1_joint8[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 290, -14, 0, 3, 0, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 290, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 344, 0, 0, 0, -47,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimCliffClimbQuick1_joint11[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, -8, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -134, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -268, 13, 0, 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimCliffClimbQuick1_joint12[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1590, -6, 1540, -7, 1158, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1590, 1, 1542, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1134, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1155, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1118, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1103, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 987, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1599, 12, 1540, -5, 1045, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1615, 4, 1530, -17, 1234, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, -6, 1505, -24, 1368, 134,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimCliffClimbQuick1_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -109, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -168, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -192, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -137, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -496, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, -205,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimCliffClimbQuick1_joint14[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -249, -37, 118, 15, -161, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 70, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -271, -5, -199, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -285, 4, -249, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -243, 61, 154, 22, -113, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 268, 68, 273, 16, 61, 23,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTCaptainAnimCliffClimbQuick1_joint15[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -1003,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1538, 119,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 35), 1538, 119,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 20,
	ftAnimBlock(0, 9),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimCliffClimbQuick1_joint17[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -312, -36, 83, 2, 38, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -522, 0, 24, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -2, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 0, 69, 0, -3,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimCliffClimbQuick1_joint18[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 12, 2, -41, -1, -171, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -4, 8, -64, 1, -470, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 45, -62, 21, -495, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 86, 79, -20, 41, -782, -286,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimCliffClimbQuick1_joint20[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 100, 98,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 255, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 295, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 368, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 371, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 913, 541,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimCliffClimbQuick1_joint22[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -49, 10, 48, -11, 259, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -48, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 36, 2, 307, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 36, 9, 314, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, 19, -59, -10, 290, -24,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimCliffClimbQuick1_joint23[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -11, -7, 48, 1, -144, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -113, -23, -5, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -571, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -767, -203,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1151, -131,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -130, -6, -40, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -99, 51, -2, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1240, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1249, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -24, 75, 91, 93, -1182, 66,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimCliffClimbQuick1_joint25[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 374, 155,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 716, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 891, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1105, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1029, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 918, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, -48,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFFBE, 0x0010, 0x0051, 0x0000, 0x0134, 0xFFC6, 0x2809, 0x0007, 0xFFCF, 0xFFDB, 0x2805, 0x0008, 0x003F, 0x0002, 0x2003, 0x0004, 0x002E, 0x003C, 0x2003, 0x0001, 0x0073, 0x0025, 0x2003, 0x0002, 0x0058, 0xFFE5, 0x200B, 0x0001, 0x0043, 0xFFD9, 0xFFAC, 0xFFEF, 0x200F, 0x0001, 0x0009, 0xFFC7, 0x0047, 0x0007, 0xFFAD, 0x0001, 0x0000, 0x0000, 0x0000,
};
