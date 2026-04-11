/* AnimJoint data for relocData file 1600 (FTCaptainAnimCliffEscapeSlow2) */
/* 3584 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCliffEscapeSlow2_joint1[30];
extern u16 dFTCaptainAnimCliffEscapeSlow2_joint2[138];
extern u16 dFTCaptainAnimCliffEscapeSlow2_joint3[56];
extern u16 dFTCaptainAnimCliffEscapeSlow2_joint5[56];
extern u16 dFTCaptainAnimCliffEscapeSlow2_joint6[184];
extern u16 dFTCaptainAnimCliffEscapeSlow2_joint7[80];
extern u16 dFTCaptainAnimCliffEscapeSlow2_joint8[14];
extern u16 dFTCaptainAnimCliffEscapeSlow2_joint11[26];
extern u16 dFTCaptainAnimCliffEscapeSlow2_joint12[198];
extern u16 dFTCaptainAnimCliffEscapeSlow2_joint13[96];
extern u16 dFTCaptainAnimCliffEscapeSlow2_joint14[30];
extern u16 dFTCaptainAnimCliffEscapeSlow2_joint15[10];
extern u16 dFTCaptainAnimCliffEscapeSlow2_joint17[26];
extern u16 dFTCaptainAnimCliffEscapeSlow2_joint18[152];
extern u16 dFTCaptainAnimCliffEscapeSlow2_joint20[60];
extern u16 dFTCaptainAnimCliffEscapeSlow2_joint22[178];
extern u16 dFTCaptainAnimCliffEscapeSlow2_joint23[166];
extern u16 dFTCaptainAnimCliffEscapeSlow2_joint25[240];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimCliffEscapeSlow2_joints[] = {
	(u32)dFTCaptainAnimCliffEscapeSlow2_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimCliffEscapeSlow2_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimCliffEscapeSlow2_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimCliffEscapeSlow2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimCliffEscapeSlow2_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimCliffEscapeSlow2_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimCliffEscapeSlow2_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimCliffEscapeSlow2_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimCliffEscapeSlow2_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimCliffEscapeSlow2_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimCliffEscapeSlow2_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimCliffEscapeSlow2_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimCliffEscapeSlow2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimCliffEscapeSlow2_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimCliffEscapeSlow2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimCliffEscapeSlow2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimCliffEscapeSlow2_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimCliffEscapeSlow2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF0324, /* [25] END */
};

