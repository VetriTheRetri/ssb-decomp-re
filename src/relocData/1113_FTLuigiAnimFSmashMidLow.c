/* AnimJoint data for relocData file 1113 (FTLuigiAnimFSmashMidLow) */
/* 2656 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLuigiAnimFSmashMidLow_joint1[24];
extern u16 dFTLuigiAnimFSmashMidLow_joint2[38];
extern u16 dFTLuigiAnimFSmashMidLow_joint4[38];
extern u16 dFTLuigiAnimFSmashMidLow_joint5[92];
extern u16 dFTLuigiAnimFSmashMidLow_joint6[48];
extern u16 dFTLuigiAnimFSmashMidLow_joint7[10];
extern u16 dFTLuigiAnimFSmashMidLow_joint8[10];
extern u16 dFTLuigiAnimFSmashMidLow_joint10[20];
extern u16 dFTLuigiAnimFSmashMidLow_joint11[214];
extern u16 dFTLuigiAnimFSmashMidLow_joint12[144];
extern u16 dFTLuigiAnimFSmashMidLow_joint13[36];
extern u16 dFTLuigiAnimFSmashMidLow_joint15[42];
extern u16 dFTLuigiAnimFSmashMidLow_joint16[100];
extern u16 dFTLuigiAnimFSmashMidLow_joint18[48];
extern u16 dFTLuigiAnimFSmashMidLow_joint20[106];
extern u16 dFTLuigiAnimFSmashMidLow_joint21[130];
extern u16 dFTLuigiAnimFSmashMidLow_joint23[56];
extern u16 dFTLuigiAnimFSmashMidLow_joint24[124];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTLuigiAnimFSmashMidLow_joints[] = {
	(u32)dFTLuigiAnimFSmashMidLow_joint1, /* [0] joint 1 */
	(u32)dFTLuigiAnimFSmashMidLow_joint2, /* [1] joint 2 */
	(u32)dFTLuigiAnimFSmashMidLow_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLuigiAnimFSmashMidLow_joint5, /* [4] joint 5 */
	(u32)dFTLuigiAnimFSmashMidLow_joint6, /* [5] joint 6 */
	(u32)dFTLuigiAnimFSmashMidLow_joint7, /* [6] joint 7 */
	(u32)dFTLuigiAnimFSmashMidLow_joint8, /* [7] joint 8 */
	(u32)dFTLuigiAnimFSmashMidLow_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTLuigiAnimFSmashMidLow_joint11, /* [10] joint 11 */
	(u32)dFTLuigiAnimFSmashMidLow_joint12, /* [11] joint 12 */
	(u32)dFTLuigiAnimFSmashMidLow_joint13, /* [12] joint 13 */
	(u32)dFTLuigiAnimFSmashMidLow_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTLuigiAnimFSmashMidLow_joint16, /* [15] joint 16 */
	(u32)dFTLuigiAnimFSmashMidLow_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTLuigiAnimFSmashMidLow_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLuigiAnimFSmashMidLow_joint21, /* [20] joint 21 */
	(u32)dFTLuigiAnimFSmashMidLow_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLuigiAnimFSmashMidLow_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTLuigiAnimFSmashMidLow_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 223, 0, 0, 540,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 12), -180, 149,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 300, 384,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 300, -92,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 20), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLuigiAnimFSmashMidLow_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 2, 4, -1231, 34, -168, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, -231, 99, -166, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -2, -231, -21, -166, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -71, -790, -95,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLuigiAnimFSmashMidLow_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 258, 110,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 131, 36, 235, 12, 240, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 795, 66, 463, 22, 569, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 795, -22, 463, -7, 569, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLuigiAnimFSmashMidLow_joint5[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, 2, -300, -5, -272, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 114, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -546, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -224, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -192, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 225, -49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -184, 43,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -547, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -338, 21,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -140, 46, 175, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -32, -32, 44, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -55, -2, 70, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 129, 7, -262, -18,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -319, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -305, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 3, -300, 5, -272, -10,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLuigiAnimFSmashMidLow_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -120, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -317, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -341, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -195, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTLuigiAnimFSmashMidLow_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -625, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTLuigiAnimFSmashMidLow_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 201, -4, 176, 0, 288, 0,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLuigiAnimFSmashMidLow_joint10[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 102, 280, -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), -221, 139, -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLuigiAnimFSmashMidLow_joint11[214] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2052, -412, 1056, 209, 1674, -387,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1417, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1639, 108, 1287, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2270, 646, 1947, 529,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3584, 556,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1280, -29, 2345, 681,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1359, 40, 3311, 633,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4045, 443, 1361, 4, 3611, 290,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1322, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4471, 302, 3892, 270,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4509, 505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4649, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4860, 421, 1265, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5493, 662, 1406, -6, 5163, 555,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 6801, 480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1253, -23, 5620, 682,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1389, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6528, 575,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 7147, 579, 6771, 505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7959, 255, 1245, -134, 7540, 215,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1004, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 7658, -211, 7202, -218,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 7555, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7103, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 7191, 42,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 7581, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 7989, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7237, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 7585, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1020, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1225, -56,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 8010, 76, 7616, 123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 8183, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7832, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7922, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 8104, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 8210, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 8477, 15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1165, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1071, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8486, 8, 1056, -14, 8108, 3,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLuigiAnimFSmashMidLow_joint12[144] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 811,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 0, 55, 4915, 126, 4915, 126, 4915, 126,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 4915, 355, 4915, 355, 4915, 355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -700, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -398, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -638, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -306, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -581, -4,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 7403, 13107, 7403, 6280, 7403, 6280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 24576, 315, 14336, 315, 14336, 315,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 8192, -2530, 8192, -1164, 8192, -1164,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), 5599, -372, 5599, -372, 5599, -372,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -274, -205,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -410, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -819, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLuigiAnimFSmashMidLow_joint13[36] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), 143, 0, 0, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	ftAnimSetValBlock(FT_ANIM_SCAX), 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 127, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 15), 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 2412,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 625, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 22), 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTLuigiAnimFSmashMidLow_joint15[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2055, 50, -840, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 2211, 22, -809, 4, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2234, -301, -806, 2, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, -21, -804, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 1608, -804, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLuigiAnimFSmashMidLow_joint16[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1473, 4, -1377, 2, -1563, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1746, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1407, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1792, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1776, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1789, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1751, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1742, 68,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1951, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1989, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1814, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1753, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1410, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -1377, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2018, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1708, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1741, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 1474, -1,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1683, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1565, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1473, 0, -1377, 0, -1563, 2,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLuigiAnimFSmashMidLow_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 770, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 753, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 661, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 709, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 473, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 516, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 504, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 402, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLuigiAnimFSmashMidLow_joint20[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, 7, -11, 0, -156, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 55, -29, -329, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -214, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -239, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -133, 175,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5, -70, -300, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -203, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -241, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 119, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 412, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 369, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 466, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -217, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -157, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 426, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 125, -28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -242, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -212, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 98, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -8, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 0, -11, -2, -156, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLuigiAnimFSmashMidLow_joint21[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, 1, 187, 2, 35, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 442, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 226, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -109, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -112, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -134, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 424, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 175, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 249, -21, -161, 122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 468, 208,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -214, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 263, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 528, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 503, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -234, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 70, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 269, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 199, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 492, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 388, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 80, 30, 365, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 186, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 68, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 50, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 39, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 0, 187, 0, 35, -3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLuigiAnimFSmashMidLow_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 547, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 554, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 580, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 344, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 283, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 341, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 435, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTLuigiAnimFSmashMidLow_joint24[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, -5, -93, -7, -212, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -66, 44, -233, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -416, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -380, 130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 201, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 8, 126, -233, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 450, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -141, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 320, 65, 117, 188,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 288, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 326, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 478, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 304, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -47, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 316, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -58, -21,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 280, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 91, -3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -55, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -212, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -77, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -89, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, -2, -93, -4, -212, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
