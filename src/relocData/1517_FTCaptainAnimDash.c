/* AnimJoint data for relocData file 1517 (FTCaptainAnimDash) */
/* 4144 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDash_joint1[68];
extern u16 dFTCaptainAnimDash_joint2[74];
extern u16 dFTCaptainAnimDash_joint4[76];
extern u16 dFTCaptainAnimDash_joint5[194];
extern u16 dFTCaptainAnimDash_joint6[76];
extern u16 dFTCaptainAnimDash_joint7[52];
extern u16 dFTCaptainAnimDash_joint8[44];
extern u16 dFTCaptainAnimDash_joint10[70];
extern u16 dFTCaptainAnimDash_joint11[208];
extern u16 dFTCaptainAnimDash_joint12[96];
extern u16 dFTCaptainAnimDash_joint13[56];
extern u16 dFTCaptainAnimDash_joint14[10];
extern u16 dFTCaptainAnimDash_joint16[108];
extern u16 dFTCaptainAnimDash_joint17[190];
extern u16 dFTCaptainAnimDash_joint19[82];
extern u16 dFTCaptainAnimDash_joint21[206];
extern u16 dFTCaptainAnimDash_joint22[160];
extern u16 dFTCaptainAnimDash_joint24[252];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimDash_joints[] = {
	(u32)dFTCaptainAnimDash_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimDash_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimDash_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimDash_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimDash_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimDash_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimDash_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimDash_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimDash_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimDash_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimDash_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimDash_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimDash_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimDash_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimDash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimDash_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimDash_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimDash_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF03B4, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimDash_joint1[68] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValT(FT_ANIM_TRAX, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1155, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 1521, 239, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 1253, 107,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 3), 0,
	ftAnimSetValT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1385, -164, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1178, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1600, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimDash_joint2[74] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 107, 0, 4, -76, 9,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 410, 0, -86, 0, -88, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 393, -7, 148, 0, 9, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 393, 148, 9,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 393, 0, 148, -1, 9, -6,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 4, -76, 9,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 326, 141, 7,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 326, 0, 141, 0, 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 107, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimDash_joint4[76] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, 0, 0, 0, -31, 47,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 1, -45, -72, 1, 69, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 222, 19, 346, 0, -8, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 363, 0, -469, 0, -84, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 363, -469, -84,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 258, -1, -312, -63, 65, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 173, 0, -248, 0, 44, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 333, 0, -389, 0, -69, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 189, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimDash_joint5[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, -150, 5, -242, -524, 618,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 88, -102, -237, -129, 93, 383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33, -55, -252, 22, 242, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -22, 39, -191, 78, 218, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 112, 123, -95, 30, -253, -437,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1181, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 223, 168, -130, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 449, 206, -241, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -328, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 637, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 711, 46, -1277, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1164, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 555, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -352, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -391, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1038, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -944, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 547, -208, -388, 133, -923, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 138, -170, -125, 108, -775, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 207, 101, -171, -78, -830, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -406, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 341, 169, -831, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 547, 153, -834, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -807, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 630, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -449, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -343, 57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -780, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -542, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 583, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 250, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -278, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -10, 31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -528, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, -10, 5, 16, -524, 4,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDash_joint6[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -270,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1068, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -471, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -894, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1074, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1026, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -941, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1005, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1022, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1031, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -958, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -750, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -750, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -795, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -816, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -811, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -801, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimDash_joint7[52] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2435, -89, -388,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -169, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 3234, 253, 35, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 3474, 0, 90, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 3255, -21, -4, 0, 6, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 3255, -4, 6,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, -54, -4, -5, 6, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 2435, -89, -388,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimDash_joint8[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 148, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 141, 0, 127, 0, -14, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 141, 127, -14,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 187, 0, -62, 0, 8, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimDash_joint10[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 40, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -648, 0, 143, 0, -112, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -648, 143, -112,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -612, -34, 163, 46, -188, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -448, 86, -28, 0, -39, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -92, 0, 211, 0, -71, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -323, 0, 153, -25, -51, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimDash_joint11[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -129, -278, 144, 234, 592, -1102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -407, -157, 378, -34, -510, -679,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -444, 134, 74, -192, -767, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -138, 207, -7, 50, -386, 413,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -29, 94, 175, 109, 58, 273,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 100, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 50, 36, 212, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 44, -18, 252, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 339, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 12, -7, 56, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 28, 16, 139, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -16, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 196, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 164, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 350, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 448, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 129, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 103, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -48, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 56, 31, 419, -33, 155, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 284, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -212, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 167, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 31, -155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -247, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 143, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -238, -11, 59, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -167, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 85, 37, -201, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 208, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -24, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 53, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, 46, 226, 10, 168, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -52, -28, 195, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 327, 138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 571, 38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -99, -38, 160, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, -30, 144, -16, 592, 20,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDash_joint12[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1014, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -572, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1006, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1018, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -664, 341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -336, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -142, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -219, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -289, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -284, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -372, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -579, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -257, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -351, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -650, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -752, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -941, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -981, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1025, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimDash_joint13[56] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 270, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 327, 0, -119, 0, -38, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -271, 0, 69, 0, -33, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 201, 0, -177, 0, 145, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 201, 0, -177, 0, 145, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 379, 4, -20, 30, 98, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 270, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 275, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimDash_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimDash_joint16[108] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -191, -210, -79,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -191, -210, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -410, -65, -169, -2, -242, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -372, 25, -9, 0, -4, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -204, -22, -162, 4, 19, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 88, 89, -160, 2, 39, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 263, 51, 0, 9, 0, -1,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), -191, -210, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 266, -154, -127, -18, 32, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -335, -47, -72, 11, 78, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -274, 42, -92, -11, 23, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -301, 26, -106, -4, 73, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -119, 52, -119, 18, -7, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimDash_joint17[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, 27, 70, -39, -472, -329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 218, -31, 30, -105, -802, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 127, -85, -141, -111, -1046, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -190, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -15, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -830, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, 197,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -173, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -154, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -103, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 183, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -141, -31, -34, 96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 18, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -103, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 196, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 121, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 29, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 67, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 114, 13, 32, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 148, -27, -95, -24, 37, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 59, -36, -151, -102, -146, -135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 133, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -299, -45, -232, -117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -133, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, -142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -799, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 171, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 122, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -90, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 31, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -806, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -495, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 46, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 72, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 141, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 183, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 7, 70, -2, -472, 23,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimDash_joint19[82] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 250,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 696, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 878, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 725, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 360, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 110, -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 4, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 100, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 101, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 589, 388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 878, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 963, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1051, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 556, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 477, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -31,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTCaptainAnimDash_joint21[206] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, -39, -42, -41, 80, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -165, 23, -83, 23, -51, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -79, -71, 5, 10, -286, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, -134, -63, -41, -330, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -349, 12, -78, -25, -332, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 199, 231,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -216, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -210, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -221, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -298, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, 172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 549, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -203, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -120, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -293, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -193, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 528, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 350, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -193, 69, -66, 29, 85, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -55, 49, -61, 53, -171, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -94, 14, 40, 108, -178, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 46, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 155, 18, -67, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 78, -116, 8, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 36, 4, -76, -97, 167, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, 12, -116, -40, 177, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -162, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 60, 13, 158, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 70, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 68, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 51, -34, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4, -70, -70, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -125, -3, 65, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -33, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -39, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, -1, -42, -2, 80, 14,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimDash_joint22[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1768, -36, -1718, -25, 1531, -231,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1149, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1749, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1732, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1601, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1599, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1121, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 728, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1741, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1742, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1633, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1648, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 722, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 611, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1745, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1735, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 554, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 525, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1636, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1659, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 543, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1705, 9, 855, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1715, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1631, -16, 690, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1700, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 619, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1717, -3, 669, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1736, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1508, 42,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1720, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1766, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1728, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1721, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1768, 1, -1718, 2, 1531, 22,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimDash_joint24[252] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 227,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 769, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 888, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1044, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1099, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1067, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1030, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1199, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1180, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 865, -500,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 179, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 562, 340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 861, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 900, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 912, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 611, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -19,
	ftAnimEnd(),
	0x0000, 0x200E, 0x00A1, 0xFF81, 0x016D, 0xFF2C, 0xFEE9, 0xFFEF, 0x280D, 0x0002, 0x001D, 0xFFFA, 0xFF1E, 0x00BD, 0x2003, 0x0001, 0x0021, 0xFFE0, 0x2003, 0x0001, 0x005F, 0x0084, 0x200F, 0x0001, 0x012A, 0x0055, 0x008C, 0x002C, 0x0052, 0x0076, 0x200F, 0x0001, 0x010B, 0xFFD6, 0x0076, 0xFFF2, 0x0009, 0xFFBC, 0x2803, 0x0003, 0x0088, 0xFFF3, 0x200D, 0x0001, 0x006F, 0xFFFE, 0xFFCB, 0xFFCE, 0x280D, 0x0006, 0x0083, 0xFFF8, 0x0020, 0x0027, 0x0801, 0x0002, 0x2003, 0x0001, 0x0086, 0x0000, 0x2803, 0x0005, 0x009D, 0x0007, 0x0801, 0x0003, 0x200D, 0x0001, 0x0078, 0xFFF5, 0x004B, 0x002C, 0x2805, 0x0002, 0x0065, 0xFFFF, 0x2809, 0x0003, 0x00A8, 0xFFE9, 0x0801, 0x0001, 0x2003, 0x0001, 0x00A3, 0xFFDA, 0x2007, 0x0001, 0x004F, 0xFFB0, 0x006A, 0x0046, 0x200F, 0x0001, 0x0003, 0xFFBF, 0x00F2, 0x0022, 0x0072, 0xFFEF, 0x200F, 0x0001, 0xFFCE, 0xFFEE, 0x00AF, 0xFFD5, 0x0085, 0xFFB8, 0x200F, 0x0001, 0xFFDE, 0x0012, 0x009A, 0xFFEA, 0xFFE2, 0xFF6E, 0x2803, 0x0005, 0x0031, 0x001E, 0x200D, 0x0001, 0x0082, 0xFFF8, 0xFF62, 0xFFA0, 0x2805, 0x0007, 0x013A, 0x001D, 0x2009, 0x0001, 0xFF21, 0xFFC3, 0x2809, 0x0005, 0xFE9D, 0x000E, 0x0801, 0x0003, 0x2003, 0x0001, 0x0051, 0x001E, 0x2803, 0x0004, 0x009E, 0x0006, 0x0801, 0x0001, 0x2009, 0x0001, 0xFEB2, 0x0016, 0x2809, 0x0002, 0xFEE0, 0x000F, 0x2005, 0x0001, 0x0154, 0x0015, 0x2005, 0x0001, 0x0166, 0x000C, 0x200F, 0x0001, 0x00A1, 0x0003, 0x016D, 0x0006, 0xFEE9, 0x0009, 0x0000, 0x0000, 0x0000,
};
