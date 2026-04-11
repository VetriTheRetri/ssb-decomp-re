/* AnimJoint data for relocData file 1295 (FTKirbyAnimDamaged6) */
/* 1360 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDamaged6_joint1[56];
extern u16 dFTKirbyAnimDamaged6_joint2[10];
extern u16 dFTKirbyAnimDamaged6_joint3[34];
extern u16 dFTKirbyAnimDamaged6_joint5[34];
extern u16 dFTKirbyAnimDamaged6_joint6[76];
extern u16 dFTKirbyAnimDamaged6_joint7[16];
extern u16 dFTKirbyAnimDamaged6_joint9[28];
extern u16 dFTKirbyAnimDamaged6_joint10[86];
extern u16 dFTKirbyAnimDamaged6_joint11[14];
extern u16 dFTKirbyAnimDamaged6_joint13[10];
extern u16 dFTKirbyAnimDamaged6_joint14[50];
extern u16 dFTKirbyAnimDamaged6_joint16[14];
extern u16 dFTKirbyAnimDamaged6_joint18[74];
extern u16 dFTKirbyAnimDamaged6_joint19[38];
extern u16 dFTKirbyAnimDamaged6_joint21[96];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimDamaged6_joints[] = {
	(u32)dFTKirbyAnimDamaged6_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDamaged6_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDamaged6_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDamaged6_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimDamaged6_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimDamaged6_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDamaged6_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimDamaged6_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimDamaged6_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDamaged6_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimDamaged6_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimDamaged6_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimDamaged6_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimDamaged6_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimDamaged6_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF012C, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimDamaged6_joint1[56] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 4505, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 1), 2867,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 4915,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3686, 3686,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 3686,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4300, 4300,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 4), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimDamaged6_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDamaged6_joint3[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -89, -44, -268, -33, -178, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -89, 32, -268, 24, -178, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 268, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimDamaged6_joint5[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 178, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -120, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 1), -268, -33, 0, -22, -180, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 7), -268, 24, 0, 16, -180, 43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 4), 0, 178, -120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimDamaged6_joint6[76] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1039, -452, 2220, -6, -287, -233,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -579, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 2185, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 587, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 582, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 575, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -628, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -565, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2234, 41, -508, 147,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -66, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 2204, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 542, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 896, 192,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -184, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1040, 143, 2221, 16, -287, -102,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimDamaged6_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimDamaged6_joint9[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY), 0, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -178, 120, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 1), -178, -22, -180, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 7), -178, 16, -180, 43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 4), 0, -120,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimDamaged6_joint10[86] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1039, 78, 996, -131, -287, -650,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 881, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -961, -69, -937, -446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1178, -111, -1180, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1184, 373, -1203, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -431, 547, -464, 534,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -173, -275, -212, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -641, -457, 856, -1, -651, -424,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1288, -42, 911, -17, -1158, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1172, 187, 843, 18, -704, 473,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -913, 66, 949, 76, -212, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1039, -126, 996, 46, -286, -74,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimDamaged6_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimDamaged6_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDamaged6_joint14[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, 1212, -302, 57, 237, -597,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -311, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1507, 625, -359, -316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1545, 29, -395, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1504, -82, -355, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1375, -279, -257, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 440, -325, 155, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 295, -145, -302, 9, 237, 82,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimDamaged6_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimDamaged6_joint18[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1286, -1364, 1766, -318, -1255, 607,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -78, -716, 1448, -173, -648, 313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -146, -40, 1420, -29, -628, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1454, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -129, 35, -674, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -84, 97, -638, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 517, 545, -723, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1576, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1886, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1154, 384, 1857, -59, -1168, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1286, 131, 1766, -90, -1255, -87,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimDamaged6_joint19[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 11, 300, 81, 233, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -295, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 384, -10, 325, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 369, -20, 306, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 315, -20, 249, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, -1, 300, -14, 233, -15,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimDamaged6_joint21[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000, 0x280E, 0xFAFA, 0x03B5, 0xF91A, 0xFE64, 0xFB15, 0x02F8, 0x4F00, 0x0E66, 0x0E66, 0x0E66, 0x200F, 0x0001, 0xFEB0, 0x021E, 0xF77D, 0xFF56, 0xFE0D, 0x01A0, 0x200F, 0x0001, 0xFF38, 0x006E, 0xF7C4, 0x001D, 0xFE56, 0x0040, 0x280B, 0x0005, 0xFF02, 0xFFB8, 0xFE39, 0xFFDD, 0x2005, 0x0004, 0xF77F, 0x000A, 0x2005, 0x0001, 0xF78E, 0x0008, 0x2805, 0x0003, 0xF7F2, 0x00A2, 0x200B, 0x0001, 0xFEB6, 0xFF39, 0xFE14, 0xFF8D, 0x200B, 0x0001, 0xFD73, 0xFE4C, 0xFD52, 0xFEDD, 0x200B, 0x0001, 0xFB4C, 0xFEB6, 0xFBCE, 0xFEF1, 0x200F, 0x0001, 0xFADE, 0xFFD8, 0xF8C6, 0x0093, 0xFB33, 0xFFA4, 0x200F, 0x0001, 0xFAFA, 0x001C, 0xF91A, 0x0053, 0xFB15, 0xFFE2, 0x0000,
};
