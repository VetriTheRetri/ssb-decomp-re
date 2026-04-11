/* AnimJoint data for relocData file 1236 (FTLinkAnimAttackAirN) */
/* 1952 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimAttackAirN_joint1[10];
extern u16 dFTLinkAnimAttackAirN_joint2[36];
extern u16 dFTLinkAnimAttackAirN_joint4[30];
extern u16 dFTLinkAnimAttackAirN_joint5[150];
extern u16 dFTLinkAnimAttackAirN_joint6[80];
extern u16 dFTLinkAnimAttackAirN_joint7[16];
extern u16 dFTLinkAnimAttackAirN_joint9[40];
extern u16 dFTLinkAnimAttackAirN_joint10[22];
extern u16 dFTLinkAnimAttackAirN_joint11[16];
extern u16 dFTLinkAnimAttackAirN_joint12[8];
extern u16 dFTLinkAnimAttackAirN_joint13[8];
extern u16 dFTLinkAnimAttackAirN_joint16[8];
extern u16 dFTLinkAnimAttackAirN_joint17[26];
extern u16 dFTLinkAnimAttackAirN_joint18[28];
extern u16 dFTLinkAnimAttackAirN_joint20[8];
extern u16 dFTLinkAnimAttackAirN_joint21[134];
extern u16 dFTLinkAnimAttackAirN_joint23[54];
extern u16 dFTLinkAnimAttackAirN_joint25[62];
extern u16 dFTLinkAnimAttackAirN_joint26[104];
extern u16 dFTLinkAnimAttackAirN_joint28[78];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimAttackAirN_joints[] = {
	(u32)dFTLinkAnimAttackAirN_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimAttackAirN_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimAttackAirN_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimAttackAirN_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimAttackAirN_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimAttackAirN_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimAttackAirN_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimAttackAirN_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimAttackAirN_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimAttackAirN_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimAttackAirN_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimAttackAirN_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimAttackAirN_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimAttackAirN_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimAttackAirN_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimAttackAirN_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimAttackAirN_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimAttackAirN_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimAttackAirN_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimAttackAirN_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF01D1, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimAttackAirN_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 744, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimAttackAirN_joint2[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, 274, 83,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -557, -22, -540, -31, 457, 14,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -557, 0, -540, 0, 457, -10,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 16, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 32, 274, 83,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimAttackAirN_joint4[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 315, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 357, 1, -185, -20, -323, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 360, -1, -365, 9, -305, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 315, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimAttackAirN_joint5[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1916, 126, 1869, 57, 1955, -206,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1830, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1790, 213, 1748, -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1489, 256, 1240, -377,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 730, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1171, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1639, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1430, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1404, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1235, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 704, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 599, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1179, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1167, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1237, 0, 602, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1423, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 808, 45,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1170, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1332, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1454, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 2012, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1409, 166,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1499, -116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1683, -92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2079, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1875, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1789, -94, 1585, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1919, 4, 1951, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1916, 2, 1869, -6, 1955, 3,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimAttackAirN_joint6[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -744, -132,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -877, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -252, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -187, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -278, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -618, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -721, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -752, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -752, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTLinkAnimAttackAirN_joint7[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 278, 266, 193,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -20, -24, 205,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 38), 278, 266, 193,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimAttackAirN_joint9[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 1, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 2412, 79, 0, 0, 126, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 2385, 0, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 2412, -158, 0, 0, 126, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 804, -114, 1, 0, 8, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 804, 1, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimAttackAirN_joint10[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1119, 0, 1548, 0, -1445, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -1119, 1548, -1445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1119, 0, 1548, 0, -1445, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimAttackAirN_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -616, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -616, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimAttackAirN_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimAttackAirN_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimAttackAirN_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimAttackAirN_joint17[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 146, 5, 525, 26, 170, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 146, -4, 525, -19, 170, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimAttackAirN_joint18[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 25, 2, -15, 19, 0, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 22), 66, 0, 296, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 22), -174,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimAttackAirN_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimAttackAirN_joint21[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1577, 37, -1748, -19, 825, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1760, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1183, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1540, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1301, 204,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1196, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1565, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1348, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1317, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1191, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1216, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1335, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1227, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1278, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1334, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1336, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1191, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1300, -25,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1278, 29, 1337, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 987, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1433, -72,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1325, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1764, 23,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 830, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1504, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1557, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1577, -20, -1748, 15, 825, -4,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimAttackAirN_joint23[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1205, 92,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1324, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 919, -458,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 408, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 237, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 301, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1202, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimAttackAirN_joint25[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 473, 75, 70, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -183,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -183, 0, 70, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 549, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 338, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 22, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 135, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 203, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 199, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 77, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 53, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 339, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 432, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 473, 40, -183, 0, 70, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimAttackAirN_joint26[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 301, -16, 318, 42, -270, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 412, 172,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 617, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -589, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -752, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -704, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 617, 123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 742, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 617, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 615, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -697, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -744, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 757, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 617, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 569, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 270, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 606, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 322, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -752, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -278, 14,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 275, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 300, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, 1, 318, -3, -270, 7,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimAttackAirN_joint28[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 845, 101,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1193, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1180, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 1193, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1187, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 854, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, -9,
	ftAnimEnd(),
	0x0000, 0x280A, 0xFD79, 0xFFDE, 0x00FC, 0x0000, 0x3804, 0xFFA7, 0x4009, 0x0027, 0x00FC, 0x2805, 0x0027, 0xFFA7, 0x0000, 0x2003, 0x000A, 0xFFA1, 0x0030, 0x2003, 0x0001, 0xFFCB, 0x0023, 0x2003, 0x0014, 0xFD7B, 0xFFF8, 0x2003, 0x0001, 0xFD72, 0xFFF6, 0x2003, 0x0007, 0xFD75, 0x0007, 0x200F, 0x0001, 0xFD79, 0x0004, 0xFFA7, 0x0000, 0x00FC, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
