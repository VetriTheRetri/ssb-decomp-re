/* AnimJoint data for relocData file 1163 (FTLinkAnimTechF) */
/* 3264 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimTechF_joint1[36];
extern u16 dFTLinkAnimTechF_joint2[72];
extern u16 dFTLinkAnimTechF_joint3[20];
extern u16 dFTLinkAnimTechF_joint5[84];
extern u16 dFTLinkAnimTechF_joint6[100];
extern u16 dFTLinkAnimTechF_joint7[40];
extern u16 dFTLinkAnimTechF_joint10[64];
extern u16 dFTLinkAnimTechF_joint11[122];
extern u16 dFTLinkAnimTechF_joint12[56];
extern u16 dFTLinkAnimTechF_joint13[62];
extern u16 dFTLinkAnimTechF_joint14[8];
extern u16 dFTLinkAnimTechF_joint17[42];
extern u16 dFTLinkAnimTechF_joint18[50];
extern u16 dFTLinkAnimTechF_joint19[16];
extern u16 dFTLinkAnimTechF_joint21[36];
extern u16 dFTLinkAnimTechF_joint22[166];
extern u16 dFTLinkAnimTechF_joint24[64];
extern u16 dFTLinkAnimTechF_joint26[152];
extern u16 dFTLinkAnimTechF_joint27[132];
extern u16 dFTLinkAnimTechF_joint29[248];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimTechF_joints[] = {
	(u32)dFTLinkAnimTechF_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimTechF_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimTechF_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimTechF_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimTechF_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimTechF_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimTechF_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimTechF_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimTechF_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimTechF_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimTechF_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimTechF_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimTechF_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimTechF_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimTechF_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimTechF_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimTechF_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimTechF_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimTechF_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimTechF_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	0xFFFF02D4, /* [29] END */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimTechF_pad[1] = { 0 };

