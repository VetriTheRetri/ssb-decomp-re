/* AnimJoint data for relocData file 1218 (FTLinkAnimStarRodSmash) */
/* 3680 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimStarRodSmash_joint1[52];
extern u16 dFTLinkAnimStarRodSmash_joint2[62];
extern u16 dFTLinkAnimStarRodSmash_joint4[62];
extern u16 dFTLinkAnimStarRodSmash_joint5[170];
extern u16 dFTLinkAnimStarRodSmash_joint6[64];
extern u16 dFTLinkAnimStarRodSmash_joint9[8];
extern u16 dFTLinkAnimStarRodSmash_joint10[238];
extern u16 dFTLinkAnimStarRodSmash_joint11[96];
extern u16 dFTLinkAnimStarRodSmash_joint12[50];
extern u16 dFTLinkAnimStarRodSmash_joint13[10];
extern u16 dFTLinkAnimStarRodSmash_joint16[8];
extern u16 dFTLinkAnimStarRodSmash_joint17[42];
extern u16 dFTLinkAnimStarRodSmash_joint18[34];
extern u16 dFTLinkAnimStarRodSmash_joint20[30];
extern u16 dFTLinkAnimStarRodSmash_joint21[178];
extern u16 dFTLinkAnimStarRodSmash_joint23[56];
extern u16 dFTLinkAnimStarRodSmash_joint25[190];
extern u16 dFTLinkAnimStarRodSmash_joint26[188];
extern u16 dFTLinkAnimStarRodSmash_joint28[244];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimStarRodSmash_joints[] = {
	(u32)dFTLinkAnimStarRodSmash_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimStarRodSmash_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimStarRodSmash_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimStarRodSmash_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimStarRodSmash_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimStarRodSmash_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimStarRodSmash_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimStarRodSmash_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimStarRodSmash_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimStarRodSmash_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimStarRodSmash_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimStarRodSmash_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimStarRodSmash_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimStarRodSmash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimStarRodSmash_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimStarRodSmash_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimStarRodSmash_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimStarRodSmash_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimStarRodSmash_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF033E, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimStarRodSmash_joint1[52] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 901, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 21, 11, 846, -32, -91, -92,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 21, -12, 839, -95, -172, 187,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -11, 678, -139, 235, 217,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 577, 20, 235, -76,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 11), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 746, 86, -11, -62,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 901, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimStarRodSmash_joint2[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -270, -10, -156, -28, 85, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -270, 23, -156, 35, 85, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 63, 22, 346, 33, -14, -6,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 63, 0, 346, 0, -14, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 151, -5, 305, -2, -5, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimStarRodSmash_joint4[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -57, -28, -146, -33, -2, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -167, 32, -334, 19, 23, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 335, 186, 89, 112, 81, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 579, 21, 113, -3, 564, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 615, 0, 43, 0, 597, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -8, 2, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 525, -11, -172, 4, 68, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimStarRodSmash_joint5[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, 5, -326, -18, -86, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -239, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 412, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -479, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -475, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -429, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -255, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -113, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 398, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 252, -71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -443, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -369, 110,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 168, -47, -21, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 213, 4, -56, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -220, 141,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -53, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 210, -5, -24, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 233, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 86, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -71, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -242, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -257, -15, 227, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -242, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -429, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 86, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 422, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 447, 23, -268, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 387, -25, -207, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -421, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -328, 2,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 362, -24, -180, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 282, -5, -89, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, -2, -326, 1, -86, 3,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimStarRodSmash_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -335, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -288, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -209, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -294, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -395, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -909, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -929, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1046, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1035, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -492, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -465, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -499, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimStarRodSmash_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimStarRodSmash_joint10[238] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, 22, 123, 12, -50, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 301, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 522, 123, 165, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 685, 159, 393, 209,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 924, 63, 674, 52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 333, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 434, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 967, 47, 690, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1124, 188, 596, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1395, 288, 553, 118, 430, -114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 714, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 254, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1700, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1828, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1574, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 738, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 756, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1168, -371, -411, -371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 832, -511, 733, -84, -737, -426,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, -509, 587, -189, -1265, -355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -186, -67, 354, -64, -1449, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 10, 196, 459, -51, -940, 504,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 207, 98, 250, -108, -441, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 207, -1, 241, -6, -448, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 109, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 237, -2, -459, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -746, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 211, -35,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 107, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 354, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -467, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 174, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 59, 24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 365, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 406, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -452, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -58, 14,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 83, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 118, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 413, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 2, 123, 5, -50, 7,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimStarRodSmash_joint11[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -84,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -796, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -696, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -348, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -360, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -498, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -714, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -467, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -387, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -575, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -563, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -460, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -532, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -505, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -440, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -485, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -589, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimStarRodSmash_joint12[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 277, 1, -165, 4, 55, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 19, -80, -138, -22, 445, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 36, 102, -234, 123, 665, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 224, -2, 108, 26, 275, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -2, -5, 213, -7, 367, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimStarRodSmash_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, -804, 804, 83, -1, 11,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimStarRodSmash_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimStarRodSmash_joint17[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 59, 3, 462, 41, 48, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 59, -14, 462, -56, 48, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -140, -1, -331, -10, -5, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 7, 3, 111, 4, 4, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimStarRodSmash_joint18[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 148, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 148, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -317, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -448, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -512, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 142, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimStarRodSmash_joint20[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 142, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -179, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 331, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -21, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -188, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimStarRodSmash_joint21[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, -11, -244, 12, 108, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -349, -2, -53, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 329, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 325, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 230, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -352, -2, -51, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -341, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -97, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -115, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -333, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -315, 61, 190, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -135, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -218, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -22, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 150, 89, -344, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -277, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 155, 5, -104, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 208, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -194, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -213, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -517, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -272, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -421, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 175, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -224, -16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 0, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -448, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -316, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -231, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -221, -7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -301, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -246, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -228, -7, 42, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -240, -3, 100, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -1, -244, 2, 108, 8,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimStarRodSmash_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 413, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 417, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 544, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 587, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 492, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 486, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 683, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 698, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 443, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 401, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 259, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimStarRodSmash_joint25[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, 6, -161, -28, -34, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -473, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -66, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 313, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 265, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 300, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -495, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -505, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -57, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -163, -45,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -474, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -270, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 378, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 61, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -198, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -113, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -332, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -372, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 22, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -14, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -111, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -190, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -375, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -323, 18,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 265, 39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -191, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -79, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -301, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 31, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 303, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 324, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 19, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -153, -5,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 325, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 328, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -38, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -158, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -161, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 0, -161, 0, -34, 3,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimStarRodSmash_joint26[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -32, 269, 0, -125, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -238, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 52, -98, 212, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -40, -73, 139, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 57, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 10, -40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -228, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -240, -77,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 69, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 146, 70,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -49, -19, -346, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, 82, 244, 94, -429, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 347, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 116, 139, -398, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -305, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 251, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 261, 6, 342, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 409, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 130, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -290, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -424, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -449, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -575, 36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 425, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 524, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 157, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 543, -26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -533, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -442, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 505, -42, 502, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 282, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 271, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -443, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -130, 11,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 275, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 0, 269, -1, -125, 5,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimStarRodSmash_joint28[244] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 390, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 285, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 366, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 897, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 940, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1091, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1097, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 805, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 774, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 456, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 428, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -3,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFE55, 0xFFC9, 0xFFB6, 0xFFEF, 0xFFBB, 0x0003, 0x2805, 0x0004, 0xFF61, 0x0001, 0x2809, 0x000A, 0x00C2, 0x002A, 0x2003, 0x0003, 0xFDD8, 0x000F, 0x2003, 0x0001, 0xFDFF, 0x002B, 0x2803, 0x0006, 0xFDED, 0xFFDC, 0x2005, 0x0001, 0xFF67, 0x0002, 0x2805, 0x0009, 0xFF04, 0x0013, 0x0801, 0x0005, 0x200B, 0x0001, 0xFDC9, 0xFFE2, 0x00EA, 0x0020, 0x200B, 0x0003, 0xFDB6, 0x001B, 0x00D8, 0xFFCF, 0x200F, 0x0001, 0xFDDE, 0x0067, 0xFF1E, 0x0033, 0x0099, 0xFF91, 0x200F, 0x0003, 0xFFFB, 0x004A, 0xFFC4, 0x0015, 0xFE80, 0xFF76, 0x200F, 0x0001, 0xFFFB, 0xFF44, 0xFFD3, 0x0007, 0xFE1C, 0xFFBC, 0x2809, 0x0004, 0xFDB2, 0xFFF2, 0x2805, 0x000C, 0xFFEE, 0xFFFD, 0x2003, 0x0001, 0xFE82, 0xFF3E, 0x2003, 0x0001, 0xFE76, 0xFFFA, 0x2803, 0x000B, 0xFEB2, 0xFFFC, 0x0801, 0x0002, 0x2009, 0x0001, 0xFDA6, 0xFFF8, 0x2809, 0x0012, 0xFF5E, 0x0029, 0x0801, 0x0007, 0x2005, 0x0001, 0xFFE9, 0xFFFA, 0x2805, 0x000A, 0xFEE7, 0xFFE0, 0x2003, 0x0001, 0xFEAD, 0xFFFB, 0x2803, 0x000A, 0xFDDB, 0xFFE6, 0x0801, 0x0009, 0x200D, 0x0001, 0xFECA, 0xFFE9, 0xFF85, 0x0024, 0x280D, 0x000B, 0xFF91, 0x000E, 0xFFAE, 0x0001, 0x2003, 0x0001, 0xFDC4, 0xFFF0, 0x2003, 0x0008, 0xFE20, 0x000C, 0x2003, 0x0001, 0xFE2B, 0x000A, 0x2803, 0x0006, 0xFE53, 0x0002, 0x0801, 0x0001, 0x200D, 0x0001, 0xFF9E, 0x000B, 0xFFB0, 0x0002, 0x200D, 0x0004, 0xFFB6, 0x0001, 0xFFBA, 0x0001, 0x200F, 0x0001, 0xFE55, 0x0001, 0xFFB6, 0x0000, 0xFFBB, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
