/* AnimJoint data for relocData file 1171 (FTLinkAnimTech) */
/* 1856 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimTech_joint1[42];
extern u16 dFTLinkAnimTech_joint2[20];
extern u16 dFTLinkAnimTech_joint4[42];
extern u16 dFTLinkAnimTech_joint5[66];
extern u16 dFTLinkAnimTech_joint6[40];
extern u16 dFTLinkAnimTech_joint9[10];
extern u16 dFTLinkAnimTech_joint10[74];
extern u16 dFTLinkAnimTech_joint11[40];
extern u16 dFTLinkAnimTech_joint12[10];
extern u16 dFTLinkAnimTech_joint13[8];
extern u16 dFTLinkAnimTech_joint16[10];
extern u16 dFTLinkAnimTech_joint17[36];
extern u16 dFTLinkAnimTech_joint18[14];
extern u16 dFTLinkAnimTech_joint20[18];
extern u16 dFTLinkAnimTech_joint21[82];
extern u16 dFTLinkAnimTech_joint23[40];
extern u16 dFTLinkAnimTech_joint25[88];
extern u16 dFTLinkAnimTech_joint26[90];
extern u16 dFTLinkAnimTech_joint28[48];
extern u16 dFTLinkAnimTech_joint29[90];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimTech_joints[] = {
	(AObjEvent32 *)dFTLinkAnimTech_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimTech_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimTech_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimTech_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimTech_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimTech_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimTech_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimTech_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimTech_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimTech_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimTech_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimTech_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimTech_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimTech_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimTech_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimTech_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimTech_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimTech_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimTech_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimTech_joint29, /* [28] joint 29 */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimTech_pad[1] = { 0 };

/* Joint 1 */
u16 dFTLinkAnimTech_joint1[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), 1474, 70, 901, -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 7), 1372, -133, 828, 315,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 150, -133,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 900, -191,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 746, -248,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, 25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 901, 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimTech_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -107, -18, 276, 46,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTLinkAnimTech_joint4[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -240, -69,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -215, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 532, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 519, -44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 166, 32, 56, -39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 259, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimTech_joint5[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1329, -68, -1375, 25, 653, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1473, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1472, 49, 805, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1423, 41, 733, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1522, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1425, 77,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1482, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1389, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1427, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1320, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1567, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1621, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1328, 96, -1281, 39, 1522, -98,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimTech_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -536, -147,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -645, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -442, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -295, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -415, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -627, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -590, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -552, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimTech_joint9[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -264, 34, 125,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimTech_joint10[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1326, 76, 1401, -40, 618, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1012, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1483, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 1457, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1461, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1525, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1104, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1332, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1502, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1866, 85,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1507, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1488, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1415, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1950, 79, 1494, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2024, 74, 1484, -3, 1557, 62,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimTech_joint11[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -458, -209,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -517, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -530, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -690, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -617, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -640, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 52,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimTech_joint12[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 289, -132, 33,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimTech_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimTech_joint16[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1912, -536, -339,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 1697, -536, -339,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimTech_joint17[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -389, -39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 19), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -524, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -292, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -57, 7,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -163, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimTech_joint18[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 18), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -199, -33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimTech_joint20[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 153, -36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -92, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -66, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimTech_joint21[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 25, -232, -14, 142, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -97, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -252, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 24, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 14, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -270, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -96, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -72, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -253, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -271, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 70, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 59, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 68, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -102, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -160, -69, -268, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -81, -244, 24, 108, 40,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimTech_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 495, 74,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 659, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 558, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 512, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 535, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 762, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 710, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 388, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 250, -138,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimTech_joint25[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 618, 23, 279, -4, -15, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 122, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 617, -52, 7, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 569, -30, -51, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 534, -28, -143, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 509, 1, -217, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 366, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -253, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -323, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -366, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 100, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -210, 37,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 328, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 288, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -279, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -116, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 40, -162, 48, -34, 81,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimTech_joint26[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 102, -42, 185, 22, 91, -137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 72, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 242, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -192, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -184, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -606, -175,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 34, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 147, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -819, -128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -539, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 278, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 197, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 110, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 224, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -514, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -197, 71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 200, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 271, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 46, 269, -1, -125, 72,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimTech_joint28[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 410, 180,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 687, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 574, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 842, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 938, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 610, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 628, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 803, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 764, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 528, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 425, -103,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimTech_joint29[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -527, -13, -74, -10, -69, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 91, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -218, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -610, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -570, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -645, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 74, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 27, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -576, 25, -51, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -537, 45, 22, -56,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -238, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -116, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -499, 25, -52, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -422, 5, -108, 35,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -97, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -428, -5, -74, 23, -69, 39,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
