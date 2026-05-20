/* AnimJoint data for relocData file 537 (FTMarioAnimDamage2) */
/* 2752 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDamage2_joint1[108];
extern u16 dFTMarioAnimDamage2_joint2[54];
extern u16 dFTMarioAnimDamage2_joint4[58];
extern u16 dFTMarioAnimDamage2_joint5[196];
extern u16 dFTMarioAnimDamage2_joint6[72];
extern u16 dFTMarioAnimDamage2_joint7[24];
extern u16 dFTMarioAnimDamage2_joint8[58];
extern u16 dFTMarioAnimDamage2_joint10[40];
extern u16 dFTMarioAnimDamage2_joint11[132];
extern u16 dFTMarioAnimDamage2_joint12[32];
extern u16 dFTMarioAnimDamage2_joint13[42];
extern u16 dFTMarioAnimDamage2_joint15[30];
extern u16 dFTMarioAnimDamage2_joint16[104];
extern u16 dFTMarioAnimDamage2_joint18[40];
extern u16 dFTMarioAnimDamage2_joint20[80];
extern u16 dFTMarioAnimDamage2_joint21[104];
extern u16 dFTMarioAnimDamage2_joint23[52];
extern u16 dFTMarioAnimDamage2_joint24[102];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimDamage2_joints[] = {
	(AObjEvent32 *)dFTMarioAnimDamage2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimDamage2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimDamage2_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimDamage2_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimDamage2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimDamage2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimDamage2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimDamage2_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimDamage2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimDamage2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimDamage2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimDamage2_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimDamage2_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimDamage2_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimDamage2_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimDamage2_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimDamage2_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimDamage2_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimDamage2_joint1[108] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 2, 0, 1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 223, 0, 540,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, -111, 0, 0, -16, -64, 561, 933, -64, -492,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 774, 959, -123, -361,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 1), 0, 0, 0, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 1, 0, 0, 801, 361, -154, 329,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 17), -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 500,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 26), 5629,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 999, -55, 82, 302,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 651, -374, 147, -235,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -58,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 557, 185, -152, -250,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 837, 76, -103, 263,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -6, -19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -16, 17, 643, -382, 144, 125,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 5, 360, 54,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimDamage2_joint2[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 426, -418, 300, -103, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 780, 621, -188, 150, -198, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1301, -103, -116, 24, -181, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -153, -199, 29, 1, 34, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -1886, 8, -88, -5, 111, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -66, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimDamage2_joint4[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 208, 258, 110, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 253, -146, -127, -155, -76, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -84, -259, -53, 63, -32, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -264, -19, 0, -8, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -259, 61, -125, -17, -63, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 724, -5, -277, -5, -126, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -356, -221, 75,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimDamage2_joint5[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, 148, -1308, 272, -1880, -264,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2621, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -967, -34, -2568, -510,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1105, -86, -3165, -378,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1344, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3325, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3032, 330, -3470, -134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3485, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3809, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1367, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1361, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3490, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3554, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3803, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1415, 27, -4002, -187,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1171, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3652, 404, -4178, -512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4363, 456, -5026, -573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4565, 157, -1415, -118, -5324, -282,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 4766, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1408, -18, -5592, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1452, -29, -5569, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1452, 25, -5532, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4934, 375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5517, 510,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5954, 428, -1415, 128, -5510, -177,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 6765, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1196, 103, -5887, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1208, 65, -6065, -117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1012, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 7227, 623, -6122, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 8012, 547, -6730, -450,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -7169, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 8323, 208, -1157, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 8430, 80, -1301, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8483, 52, -1438, -136, -7292, -123,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDamage2_joint6[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, 173,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -970, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1029, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -660, 510,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -786, -555,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1119, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -361, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 361,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimDamage2_joint7[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 26), -625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimDamage2_joint8[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 201, -4, 176, 0, 288, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 49, -193, 240, 54, -121, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -185, -210, 104, -120, -54, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -371, -20, 0, -3, 0, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -372, 39, 71, 1, 57, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 253, 18, 30, 14, 34, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -34, 341, 153,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimDamage2_joint10[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -221, 139, -209, 0, 54, -17,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 0, 54, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 110, 0, -69, 0, 104,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -8, 0, 5, 0, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -221, 139, -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimDamage2_joint11[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, -443, 551, 567, 65, -574,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -247, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1119, 248, -509, -566,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1049, -49, -1067, -343,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1061, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -78, 209, -1195, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 170, 79, -812, 211,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -746, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -260, 69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -712, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -562, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1055, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 931, -57,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -147, 271, -440, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 282, 482, 877, 5, 7, 517,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1283, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 816, 291, 593, 368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 807, -53, 801, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 757, -38, 831, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 701, -2, 1125, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1345, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 1681, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 700, -1, 1693, 11, 1134, 9,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDamage2_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 363,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -447, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -556, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimDamage2_joint13[42] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -44, 20, 619, 347,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 95,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3, -90, 41, 81, 694, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -84, 23, 117, -1, 415, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 625, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimDamage2_joint15[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 71, 0, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 893, -238, -935, -43, 681, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 893, 25, -935, 4, 681, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 1608, -804, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimDamage2_joint16[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, 104, -230, -285, 45, -624,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -30, -176, -516, 28, -579, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -488, -244, -173, 216, 57, 446,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -92, -4, 255, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -483, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -430, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 231, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -94, 2, 200, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -103, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 88, -33,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 255, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 101, -70,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -133, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -658, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 42, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -489, -38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 31, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -60, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -73, -13, -508, -18, -664, -5,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimDamage2_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 584,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 985, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 373, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 274, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 581, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 631, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 996, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 996, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimDamage2_joint20[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, 235, -11, -7, -156, 231,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 99, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -126, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 108, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 411, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 64, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 132, 57,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 207, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -104, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 90, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 188, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 16, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -33, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 344, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 363, 19, 91, 1, 206, -1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimDamage2_joint21[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1408, 294, 1421, -49, -1572, 140,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1402, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1113, -285, -1431, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1978, -337, -1440, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1294, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1788, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1740, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1302, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1233, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1200, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1216, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1375, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1381, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1490, 65,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1375, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1540, 65,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1281, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1436, -29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1551, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1595, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1454, -17, 1625, 29, -1464, 75,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimDamage2_joint23[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, -431,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 188, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 117, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 94, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 58, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 382, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 496, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 335, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 174, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -167,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimDamage2_joint24[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 64, -93, -426, -212, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 154, 118, -520, 104, -8, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 325, 80, 114, 304, 280, 135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 309, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, -23, 261, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 67, -23, 295, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 506, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 13, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 351, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 478, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 475, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 25, -53,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 237, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -26, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -201, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -188, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -185, 2, 14, 0, 235, -1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
