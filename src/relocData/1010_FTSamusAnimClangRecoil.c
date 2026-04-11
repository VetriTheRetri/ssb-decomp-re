/* AnimJoint data for relocData file 1010 (FTSamusAnimClangRecoil) */
/* 1472 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimClangRecoil_joint1[36];
extern u16 dFTSamusAnimClangRecoil_joint2[16];
extern u16 dFTSamusAnimClangRecoil_joint4[50];
extern u16 dFTSamusAnimClangRecoil_joint5[74];
extern u16 dFTSamusAnimClangRecoil_joint6[36];
extern u16 dFTSamusAnimClangRecoil_joint7[42];
extern u16 dFTSamusAnimClangRecoil_joint8[16];
extern u16 dFTSamusAnimClangRecoil_joint11[36];
extern u16 dFTSamusAnimClangRecoil_joint12[46];
extern u16 dFTSamusAnimClangRecoil_joint14[28];
extern u16 dFTSamusAnimClangRecoil_joint15[74];
extern u16 dFTSamusAnimClangRecoil_joint17[36];
extern u16 dFTSamusAnimClangRecoil_joint19[68];
extern u16 dFTSamusAnimClangRecoil_joint20[48];
extern u16 dFTSamusAnimClangRecoil_joint22[84];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimClangRecoil_joints[] = {
	(u32)dFTSamusAnimClangRecoil_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimClangRecoil_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimClangRecoil_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimClangRecoil_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimClangRecoil_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimClangRecoil_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimClangRecoil_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimClangRecoil_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimClangRecoil_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimClangRecoil_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimClangRecoil_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimClangRecoil_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimClangRecoil_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimClangRecoil_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimClangRecoil_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF0154, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimClangRecoil_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), -402, 1560, -660,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX, 16), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -321, 7, 1320, -174, -600, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -321, 26, 1320, 186, -480, 399,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimClangRecoil_joint2[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimClangRecoil_joint4[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 187, -187, -70, 0, 35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTZ, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 321, 7, -134, 4, -34, 37, -49, -58, 86, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 268, -26, -134, 11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -32, 22, -58, 32, 90, -57,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 0,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimClangRecoil_joint5[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -451, -204, -1811, 77, 1019, -203,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1059, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1609, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 816, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 842, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1233, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1065, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1280, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1611, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1724, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1229, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1336, 33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1262, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1152, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 19, -1722, 1, 1377, 41,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimClangRecoil_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -561, -155,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -717, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -981, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -946, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -726, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimClangRecoil_joint7[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1251, 0, 226,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValAfterT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1251, -205, 0, 0, 0, 6,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -868, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -241, 95, 0, 265, 268, -518,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 701, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimClangRecoil_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimClangRecoil_joint11[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -53, 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 480, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -107, -9,
	ftAnimSetValAfterT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 480, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -160, 8, 268, -22, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimClangRecoil_joint12[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 327, -17, -136, 6, -333, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -97, 21, 40, -18, -93, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -67, 30, 17, -27, -66, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 43, 22, -128, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -98, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -176, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 14, -128, 0, -215, -38,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimClangRecoil_joint14[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1286, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1345, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1233, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -682, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 87,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimClangRecoil_joint15[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -218, 122, -272, -1, -224, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -116, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -95, 213, -222, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 209, 235, -365, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 450, -3, -318, 18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -120, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 4, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 446, -3, -301, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 302, -116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -395, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 20, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 163, -107, -6, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, -75, -27, -21, -389, 5,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimClangRecoil_joint17[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 4, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 253, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 595, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 599, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 501, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimClangRecoil_joint19[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1475, -64, -1556, 32, -1170, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1223, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1498, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1388, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1565, -157,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1896, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1229, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1405, 7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1862, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1669, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1424, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1488, 54, -1552, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1532, 44, -1579, -26, -1650, 19,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimClangRecoil_joint20[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 101, 6, 162, 19, -355, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -199, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 149, -25, 443, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 127, -11, 448, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 249, -18, 194, -51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -129, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -57, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, -23, 160, -33, -49, 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimClangRecoil_joint22[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 578, 44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 860, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 868, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 478, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -35,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF9BA, 0x0004, 0xF9CF, 0xFFF7, 0x05BA, 0xFFEF, 0x2809, 0x0009, 0x056D, 0xFFFB, 0x2803, 0x000C, 0xF9FB, 0x000B, 0x2005, 0x0008, 0xF985, 0x0027, 0x2005, 0x0001, 0xF9B0, 0x0027, 0x2805, 0x0006, 0xF927, 0xFFC1, 0x2009, 0x0001, 0x0562, 0xFFF4, 0x2809, 0x0005, 0x0565, 0x0012, 0x0801, 0x0002, 0x2003, 0x0001, 0xFA0A, 0x0012, 0x2003, 0x0002, 0xFA3A, 0x0012, 0x200F, 0x0001, 0xFA46, 0x000C, 0xF8F6, 0xFFD0, 0x0572, 0x000D, 0x0000, 0x0000, 0x0000,
};
