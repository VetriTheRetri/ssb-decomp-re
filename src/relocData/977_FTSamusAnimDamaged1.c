/* AnimJoint data for relocData file 977 (FTSamusAnimDamaged1) */
/* 1792 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDamaged1_joint1[46];
extern u16 dFTSamusAnimDamaged1_joint2[38];
extern u16 dFTSamusAnimDamaged1_joint4[58];
extern u16 dFTSamusAnimDamaged1_joint5[72];
extern u16 dFTSamusAnimDamaged1_joint6[40];
extern u16 dFTSamusAnimDamaged1_joint7[44];
extern u16 dFTSamusAnimDamaged1_joint8[10];
extern u16 dFTSamusAnimDamaged1_joint9[24];
extern u16 dFTSamusAnimDamaged1_joint11[46];
extern u16 dFTSamusAnimDamaged1_joint12[66];
extern u16 dFTSamusAnimDamaged1_joint14[32];
extern u16 dFTSamusAnimDamaged1_joint15[72];
extern u16 dFTSamusAnimDamaged1_joint17[40];
extern u16 dFTSamusAnimDamaged1_joint19[64];
extern u16 dFTSamusAnimDamaged1_joint20[78];
extern u16 dFTSamusAnimDamaged1_joint22[36];
extern u16 dFTSamusAnimDamaged1_joint23[84];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimDamaged1_joints[] = {
	(AObjEvent32 *)dFTSamusAnimDamaged1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimDamaged1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimDamaged1_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimDamaged1_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimDamaged1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimDamaged1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimDamaged1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimDamaged1_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimDamaged1_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimDamaged1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimDamaged1_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimDamaged1_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimDamaged1_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimDamaged1_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimDamaged1_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimDamaged1_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimDamaged1_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimDamaged1_joint1[46] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1445, 19, -208, -1584,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -35,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 103, 1607, -594,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 129, 4, -508,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 97, -69, 1449, -56, -734, 474,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 32, 1550, -108,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 1600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimDamaged1_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 249, -68, 78, -18, 3, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -206, -70, -56, -54, 123, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -330, 22, -373, 6, 258, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimDamaged1_joint4[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 55, 100, 257, -120, -141, 33, 96, -313, -13, -49, -54, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 300, 27, -360, -30, 100, -3, -117, -47, -18, -28, 102, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 281, -33, 6, 39, -172, -11, 47, 103, -42, 16, 100, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimDamaged1_joint5[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, -19, 1494, 365, -1839, -269,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1245, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1859, 43, -2109, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1582, -101, -1957, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1991, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1656, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1605, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 2007, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1982, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1970, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1259, 34, 2056, -98, -2000, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1176, 63, 1809, -281, -1949, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 44, 1494, -314, -1839, 109,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDamaged1_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -716, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -893, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -670, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -718, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -798, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -777, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -888, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 149,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimDamaged1_joint7[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 562, -237, 79, 8, -111, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 227, -434, 16, -7, 24, 10,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -268, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -518, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 268, 167,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 701,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimDamaged1_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimDamaged1_joint9[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 480, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -402, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 30, 92,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimDamaged1_joint11[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 35, 0, -64, 0, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 105, 22, -193, -41, -213, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 105, -16, -193, 30, -213, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -16, 0, 30, 0, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDamaged1_joint12[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -52, -128, 472, -215, 242,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 67, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -77, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 343, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 292, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 231, -32,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 47, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -93, 52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -201, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -255, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 181, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 20, 75, -10, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 38, -128, -118, -215, 40,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimDamaged1_joint14[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -341,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -937, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -898, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -825, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -874, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -623, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimDamaged1_joint15[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, 26, -27, 21, -389, -325,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 7, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -272, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -715, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -107, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -258, -115,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -31, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -90, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -330, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -43, 152,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -31, 31, -358, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 131, -27, 4, -389, -30,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimDamaged1_joint17[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, -156,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 176, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 152, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 531, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -52,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimDamaged1_joint19[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, -26, -28, 59, -41, 223,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -107, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 429, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -45, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -128, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -112, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -113, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -32, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 434, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 315, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -27, 39, 76, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -34, -24, -46, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -41, -28, 3, -41, 4,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimDamaged1_joint20[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -46, 160, 13, -49, -496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 179, 118, 174, 143, -545, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 462, 107, 447, 149, -187, 274,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -304, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 276, -134, 482, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 125, -137, 455, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 221, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 8, 188,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -303, 178,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 293, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 215, -66, -88, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 218, 160, -54, -49, 39,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimDamaged1_joint22[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 224,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 666, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 640, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 522, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 559, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 662, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 543, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -100,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimDamaged1_joint23[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1750, -82, -1802, -97, 1394, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1533, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1649, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1899, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1564, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1518, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1500, 10, 1532, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1526, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1405, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1661, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1713, 68,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1512, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1855, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1823, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1780, -36, 1375, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1750, -29, -1802, 53, 1394, 19,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
