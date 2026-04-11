/* AnimJoint data for relocData file 596 (FTMarioAnimItemThrowAirSmashF) */
/* 2256 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimItemThrowAirSmashF_joint1[64];
extern u16 dFTMarioAnimItemThrowAirSmashF_joint2[36];
extern u16 dFTMarioAnimItemThrowAirSmashF_joint4[72];
extern u16 dFTMarioAnimItemThrowAirSmashF_joint5[82];
extern u16 dFTMarioAnimItemThrowAirSmashF_joint6[32];
extern u16 dFTMarioAnimItemThrowAirSmashF_joint7[14];
extern u16 dFTMarioAnimItemThrowAirSmashF_joint8[54];
extern u16 dFTMarioAnimItemThrowAirSmashF_joint10[48];
extern u16 dFTMarioAnimItemThrowAirSmashF_joint11[112];
extern u16 dFTMarioAnimItemThrowAirSmashF_joint12[28];
extern u16 dFTMarioAnimItemThrowAirSmashF_joint13[48];
extern u16 dFTMarioAnimItemThrowAirSmashF_joint15[10];
extern u16 dFTMarioAnimItemThrowAirSmashF_joint16[88];
extern u16 dFTMarioAnimItemThrowAirSmashF_joint18[48];
extern u16 dFTMarioAnimItemThrowAirSmashF_joint20[92];
extern u16 dFTMarioAnimItemThrowAirSmashF_joint21[98];
extern u16 dFTMarioAnimItemThrowAirSmashF_joint23[154];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimItemThrowAirSmashF_joints[] = {
	(u32)dFTMarioAnimItemThrowAirSmashF_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimItemThrowAirSmashF_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimItemThrowAirSmashF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimItemThrowAirSmashF_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimItemThrowAirSmashF_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimItemThrowAirSmashF_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimItemThrowAirSmashF_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimItemThrowAirSmashF_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimItemThrowAirSmashF_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimItemThrowAirSmashF_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimItemThrowAirSmashF_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimItemThrowAirSmashF_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimItemThrowAirSmashF_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimItemThrowAirSmashF_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimItemThrowAirSmashF_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimItemThrowAirSmashF_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimItemThrowAirSmashF_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF01FF, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimItemThrowAirSmashF_joint1[64] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -13, 0, 0, 0, 0, 600, 554, 0, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 1006, 750, 0, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 24), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 1006, -1404,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 21), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 421, -430, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, 540, 79, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 11), 600, 36,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 11), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimItemThrowAirSmashF_joint2[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 6, 0, -1, 0, 8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -804, -185,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 21), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -804, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 18), 0, 40,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimItemThrowAirSmashF_joint4[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 134, -120, 0, -13, 0, -102, -14, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -30, -276, -63, 0, 0, 0, 11, 0, 74,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, 0, -5, 0, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 299, 0, 52, -276, 226,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 997, 6, 477, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 174,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 134, -43, 0, -8, 0, -23,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 0, -14, -7, -92, -46,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimItemThrowAirSmashF_joint5[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1855, 258, -1133, -14, -1696, -248,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2192, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1006, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1945, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1982, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1948, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2226, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 2130, -12,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1005,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1168, -19,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1946, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1844, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2115, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1987, -101,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1187, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1166, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1855, -131, -1133, 32, -1696, 147,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimItemThrowAirSmashF_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, 375,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -147, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -236,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimItemThrowAirSmashF_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -625, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), -625, 24,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimItemThrowAirSmashF_joint8[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 127, 46, 0, 30,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 402, 63,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 402, -230,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -366, -5, 0, 0, 0, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 329, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -4, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 127, -25, 0, 0, 0, -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimItemThrowAirSmashF_joint10[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 18,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 160, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 160, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -14, -160, -23, 0, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -161, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -192, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 24, 0, 20, 0, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimItemThrowAirSmashF_joint11[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1407, -14, 1146, 198, 1530, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1392, -100, 1345, -129, 1382, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1205, -95, 886, -471, 1422, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1376, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1200, -5, 401, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1194, 123, 401, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 161, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1447, 170, 1636, 202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2070, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1535, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1885, 104,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 165, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 305, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2206, 135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2774, 51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1989, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 2657, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2709, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2773, 153, 339, 78, 2835, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3015, 242, 462, 122, 3138, 303,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimItemThrowAirSmashF_joint12[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, 384,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -384,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimItemThrowAirSmashF_joint13[48] = {
	ftAnimSetValAfter(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 1429,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 1787,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 1709,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 580,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 625,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimItemThrowAirSmashF_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimItemThrowAirSmashF_joint16[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 109, -31, -3, -54, -247, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -224, -96, -119, -46, 86, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -303, 159, -190, -149, 124, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 93, 270, -418, -101, -335, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 237, 90, -393, 35, -520, -136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -373, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -16, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 194, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 225, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 120, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -360, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -266, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -8, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 109, -10, -3, 0, -247, 19,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimItemThrowAirSmashF_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 229, -222,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 730, 414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 828, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 365, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 330, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 250, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimItemThrowAirSmashF_joint20[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1348, -32, 1642, 64, 2044, 202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2375, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1672, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1179, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1310, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1383, -13, 2297, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1283, -48, 1548, -82, 1895, -208,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1273, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1678, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1881, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2142, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1223, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1335, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1682, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1648, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2139, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 2048, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1348, 13, 1642, -6, 2044, -3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimItemThrowAirSmashF_joint21[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 65, 70, 162, -32, -346, 386,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 223, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -32, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 39, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -50, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -180, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 281, 88, -164, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 373, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -197, -277, -223, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -588, -195, -512, -186,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -465, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -588, 38, 188, -112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -36, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 224, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 220, -7, -397, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 164, 0, -338, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 63, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 65, 2, 162, -1, -346, -8,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimItemThrowAirSmashF_joint23[154] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 716, -709,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 873, 327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1049, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 863, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 844, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 730, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, -13,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0039, 0x000B, 0xFF7A, 0xFF6C, 0x00A4, 0x014F, 0x2805, 0x0002, 0xFE86, 0xFFF1, 0x2809, 0x0003, 0x03C7, 0x0041, 0x2003, 0x0001, 0x0045, 0xFF7F, 0x2003, 0x0001, 0xFF37, 0xFEE4, 0x2007, 0x0001, 0xFE0C, 0xFF80, 0xFEC7, 0x001F, 0x2805, 0x0003, 0xFE1C, 0x0036, 0x200B, 0x0001, 0xFE35, 0x0071, 0x0380, 0xFF99, 0x200B, 0x0001, 0xFEEF, 0x0104, 0x02F9, 0xFEB9, 0x200B, 0x0001, 0x003D, 0x0027, 0x00F0, 0xFEE6, 0x200F, 0x0001, 0xFF3F, 0xFF77, 0xFEAE, 0x007F, 0x00C4, 0xFFE6, 0x2805, 0x0010, 0xFF83, 0xFFF5, 0x200B, 0x0001, 0xFF2B, 0x0007, 0x00BB, 0xFFFA, 0x2809, 0x0009, 0x00DF, 0xFFF1, 0x2003, 0x0005, 0xFF66, 0x0004, 0x2003, 0x0001, 0xFF6E, 0x0009, 0x2803, 0x0009, 0x0024, 0x0015, 0x0801, 0x0003, 0x2009, 0x0001, 0x00CF, 0xFFF1, 0x2009, 0x0005, 0x00A3, 0x0000, 0x200F, 0x0001, 0x0039, 0x0015, 0xFF7A, 0xFFF8, 0x00A4, 0x0001, 0x0000, 0x0000, 0x0000,
};
