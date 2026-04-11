/* AnimJoint data for relocData file 1109 (FTLuigiAnimDTilt) */
/* 1440 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLuigiAnimDTilt_joint1[18];
extern u16 dFTLuigiAnimDTilt_joint2[14];
extern u16 dFTLuigiAnimDTilt_joint4[24];
extern u16 dFTLuigiAnimDTilt_joint5[48];
extern u16 dFTLuigiAnimDTilt_joint6[30];
extern u16 dFTLuigiAnimDTilt_joint7[8];
extern u16 dFTLuigiAnimDTilt_joint8[14];
extern u16 dFTLuigiAnimDTilt_joint10[14];
extern u16 dFTLuigiAnimDTilt_joint11[106];
extern u16 dFTLuigiAnimDTilt_joint12[48];
extern u16 dFTLuigiAnimDTilt_joint13[12];
extern u16 dFTLuigiAnimDTilt_joint15[10];
extern u16 dFTLuigiAnimDTilt_joint16[78];
extern u16 dFTLuigiAnimDTilt_joint18[80];
extern u16 dFTLuigiAnimDTilt_joint20[78];
extern u16 dFTLuigiAnimDTilt_joint21[38];
extern u16 dFTLuigiAnimDTilt_joint23[52];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTLuigiAnimDTilt_joints[] = {
	(u32)dFTLuigiAnimDTilt_joint1, /* [0] joint 1 */
	(u32)dFTLuigiAnimDTilt_joint2, /* [1] joint 2 */
	(u32)dFTLuigiAnimDTilt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLuigiAnimDTilt_joint5, /* [4] joint 5 */
	(u32)dFTLuigiAnimDTilt_joint6, /* [5] joint 6 */
	(u32)dFTLuigiAnimDTilt_joint7, /* [6] joint 7 */
	(u32)dFTLuigiAnimDTilt_joint8, /* [7] joint 8 */
	(u32)dFTLuigiAnimDTilt_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTLuigiAnimDTilt_joint11, /* [10] joint 11 */
	(u32)dFTLuigiAnimDTilt_joint12, /* [11] joint 12 */
	(u32)dFTLuigiAnimDTilt_joint13, /* [12] joint 13 */
	(u32)dFTLuigiAnimDTilt_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTLuigiAnimDTilt_joint16, /* [15] joint 16 */
	(u32)dFTLuigiAnimDTilt_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTLuigiAnimDTilt_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLuigiAnimDTilt_joint21, /* [20] joint 21 */
	(u32)dFTLuigiAnimDTilt_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF0159, /* [23] END */
};

/* Joint 1 */
u16 dFTLuigiAnimDTilt_joint1[18] = {
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 140, 223, -16,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 18), 140, -16,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 357,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 7), 223,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 10), 223,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLuigiAnimDTilt_joint2[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -568, -734, 161,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -568, -734, 161,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLuigiAnimDTilt_joint4[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 863, 71, 73,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 268, -233, 212,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 268, -233, 212,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 863, 71, 73,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLuigiAnimDTilt_joint5[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 251, 325, -465, -39, -1275, -441,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -478, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 939, 65, -2149, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 939, 0, -2149, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), 333, -101, -1398, 142,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -488, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -488, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 251, -81, -465, 23, -1275, 123,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLuigiAnimDTilt_joint6[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -216, 216,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 108,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, -76,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLuigiAnimDTilt_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -134, 0, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTLuigiAnimDTilt_joint8[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, 0, -6,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 187, 0, -6,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLuigiAnimDTilt_joint10[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLuigiAnimDTilt_joint11[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -278, 447, 469, 126, -1278, 361,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 645, 566, 697, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -917, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -664, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1303, 333, 627, -34, -241, 216,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 657, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1312, 4, -230, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -536, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1312, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1181, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1024, -181,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 295, -243,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -725, -196,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1093, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 75, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 194, 13, 605, -36, -909, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 527, -45, -1158, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 101, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -153, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, -125, 469, -57, -1278, -119,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLuigiAnimDTilt_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -217, -52,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -269, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -240, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -306, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -296, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -217, 79,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLuigiAnimDTilt_joint13[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 134,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 134,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTLuigiAnimDTilt_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLuigiAnimDTilt_joint16[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 278, 10, -188, -66, -652, 166,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 509, 46, -272, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -330, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -495, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -503, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 557, 48, -296, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -436, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 367, -79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -505, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -504, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -353, 130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -124, -46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -469, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -661, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 278, -88, -188, -63, -652, 8,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLuigiAnimDTilt_joint18[80] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 1269, -468,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 6144, 6144, 6144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 378, -397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -185,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 6144, 6144, 6144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 6, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 478, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 626, 137,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1186, 92,
	ftAnimBlock(0, 3),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1269, 82,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLuigiAnimDTilt_joint20[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1491, -91, 1496, 218, 1419, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1345, -165, 1582, 457,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1714, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1963, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1068, -152, 1744, -111, 2304, 367,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1010, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1740, -4, 2317, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1530, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2329, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2173, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 979, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1377, 107,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2059, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1518, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1491, 114, 1496, -34, 1419, -98,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLuigiAnimDTilt_joint21[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1418, 183, 1438, -76, 893, 387,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), 1438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1602, 80, 1281, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1579, -23, 1234, -47,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), 1418,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 893,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1438, 893,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 1418,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLuigiAnimDTilt_joint23[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1298, -284,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1013, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1060, 45,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 1298,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 1298,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0009, 0xFFE8, 0xFFD2, 0x0004, 0xFF6C, 0xFFBA, 0x4003, 0x000F, 0x0009, 0x4005, 0x0011, 0xFFD2, 0x3809, 0x000B, 0xFF6C, 0x4009, 0x0007, 0xFF6C, 0x0801, 0x0004, 0x4003, 0x0003, 0x0009, 0x0801, 0x0002, 0x3805, 0x0001, 0xFFD2, 0x0000,
};
