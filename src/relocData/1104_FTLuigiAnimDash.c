/* AnimJoint data for relocData file 1104 (FTLuigiAnimDash) */
/* 2288 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLuigiAnimDash_joint1[28];
extern u16 dFTLuigiAnimDash_joint2[46];
extern u16 dFTLuigiAnimDash_joint4[20];
extern u16 dFTLuigiAnimDash_joint5[98];
extern u16 dFTLuigiAnimDash_joint6[62];
extern u16 dFTLuigiAnimDash_joint7[12];
extern u16 dFTLuigiAnimDash_joint8[16];
extern u16 dFTLuigiAnimDash_joint10[20];
extern u16 dFTLuigiAnimDash_joint11[120];
extern u16 dFTLuigiAnimDash_joint12[64];
extern u16 dFTLuigiAnimDash_joint13[14];
extern u16 dFTLuigiAnimDash_joint15[10];
extern u16 dFTLuigiAnimDash_joint16[122];
extern u16 dFTLuigiAnimDash_joint18[64];
extern u16 dFTLuigiAnimDash_joint20[114];
extern u16 dFTLuigiAnimDash_joint21[116];
extern u16 dFTLuigiAnimDash_joint23[54];
extern u16 dFTLuigiAnimDash_joint24[116];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTLuigiAnimDash_joints[] = {
	(u32)dFTLuigiAnimDash_joint1, /* [0] joint 1 */
	(u32)dFTLuigiAnimDash_joint2, /* [1] joint 2 */
	(u32)dFTLuigiAnimDash_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLuigiAnimDash_joint5, /* [4] joint 5 */
	(u32)dFTLuigiAnimDash_joint6, /* [5] joint 6 */
	(u32)dFTLuigiAnimDash_joint7, /* [6] joint 7 */
	(u32)dFTLuigiAnimDash_joint8, /* [7] joint 8 */
	(u32)dFTLuigiAnimDash_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTLuigiAnimDash_joint11, /* [10] joint 11 */
	(u32)dFTLuigiAnimDash_joint12, /* [11] joint 12 */
	(u32)dFTLuigiAnimDash_joint13, /* [12] joint 13 */
	(u32)dFTLuigiAnimDash_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTLuigiAnimDash_joint16, /* [15] joint 16 */
	(u32)dFTLuigiAnimDash_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTLuigiAnimDash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLuigiAnimDash_joint21, /* [20] joint 21 */
	(u32)dFTLuigiAnimDash_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLuigiAnimDash_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTLuigiAnimDash_joint1[28] = {
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 223, 3, 540, 39,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 13), 0, 0, -67,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 6), 360,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 7), 755,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 14), 223, 3, 540,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 7), -59,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 7), 39,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLuigiAnimDash_joint2[46] = {
	ftAnimSetValAfter(FT_ANIM_TRAY), 0,
	ftAnimSetValRate(FT_ANIM_ROTY), -790, -8,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), -88, -95, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), -124, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -113, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), -16, 124,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -88, 0, -790, 7, -95, 4,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 14), 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLuigiAnimDash_joint4[20] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 258, 110,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 749, 401, 79,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 407, 234, 78,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLuigiAnimDash_joint5[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 103, -149, -232, -44, -302, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -357, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -441, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -358, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -218, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 234, -34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -415, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -317, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -371, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -31, 59,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 196, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -212, -27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 6, 31, -306, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 95, 9, -244, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -234, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -281, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 105, 9, -231, 12, -306, -25,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLuigiAnimDash_joint6[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -73, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -595, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -612, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -396, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -247, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -293, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -277, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -185, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -33, 88,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTLuigiAnimDash_joint7[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), -625,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTLuigiAnimDash_joint8[16] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -4, 176,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 188, -68, -36,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 201, -4, 176,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLuigiAnimDash_joint10[20] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -491, 81, -136,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -190, -42, 97,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -221, 139, -209,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLuigiAnimDash_joint11[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, 218, 551, -200, 65, 236,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 946, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 219, -38, 363, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 273, 52, 382, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 268, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 366, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1032, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 747, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 326, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 414, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 690, -66, 258, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 422, -416, 549, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 314, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 113, -437,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -218, -306, 603, 34, -559, -314,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 568, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -189, 31, -515, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -155, 36, -467, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 415, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -3, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 16, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 50, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, 28, 551, -16, 65, 15,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLuigiAnimDash_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, -48,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -715, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -303, 352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -614, -381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -763, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -726, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -489, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -550, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -578, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -794, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLuigiAnimDash_joint13[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 625, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTLuigiAnimDash_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 27),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLuigiAnimDash_joint16[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 25, -302, -79, 36, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 141, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -63, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -515, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -647, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -626, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 123, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 148, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -669, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -597, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, -34, -103, -20, -384, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -10, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -214, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -449, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -226, 130,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -56, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -151, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -94, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -220, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -260, -41, -177, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -328, 15, 63, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -187, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -190, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -153, 37, -302, 25, 36, -27,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLuigiAnimDash_joint18[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 521, 19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 911, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1053, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 998, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 974, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 476, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 112, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 235, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 278, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 136, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 264, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 416, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 414, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 521, 106,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLuigiAnimDash_joint20[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -320, -37, -12, 16, -150, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -157, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -139, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -323, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -298, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -276, -61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -190, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 224, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -333, -11, -201, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -230, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -188, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -233, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -35, 70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 182, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -129, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 25, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 79, -60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -197, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -29, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -44, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -49, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -129, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -297, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -320, -22, -12, 16, -150, -21,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLuigiAnimDash_joint21[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1479, -4, 1444, -24, -1692, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1792, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1431, 20, 1342, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1409, -53, 1141, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1573, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1309, 122, -1673, 200,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1006, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1385, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1477, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1534, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1672, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -924, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -823, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -855, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1437, -136,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1477, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1429, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1679, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1664, 70,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1584, -123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1672, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1587, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1518, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1479, 38, 1444, 14, -1692, -20,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLuigiAnimDash_joint23[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 628, 95,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1059, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1111, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 544, -443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 284, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1061, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 985, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 619, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 628, 8,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLuigiAnimDash_joint24[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 27, 52, -20, -9, -219, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -106, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -380, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 57, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 23, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 145, 18, -129, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 61, -93, 90, 133, -460, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -131, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 136, 26, -437, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 166, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -105, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -209, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -94, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 98, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 130, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 16, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 143, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 188, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 128, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 77, -50, -1, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 27, -50, -20, -18, -219, -10,
	ftAnimEnd(),
	0x0000, 0x0000,
};
