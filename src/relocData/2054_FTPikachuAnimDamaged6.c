/* AnimJoint data for relocData file 2054 (FTPikachuAnimDamaged6) */
/* 1520 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDamaged6_joint1[80];
extern u16 dFTPikachuAnimDamaged6_joint2[30];
extern u16 dFTPikachuAnimDamaged6_joint3[30];
extern u16 dFTPikachuAnimDamaged6_joint5[30];
extern u16 dFTPikachuAnimDamaged6_joint6[40];
extern u16 dFTPikachuAnimDamaged6_joint7[16];
extern u16 dFTPikachuAnimDamaged6_joint8[38];
extern u16 dFTPikachuAnimDamaged6_joint9[10];
extern u16 dFTPikachuAnimDamaged6_joint10[44];
extern u16 dFTPikachuAnimDamaged6_joint11[44];
extern u16 dFTPikachuAnimDamaged6_joint13[36];
extern u16 dFTPikachuAnimDamaged6_joint14[24];
extern u16 dFTPikachuAnimDamaged6_joint16[14];
extern u16 dFTPikachuAnimDamaged6_joint17[38];
extern u16 dFTPikachuAnimDamaged6_joint19[24];
extern u16 dFTPikachuAnimDamaged6_joint21[38];
extern u16 dFTPikachuAnimDamaged6_joint22[38];
extern u16 dFTPikachuAnimDamaged6_joint24[24];
extern u16 dFTPikachuAnimDamaged6_joint25[110];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimDamaged6_joints[] = {
	(u32)dFTPikachuAnimDamaged6_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimDamaged6_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimDamaged6_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimDamaged6_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimDamaged6_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimDamaged6_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimDamaged6_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimDamaged6_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimDamaged6_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimDamaged6_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimDamaged6_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimDamaged6_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimDamaged6_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimDamaged6_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimDamaged6_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimDamaged6_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimDamaged6_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimDamaged6_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimDamaged6_joint25, /* [24] joint 25 */
	0xFFFF0159, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimDamaged6_joint1[80] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 62, 37, -22, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1114, -108,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 734, -1676, -217, -830,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4915, -409, 4915, -409, 3276, 614,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 695, -316,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), -217, 166,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 734, 335,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3686, -204, 3686, -204, 4710, -204,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4710, 163, 4710, 163, 3072, -245,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 5), -108,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 4), 1114,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimDamaged6_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1003, -149, 120,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 233, -96, 52, 25, 146, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 233, 69, 52, -18, 146, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1003, -149, 120,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimDamaged6_joint3[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -173, 58, -73,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 40, 13, -4, 52, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 191, -33, 13, 4, 52, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -173, 58, -73,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimDamaged6_joint5[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 155, -47, 495,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 83, -29, -146, -78, 510, -24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 125, 57, -126, 78, 470, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 155, -47, 495,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimDamaged6_joint6[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 844, 51, 137, 69, -904, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 997, 19, 344, 30, -313, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 960, -3, 321, -1, -247, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 976, -19, 334, -30, -298, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 844, -44, 137, -65, -904, -202,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimDamaged6_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimDamaged6_joint8[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -464, -174, -53,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, 78, -183, -1, -55, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 163, -14, -184, 0, -55, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -28, -157, -183, 2, -40, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -464, -174, -53,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimDamaged6_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 40, -29, 2414, 5, 29, 491,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDamaged6_joint10[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -201, 52, 117,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -201, 233, 52, -59, 117, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 265, 233, -66, -59, 104, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 265, -66, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 265, -51, -66, 13, 104, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -201, 52, 117,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimDamaged6_joint11[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -166, -144, -146,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -166, 263, -144, 99, -146, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 360, 263, 54, 99, -206, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 360, 54, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 360, -58, 54, -22, -206, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -166, -144, -146,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimDamaged6_joint13[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -368, 238, 333,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -361, 247, 69, -1200, 299, 95,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -306, -61, 357,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -361, -49, 69, 240, 299, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -368, 238, 333,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimDamaged6_joint14[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 494, 47, 1462, 37, 635, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 736, -52, 1598, -21, 1086, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 494, -80, 1462, -45, 635, -150,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimDamaged6_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimDamaged6_joint17[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1460, 29, -1542, 81, 770, 182,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1651, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1296, 22, 1319, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1405, -47, 1237, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1581, -22, 935, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1460, -63, -1542, 13, 770, -55,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimDamaged6_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 710, 47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 853, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 688, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 791, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 710, -26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimDamaged6_joint21[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 82, 1, 133, 13, 151, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 77, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 156, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 87, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -45, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -37, 21, 212, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 82, 40, 133, -7, 151, -20,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimDamaged6_joint22[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1871, -177, 1305, -120, 419, 145,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 897, 49, 985, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1337, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1557, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1399, 52, 1238, 67, 514, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1871, 157, 1305, 22, 419, -31,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimDamaged6_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 549, 171,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1065, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 973, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1025, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 549, -158,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimDamaged6_joint25[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -250, 169, -248, -36, 292, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 257, 72, -358, -10, -312, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 184, -35, -312, 3, -158, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 47, -72, -338, 10, -10, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -250, -99, -248, 29, 292, 101,
	ftAnimEnd(),
	0x400E, 0xFE6B, 0x00FC, 0xFE50, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0001, 0x004C, 0x0022, 0x0182, 0x0019, 0xFFEA, 0x0018, 0x200F, 0x0001, 0xFEB0, 0xFFC5, 0x012F, 0x0000, 0xFE82, 0xFFCD, 0x200F, 0x0001, 0xFFD5, 0x004A, 0x0181, 0x001C, 0xFF83, 0x0041, 0x200F, 0x0001, 0xFF44, 0xFFDB, 0x0167, 0xFFE8, 0xFF05, 0xFFE3, 0x200F, 0x0002, 0xFF66, 0xFFF4, 0x0139, 0xFFE2, 0xFF2A, 0xFFF8, 0x200F, 0x0002, 0xFF12, 0xFF95, 0x00EF, 0xFFC1, 0xFEE4, 0xFFB1, 0x200F, 0x0002, 0xFDBA, 0xFFD7, 0x003A, 0x0003, 0xFDED, 0xFFDC, 0x380F, 0x0002, 0xFE6B, 0x00FC, 0xFE50, 0x0000,
};
