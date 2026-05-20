/* AnimJoint data for relocData file 1231 (FTLinkAnimUTilt) */
/* 2224 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimUTilt_joint1[28];
extern u16 dFTLinkAnimUTilt_joint2[38];
extern u16 dFTLinkAnimUTilt_joint4[46];
extern u16 dFTLinkAnimUTilt_joint5[176];
extern u16 dFTLinkAnimUTilt_joint6[72];
extern u16 dFTLinkAnimUTilt_joint9[58];
extern u16 dFTLinkAnimUTilt_joint10[44];
extern u16 dFTLinkAnimUTilt_joint11[32];
extern u16 dFTLinkAnimUTilt_joint12[8];
extern u16 dFTLinkAnimUTilt_joint13[8];
extern u16 dFTLinkAnimUTilt_joint16[8];
extern u16 dFTLinkAnimUTilt_joint17[34];
extern u16 dFTLinkAnimUTilt_joint18[44];
extern u16 dFTLinkAnimUTilt_joint20[8];
extern u16 dFTLinkAnimUTilt_joint21[84];
extern u16 dFTLinkAnimUTilt_joint23[32];
extern u16 dFTLinkAnimUTilt_joint25[86];
extern u16 dFTLinkAnimUTilt_joint26[122];
extern u16 dFTLinkAnimUTilt_joint28[32];
extern u16 dFTLinkAnimUTilt_joint29[94];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimUTilt_joints[] = {
	(AObjEvent32 *)dFTLinkAnimUTilt_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimUTilt_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimUTilt_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimUTilt_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimUTilt_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimUTilt_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimUTilt_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimUTilt_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimUTilt_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimUTilt_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimUTilt_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimUTilt_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimUTilt_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimUTilt_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimUTilt_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimUTilt_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimUTilt_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimUTilt_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimUTilt_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimUTilt_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimUTilt_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 901, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 429, -628, 172, 229,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 429, 10, 172, -114,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 444, 157, 14, -57,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 901, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimUTilt_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 5, 18, 276, 0, 29, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 5, -19, 276, 12, 29, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -206, -4, 414, 0, -132, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimUTilt_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 427, -4, -368, 8, -134, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 212, -45, 248, 72, 239, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -75, 24, 430, 2, -213, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 433, 20, 275, -16, -40, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimUTilt_joint5[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1328, 77, -1281, 1, 1522, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1372, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1250, 238, 1420, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -851, 253, 981, -321,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -690, 75, 640, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1532, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1460, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -593, 41, 450, -166,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1122, -69, 204, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1413, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1403, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1135, -23, -1437, 99, 89, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -979, 67, 553, 496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1169, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1543, -485,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2140, -360, -1069, -79, 1150, 332,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1225, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2263, -91, 1217, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2470, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1203, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1234, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2567, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -2446, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2360, 146, -1270, -35, 1252, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1227, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1513, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2153, 340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1678, 414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1324, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1267, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1320, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1249, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1271, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1328, -7, -1281, -9, 1522, 8,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimUTilt_joint6[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -124,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -578, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -413, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -636, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -698, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -492, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -295, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -463, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -541, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -534, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -47, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -159, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -160, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -487, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimUTilt_joint9[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 147, 81, 234, -19, 605, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 572, 38, -126, -71, 339, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 419, -64, -263, -7, 335, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 122, -42, -178, 19, 507, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 82, 17, -107, 7, 426, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 277, -6, -108, 9, 564, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimUTilt_joint10[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, 1, 123, 0, -50, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 126, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 26), 490, -34, 135, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 458, -27, 66, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 421, -9, -35, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 124, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, -4, 123, 0, -50, -15,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimUTilt_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -595, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -619, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -658, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -599, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimUTilt_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimUTilt_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimUTilt_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimUTilt_joint17[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 471, 0, 0, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 9, -3, -153, -30, 106, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -48, 0, 12, 0, 93, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimUTilt_joint18[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, -23, 168, 46,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -209, -26, 221, -17, 0, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -286, -36, -27, -13, 132, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -536, 17, 99, -10, -22, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimUTilt_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimUTilt_joint21[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -248, 131, -239, -72, 114, -151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 241, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -231, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -164, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -127, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -250, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 248, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 550, -30,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -263, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -118, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 514, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -240, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -255, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -246, 12,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -62, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 103, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -248, -8, -239, 7, 114, 10,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimUTilt_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 246, 293,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 899, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 900, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 979, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 934, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 268, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 246, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimUTilt_joint25[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 341, -54, -157, -25, -34, -129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -306, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -305, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 118, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -46, -98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -76, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -305, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -248, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -304, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -232, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -114, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -45, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 13, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 338, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -214, 16, -231, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -158, 1, -44, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 341, 2, -157, 0, -34, 9,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimUTilt_joint26[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1345, -99, 1335, -89, 1483, -198,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1199, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1445, -207, 1285, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1760, -296, 844, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2037, -160, 1456, 119, 674, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2082, -15, 1439, 5, 544, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 674, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1989, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1467, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1332, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 656, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 871, 36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1982, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1362, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1315, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1271, 20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 913, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1477, 11,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1291, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1332, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1353, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1347, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1345, 1, 1335, 3, 1483, 6,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimUTilt_joint28[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 426, 264,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1208, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1237, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 693, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 645, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 435, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimUTilt_joint29[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2027, 84, -1538, 17, 1537, -98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1397, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1810, 181, -1495, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1580, 97, -1593, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1615, -6, -1507, 12, 1428, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 1522, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1592, -3, -1568, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1759, -4, -1576, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1763, -6, -1584, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -2044, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1539, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1518, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1536, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2041, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2028, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2027, 1, -1538, 0, 1537, 1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
