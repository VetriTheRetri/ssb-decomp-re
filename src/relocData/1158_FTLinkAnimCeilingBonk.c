/* AnimJoint data for relocData file 1158 (FTLinkAnimCeilingBonk) */
/* 1200 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCeilingBonk_joint1[10];
extern u16 dFTLinkAnimCeilingBonk_joint2[72];
extern u16 dFTLinkAnimCeilingBonk_joint4[18];
extern u16 dFTLinkAnimCeilingBonk_joint5[30];
extern u16 dFTLinkAnimCeilingBonk_joint6[32];
extern u16 dFTLinkAnimCeilingBonk_joint9[8];
extern u16 dFTLinkAnimCeilingBonk_joint10[60];
extern u16 dFTLinkAnimCeilingBonk_joint11[24];
extern u16 dFTLinkAnimCeilingBonk_joint12[8];
extern u16 dFTLinkAnimCeilingBonk_joint13[8];
extern u16 dFTLinkAnimCeilingBonk_joint16[8];
extern u16 dFTLinkAnimCeilingBonk_joint17[16];
extern u16 dFTLinkAnimCeilingBonk_joint18[8];
extern u16 dFTLinkAnimCeilingBonk_joint20[16];
extern u16 dFTLinkAnimCeilingBonk_joint21[50];
extern u16 dFTLinkAnimCeilingBonk_joint23[16];
extern u16 dFTLinkAnimCeilingBonk_joint25[42];
extern u16 dFTLinkAnimCeilingBonk_joint26[40];
extern u16 dFTLinkAnimCeilingBonk_joint28[28];
extern u16 dFTLinkAnimCeilingBonk_joint29[46];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimCeilingBonk_joints[] = {
	(AObjEvent32 *)dFTLinkAnimCeilingBonk_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimCeilingBonk_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimCeilingBonk_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimCeilingBonk_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimCeilingBonk_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimCeilingBonk_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimCeilingBonk_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimCeilingBonk_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimCeilingBonk_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimCeilingBonk_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimCeilingBonk_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimCeilingBonk_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimCeilingBonk_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimCeilingBonk_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimCeilingBonk_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimCeilingBonk_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimCeilingBonk_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimCeilingBonk_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimCeilingBonk_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimCeilingBonk_joint29, /* [28] joint 29 */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimCeilingBonk_pad[1] = { 0 };

/* Joint 1 */
u16 dFTLinkAnimCeilingBonk_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 744, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimCeilingBonk_joint2[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY), 32, -121, 0, -188, 0, 3376, 0, -16, 4095, -2088,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), 274, 83, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAY, 2), -174, 31, 446, 1429, 2457, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -54, -598, -19, -312,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -89, -20, -32, 15,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), -71, 184,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -16, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAY, 6), 32, 37, 4095, 1728,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 486, -311,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 0, -1809,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), 0, 93,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 0, 164,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTLinkAnimCeilingBonk_joint4[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 259, 285,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 166, 56, 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 800, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 259, -107,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimCeilingBonk_joint5[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1311, -180, -1228, -15, 1864, 101,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 1164, 113, -1260, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 2020, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1989, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1311, 146, -1228, 32, 1864, -125,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimCeilingBonk_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -430, 100,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -330, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -360, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -311, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -369, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -478, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -430, 47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimCeilingBonk_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimCeilingBonk_joint10[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -906, 171, 1143, -42, -1175, 132,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1028, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -735, 206, -1043, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -494, 113, -815, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -686, -72, -1008, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1098, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1156, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -749, -64, -1045, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -814, -78, -1083, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -906, -91, 1143, -12, -1175, -91,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimCeilingBonk_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -444, -121,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -566, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -516, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, 71,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimCeilingBonk_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimCeilingBonk_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimCeilingBonk_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimCeilingBonk_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 114,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 209, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 0, -39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimCeilingBonk_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimCeilingBonk_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 97, -151,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -181, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 97, 50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimCeilingBonk_joint21[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 18, -115, 163, -199, 2504, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2350, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -87, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -95, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -72, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 47, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2351, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2420, 67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -54, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, 72, 163, 116, 2504, 83,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimCeilingBonk_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1036, 89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1158, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1036, -121,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimCeilingBonk_joint25[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 456, 381, -183, -11, 70, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -193, 4, 18, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 837, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 735, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 788, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 745, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 610, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 456, -154, -183, 9, 70, 51,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimCeilingBonk_joint26[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1253, -212, 1361, -209, -1763, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1712, -136, 1124, 21, -2482, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1738, 6, 1196, 31, -2491, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1413, 155, 1218, 91, -2026, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1253, 159, 1361, 143, -1763, 263,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimCeilingBonk_joint28[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 551, 447,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1270, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1236, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1016, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, -465,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimCeilingBonk_joint29[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, -149, -89, 1, 252, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -90, 0, 234, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -565, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1081, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1277, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1352, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1195, 482,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, 780, -89, 0, 252, 17,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