/* Joint 1 */
u16 dFTLinkAnimTechF_joint1[36] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -195,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), -28, 224,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 899, 549,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 2079, 4354,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 3023, 5759,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 3983, 1121,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), 4911, 98,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 11), 4800, -149,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimTechF_joint2[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), 1474, -21, 901, -520,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1733, 203,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 755, 701,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 764, -1743,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 9050, 149,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 522, -657,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 399,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 792, 1500,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -2151,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 197, -2226,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1282,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 676, -859,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 594, -101,
	ftAnimSetValRateT(FT_ANIM_TRAY, 19), 901, 198,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 9571, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 9650, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTLinkAnimTechF_joint3[20] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 28), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -107, -10, 276, 28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimTechF_joint5[84] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -240, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -240, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 814, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 860, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 910, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 407, 0, 4,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 317, 0, 5,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 364, -3, -1,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 374, -5, -1,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 384, -7, 2,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 379, -1, 10,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 374, 5, 19,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 355, 19, 72,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 333, 48, 77,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 314, 77, 71,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimTechF_joint6[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1329, -50, -1375, 51, 653, 123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1318, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1372, 115, 871, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1238, 56, 700, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1496, -41, 1152, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1524, -21, 1230, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1531, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1701, -27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1303, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1372, -17,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1599, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1891, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1726, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1412, 78,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1388, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1276, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1836, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1613, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1328, 83, -1281, -4, 1522, -91,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimTechF_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -536, -180,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -856, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -680, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -836, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -868, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -1157, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1149, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -617, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 116,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimTechF_joint10[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -264, 0, 34, 26, 125, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 44, -56, 170, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -330, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -328, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -116, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -27, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -258, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -15, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -138, 10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 4, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 7, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 76, 2,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimTechF_joint11[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1326, 71, 1401, -50, 618, 141,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1353, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1486, -58, 886, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1418, -48, 751, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1683, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 789, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1361, 17, 1011, 197,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1345, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1372, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1702, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1671, -28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1328, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1057, 28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1649, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1865, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1380, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1509, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1095, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1467, -45,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1869, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1986, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1407, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1504, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2024, 38, 1484, -24, 1557, 52,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimTechF_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -458, -219,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -813, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -679, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -821, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -834, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -979, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -914, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -686, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -724, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -704, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -683, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -665, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 77,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimTechF_joint13[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 289, 17, -132, -27, 33, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 187, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -198, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 274, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 242, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -15, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 232, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -145, -6,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 104, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), 0, -2, -209, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, -15,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTLinkAnimTechF_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimTechF_joint17[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1912, -22, -536, 22, -339, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1626, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -245, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -218, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -95, -11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 1697, 2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -536, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -339, -15,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimTechF_joint18[50] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -389, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -389, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 241, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 220, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 189, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -56, -2, 5,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 29, -14, 26,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 17, -28, 22,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 8, -68, 21,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLinkAnimTechF_joint19[16] = {
	ftAnimSetVal(FT_ANIM_ROTY), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 8), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 22), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 10), -199,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimTechF_joint21[36] = {
	ftAnimSetVal(FT_ANIM_ROTX), 153,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 87,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 153,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 261,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 13), 142,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 86,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 48,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 49,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 35,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTLinkAnimTechF_joint22[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 21, -232, -11, 142, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -234, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -47, 9, -151, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -25, 50, -214, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 333, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -335, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -352, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -528, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -174, 113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 100, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 413, 36, -492, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 387, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -419, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 85, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 400, -47, 86, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 292, -46, -42, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 306, -98, 2, -65, -442, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 95, -62, -174, -72, -209, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 180, 0, -142, -4, -219, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 62, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -184, -18, -46, 86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -296, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -45, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 190, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 94, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -191, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -196, -2, 178, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -223, -17, 92, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -298, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -266, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -19, -244, 22, 108, 16,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimTechF_joint24[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 495, 59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 751, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 783, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1133, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1073, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1102, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1153, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 972, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1152, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 960, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1030, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 646, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 611, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 324, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 250, -74,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimTechF_joint26[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 618, 48, 279, -3, -15, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 227, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 689, -98, 67, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 574, -78, -78, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 428, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -228, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -302, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, -98, 240, -65, -149, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -80, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 231, -138, -295, -111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -259, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 165, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 186, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -32, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 60, 101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 146, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 414, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 211, 27, -52, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 116, -35, -363, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 429, 27, 139, 4, -289, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 362, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -81, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -315, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -616, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 350, -13, -579, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 316, 13, -86, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -93, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -158, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 12, -162, -3, -34, 52,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimTechF_joint27[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 102, -29, 185, 13, 91, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 171, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -2, -19, -192, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -20, -59, -220, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -296, 22, -619, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 127, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -215, 51, 83, 54, -607, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -140, 42, 153, 24, -528, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -81, 65, 184, 23, -425, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 77, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 264, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -372, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -301, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -605, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 32, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 147, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -601, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -183, 56,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 275, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 276, -2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 188, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 229, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 41, 269, -6, -125, 58,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimTechF_joint29[248] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 410, 107,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 677, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 702, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 909, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1049, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1102, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 871, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 813, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 588, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 754, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 830, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 778, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 512, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 425, -87,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFDF1, 0xFFD2, 0xFFB6, 0x0006, 0xFFBB, 0xFFEF, 0x2803, 0x0006, 0xFE10, 0x0038, 0x2805, 0x0009, 0xFFCE, 0xFFEA, 0x2009, 0x0005, 0xFFB9, 0x001A, 0x2009, 0x0001, 0xFFDB, 0xFFE9, 0x200B, 0x0001, 0xFE6B, 0x000D, 0xFF8A, 0xFFF2, 0x2803, 0x0002, 0xFE28, 0x0022, 0x2009, 0x0001, 0xFFBE, 0x0017, 0x2809, 0x0004, 0xFEFA, 0x0038, 0x0801, 0x0001, 0x2007, 0x0001, 0xFE72, 0x004E, 0xFFB1, 0x0001, 0x2805, 0x0003, 0xFFE0, 0xFFFA, 0x2003, 0x0002, 0xFF18, 0x0003, 0x200B, 0x0001, 0xFECD, 0xFFF3, 0xFF68, 0xFFFF, 0x2809, 0x0002, 0xFE57, 0xFFE0, 0x2803, 0x0003, 0xFEC3, 0xFF53, 0x2005, 0x0001, 0xFFF4, 0x0013, 0x2805, 0x0004, 0xFF8A, 0xFFFF, 0x0801, 0x0001, 0x2009, 0x0001, 0xFEB6, 0x006A, 0x200B, 0x0001, 0xFDD9, 0xFFC0, 0xFF2C, 0x0003, 0x2803, 0x0002, 0xFE5E, 0xFFCE, 0x2009, 0x0001, 0xFEBD, 0xFFA5, 0x200D, 0x0001, 0xFF83, 0xFFE4, 0xFE76, 0x0046, 0x2805, 0x0012, 0xFFA8, 0x000F, 0x200B, 0x0001, 0xFDDC, 0xFFBF, 0xFF4A, 0x0079, 0x2803, 0x0003, 0xFE0A, 0xFFD6, 0x2009, 0x0001, 0xFF69, 0x0045, 0x2009, 0x0001, 0xFFD5, 0x0052, 0x2809, 0x0003, 0x0007, 0xFF9D, 0x0801, 0x0001, 0x2003, 0x0001, 0xFDAF, 0xFFE6, 0x2803, 0x0004, 0xFE63, 0x000F, 0x0801, 0x0001, 0x2009, 0x0001, 0xFF8A, 0xFF8C, 0x2809, 0x000C, 0xFF60, 0x0028, 0x0801, 0x0002, 0x2003, 0x0001, 0xFE69, 0xFFFF, 0x2803, 0x000A, 0xFE65, 0xFFF9, 0x0801, 0x0008, 0x2005, 0x0001, 0xFFAB, 0x0003, 0x200D, 0x0001, 0xFFB0, 0x0005, 0xFF8B, 0x002D, 0x200F, 0x0001, 0xFE54, 0xFFF0, 0xFFB6, 0x0006, 0xFFBB, 0x002F, 0x0000, 0x0000, 0x0000,
};
