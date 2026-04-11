/* AnimJoint data for relocData file 1299 (FTKirbyAnimDamageFlyX2) */
/* 1744 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDamageFlyX2_joint1[106];
extern u16 dFTKirbyAnimDamageFlyX2_joint2[20];
extern u16 dFTKirbyAnimDamageFlyX2_joint3[14];
extern u16 dFTKirbyAnimDamageFlyX2_joint5[36];
extern u16 dFTKirbyAnimDamageFlyX2_joint6[102];
extern u16 dFTKirbyAnimDamageFlyX2_joint7[14];
extern u16 dFTKirbyAnimDamageFlyX2_joint9[40];
extern u16 dFTKirbyAnimDamageFlyX2_joint10[94];
extern u16 dFTKirbyAnimDamageFlyX2_joint11[16];
extern u16 dFTKirbyAnimDamageFlyX2_joint13[10];
extern u16 dFTKirbyAnimDamageFlyX2_joint14[44];
extern u16 dFTKirbyAnimDamageFlyX2_joint16[8];
extern u16 dFTKirbyAnimDamageFlyX2_joint18[128];
extern u16 dFTKirbyAnimDamageFlyX2_joint19[50];
extern u16 dFTKirbyAnimDamageFlyX2_joint21[146];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimDamageFlyX2_joints[] = {
	(u32)dFTKirbyAnimDamageFlyX2_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDamageFlyX2_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDamageFlyX2_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDamageFlyX2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimDamageFlyX2_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimDamageFlyX2_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDamageFlyX2_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimDamageFlyX2_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimDamageFlyX2_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDamageFlyX2_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimDamageFlyX2_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimDamageFlyX2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimDamageFlyX2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimDamageFlyX2_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimDamageFlyX2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF0173, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimDamageFlyX2_joint1[106] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 600, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -178, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 3276, 3276,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -357, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 1), 3276,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 4915,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4915, 4915,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 26), -536,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 3686,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3686, 3686,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 4505,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4505, 4505,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 3891,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3891, 3891,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 4300,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4300, 4300,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 8), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 7), 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimDamageFlyX2_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 268, 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 26), 804,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimDamageFlyX2_joint3[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimDamageFlyX2_joint5[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -120, -299, -60, -299,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), -150, -150,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 26), 178, -150,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 16), -150,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 10), -210,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimDamageFlyX2_joint6[102] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX), 804, 4096,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -217, -563, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 804, 75, -780, -347,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -83, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 29), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 954, -5, -912, -140,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1117, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 793, -75, 11, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 804, 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 25), 804,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1063, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1101, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1076, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -1084, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1085, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1063, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1059, 4, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 804,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimDamageFlyX2_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimDamageFlyX2_joint9[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 120, 299, -60, -299,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 150, -150, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), -178, -150, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 16), 150,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 10), 210,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimDamageFlyX2_joint10[94] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, 217, 563, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 77, 780, 345, 0, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 29), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -649, -5, 909, 142, 88, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1118, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -814, -77, -11, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -804, 5, 0, 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 25), -804,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1067, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1105, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1079, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 1085, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1081, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1060, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1063, 2, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -804,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimDamageFlyX2_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimDamageFlyX2_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDamageFlyX2_joint14[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1584, -15, -1305, 15, -1371, -16,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1487, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 29), -1214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1532, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1537, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 22), 1520,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1483, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), -1483,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1520, -1214, -1483,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimDamageFlyX2_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimDamageFlyX2_joint18[128] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1298, 7, -1431, -37, -1704, 82,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1412, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1301, 114, -1407, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1188, 72, -1528, -143,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1717, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1138, 21,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 26), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1516, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1340, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1585, 128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1528, -84,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1401, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1395, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1614, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1488, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1113, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1123, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1529, -41,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), -1525,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1423, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1390, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1123, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 8), -1127,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 2), -1525,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1390, -1127,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimDamageFlyX2_joint19[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 18, 302, 15, 233, -11,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 120, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 394, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 76, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 67, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 88, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 125, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 125, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 84, -3, 394, 0, 120, -4,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimDamageFlyX2_joint21[146] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000, 0x280E, 0x0135, 0x0001, 0x00B0, 0xFF9E, 0xFF9D, 0x009D, 0x3F00, 0x1000, 0x1000, 0x1000, 0x2809, 0x0003, 0x00EB, 0xFFD4, 0x4701, 0x0004, 0x0E66, 0x0E66, 0x0E66, 0x2803, 0x0004, 0x00C4, 0xFFA1, 0x2005, 0x0002, 0x0092, 0x005E, 0x2005, 0x0001, 0x010B, 0x0088, 0x2805, 0x0006, 0x01C7, 0xFFEB, 0x2009, 0x0001, 0x0053, 0xFF5E, 0x2809, 0x0002, 0xFF94, 0x0036, 0x4701, 0x001A, 0x0E66, 0x0E66, 0x0E66, 0x2003, 0x0001, 0x005B, 0xFFCA, 0x2803, 0x0004, 0x010C, 0xFFDE, 0x0801, 0x0001, 0x2009, 0x0001, 0x0013, 0x0080, 0x2809, 0x0003, 0x004F, 0xFFAE, 0x0801, 0x0002, 0x2007, 0x0001, 0x00CF, 0xFFC7, 0x01C4, 0x0006, 0x2803, 0x0006, 0x00D4, 0xFFE3, 0x2805, 0x0013, 0x01E1, 0x0000, 0x2009, 0x0001, 0xFFFE, 0xFFD3, 0x2009, 0x0004, 0x007B, 0xFFEF, 0x2009, 0x0001, 0x0052, 0xFFD5, 0x2809, 0x000B, 0x004F, 0xFFFF, 0x2003, 0x0001, 0x00B8, 0xFFEF, 0x2803, 0x000C, 0x00D9, 0x0000, 0x0801, 0x000A, 0x2009, 0x0001, 0x004F, 0x0001, 0x2009, 0x0001, 0x0052, 0x0000, 0x200F, 0x0001, 0x00D9, 0x0000, 0x01E1, 0x0000, 0x004F, 0xFFFD, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
