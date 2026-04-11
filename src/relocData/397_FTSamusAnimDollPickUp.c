/* AnimJoint data for relocData file 397 (FTSamusAnimDollPickUp) */
/* 2112 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDollPickUp_joint1[10];
extern u16 dFTSamusAnimDollPickUp_joint2[56];
extern u16 dFTSamusAnimDollPickUp_joint3[46];
extern u16 dFTSamusAnimDollPickUp_joint5[16];
extern u16 dFTSamusAnimDollPickUp_joint6[188];
extern u16 dFTSamusAnimDollPickUp_joint7[86];
extern u16 dFTSamusAnimDollPickUp_joint9[10];
extern u16 dFTSamusAnimDollPickUp_joint10[10];
extern u16 dFTSamusAnimDollPickUp_joint12[10];
extern u16 dFTSamusAnimDollPickUp_joint13[112];
extern u16 dFTSamusAnimDollPickUp_joint15[16];
extern u16 dFTSamusAnimDollPickUp_joint16[96];
extern u16 dFTSamusAnimDollPickUp_joint18[64];
extern u16 dFTSamusAnimDollPickUp_joint20[58];
extern u16 dFTSamusAnimDollPickUp_joint21[124];
extern u16 dFTSamusAnimDollPickUp_joint23[106];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimDollPickUp_joints[] = {
	(u32)dFTSamusAnimDollPickUp_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimDollPickUp_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimDollPickUp_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimDollPickUp_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimDollPickUp_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimDollPickUp_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimDollPickUp_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTSamusAnimDollPickUp_joint10, /* [9] joint 10 */
	(u32)dFTSamusAnimDollPickUp_joint12, /* [10] joint 12 */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimDollPickUp_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimDollPickUp_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimDollPickUp_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimDollPickUp_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimDollPickUp_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimDollPickUp_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimDollPickUp_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF01FA, /* [23] END */
};

/* Joint 1 */
u16 dFTSamusAnimDollPickUp_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimDollPickUp_joint2[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 984, 82, 1055, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 5), 919, -1, 235, 2, 1098, -5, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 95), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 95), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 55), 877, -4, 254, -1, 722, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 576, 0, 127, 1, 543, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 889, -35, 303, -9, 813, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTSamusAnimDollPickUp_joint3[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -17, 42,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 100), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 4, 0, -17, 0, 42, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 45), -122, -22, 244, 49, 144, 31,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -180, 5, 384, 0, 300, 13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), -87, 19, 242, -38, 227, -41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimDollPickUp_joint5[16] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 256, 468, -65, -14, 55,
	ftAnimSetValAfter(FT_ANIM_ROTY), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 100), 256, 468, -65, -14, 55,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDollPickUp_joint6[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -406, -125, -2032, -1, -138, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 169, 148,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1825, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -532, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -867, -239,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1024, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 283, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 380, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1827, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -2028, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1019, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 45), -1303, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 388, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 41), -20, -39,
	ftAnimBlock(0, 28),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2026, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1934, 1,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1329, -33, -64, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1350, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -196, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -195, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -154, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1348, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1246, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1933, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1910, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -132, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 289, 38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1217, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1079, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1906, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -2043, -48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 325, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 201, -120,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1134, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1270, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2097, -21, 53, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2054, 18, -99, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1266, 4, -2032, 21, -132, -33,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimDollPickUp_joint7[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -252, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -482, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -349, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -160, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -101, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -328, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -396, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -349, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -174, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -5,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimDollPickUp_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 424, 0, 0,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTSamusAnimDollPickUp_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 480, 0,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDollPickUp_joint12[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimDollPickUp_joint13[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -439, 0, 1101, 0, -62, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 55), 1102, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 28), 16, 9, 413, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 21, 0, 416, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 35), -150, 11, -130, -5,
	ftAnimBlock(0, 26),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1109, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), 1134, -8,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -140, 11, -139, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 178, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 536, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 641, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 966, -79,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 194, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -34, -33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1123, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1085, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 886, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 704, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -61, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -71, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 728, 24, 1096, 11, -59, 11,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimDollPickUp_joint15[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 99), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimDollPickUp_joint16[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -527, 0, 426, 0, 3067, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -283, 5, 336, 5, 3063, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -277, -7, 343, -3, 3065, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), 442, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 38), -230, 15, 2772, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -212, 18, 2768, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 2867, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 125, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 433, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 463, 12,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2889, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 3051, 26,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 134, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 175, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 474, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 477, 13, 3082, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, -137, 502, 24, 2910, -172,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimDollPickUp_joint18[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 108, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 252, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 264, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 330, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 329, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 169, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 139, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 234, 234,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimDollPickUp_joint20[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2186, 0, -34, 0, 373, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 99), -34, 0, 373, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -2390, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2416, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -2615, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2597, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -2255, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2248, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 33), -2596, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2619, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -2584, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2548, 36, -34, 0, 373, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimDollPickUp_joint21[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2167, -2, 1033, 2, -1747, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 59), -2160, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 64), -1863, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 29), 1291, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1293, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 955, -14,
	ftAnimBlock(0, 29),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2156, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1995, 33,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1853, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1759, -14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1994, 0, 952, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -2207, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1136, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1773, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -2018, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2029, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1945, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2206, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2045, 44,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1117, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1058, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2018, 26, -1923, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1959, -39, -1915, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1987, -27, 1101, 43, -1975, -60,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimDollPickUp_joint23[106] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 83, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 107, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 240, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 91, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 61, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 171, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 176, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 82, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 125, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, 124,
	ftAnimEnd(),
	0x280A, 0x0B1E, 0x0000, 0x0845, 0x0000, 0x4804, 0x06E0, 0x4009, 0x0063, 0x0845, 0x2003, 0x0029, 0x0A41, 0xFFFF, 0x2003, 0x0001, 0x0A40, 0xFFFF, 0x2003, 0x0031, 0x09D3, 0xFFFC, 0x2003, 0x0001, 0x09D1, 0x0001, 0x2003, 0x0007, 0x096F, 0xFFCD, 0x2803, 0x0001, 0x0939, 0xFFCA, 0x3809, 0x0001, 0x0845, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
