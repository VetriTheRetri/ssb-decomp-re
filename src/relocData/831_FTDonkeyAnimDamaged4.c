/* AnimJoint data for relocData file 831 (FTDonkeyAnimDamaged4) */
/* 2368 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDamaged4_joint1[56];
extern u16 dFTDonkeyAnimDamaged4_joint2[62];
extern u16 dFTDonkeyAnimDamaged4_joint4[44];
extern u16 dFTDonkeyAnimDamaged4_joint5[92];
extern u16 dFTDonkeyAnimDamaged4_joint6[48];
extern u16 dFTDonkeyAnimDamaged4_joint7[12];
extern u16 dFTDonkeyAnimDamaged4_joint10[46];
extern u16 dFTDonkeyAnimDamaged4_joint11[98];
extern u16 dFTDonkeyAnimDamaged4_joint12[36];
extern u16 dFTDonkeyAnimDamaged4_joint13[22];
extern u16 dFTDonkeyAnimDamaged4_joint14[8];
extern u16 dFTDonkeyAnimDamaged4_joint16[32];
extern u16 dFTDonkeyAnimDamaged4_joint17[138];
extern u16 dFTDonkeyAnimDamaged4_joint19[48];
extern u16 dFTDonkeyAnimDamaged4_joint21[126];
extern u16 dFTDonkeyAnimDamaged4_joint22[94];
extern u16 dFTDonkeyAnimDamaged4_joint24[172];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimDamaged4_joints[] = {
	(u32)dFTDonkeyAnimDamaged4_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimDamaged4_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimDamaged4_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimDamaged4_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimDamaged4_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimDamaged4_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimDamaged4_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimDamaged4_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimDamaged4_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimDamaged4_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimDamaged4_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimDamaged4_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimDamaged4_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimDamaged4_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimDamaged4_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimDamaged4_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimDamaged4_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0214, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimDamaged4_joint1[56] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 70, 0, -84, 0, -42, -400, 1627,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), -29, 1031,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 408, -27, 1031, 132, -281, 87,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -63, -269, 1197, 94, -292, -5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -63, -23, 1197, -305, -292, -32,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -99, 33, 738, -159, -340, -104,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -29, 1031, -400,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimDamaged4_joint2[62] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -517, -214, 89,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), -265, -41, -16, -154,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 1), -265, 10, -41, -38, -16, -70, -225, -698,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -120, -193,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 23), 0, -154,
	ftAnimSetValRateT(FT_ANIM_TRAY, 23), -214, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -243, 2, -117, 17, -157, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -241, 0, 116, 16, 160, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -241, -1, 116, -10, 160, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -265, -41, -16,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimDamaged4_joint4[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 750, -1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 589, -90, 98, -36, -354, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 569, 26, -48, -14, -77, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 823, 18, -35, 0, 116, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 823, -5, -35, 4, 116, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimDamaged4_joint5[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -115, -84, 42, -473, 429,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -131, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -119, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -44, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -12, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -165, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -61, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 197, -108,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -116, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -296, 54,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 68, -119, -62, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -286, 67, 146, -120,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -223, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -87, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -205, 74, 3, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -71, 15, -416, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 8, -84, 2, -473, -57,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimDamaged4_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -741,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1148, -391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1190, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -955, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -971, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -981, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1072, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -862, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -498, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 91,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimDamaged4_joint7[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -593,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimDamaged4_joint10[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, 4, -67, 117, -44, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 306, 35, 227, 16, -21, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 527, 14, 94, -8, -11, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 527, 0, 94, -20, -11, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 521, -42, -69, -19, -209, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 174, -67, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimDamaged4_joint11[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -115, -18, 172, -296, -479, -115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -581, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -170, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -124, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -109, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 494, 51,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -622, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -751, 58,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -206, 1, 521, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -123, -9, 155, -63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -605, 75,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -133, -8, 101, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -108, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 2, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 83, 71, -517, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 171, 13, -449, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, -7, 172, 0, -479, -29,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDamaged4_joint12[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -816, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -843, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -644, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -626, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimDamaged4_joint13[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 98,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 733, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 947, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 919, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 98,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimDamaged4_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimDamaged4_joint16[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -404, 15,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -378, 7, 0, -35, 0, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -346, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -284, -297,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -404, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimDamaged4_joint17[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -60, -118, -392, -5, -329, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -317, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -179, -26, -284, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -113, -1, -421, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -390, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 21, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -181, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -347, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -371, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -106, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -11, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -710, -11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -361, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -402, 47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -200, -97, -692, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -545, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -379, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -300, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -18, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -341, 27, -345, 151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -360, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -242, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, -118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -454, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 129, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 228, -19, -315, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 89, -144, -372, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, -150, -392, -20, -329, 124,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimDamaged4_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1026, -47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1173, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1127, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1149, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1087, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 952, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 945, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1162, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1227, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1140, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -114,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimDamaged4_joint21[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1722, 108, -1623, 32, 1238, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1297, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1588, -103, 1061, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1772, -193, 1104, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2061, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1651, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1351, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1466, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2036, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1477, 157,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1441, -5, 1656, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1441, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1974, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1343, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1422, -189,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1484, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1465, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1666, -183, -1969, 12, 1257, -146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1189, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1643, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1888, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1938, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1811, 108, 1220, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1722, 89, -1623, 20, 1238, 18,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimDamaged4_joint22[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1504, -227, 1391, 108, -1904, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1887, -6, -1817, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1499, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1385, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1436, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1876, 81, 1572, 65, -2049, -208,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1583, 22, 1489, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2207, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2117, 94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1839, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1581, -2, 1493, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1603, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1378, 9,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1862, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1973, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1581, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1523, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1504, 19, 1391, 12, -1904, 68,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimDamaged4_joint24[172] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 994, 97,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1092, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 850, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 980, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 908, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 627, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 646, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 892, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1008, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1253, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1131, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, -136,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0007, 0x01D0, 0x0067, 0xFFA5, 0xFE7D, 0xFFC5, 0x200F, 0x0001, 0x01D8, 0x0068, 0x000C, 0xFF3A, 0xFE42, 0x006B, 0x200F, 0x0001, 0x00D8, 0xFF91, 0xFEDB, 0xFF65, 0xFF54, 0x0099, 0x200F, 0x0002, 0x012C, 0x000E, 0xFF08, 0x0041, 0xFF7F, 0x007C, 0x200F, 0x0001, 0x0115, 0xFFE2, 0xFF5B, 0x0096, 0x006C, 0x00F8, 0x2805, 0x0002, 0x00A5, 0x0030, 0x2803, 0x0005, 0xFFCE, 0x0009, 0x2009, 0x0001, 0x016F, 0x0047, 0x2009, 0x0001, 0x00FB, 0xFF60, 0x2809, 0x0003, 0xFF3F, 0xFFCE, 0x2005, 0x0001, 0x0096, 0xFFDA, 0x2805, 0x0007, 0x00BE, 0x0020, 0x0801, 0x0002, 0x200B, 0x0001, 0xFFE6, 0x001F, 0xFF29, 0xFFF0, 0x280B, 0x0008, 0x006E, 0xFFE0, 0xFE3A, 0xFFCE, 0x0801, 0x0004, 0x2005, 0x0001, 0x00DC, 0x000D, 0x2805, 0x0007, 0x0066, 0x0000, 0x0801, 0x0003, 0x200B, 0x0001, 0x004A, 0xFFDD, 0xFE0B, 0xFFD9, 0x200B, 0x0003, 0x0005, 0x0000, 0xFE33, 0x004E, 0x200F, 0x0001, 0x0007, 0x0002, 0x0067, 0x0001, 0xFE7D, 0x0049, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
