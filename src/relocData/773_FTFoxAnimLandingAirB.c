/* AnimJoint data for relocData file 773 (FTFoxAnimLandingAirB) */
/* 1920 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimLandingAirB_joint1[22];
extern u16 dFTFoxAnimLandingAirB_joint2[20];
extern u16 dFTFoxAnimLandingAirB_joint4[10];
extern u16 dFTFoxAnimLandingAirB_joint5[120];
extern u16 dFTFoxAnimLandingAirB_joint6[56];
extern u16 dFTFoxAnimLandingAirB_joint7[10];
extern u16 dFTFoxAnimLandingAirB_joint8[14];
extern u16 dFTFoxAnimLandingAirB_joint10[10];
extern u16 dFTFoxAnimLandingAirB_joint11[104];
extern u16 dFTFoxAnimLandingAirB_joint12[62];
extern u16 dFTFoxAnimLandingAirB_joint13[32];
extern u16 dFTFoxAnimLandingAirB_joint15[10];
extern u16 dFTFoxAnimLandingAirB_joint16[98];
extern u16 dFTFoxAnimLandingAirB_joint18[30];
extern u16 dFTFoxAnimLandingAirB_joint20[88];
extern u16 dFTFoxAnimLandingAirB_joint21[82];
extern u16 dFTFoxAnimLandingAirB_joint23[38];
extern u16 dFTFoxAnimLandingAirB_joint24[102];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTFoxAnimLandingAirB_joints[] = {
	(u32)dFTFoxAnimLandingAirB_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimLandingAirB_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimLandingAirB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimLandingAirB_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimLandingAirB_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimLandingAirB_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimLandingAirB_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimLandingAirB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimLandingAirB_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimLandingAirB_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimLandingAirB_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimLandingAirB_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimLandingAirB_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimLandingAirB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimLandingAirB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimLandingAirB_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimLandingAirB_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimLandingAirB_joint24, /* [23] joint 24 */
	0xFFFF01DA, /* [24] END */
};

/* 4-byte alignment padding */
static u32 dFTFoxAnimLandingAirB_pad[1] = { 0 };

/* Joint 1 */
u16 dFTFoxAnimLandingAirB_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 360, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 26, 288, 294, 0, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimLandingAirB_joint2[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -402, -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -536, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimLandingAirB_joint4[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 399, -313, -132,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimLandingAirB_joint5[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 969, 169, -271, -157, -1227, -156,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -495, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1139, 454, -1383, -384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1878, 873, -1995, -678,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3291, -363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2886, 769,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3416, 341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3569, 120, -382, 160, -3469, -178,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3529, 442,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3656, 0, -173, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3568, -495, -433, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2665, -80, -653, -52, -2763, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3406, 480, -537, 178, -3384, -431,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -92, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3626, 108, -3627, -172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3621, 207,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3136, -78,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -105, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3314, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3059, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3107, -29, -165, -2, -2958, 101,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimLandingAirB_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -492, -376,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -869, -400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1293, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1001, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -829, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -954, -321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1164, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -895, 364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -494, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -64,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimLandingAirB_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimLandingAirB_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 289, -109, 8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimLandingAirB_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimLandingAirB_joint11[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -68, -101, 180, 88, 765, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -271, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 265, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 664, -353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 59, -320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -56, 54, 22, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -264, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 101, -79, -156, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 106, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -229, 33, -130, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -239, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 64, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 52, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 250, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -198, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 80, 211,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 309, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 113, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, 19, 271, 21, 336, 27,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimLandingAirB_joint12[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -882, -198,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1081, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1019, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -963, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -965, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -689, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -601, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -362, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 181,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -383, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -581, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -13,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimLandingAirB_joint13[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 268, 0, -178, 272, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0, 11,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 536,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 268, 0, -89,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimLandingAirB_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimLandingAirB_joint16[98] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1652, 12, -500, 63, 1559, 104,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2129, 227,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -504, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1811, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2109, -295,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2554, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2335, 159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2377, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -523, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -219, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2644, -117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -3606, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2285, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2630, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -193, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -286, 39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2765, 147,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3151, 66,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3620, -8, -243, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3622, -1, -223, 20, 3190, 38,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimLandingAirB_joint18[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 415, 389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 779, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 410, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -56,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimLandingAirB_joint20[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 48, -91, 159, -191, -9, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -8, -89, 21, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -17, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 76, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 245, 64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -127, -51, -118, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -149, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 253, -88, -47, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -31, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -109, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -296, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -119, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 45, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 10, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 139, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -245, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -80, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 1, 125, -13, -56, 24,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimLandingAirB_joint21[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1698, 322, 1138, 206, -1567, 53,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1317, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1375, 200, -1513, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1297, 74, -1281, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1225, 171, 1168, -96, -1200, 179,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1489, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -953, 208, -922, 205,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1155, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1072, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1139, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1469, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1196, -33, 1557, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1259, 4, 1461, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1253, 6, 1470, 9, -1473, -3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimLandingAirB_joint23[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, 330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 667, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 388, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 387, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -55,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimLandingAirB_joint24[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1436, -160, 1222, 106, -1512, -197,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1812, 72, -2003, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1329, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1234, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1436, 204,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1656, 108, -1971, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1620, 34, -1819, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1651, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1413, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1294, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1384, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1572, 7, -1743, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1609, 26, -1980, 45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1558, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1592, 8, 1670, 76, -1892, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1592, 0, 1711, 40, -1835, 56,
	ftAnimEnd(),
	0x50EE, 0x0000, 0x00DB, 0x0000, 0x0000, 0xFF82, 0xFFA0, 0x0801, 0x000F, 0x0000, 0x0000, 0x0000,
};
