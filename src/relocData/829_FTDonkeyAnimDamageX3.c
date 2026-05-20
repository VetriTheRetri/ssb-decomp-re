/* AnimJoint data for relocData file 829 (FTDonkeyAnimDamageX3) */
/* 2384 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDamageX3_joint1[34];
extern u16 dFTDonkeyAnimDamageX3_joint2[38];
extern u16 dFTDonkeyAnimDamageX3_joint4[54];
extern u16 dFTDonkeyAnimDamageX3_joint5[126];
extern u16 dFTDonkeyAnimDamageX3_joint6[48];
extern u16 dFTDonkeyAnimDamageX3_joint7[34];
extern u16 dFTDonkeyAnimDamageX3_joint8[26];
extern u16 dFTDonkeyAnimDamageX3_joint10[8];
extern u16 dFTDonkeyAnimDamageX3_joint11[92];
extern u16 dFTDonkeyAnimDamageX3_joint12[40];
extern u16 dFTDonkeyAnimDamageX3_joint13[26];
extern u16 dFTDonkeyAnimDamageX3_joint14[8];
extern u16 dFTDonkeyAnimDamageX3_joint16[26];
extern u16 dFTDonkeyAnimDamageX3_joint17[122];
extern u16 dFTDonkeyAnimDamageX3_joint19[48];
extern u16 dFTDonkeyAnimDamageX3_joint21[124];
extern u16 dFTDonkeyAnimDamageX3_joint22[122];
extern u16 dFTDonkeyAnimDamageX3_joint24[48];
extern u16 dFTDonkeyAnimDamageX3_joint25[118];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimDamageX3_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimDamageX3_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimDamageX3_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimDamageX3_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageX3_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimDamageX3_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimDamageX3_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimDamageX3_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimDamageX3_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageX3_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimDamageX3_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimDamageX3_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimDamageX3_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimDamageX3_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageX3_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimDamageX3_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageX3_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageX3_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimDamageX3_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageX3_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimDamageX3_joint1[34] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -29, 1031, -400,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 221, 1024, -493,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 204, 737, -1169,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 204, 737, -1169,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 204, 495, -1241,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -29, 1031, -400,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimDamageX3_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -214, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -199, 207, -278, -101, -39, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 357, 26, -345, -3, -69, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 357, -23, -345, 11, -69, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -265, -41, -16,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimDamageX3_joint4[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 750, 24, 41, 0, 319, -157,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -124, -45, 219, -36, -276, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 602, -199, 14, -110, -415, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 153, -21, -306, -15, -479, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 153, 22, -306, 12, -479, 19, -124, 37, 219, 29, -276, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 750, 24, 41, 0, 319, -157,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimDamageX3_joint5[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 62, -84, 16, -473, 136,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -189, -114, -219, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 272, 299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 599, 163, -296, -53, -361, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -360, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -295, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 599, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 599, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -360, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -360, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -295, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -296, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 599, -60, -296, -52, -361, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 106, -590, -99, 367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -401, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -631, -117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -657, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -703, -456, 441, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -805, 230, 437, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, 384, -600, 160, -109, -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -20, -13, -152, 126, -394, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, -42, -84, 67, -473, -79,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimDamageX3_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -184,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -843, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -843, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -843, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -843, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1182, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1169, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -989, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -849, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -593, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 185,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimDamageX3_joint7[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1040, -47, 453, 20, 122, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -1040, 15, 453, -19, 122, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -675, 130, 0, -56, 0, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimDamageX3_joint8[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 177, 13, 199, 6, -333, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 533, 0, 113, -9, 28, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimDamageX3_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimDamageX3_joint11[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -115, 146, 172, 29, -479, 440,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 123, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 30, 13, -38, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -89, -73, 83, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 100, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -183, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -28, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 7, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 18, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 173, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 99, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 29, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -193, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -94, 24,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 14, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -412, -98,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -84, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -101, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, -14, 172, -1, -479, -66,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDamageX3_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -571,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -988, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1015, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -921, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -920, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -1007, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1000, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -514, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 97,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimDamageX3_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 162, 45, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 825, 35, -319, -5, -35, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 935, -24, -69, 13, 20, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 162, 45, 64,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimDamageX3_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimDamageX3_joint16[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -545, -6, 271, -9, 263, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -490, 4, -135, -9, -50, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimDamageX3_joint17[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -60, -232, -392, -8, 2887, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -293, 35, -401, -75, 2954, -398,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, 149, -543, -76, 2090, -636,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -475, 8, 1641, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 50, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 78, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -478, -9, 1619, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1640, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -553, 39,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 79, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 7, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1681, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2121, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -502, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -409, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 10, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -179, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -130, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -60, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -506, -36, 2324, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -481, 56, 2586, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, 0, -392, 88, 2887, 301,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimDamageX3_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1026, 25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1087, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 868, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 852, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 825, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 789, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 992, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1125, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -99,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimDamageX3_joint21[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1494, 136, -1623, 145, -1978, -119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1395, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1631, 197, -2097, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1888, 182, -1874, 225,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1933, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1646, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1627, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1646, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1377, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1468, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1945, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 2006, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2010, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1990, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1471, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1328, 50,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1620, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1651, -113,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2004, 61, -1304, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1593, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2114, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2009, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1982, -134, -1762, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1739, -244, -1675, -14, -1877, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1494, -245, -1623, 51, -1978, -100,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimDamageX3_joint22[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1712, -159, 1391, 123, 1312, -212,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1414, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1515, 208, 1099, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1808, 190, 644, -393,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1919, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 288, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 303, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1927, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1903, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1409, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1420, -26,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1925, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1983, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1382, -55, 336, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1308, -138, 419, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1105, 18, 2061, -69, 631, 126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1586, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1346, 178, 673, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1463, 126, 888, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1598, 124, 1432, -97, 1077, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1712, 113, 1391, -40, 1312, 235,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimDamageX3_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 994, -113,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 881, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 812, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 893, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 901, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 945, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 975, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1075, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1233, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1110, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, -115,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimDamageX3_joint25[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, 8, 103, -36, -387, 133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -206, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 452, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 67, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 331, 156,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 114, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -35, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 81, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 119, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 47, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 453, -2, 98, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 309, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 59, -3,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 46, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 147, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 306, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 455, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 638, -76, 57, 22, 185, -116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -281, -115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 78, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 303, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 64, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -18, -28, -318, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 26, 103, 25, -387, -69,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
