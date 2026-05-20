/* AnimJoint data for relocData file 857 (FTDonkeyAnimClangRecoil) */
/* 1360 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimClangRecoil_joint1[28];
extern u16 dFTDonkeyAnimClangRecoil_joint2[10];
extern u16 dFTDonkeyAnimClangRecoil_joint4[32];
extern u16 dFTDonkeyAnimClangRecoil_joint5[54];
extern u16 dFTDonkeyAnimClangRecoil_joint6[28];
extern u16 dFTDonkeyAnimClangRecoil_joint7[10];
extern u16 dFTDonkeyAnimClangRecoil_joint8[22];
extern u16 dFTDonkeyAnimClangRecoil_joint10[10];
extern u16 dFTDonkeyAnimClangRecoil_joint11[50];
extern u16 dFTDonkeyAnimClangRecoil_joint12[32];
extern u16 dFTDonkeyAnimClangRecoil_joint13[32];
extern u16 dFTDonkeyAnimClangRecoil_joint14[8];
extern u16 dFTDonkeyAnimClangRecoil_joint16[10];
extern u16 dFTDonkeyAnimClangRecoil_joint17[42];
extern u16 dFTDonkeyAnimClangRecoil_joint19[24];
extern u16 dFTDonkeyAnimClangRecoil_joint21[64];
extern u16 dFTDonkeyAnimClangRecoil_joint22[64];
extern u16 dFTDonkeyAnimClangRecoil_joint24[24];
extern u16 dFTDonkeyAnimClangRecoil_joint25[86];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimClangRecoil_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimClangRecoil_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimClangRecoil_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimClangRecoil_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimClangRecoil_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimClangRecoil_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimClangRecoil_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimClangRecoil_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimClangRecoil_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimClangRecoil_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimClangRecoil_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimClangRecoil_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimClangRecoil_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimClangRecoil_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimClangRecoil_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimClangRecoil_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimClangRecoil_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimClangRecoil_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimClangRecoil_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimClangRecoil_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimClangRecoil_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), -268, 900, -1320,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, -29,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 840, -43, -1080, 174,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 840, 127, -1080, 452,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1031, -400,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimClangRecoil_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -265, -41, -16, 0, -214, -154,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimClangRecoil_joint4[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 536, -107, -187,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 750, 27, -86, 1, -151, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -86, 9, -151, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 839,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 750, 24, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimClangRecoil_joint5[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 936, -21, -114, -19, -821, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -293, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 166, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -662, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -442, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -238, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -92, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 88, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -24, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, -37, -84, 7, -473, -30,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimClangRecoil_joint6[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -802, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -928, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -912, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -634, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 78,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimClangRecoil_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 702, 15, 17,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimClangRecoil_joint8[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 375, 187, -134,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1354, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -40, -12, -8, -15, -107, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimClangRecoil_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -398, 70, 29, 0, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimClangRecoil_joint11[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -706, 161, 336, 8, -331, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -47, 30, 183, -64, 52, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, 4, 122, -32, 25, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -95, -28, 179, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -162, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -292, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -415, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, -20, 172, -7, -479, -63,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimClangRecoil_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -534, -63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1190, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1219, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -929, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -524, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 107,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimClangRecoil_joint13[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 0, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 18, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 804,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 729, -70,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1, 43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 98, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimClangRecoil_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimClangRecoil_joint16[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -306, 282, 335,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimClangRecoil_joint17[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1452, 22, -1306, -11, 978, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -1649, -29, -1224, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 821, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 809, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1004, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1152, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1267, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1669, -19, -1215, 8, 1279, 11,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimClangRecoil_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 646, 111,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1163, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1148, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1045, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimClangRecoil_joint21[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, 7, -326, 45, 294, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 46, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 83, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -161, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -132, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -254, -90,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 58, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -126, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 82, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 39, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -344, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -387, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 12, 14, -24, -369, 17,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimClangRecoil_joint22[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 110, -47, 314, -28, -521, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -354, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -135, 5, 154, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -124, 9, 159, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 71, 27, 192, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -324, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -209, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -106, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -192, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -175, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -197, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, 32, 217, 24, -295, -98,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimClangRecoil_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1088, 17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1153, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1106, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1004, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimClangRecoil_joint25[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1494, 39, 1795, -24, 1360, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1122, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1779, -5, 1577, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1765, -13, 1562, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1739, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1233, 64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1130, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1235, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1808, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1646, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1166, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1150, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1301, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1427, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1642, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1643, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1616, -26, 1504, 76, 1221, 71,
	ftAnimEnd(),
	0x0000, 0x0000,
};
