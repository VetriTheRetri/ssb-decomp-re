/* AnimJoint data for relocData file 1423 (FTKirbyAnimStoneCancel) */
/* 1632 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimStoneCancel_joint1[14];
extern u16 dFTKirbyAnimStoneCancel_joint2[32];
extern u16 dFTKirbyAnimStoneCancel_joint3[14];
extern u16 dFTKirbyAnimStoneCancel_joint4[18];
extern u16 dFTKirbyAnimStoneCancel_joint6[30];
extern u16 dFTKirbyAnimStoneCancel_joint7[108];
extern u16 dFTKirbyAnimStoneCancel_joint8[28];
extern u16 dFTKirbyAnimStoneCancel_joint10[30];
extern u16 dFTKirbyAnimStoneCancel_joint11[94];
extern u16 dFTKirbyAnimStoneCancel_joint12[30];
extern u16 dFTKirbyAnimStoneCancel_joint14[10];
extern u16 dFTKirbyAnimStoneCancel_joint15[64];
extern u16 dFTKirbyAnimStoneCancel_joint17[12];
extern u16 dFTKirbyAnimStoneCancel_joint19[104];
extern u16 dFTKirbyAnimStoneCancel_joint20[60];
extern u16 dFTKirbyAnimStoneCancel_joint22[122];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimStoneCancel_joints[] = {
	(u32)dFTKirbyAnimStoneCancel_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimStoneCancel_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimStoneCancel_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimStoneCancel_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimStoneCancel_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimStoneCancel_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimStoneCancel_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimStoneCancel_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimStoneCancel_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimStoneCancel_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimStoneCancel_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimStoneCancel_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimStoneCancel_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimStoneCancel_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimStoneCancel_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimStoneCancel_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF0162, /* [22] END */
};

/* Joint 1 */
u16 dFTKirbyAnimStoneCancel_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 0, 400,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 20), 1080, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 1200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimStoneCancel_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 480,
	ftAnimSetValRate(FT_ANIM_ROTY), -804, 521,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -3216, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 6433, 596,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 600,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 20), 600,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 11125, 308,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 12599,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimStoneCancel_joint3[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, -312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimStoneCancel_joint4[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 268,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimStoneCancel_joint6[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -268, -268, -60, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 10), 0, 178, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 20), 0, 178, -120, -120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimStoneCancel_joint7[108] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -419, 314, -1063, 53, 677, -342,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1006, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -104, 139, 335, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -140, 192, 422, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 280, 317, 88, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 493, 156, -2, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 790, 23, 9, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1030, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1199, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 804, 6, 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 57, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 809, 53,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1196, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -997, 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -269, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 868, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1025, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1039, 14, -996, 1, -287, -17,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimStoneCancel_joint8[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -489, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 246,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimStoneCancel_joint10[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 268, 268, 60, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 10), 0, -178, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 20), 0, -178, 120, -120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimStoneCancel_joint11[94] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 424, -310, 1066, -55, 683, -338,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1003, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 114, -145, 345, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 133, -197, 414, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -280, -315, 88, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -497, -158, -7, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -757, -39, 21, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1033, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1060, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -790, -23, 9, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), -809, -53, -7, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -867, -58, 1036, -20, -80, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1021, -27, 1000, -4, -266, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1040, -18, 995, -5, -287, -21,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimStoneCancel_joint12[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -482, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -494, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimStoneCancel_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimStoneCancel_joint15[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -65, 1, -355, 1, 296, -2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -74, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -396, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 307, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 317, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -25, -76,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -76, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 228, 25,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, -12, -98, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -428, -4, -194, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 242, 14, -430, -2, -209, -15,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimStoneCancel_joint17[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimStoneCancel_joint19[104] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1981, 1, 1800, -5, -1799, 10,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1320, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1517, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1813, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, -40, 4096, -40, 4096, -40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1320, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1265, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1512, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1772, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1815, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1756, -12,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3686, 3686, 3686,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1785, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2093, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1850, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1963, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1233, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2118, -25, 1980, 16, -1218, 14,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimStoneCancel_joint20[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 65, -1, 355, -1, 296, -2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 74, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 406, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 313, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 324, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -199, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 75, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -231, -28,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 419, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 426, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -246, -14, 428, 2, -214, -14,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimStoneCancel_joint22[122] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000, 0x280E, 0xFB2D, 0xFFFF, 0xF8F8, 0x0007, 0xF8F9, 0x000C, 0x3F00, 0x1000, 0x1000, 0x1000, 0x2809, 0x000B, 0xFAC6, 0x0004, 0x2805, 0x000C, 0xFA02, 0x0003, 0x2803, 0x000E, 0xFA86, 0x0002, 0x3F01, 0x000A, 0x1000, 0x1000, 0x1000, 0x2F01, 0x000A, 0x1000, 0xFFD8, 0x1000, 0xFFD8, 0x1000, 0xFFD8, 0x0801, 0x0001, 0x2009, 0x0001, 0xFACA, 0x0002, 0x2809, 0x000E, 0xFACD, 0x0013, 0x2005, 0x0001, 0xFA06, 0x0003, 0x2805, 0x000D, 0xF922, 0xFFAF, 0x0801, 0x0001, 0x2003, 0x0001, 0xFA89, 0x0002, 0x2803, 0x0009, 0xFA49, 0x0004, 0x0801, 0x0005, 0x4701, 0x000A, 0x0E66, 0x0E66, 0x0E66, 0x0801, 0x0004, 0x2003, 0x0001, 0xFA5A, 0x0026, 0x2803, 0x0004, 0xFB99, 0x0033, 0x0801, 0x0001, 0x200D, 0x0001, 0xF8D0, 0xFFB3, 0xFAE6, 0x001F, 0x200D, 0x0002, 0xF856, 0xFFDF, 0xFB2B, 0x0017, 0x200F, 0x0001, 0xFBB6, 0x001D, 0xF844, 0xFFEE, 0xFB3A, 0x000F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
