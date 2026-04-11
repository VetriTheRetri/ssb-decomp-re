/* AnimJoint data for relocData file 1159 (FTLinkAnimStunLandD) */
/* 1920 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimStunLandD_joint1[32];
extern u16 dFTLinkAnimStunLandD_joint2[14];
extern u16 dFTLinkAnimStunLandD_joint4[28];
extern u16 dFTLinkAnimStunLandD_joint5[116];
extern u16 dFTLinkAnimStunLandD_joint6[48];
extern u16 dFTLinkAnimStunLandD_joint9[58];
extern u16 dFTLinkAnimStunLandD_joint10[100];
extern u16 dFTLinkAnimStunLandD_joint11[52];
extern u16 dFTLinkAnimStunLandD_joint12[60];
extern u16 dFTLinkAnimStunLandD_joint13[8];
extern u16 dFTLinkAnimStunLandD_joint16[10];
extern u16 dFTLinkAnimStunLandD_joint17[34];
extern u16 dFTLinkAnimStunLandD_joint18[8];
extern u16 dFTLinkAnimStunLandD_joint20[22];
extern u16 dFTLinkAnimStunLandD_joint21[74];
extern u16 dFTLinkAnimStunLandD_joint23[32];
extern u16 dFTLinkAnimStunLandD_joint25[48];
extern u16 dFTLinkAnimStunLandD_joint26[76];
extern u16 dFTLinkAnimStunLandD_joint28[80];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimStunLandD_joints[] = {
	(u32)dFTLinkAnimStunLandD_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimStunLandD_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimStunLandD_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimStunLandD_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimStunLandD_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimStunLandD_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimStunLandD_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimStunLandD_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimStunLandD_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimStunLandD_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimStunLandD_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimStunLandD_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimStunLandD_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimStunLandD_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimStunLandD_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimStunLandD_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimStunLandD_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimStunLandD_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimStunLandD_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF01C8, /* [28] END */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimStunLandD_pad[1] = { 0 };

/* Joint 1 */
u16 dFTLinkAnimStunLandD_joint1[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), 960, -56, 157, 2647,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 20), 259, -2435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 669, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 1314, 113,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAY), -229, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 6), 945, 15, 162, -718,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimStunLandD_joint2[14] = {
	ftAnimSetVal(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -138, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTLinkAnimStunLandD_joint4[28] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 130, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 89, 133,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValT(FT_ANIM_ROTY, 26), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 734, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -207, -190,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 74, 4,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimStunLandD_joint5[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, -100, -508, -22, 556, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -512, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -365, 188, 220, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -113, 190, -164, -321,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 22, -19, -738, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -416, 84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -342, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1, -28, -732, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -421, -179, -236, 179,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -355, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -196, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -617, -179, -49, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -976, -87, 224, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1070, 91, -331, -26, 354, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -793, 228, -248, 18, 55, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -614, 134, -294, -41, -152, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -543, -52, -360, -13, -338, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -612, -69, -379, -18, -278, 59,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimStunLandD_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -679, -113,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -598, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -541, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1030, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -997, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -660, 338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -201, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -633, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -582, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -480, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -77,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimStunLandD_joint9[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 378, -72, 0, 4, 0, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 178, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 38, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -22, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -279, -64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 239, 22,
	ftAnimBlock(0, 7),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -128, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -143, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 8, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 122, 37,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimStunLandD_joint10[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 99, 15, 391, 27, 248, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -118, 13, -686, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 323, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 287, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 298, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -99, 23, -721, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 366, 176, -159, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 561, 165, 237, -91, 80, 203,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 796, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 80, 106, 383, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 262, 55, 407, -128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -171, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 672, -90, 191, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 723, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 214, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 225, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -312, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -263, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 795, 71, 225, 0, -151, 111,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimStunLandD_joint11[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -660, -117,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -580, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -549, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1083, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1139, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -706, 362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -228, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -652, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -418, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -502, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -575, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimStunLandD_joint12[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -394, 84, 0, 43,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 189, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 106, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 427, 98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -32, -69,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -112, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 595, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 0, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 32, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -107, -27,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimStunLandD_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimStunLandD_joint16[10] = {
	ftAnimSetVal(FT_ANIM_ROTY), -536,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1697, -339,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 26), -208,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimStunLandD_joint17[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -470, 45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 19), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -331, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -593, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 291, 52,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -332, -26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimStunLandD_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimStunLandD_joint20[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 153, -97,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -187, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 226, 121,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -40, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimStunLandD_joint21[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -374, 3, -226, -13, -35, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -115, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -218, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -243, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -209, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -149, -23,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -86, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -375, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -243, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -368, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -202, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -262, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -364, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -324, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -259, 3, -386, -17, -259, 65,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimStunLandD_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 501, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 411, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 428, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 533, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 556, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 673, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 706, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimStunLandD_joint25[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 799, -2, 390, -6, 62, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 267, 5, 131, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 651, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 677, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 862, 55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 278, 15, 156, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 297, 20, 199, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 924, 62, 319, 22, 254, 55,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimStunLandD_joint26[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 220, 0, 316, -5, -239, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -195, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 136, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), 246, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 251, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 526, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -158, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -262, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 143, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 193, 122,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -336, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 372, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 520, 118,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 598, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 672, 152, 663, 65, -192, 143,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimStunLandD_joint28[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 656, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 497, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 507, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 608, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 645, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 770, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 824, 54,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFD5C, 0x0004, 0xFF03, 0x0002, 0x0031, 0x0000, 0x2805, 0x0016, 0xFF36, 0x0004, 0x2809, 0x0019, 0x0020, 0xFFFF, 0x2003, 0x0013, 0xFDE3, 0x0000, 0x2003, 0x0001, 0xFDE0, 0xFFF2, 0x2803, 0x0005, 0xFCCC, 0xFFDE, 0x0801, 0x0002, 0x2005, 0x0001, 0xFF3D, 0x0010, 0x2005, 0x0002, 0xFF80, 0x002D, 0x200F, 0x0001, 0xFCAA, 0xFFDF, 0xFFB1, 0x0031, 0x001E, 0xFFFE, 0x0000, 0x0000, 0x0000,
};
