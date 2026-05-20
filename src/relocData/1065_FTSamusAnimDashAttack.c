/* AnimJoint data for relocData file 1065 (FTSamusAnimDashAttack) */
/* 2304 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDashAttack_joint1[24];
extern u16 dFTSamusAnimDashAttack_joint2[28];
extern u16 dFTSamusAnimDashAttack_joint3[28];
extern u16 dFTSamusAnimDashAttack_joint5[64];
extern u16 dFTSamusAnimDashAttack_joint6[134];
extern u16 dFTSamusAnimDashAttack_joint7[56];
extern u16 dFTSamusAnimDashAttack_joint8[24];
extern u16 dFTSamusAnimDashAttack_joint9[10];
extern u16 dFTSamusAnimDashAttack_joint12[10];
extern u16 dFTSamusAnimDashAttack_joint13[142];
extern u16 dFTSamusAnimDashAttack_joint15[48];
extern u16 dFTSamusAnimDashAttack_joint16[114];
extern u16 dFTSamusAnimDashAttack_joint18[40];
extern u16 dFTSamusAnimDashAttack_joint20[80];
extern u16 dFTSamusAnimDashAttack_joint21[118];
extern u16 dFTSamusAnimDashAttack_joint23[70];
extern u16 dFTSamusAnimDashAttack_joint24[114];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTSamusAnimDashAttack_joints[] = {
	(AObjEvent32 *)dFTSamusAnimDashAttack_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimDashAttack_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimDashAttack_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTSamusAnimDashAttack_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTSamusAnimDashAttack_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimDashAttack_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimDashAttack_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimDashAttack_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimDashAttack_joint12, /* [9] joint 12 */
	NULL, /* [10] NULL */
	NULL, /* [11] NULL */
	(AObjEvent32 *)dFTSamusAnimDashAttack_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTSamusAnimDashAttack_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTSamusAnimDashAttack_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTSamusAnimDashAttack_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTSamusAnimDashAttack_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTSamusAnimDashAttack_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTSamusAnimDashAttack_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTSamusAnimDashAttack_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTSamusAnimDashAttack_joint1[24] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 3713,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 1277, 1742,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 1740,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 13), 3759, 525,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 4264, 296,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 14), 4547,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimDashAttack_joint2[28] = {
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 1503,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 0, 1250,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, 1152,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 13), 24, 1183,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), 0, 842,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), 0, 1116,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), 0, 1600,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimDashAttack_joint3[28] = {
	ftAnimSetVal(FT_ANIM_ROTX), 242,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 223,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 478,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 13), 478,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 318,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 318,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimDashAttack_joint5[64] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 92, 230, -11, 35, -5, 24,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 184, 0, 0, 0, -13, 65,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 125, 431, 42, 59, -22, 14,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 125, 431, 42, 59, -22, 14,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 23, 27, -19,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -79, 181, -2,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 257, 111, 76,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -102, 153, -7, 23, 27, -19,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimDashAttack_joint6[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -128, 11, -307, -28, 570, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 311, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -217, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -336, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -203, 95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -28, 57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 274, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 536, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -230, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -194, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 8, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -211, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 249, -88,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -183, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 53, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -197, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -314, 7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 80, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 373, 89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 152, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -281, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 431, 34, -268, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 448, 15, 85, 47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -285, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -272, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 468, 20, 114, 28, -242, 30,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimDashAttack_joint7[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1000, -25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1054, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -911, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -773, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -749, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -721, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -749, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -759, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -724, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -762, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -707, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -724, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimDashAttack_joint8[24] = {
	ftAnimSetVal(FT_ANIM_ROTX), -30,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 424, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), -30,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 13), -30,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), -89,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), -75,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 701,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimDashAttack_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDashAttack_joint12[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 479, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimDashAttack_joint13[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 145, -194, 315, 139, 2593, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 447, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -48, -314, 2645, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -482, -342, 2504, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -841, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2577, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 272, -159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 134, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -760, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -765, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2689, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2715, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 113, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 145, 78,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2705, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2706, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -779, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -718, 47,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2738, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 3004, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -667, 54, 224, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 498, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -465, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -449, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -75, 108,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 508, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -31, -95,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3009, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, 106, -112, -80, 3003, -6,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimDashAttack_joint15[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1113, -26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -961, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -794, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -990, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1004, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1031, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1039, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -906, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -906, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -628, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -597, 31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimDashAttack_joint16[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 20, 41, -88, 7, -1053, 118,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 138, 52, -115, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -677, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -623, -119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1209, -130,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 181, 20, -28, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -87, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 182, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1177, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1098, -29,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -92, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 6, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 195, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 106, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1116, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1110, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1126, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -970, 78,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -13, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -889, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -623, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 99, -7, -22, -8, -522, 100,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimDashAttack_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 871, 188,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1290, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1343, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1378, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1392, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1052, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1002, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 538, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, -77,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimDashAttack_joint20[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1618, -40, 1606, 1, 1630, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1372, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 1700, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1611, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1609, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1469, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1367, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1261, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1237, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1552, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1476, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1516, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1697, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1656, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1561, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1569, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1527, 10, 1656, 0, 1570, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimDashAttack_joint21[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1641, 12, -1653, 0, 1444, 148,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1659, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -1653, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1592, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1351, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 883, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1260, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1608, 25, 1739, 242,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1644, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1745, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1763, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1759, -80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1304, -150,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1666, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1788, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1145, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 826, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 644, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1777, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1643, 5,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 637, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 826, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 909, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1176, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1637, 5, -1654, 0, 1274, 97,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimDashAttack_joint23[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 606, -202,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 728, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 830, -531,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -415,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 576, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 811, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1268, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1296, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1006, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 971, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 635, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, -84,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTSamusAnimDashAttack_joint24[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -13, 6, 9, 309, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 5, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -15, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -4, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -262, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -339, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 44, 312,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 282, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -25, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 94, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -16, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 143, 53,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 276, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -185, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 204, 28, -323, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 107, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -577, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -278, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 95, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 35, -5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 92, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 71, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 29, -5, 70, -1, -270, 7,
	ftAnimEnd(),
	0x0000, 0x0000,
};
