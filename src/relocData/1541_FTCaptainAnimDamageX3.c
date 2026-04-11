/* AnimJoint data for relocData file 1541 (FTCaptainAnimDamageX3) */
/* 3760 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDamageX3_joint1[40];
extern u16 dFTCaptainAnimDamageX3_joint2[56];
extern u16 dFTCaptainAnimDamageX3_joint4[110];
extern u16 dFTCaptainAnimDamageX3_joint5[214];
extern u16 dFTCaptainAnimDamageX3_joint6[76];
extern u16 dFTCaptainAnimDamageX3_joint7[62];
extern u16 dFTCaptainAnimDamageX3_joint8[28];
extern u16 dFTCaptainAnimDamageX3_joint10[42];
extern u16 dFTCaptainAnimDamageX3_joint11[184];
extern u16 dFTCaptainAnimDamageX3_joint12[72];
extern u16 dFTCaptainAnimDamageX3_joint13[26];
extern u16 dFTCaptainAnimDamageX3_joint14[10];
extern u16 dFTCaptainAnimDamageX3_joint16[42];
extern u16 dFTCaptainAnimDamageX3_joint17[154];
extern u16 dFTCaptainAnimDamageX3_joint19[80];
extern u16 dFTCaptainAnimDamageX3_joint21[210];
extern u16 dFTCaptainAnimDamageX3_joint22[178];
extern u16 dFTCaptainAnimDamageX3_joint24[246];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimDamageX3_joints[] = {
	(u32)dFTCaptainAnimDamageX3_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimDamageX3_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimDamageX3_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimDamageX3_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimDamageX3_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimDamageX3_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimDamageX3_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimDamageX3_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimDamageX3_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimDamageX3_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimDamageX3_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimDamageX3_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimDamageX3_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimDamageX3_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimDamageX3_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimDamageX3_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimDamageX3_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimDamageX3_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0353, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimDamageX3_joint1[40] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1600, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -35, 1445, -208,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 59, 1268, -868,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -158, 1265, -742,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -110, 1099, -550,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 52, 1432, 16,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimDamageX3_joint2[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 107, 0, 4, -76, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 249, 83, 78, -22, 3, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 249, 0, 40, -24, 40, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 234, -8, -305, -16, 243, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 94, -17, -276, 30, 260, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 107, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimDamageX3_joint4[110] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, 0, 0, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 55, 163, 257, -176, -141, -136, 96, 47, -13, -173, -54, 193,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 680, 9, -528, -50, -409, -13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 11, -947, -75, -248, 96, 244,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -132, 7, -72, 76, 4, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 181, -50, -419, 18, -327, 8, 24, 119, 45, 26, 26, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -102, -54, -246, -6, -281, 55, 99, -44, -21, -84, -65, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -240, 44, -470, 25, 101, 25, -18, -76, -36, -29, -133, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 330, 55, 4, 60, -35, -13, 7, 19, -58, 5, 123, 187,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 189, 0, 0, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimDamageX3_joint5[214] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, 270, 5, -60, -524, -155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -208, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 510, 234, -679, -393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 709, 241, -1310, -653,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 994, 67, -514, -26, -1985, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 844, -78, -261, 131, -1695, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 838, -5, -251, 12, -1685, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -179, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 833, -3, -1682, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 824, -6, -1699, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -168, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -355, -104,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 814, -22, -1692, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 780, -72, -453, -102, -1655, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -630, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 670, -221, -1531, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 337, -371, -1165, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -72, -279, -560, 113, -690, 361,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -269, 64, -314, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -220, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -240, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -103, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -275, -6, -214, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -279, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -200, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -40, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 10, -11, -263, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -63, -73, -94, 155, -218, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -16, 47, 78, -239, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -95, 53, 62, 7, -209, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -204, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -29, 112, 63, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 128, 118, -26, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 206, 55, -13, 16, -374, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, 32, 5, 19, -524, -149,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDamageX3_joint6[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, 125,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -671, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -447, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -651, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1236, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1237, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1082, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1039, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -900, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -869, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 71,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimDamageX3_joint7[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -515, -2, -333, 420, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -154, 80, 79, 6, -111, 119,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 424, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 420, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -274, -2, 16, -5, 24, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -198, 24, -21, 0, -29, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 1, 0, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 268, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 48, -162,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -515, -2, -333,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimDamageX3_joint8[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 0, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -402, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 30, 92,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimDamageX3_joint10[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 16, 0, 6, 0, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 98, 7, 40, 3, -166, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 98, 4, 40, 30, -166, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 150, -5, 388, -2, 6, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimDamageX3_joint11[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -129, 321, 144, 176, 592, -847,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 192, 50, 320, -39, -255, -547,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -28, -216, 65, -177, -502, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -240, -60, -33, -184, -656, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -150, 38, -304, -138, -1102, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -164, -17, -311, -4, -1076, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -186, -25, -313, 0, -1034, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -137, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -393, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -605, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -544, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -259, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -103, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -380, 30, -41, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -332, 78, 62, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 190, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -223, 104, -93, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -124, 65, 32, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -93, 21, 111, -89, 59, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 68, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -137, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 10, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 40, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, 14, 70, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -14, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 69, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 62, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -157, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -178, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 21, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 122, 55, 221, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 174, 10, 495, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, 49, 144, -30, 592, 97,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDamageX3_joint12[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, -216,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1241, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -989, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -714, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -330, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -418, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -797, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -840, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -970, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1078, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1031, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1023, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1083, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1154, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1106, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimDamageX3_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 235, -46, 216, -14, 164, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 82, 1, 218, 2, 161, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimDamageX3_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimDamageX3_joint16[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -145, 0, -66, 0, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -291, -82, -133, -108, -164, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -400, 0, -259, 1, -435, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -92, 16, 0, 15, -133, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimDamageX3_joint17[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -77, 70, -76, -472, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 113, -37, -5, -34, -715, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 116, 11, 1, 16, -677, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 137, 5, 26, 7, -746, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 126, -9, 15, -12, -747, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -91, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 58, -12, -704, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 45, -5, -692, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 0, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -773, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -96, -8, -815, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -168, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -841, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -899, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -896, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -34, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -113, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -195, -6, -886, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -163, 15, -881, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -65, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -120, -42, -150, 18, -835, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -9, 7, -584, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -79, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -29, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 11, 110, -3, 39, -542, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 179, 70, 73, -472, 69,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimDamageX3_joint19[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, -123,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 322, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 173, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 275, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 349, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 483, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 510, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 540, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 683, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 690, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 688, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 617, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 536, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -91,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimDamageX3_joint21[210] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1481, 24, -1566, -72, 1688, 101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1511, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1638, -20, 1789, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1607, 49, 2110, 157,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1488, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1498, 9, 2103, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1530, 22, 1945, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1542, 15, -1464, 25, 1916, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1553, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1268, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1881, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1724, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1547, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1533, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1680, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1704, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1495, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1398, -54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1648, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1631, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1344, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1350, 1, -1286, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1402, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1346, 4, 1653, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1382, 30, 1764, 60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1468, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1420, 18, -1536, -30, 1829, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1419, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1530, 2, 1816, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1646, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1805, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1691, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1489, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1592, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1648, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1609, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1661, -20, 1572, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1688, -20, 1616, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1577, -55, -1702, 60, 1656, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1481, -95, -1566, 135, 1688, 32,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimDamageX3_joint22[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1448, 18, 1498, -63, -1685, -469,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1393, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1434, -100, -2154, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1298, -150, -2254, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1349, 24, 1134, -92, -2343, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1338, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1112, -23, -2354, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1062, -3, -2375, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1325, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1395, -65, 1081, 21, -2436, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1318, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2643, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1456, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1718, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1744, -47, 1348, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1883, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1496, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2647, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2495, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1944, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2018, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1494, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1368, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2432, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2088, 129,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1954, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1745, 130,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1350, -4, -1964, 150,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1405, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1602, 119, -1787, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1506, 91, -1733, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1419, 28, 1433, 46, -1693, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1448, -28, 1498, 64, -1685, 8,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimDamageX3_joint24[246] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 124,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 761, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 842, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 847, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 850, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 856, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 859, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1026, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1058, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1020, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 981, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 879, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 753, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 691, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 620, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -78,
	ftAnimEnd(),
	0x0000, 0x200E, 0x00A1, 0xFF9B, 0x016D, 0xFFB7, 0xFEE9, 0x0026, 0x200F, 0x0001, 0x003C, 0xFFDC, 0x0123, 0xFFE2, 0xFF0F, 0x0033, 0x200F, 0x0001, 0x0059, 0x0007, 0x0130, 0xFFF8, 0xFF50, 0x002A, 0x2805, 0x0003, 0x007D, 0xFFB8, 0x200B, 0x0001, 0x004B, 0xFFD5, 0xFF65, 0xFFF7, 0x200B, 0x0001, 0x0003, 0xFFC1, 0xFF3D, 0xFFE1, 0x2803, 0x0003, 0xFF90, 0xFFF2, 0x2809, 0x0007, 0xFF24, 0x0001, 0x0801, 0x0001, 0x2005, 0x0001, 0x0034, 0xFFDA, 0x2805, 0x0002, 0x0029, 0xFFFB, 0x0801, 0x0001, 0x2003, 0x0001, 0xFF83, 0xFFF5, 0x2803, 0x0007, 0xFF9E, 0x0014, 0x2005, 0x0001, 0x0024, 0xFFFB, 0x2805, 0x0006, 0x001A, 0x0003, 0x0801, 0x0002, 0x2009, 0x0001, 0xFF25, 0x0000, 0x2809, 0x0009, 0xFEAF, 0xFFDB, 0x0801, 0x0003, 0x2007, 0x0001, 0xFFB4, 0x002A, 0x001D, 0x0011, 0x2007, 0x0004, 0x00BB, 0x0034, 0x0097, 0x0014, 0x2007, 0x0001, 0x00E9, 0x0025, 0x00A9, 0x0012, 0x2803, 0x0002, 0x010D, 0xFFEF, 0x2805, 0x0003, 0x0104, 0x0027, 0x2009, 0x0001, 0xFE86, 0xFFF1, 0x2809, 0x0003, 0xFED0, 0x0027, 0x0801, 0x0001, 0x2003, 0x0001, 0x00E3, 0xFFD1, 0x2007, 0x0001, 0x00AF, 0xFFC5, 0x012F, 0x0019, 0x2805, 0x0002, 0x0144, 0x0008, 0x200B, 0x0001, 0x006D, 0xFFF8, 0xFEFC, 0x0010, 0x2809, 0x0002, 0xFEE6, 0xFFF9, 0x2003, 0x0001, 0x009E, 0x001C, 0x2007, 0x0001, 0x00A5, 0xFFF8, 0x0148, 0xFFF7, 0x200F, 0x0001, 0x008D, 0xFFFE, 0x0131, 0x0012, 0xFEE3, 0x0001, 0x200F, 0x0001, 0x00A1, 0x0014, 0x016D, 0x003C, 0xFEE9, 0x0005, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
