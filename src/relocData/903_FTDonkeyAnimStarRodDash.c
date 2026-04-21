/* AnimJoint data for relocData file 903 (FTDonkeyAnimStarRodDash) */
/* 3472 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimStarRodDash_joint1[16];
extern u16 dFTDonkeyAnimStarRodDash_joint2[62];
extern u16 dFTDonkeyAnimStarRodDash_joint3[32];
extern u16 dFTDonkeyAnimStarRodDash_joint5[48];
extern u16 dFTDonkeyAnimStarRodDash_joint6[160];
extern u16 dFTDonkeyAnimStarRodDash_joint8[68];
extern u16 dFTDonkeyAnimStarRodDash_joint9[68];
extern u16 dFTDonkeyAnimStarRodDash_joint11[24];
extern u16 dFTDonkeyAnimStarRodDash_joint12[154];
extern u16 dFTDonkeyAnimStarRodDash_joint13[80];
extern u16 dFTDonkeyAnimStarRodDash_joint14[66];
extern u16 dFTDonkeyAnimStarRodDash_joint15[10];
extern u16 dFTDonkeyAnimStarRodDash_joint17[18];
extern u16 dFTDonkeyAnimStarRodDash_joint18[182];
extern u16 dFTDonkeyAnimStarRodDash_joint20[72];
extern u16 dFTDonkeyAnimStarRodDash_joint22[210];
extern u16 dFTDonkeyAnimStarRodDash_joint23[184];
extern u16 dFTDonkeyAnimStarRodDash_joint25[64];
extern u16 dFTDonkeyAnimStarRodDash_joint26[166];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimStarRodDash_joints[] = {
	(u32)dFTDonkeyAnimStarRodDash_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimStarRodDash_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimStarRodDash_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimStarRodDash_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimStarRodDash_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimStarRodDash_joint8, /* [6] joint 8 */
	0x00000000, /* [7] NULL */
	(u32)dFTDonkeyAnimStarRodDash_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimStarRodDash_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimStarRodDash_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimStarRodDash_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimStarRodDash_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimStarRodDash_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimStarRodDash_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimStarRodDash_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimStarRodDash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimStarRodDash_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimStarRodDash_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimStarRodDash_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTDonkeyAnimStarRodDash_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimStarRodDash_joint1[16] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1889,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 25), 2400, 214,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 25), 2400,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimStarRodDash_joint2[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 65, 1450, -209,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 25), -22, 67,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 19, -91, 1135, -771,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 1064, -43,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), 19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 11), 19, -4, 1064, -52,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 8, -11, 928, -182,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -2, -7, 722, -89, 45, -120,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 783, 34,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 20), -400,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 8), -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), -2, -17, 783, 165,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), -29, 1031,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTDonkeyAnimStarRodDash_joint3[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 317, -88, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -95, -145, -312, 11, 88, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -265, -13, -41, 20, -16, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -265, -41, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -265, -41, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimStarRodDash_joint5[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 457, 58, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 622, 83, -54, -8, -373, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 791, 13, 24, 6, 41, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 791, 24, 41,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), 24, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 791, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 948, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 948,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 948, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 750,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimStarRodDash_joint6[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, -102, 62, -399, -509, 430,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -528, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 84, -387, -79, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -587, -320, -162, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -271, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -250, 104, 5, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -320, -48, 284, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -233, 31, -347, -21, 284, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -271, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -323, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 279, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 325, 7,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -271, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -113, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -326, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -339, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -326, -80,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -349, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -123, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -72, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 36, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -406, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -803, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -98, 17, -796, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -708, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -84, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 13, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -55, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -596, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, -6, -84, 0, -473, 24,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimStarRodDash_joint8[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -4, -1016,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1021, -558,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1120, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1230, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1139, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1086, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1090, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1128, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1126, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1059, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -571, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -508, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -510, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -465, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 57,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimStarRodDash_joint9[68] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 151, -67, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -17, 6, 229, -22, -241, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 177, 15, -155, -29, -46, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 177, -155, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 177, -42, -155, 1, -46, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -412, -33, -139, 4, -47, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -92, 35, -121, 1, -48, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -92, -121, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -92, 22, -121, 4, -48, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimStarRodDash_joint11[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -269, 151, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), -398, -3, 70, -2, 29, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -398, 70, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -398, 70, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTDonkeyAnimStarRodDash_joint12[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -381, 85, -3, 227, -959, 441,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -256, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 224, 143, -517, 390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 283, -29, -178, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -18, -91, -775, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -323, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -329, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -18, 0, -775, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -18, 0, -776, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -329, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -330, 0,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -17, 21, -776, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 228, 22, -468, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -330, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -7, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 3, 243, 9, -489, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -864, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 167, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -145, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -151, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -130, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -878, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -757, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 169, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 179, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -709, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -504, 60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -116, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, 0, 172, -7, -479, 25,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimStarRodDash_joint13[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -4, -638,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, -433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -870, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -917, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -646, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1093, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1121, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -665, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -662, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -518, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -467, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimStarRodDash_joint14[66] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 540, 145, 471, -108, 320, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 938, 30, -435, -69, 625, 23,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 938, 0, -435, 0, 625, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -22, 12, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 757, -60, 598, 54, 332, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 146, -43, 276, -22, 88, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 146, -4, 276, -23, 88, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTDonkeyAnimStarRodDash_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimStarRodDash_joint17[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -742,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -740, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -350, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 44), -404,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTDonkeyAnimStarRodDash_joint18[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1973, 195, -1118, -189, 938, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1778, 248, -1307, -206, 853, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1477, 134, -1532, -119, 1060, 119,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1595, -40, 1100, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1545, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1547, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1476, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1590, 6, 1111, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1423, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1226, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1211, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 984, -39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1481, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1580, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1415, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1300, 28,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1022, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1274, 20, -1604, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1319, -19, -1539, -11,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 865, -75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1343, -32, -1555, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1416, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1250, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 797, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1405, 0, 810, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1498, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 954, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1133, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1224, 22, 1123, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1211, -6, 1265, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1540, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1659, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1669, -9, -1215, -4, 1279, 13,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimStarRodDash_joint20[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1012, -84,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 927, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 649, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 661, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 676, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 352, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 325, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 592, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 622, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 801, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 753, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 683, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 878, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1280, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1273, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1043, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimStarRodDash_joint22[210] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 340, -291, -79, -164, -97, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, -420, -244, -217, -134, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -500, -162, -513, -89, 371, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -276, 240, -423, 98, 255, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, 119, -317, 64, 111, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -261, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -37, -21, 140, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -62, -26, 178, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -124, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 370, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -250, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -131, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -129, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -220, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 356, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 237, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -219, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -307, -34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -130, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -85, -10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -340, -25, 240, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -268, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 432, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -97, -13, 432, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -109, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -176, -183,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -232, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -82, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -56, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 20, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -166, -69, -363, -158,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -191, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -492, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -465, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -375, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -161, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -116, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 25, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 17, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 2, 14, -2, -369, 6,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimStarRodDash_joint23[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 83, -255, 299, -23, -171, -118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 295, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -172, -151, -290, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -219, 65, -370, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 156, 108, 213, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 360, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 310, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, 14, 298, -10, 242, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 147, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 299, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 197, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 194, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 167, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 141, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 136, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 301, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 423, 71,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 176, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 352, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 173, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 348, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 503, 76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 393, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 372, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 148, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 288, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -3, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -356, -43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -22, -18, 359, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 11, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 219, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -395, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -306, 18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 47, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 96, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 103, 7, 216, -2, -296, 10,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimStarRodDash_joint25[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 673, 125,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 798, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 802, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 806, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 735, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 723, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 722, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 1021, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1048, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1232, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1246, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1109, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1054, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1011, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimStarRodDash_joint26[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1586, 294, -1340, -81, 1840, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1514, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1881, 158, 1739, -356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1903, -24, 1127, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1831, -20, -1531, -37, 1036, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1600, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1862, 18, 1087, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1102, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1825, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1608, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1663, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1105, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1023, -16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1824, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1845, 15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1666, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1598, 49,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1867, 32, 1004, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2048, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 897, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1541, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1565, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2038, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1784, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 905, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1215, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1587, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1713, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1768, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1620, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1617, -3, -1713, 0, 1221, 5,
	ftAnimEnd(),
	0x0000, 0x0000,
};
