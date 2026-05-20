/* AnimJoint data for relocData file 1618 (FTCaptainAnimFireFlowerShoot) */
/* 2576 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimFireFlowerShoot_joint1[62];
extern u16 dFTCaptainAnimFireFlowerShoot_joint2[36];
extern u16 dFTCaptainAnimFireFlowerShoot_joint4[38];
extern u16 dFTCaptainAnimFireFlowerShoot_joint5[100];
extern u16 dFTCaptainAnimFireFlowerShoot_joint6[48];
extern u16 dFTCaptainAnimFireFlowerShoot_joint7[26];
extern u16 dFTCaptainAnimFireFlowerShoot_joint8[32];
extern u16 dFTCaptainAnimFireFlowerShoot_joint10[8];
extern u16 dFTCaptainAnimFireFlowerShoot_joint11[178];
extern u16 dFTCaptainAnimFireFlowerShoot_joint12[72];
extern u16 dFTCaptainAnimFireFlowerShoot_joint13[32];
extern u16 dFTCaptainAnimFireFlowerShoot_joint14[40];
extern u16 dFTCaptainAnimFireFlowerShoot_joint16[38];
extern u16 dFTCaptainAnimFireFlowerShoot_joint17[98];
extern u16 dFTCaptainAnimFireFlowerShoot_joint19[52];
extern u16 dFTCaptainAnimFireFlowerShoot_joint21[98];
extern u16 dFTCaptainAnimFireFlowerShoot_joint22[120];
extern u16 dFTCaptainAnimFireFlowerShoot_joint24[48];
extern u16 dFTCaptainAnimFireFlowerShoot_joint25[112];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimFireFlowerShoot_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimFireFlowerShoot_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimFireFlowerShoot_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimFireFlowerShoot_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimFireFlowerShoot_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimFireFlowerShoot_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimFireFlowerShoot_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimFireFlowerShoot_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimFireFlowerShoot_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimFireFlowerShoot_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimFireFlowerShoot_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimFireFlowerShoot_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimFireFlowerShoot_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimFireFlowerShoot_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimFireFlowerShoot_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimFireFlowerShoot_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimFireFlowerShoot_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimFireFlowerShoot_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimFireFlowerShoot_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimFireFlowerShoot_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimFireFlowerShoot_joint1[62] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 1600, -318,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1456, -4, -54, -2,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), 228,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1456, 5, -54, -8,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), 228,
	ftAnimSetValT(FT_ANIM_TRAX, 3), 228,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1456, 7, -308, -1024,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1453, -10, -438, 202,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 1456, 4, -54, 11,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 8), 228,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1600, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimFireFlowerShoot_joint2[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 107, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -214, 0, -107, 0, 107, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -214, -107, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -214, 0, -107, 0, 107, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 107, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimFireFlowerShoot_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 189, 0,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 270, 0, -340, 0, -47, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 270, -340, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 270, 0, -340, 0, -47, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 189, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimFireFlowerShoot_joint5[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 248, 42, -24, -61, -522, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 510, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -505, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -245, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -245, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -245, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 510, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 511, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -505, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -505, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 510, 46, -245, 36, -505, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 688, 55, -116, 40, -781, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 715, 11, -92, 7, -834, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 510, -17, -245, -5, -505, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 496, -21, -250, -1, -501, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 257, -15, -34, 18, -518, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 248, -8, -24, 10, -522, -3,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimFireFlowerShoot_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -820, -150,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1243, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1370, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1370, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1370, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1311, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1291, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1256, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1186, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -838, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -820, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimFireFlowerShoot_joint7[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -781, -89, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 223, 0, 128, 0, 174, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 223, 0, 128, 0, 174, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -781, -89, -388,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimFireFlowerShoot_joint8[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 26, 0, 288, 0, -66, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 26, 288, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 26, 0, 288, 0, -66, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimFireFlowerShoot_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimFireFlowerShoot_joint11[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -118, -247, 149, 103, 582, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -262, 252, 0, 369, -335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -643, -122, 148, -157, -87, -331,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -388, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -611, 32, -62, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -578, 16, -182, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -183, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -581, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -388, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -388, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -183, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -183, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -157, -18, -377, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -471, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -533, 33, -220, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -595, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -233, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -132, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -458, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -342, 2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -604, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -672, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -147, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -13, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -70, 109,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 69, 84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 269, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -672, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -473, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 61, 166,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 459, 146,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -274, 159, 220, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -154, 78, 166, -35, 556, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -118, 36, 149, -17, 582, 26,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimFireFlowerShoot_joint12[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1032, -35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -971, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -661, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -413, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -413, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -860, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -962, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -908, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -508, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -601, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1043, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1047, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1038, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1032, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimFireFlowerShoot_joint13[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 62, 0, 238, 0, 77, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 62, 238, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 62, 0, 238, 0, 77, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 270, 275, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimFireFlowerShoot_joint14[40] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1424, -949, 115, 122, 12, 36,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1424, -949, 115, 122, 12, 36,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 1424, -949, 115, 122, 12, 36,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1538, -1003, 119, 85, 49, 38,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimFireFlowerShoot_joint16[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 18, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 209, 0, 106, 0, -231, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 209, 106, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 209, 0, 106, 0, -231, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, 18, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimFireFlowerShoot_joint17[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -66, 70, 17, -472, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -399, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 58, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -117, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -111, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -52, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -375, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 61, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 87, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -28, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -77, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -365, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -409, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -404, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -473, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -53, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 172, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 88, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 76, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 18, 70, -6, -472, 1,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimFireFlowerShoot_joint19[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 92,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 679, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 680, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 680, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 679, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 503, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 390, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 525, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 578, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 489, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimFireFlowerShoot_joint21[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, 39, -42, -4, 80, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -99, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 10, -8, -51, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1, -8, -51, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -14, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -50, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -101, -5, -49, 94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -56, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -60, -33, 137, 140,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -24, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 230, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 121, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 70, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 59, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -19, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -112, -14,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -47, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, 2, 73, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, -14, -42, 0, 80, 6,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimFireFlowerShoot_joint22[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, 3, 110, 22, -76, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 138, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 298, 22, 29, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 305, 9, 31, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 25, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 335, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 141, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 132, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 18, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 77, -34, -177, -134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 17, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -251, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -85, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 337, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 323, -39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 7, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 108, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -56, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -70, -9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 280, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 125, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 123, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 153, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 6, 110, -14, -76, -6,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimFireFlowerShoot_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 74,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 739, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 739, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 739, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 738, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 824, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 837, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 686, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 677, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 545, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimFireFlowerShoot_joint25[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 161, -23, 365, 2, -279, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -414, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 76, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 314, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 252, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 181, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -412, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -350, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 108, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 158, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 175, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 129, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 71, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 166, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -317, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -283, 7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 198, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 173, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -275, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -270, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 130, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 359, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, -11, 365, 5, -279, -8,
	ftAnimEnd(),
	0x0000, 0x0000,
};