/* Joint 1 */
u16 dFTCaptainAnimCliffEscapeSlow2_joint1[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 353,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValAfterT(FT_ANIM_TRAY, 29), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), 720, 1477,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 3509, 2086,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 8), 4800, 414,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 4800, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimCliffEscapeSlow2_joint2[138] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX), 0, 32,
	ftAnimSetValRateT(FT_ANIM_TRAX, 41), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 12,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 1351, -479,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 953, -88,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 6,
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 261, -549,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -72, -353,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 3,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -353,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -88,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 537, -1336,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -5, 350,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 350,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 204, 127,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1336,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 347, -676,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -676,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 127,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), -10, -71,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 368, 551,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 551,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 750, 553,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 553,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 772, -561,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -561,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 434, -1009,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1009,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 357, -155,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -155,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -71,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -6, 27,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 395, 488,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 488,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 850, 949,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 27,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 9), 0, 0,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 949,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 960, 1027,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1027,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 1541, 718,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 718,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1600, 469,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimCliffEscapeSlow2_joint3[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 277, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 268, 46,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 4,
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 196, 11, 80, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 227, -9, 98, -3,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 6216, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 34, -11, 19, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 6, 0, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 6820, 8,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 107, 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 6433,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimCliffEscapeSlow2_joint5[56] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 384, 47, 100, 5, 0, 0, 0, -6, 54, -1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 428, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 18), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 98, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 95, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 375, -3, 44, -4,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -60,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 11), 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 29, -4, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTCaptainAnimCliffEscapeSlow2_joint6[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, 37, 5, -52, -348, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 479, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -272, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -283, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -295, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -424, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 492, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 560, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -313, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -222, 71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 631, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 781, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -445, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -459, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -145, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 27, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -646, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 785, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 832, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -650, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -658, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 62, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 68, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8, -66, -710, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -113, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -836, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 828, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 819, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -119, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -124, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 795, -48, -830, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 598, -144, -736, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -157, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -128, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 435, -152, -637, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 294, -97, -42, 67, -553, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, -54, 5, 48, -524, 29,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimCliffEscapeSlow2_joint7[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -770, -135,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1130, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1150, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1080, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1022, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -849, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -753, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -766, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -782, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -745, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -748, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -608, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -471, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -366, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -608, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -707, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -773, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, -24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimCliffEscapeSlow2_joint8[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 575, -38, 142, -2, 28, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -781, -89, -388,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimCliffEscapeSlow2_joint11[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -134, 44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 178, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 518, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 361, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -134, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimCliffEscapeSlow2_joint12[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -176, -71, 264, 5, -300, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -491, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 270, 8, -326, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 287, 5, -306, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 244, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -465, -104,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -582, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -781, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 189, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -51, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -693, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, -7, -714, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -48, 9, -673, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -801, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -727, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -48, -3, -713, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -90, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -819, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -815, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -755, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -125, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -109, 59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -713, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -622, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -22, 79, -782, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -855, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 49, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 33, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -61, -28, -909, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -795, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -24, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -620, 13, 173, 193,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -487, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 362, 139, -637, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 453, -14, -309, 450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -247, 167, 333, -130, 262, 425,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -153, 59, 192, -94, 540, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, 23, 144, -48, 592, 51,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimCliffEscapeSlow2_joint13[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -237, 40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -197, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -172, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -403, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -681, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -718, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -662, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -637, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -846, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -850, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -834, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -833, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -661, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, 327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -422, -420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -846, -359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1141, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1219, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1101, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimCliffEscapeSlow2_joint14[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, 12, 173, 2, -119, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 10, 30, 81, -37, -139, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 246, 9, -125, 7, 458, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 270, 275, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTCaptainAnimCliffEscapeSlow2_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimCliffEscapeSlow2_joint17[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -291, 2, -44, 0, -101, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -240, 9, -1, 1, -28, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 0, 5, 0, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTCaptainAnimCliffEscapeSlow2_joint18[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1581, -3, -1651, -36, 1124, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 793, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1585, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1709, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1687, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1612, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 536, -92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1625, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1686, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1604, 14, 411, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1529, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 410, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1685, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1671, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1522, 6, 368, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1471, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 255, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 207, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 185, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1664, -32, 297, 96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 455, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1568, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1463, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1533, -93,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 547, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1678, 99, -1661, -81, 733, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1767, 61, -1697, -9, 994, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1801, 33, -1679, 17, 1136, 142,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimCliffEscapeSlow2_joint20[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1092, 32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1272, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1327, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1445, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1435, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1237, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1216, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1196, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1176, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 963, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 872, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 786, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 600, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -155,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimCliffEscapeSlow2_joint22[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1656, -40, -1626, -7, 1687, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1697, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1649, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1699, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1644, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1433, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1678, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1507, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1643, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1649, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1464, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1573, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1455, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1236, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1582, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1543, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1682, -33, 1323, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1753, -10, 1712, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1560, -3, -1762, -19, 1779, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1548, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1791, -40, 1772, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1843, -7, 1692, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1731, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1560, -1, 1694, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1550, -29, 1684, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1618, -10, -1674, 45, 1463, -142,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1586, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1572, 40, 1400, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1537, 5, 1498, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1560, -75, 1570, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1641, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1689, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1728, -24, -1533, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1738, -9, -1566, -32, 1688, 47,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimCliffEscapeSlow2_joint23[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1646, -22, -1868, 20, -2028, -145,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1586, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1734, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2379, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2432, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2756, -60,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1573, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1498, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1704, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1604, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2817, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2807, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2738, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1485, -11, -1597, 11, -2720, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1612, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1522, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2779, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2976, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1663, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1799, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2978, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1552, 33, -3012, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1647, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1875, -49, -3025, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1870, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2867, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2743, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1642, 3, -1767, 72, -2515, 223,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1701, 49, -1728, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2297, 244,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1794, 170,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1752, 33, -1721, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1768, 16, -1718, 2, -1685, 109,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimCliffEscapeSlow2_joint25[240] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1122, 58,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1230, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1248, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1451, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1435, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1369, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1343, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1270, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1247, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1012, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 864, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 606, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -64,
	ftAnimEnd(),
	0x0000, 0x200E, 0x059C, 0x000A, 0x06AD, 0xFFF4, 0xF8D0, 0xFFE4, 0x280B, 0x0003, 0x05BA, 0xFFF4, 0xF876, 0x0002, 0x2005, 0x0001, 0x06A1, 0xFFE4, 0x2005, 0x0001, 0x0673, 0xFFD9, 0x2805, 0x0006, 0x0684, 0x000A, 0x0801, 0x0001, 0x200B, 0x0001, 0x05A5, 0xFFEB, 0xF88D, 0x001D, 0x280B, 0x0006, 0x057D, 0x0016, 0xF933, 0x0002, 0x0801, 0x0004, 0x2005, 0x0001, 0x068E, 0x0008, 0x2805, 0x0003, 0x0692, 0xFFF3, 0x0801, 0x0001, 0x200B, 0x0001, 0x059A, 0x0038, 0xF930, 0xFFBB, 0x200B, 0x0001, 0x05EE, 0x0074, 0xF8A8, 0xFF75, 0x200F, 0x0001, 0x0684, 0x0077, 0x067E, 0xFFF5, 0xF818, 0xFFD8, 0x2805, 0x0004, 0x0671, 0xFFFB, 0x200B, 0x0001, 0x06DE, 0x002E, 0xF856, 0x005F, 0x200B, 0x0001, 0x06E1, 0xFFEF, 0xF8D6, 0x008B, 0x280B, 0x0003, 0x063C, 0xFFD4, 0xFA2C, 0x0019, 0x0801, 0x0002, 0x2005, 0x0001, 0x066C, 0xFFFE, 0x2805, 0x0003, 0x064F, 0xFFE7, 0x200B, 0x0001, 0x0623, 0xFFE4, 0xFA18, 0xFFD4, 0x200B, 0x0001, 0x0604, 0xFFCC, 0xF9D3, 0xFFD4, 0x200B, 0x0001, 0x05BA, 0xFFBE, 0xF9BF, 0xFFE0, 0x200F, 0x0001, 0x057F, 0x0008, 0x0637, 0xFFFF, 0xF992, 0xFF85, 0x200F, 0x0001, 0x05CB, 0x004A, 0x064D, 0xFFE1, 0xF8C9, 0xFF73, 0x200F, 0x0001, 0x0614, 0x0062, 0x05F8, 0xFFB5, 0xF877, 0xFFB7, 0x2805, 0x0002, 0x057A, 0xFFA9, 0x200B, 0x0001, 0x0690, 0x0035, 0xF836, 0xFFCE, 0x280B, 0x0002, 0x066C, 0x0016, 0xF82B, 0x0030, 0x0801, 0x0001, 0x2005, 0x0001, 0x0508, 0xFFB6, 0x200F, 0x0001, 0x06AC, 0x003E, 0x04E6, 0xFFEA, 0xF871, 0x003A, 0x200F, 0x0001, 0x06E9, 0x003D, 0x04DB, 0xFFF6, 0xF8A0, 0x002F, 0x0000,
};
